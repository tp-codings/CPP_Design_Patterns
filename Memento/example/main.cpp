#include "SettingsManager.h"
#include <iostream>
#include <iomanip>

void printSection(const std::string& title) {
    std::cout << "\n" << std::setw(title.size()) << std::setfill('=') << "" << std::endl;
    std::cout << title << std::endl;
    std::cout << std::setw(title.size()) << std::setfill('=') << "" << std::endl;
}

int main() {
    Settings* settings = new Settings();
    SettingsManager* settingsManager = new SettingsManager(settings);

    printSection("Initial Settings");
    settings->dump();

    printSection("Applying Initial Settings (all)");
    settingsManager->setBrightness(50);
    settingsManager->setVolume(30);
    settingsManager->setDifficulty(Config::Options::Difficulty::MEDIUM);
    settingsManager->setResolution(1280, 720);
    settingsManager->setFullscreen(true);
    settings->dump();

    printSection("Updating Settings (all)");
    settingsManager->setBrightness(60);
    settingsManager->setVolume(40);
    settingsManager->setDifficulty(Config::Options::Difficulty::HARD);
    settingsManager->setResolution(1920, 1080);
    settingsManager->setFullscreen(false);
    settings->dump();

    printSection("Performing Undo Operations (Resolution, Fullscreen)");
    settingsManager->undo();
    settingsManager->undo();
    settings->dump();

    printSection("Performing Redo Operations (Resolution, Fullscreen)");
    settingsManager->redo();
    settingsManager->redo();
    settings->dump();

    printSection("Applying More Changes (Brightness, Volume, Resolution)");
    settingsManager->setBrightness(70);
    settingsManager->setVolume(50);
    settingsManager->setResolution(2560, 1440);
    settings->dump();

    printSection("Undoing Recent Changes (Brightness, Volume, Resolution)");
    settingsManager->undo();
    settingsManager->undo();
    settingsManager->undo();
    settings->dump();

    printSection("Trying to Undo with No More States Available");
    for(int i = 0; i < 11; i++)
    {
        settingsManager->undo();
    }
    settings->dump();

    printSection("Trying to Redo After Exhausting Undo Stack");
    for(int i = 0; i < 14; i++)
    {
        settingsManager->redo();
    }
    settings->dump();

    printSection("Applying Additional Changes (Brightness, Volume, Resolution)");
    settingsManager->setBrightness(80);
    settingsManager->setVolume(60);
    settingsManager->setResolution(3840, 2160);
    settings->dump();

    printSection("Undoing Additional Changes (Brightness, Volume, Resolution)");
    settingsManager->undo();
    settingsManager->undo();
    settingsManager->undo();
    settings->dump();

    printSection("Redoing Additional Changes (Brightness, Volume, Resolution)");
    settingsManager->redo();
    settingsManager->redo();
    settingsManager->redo();
    settings->dump();

    printSection("Final Settings State");
    settings->dump();

    delete settingsManager;
    delete settings;

    return 0;
}
