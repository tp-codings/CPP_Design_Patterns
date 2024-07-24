#include <iostream>
#include "TV.h"
#include "Radio.h"
#include "Remote.h"

int main() {
    // Erstelle ein Gerät (Beispiel: Fernseher)
    TV tv("Phillips");

    // Erstelle eine Fernbedienung für das Gerät
    Remote remote(&tv);

    std::cout << "----\n"  << tv.getStatus() << "\n----" << std::endl;

    // Schalte das Gerät ein
    remote.togglePower();

    std::cout << "----\n"  << tv.getStatus() << "\n----" << std::endl;

    // Erhöhe die Lautstärke
    for(int i = 0; i < 42; i++)
        remote.volumeUp();
    std::cout << "Current Volume (vol up): " << tv.getVolume() << std::endl;

    std::cout << "----\n"  << tv.getStatus() << "\n----" << std::endl;

    // Verringere die Lautstärke
    for(int i = 0; i < 21; i++)
        remote.volumeDown();
    std::cout << "Current Volume (vol down): " << tv.getVolume() << std::endl;

    std::cout << "----\n"  << tv.getStatus() << "\n----" << std::endl;

    // Stummschalten
    remote.mute();
    std::cout << "Current Volume (mute): " << tv.getVolume() << std::endl;

    std::cout << "----\n"  << tv.getStatus() << "\n----" << std::endl;

    // Stummschalten aufheben
    remote.mute();
    std::cout << "Current Volume (mute): " << tv.getVolume() << std::endl;

    std::cout << "----\n"  << tv.getStatus() << "\n----" << std::endl;

    // Ausschalten
    remote.togglePower();

    std::cout << "----\n"  << tv.getStatus() << "\n----" << std::endl;

    return 0;
}
