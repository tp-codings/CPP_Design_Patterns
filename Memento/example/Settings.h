#ifndef SETTINGS_H
#define SETTINGS_H

#include <iostream>

namespace Config
{
    struct Options
    {
        int brightness;
        int volume;
        enum Difficulty
        {
            EASY,
            MEDIUM,
            HARD,
            EXTREM,
        } difficulty;
        struct Resolution
        {
            int pixelX;
            int pixelY;
        } resolution;
        bool fullscreen;
    };
}

const char* difficultyToString(Config::Options::Difficulty difficulty)
{
    switch (difficulty)
    {
        case Config::Options::EASY:   return "EASY";
        case Config::Options::MEDIUM: return "MEDIUM";
        case Config::Options::HARD:   return "HARD";
        case Config::Options::EXTREM: return "EXTREM";
        default:                      return "UNKNOWN";
    }
}

std::ostream& operator<<(std::ostream& os, const Config::Options& opts)
{
    os << "Options:\n";
    os << "  Brightness: " << opts.brightness << "\n";
    os << "  Volume: " << opts.volume << "\n";
    os << "  Difficulty: " << difficultyToString(opts.difficulty) << "\n";
    os << "  Resolution: " << opts.resolution.pixelX << "x" << opts.resolution.pixelY << "\n";
    os << "  Fullscreen: " << (opts.fullscreen ? "Yes" : "No");
    return os;
}

class Settings
{
    public:
        class Memento
        {
            public:
                Memento(Config::Options configOptions)
                : configOptions(configOptions){}

                friend class Settings;
            private:
                Config::Options configOptions;

                Config::Options getState() const
                {
                    return this->configOptions;
                }
        };

        Settings()
        {
            this->configOptions.brightness = 50;
            this->configOptions.volume = 75;
            this->configOptions.difficulty = Config::Options::Difficulty::EASY;
            this->configOptions.resolution = {1920, 1080};
            this->configOptions.fullscreen = true;
        }
        ~Settings(){}

        Memento* saveConfigs()
        {
            return new Memento(this->configOptions);
        }

        void restore(Memento* memento)
        {
            this->configOptions = memento->getState();
        }

        void dump()
        {
            std::cout << this->configOptions << std::endl;
        }

        void setBrightness(int b) 
        {
            this->configOptions.brightness = b;
        }

        void setVolume(int v) 
        {
            this->configOptions.volume = v;
        }

        void setDifficulty(Config::Options::Difficulty d) 
        {
            this->configOptions.difficulty = d;
        }

        void setResolution(int x, int y) 
        {
            this->configOptions.resolution.pixelX = x;
            this->configOptions.resolution.pixelY = y;
        }

        void setFullscreen(bool f) 
        {
            this->configOptions.fullscreen = f;
        }

    private:
        Config::Options configOptions;
};

#endif
