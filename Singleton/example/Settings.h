#ifndef SETTINGS_H
#define SETTINGS_H

class Settings{

    public:
        static Settings* getInstance();

        void dump();

        void setVolume(int volume);
        int getVolume();

        void setBrightness(int brightness);
        int getBrightness();

    private:
        static Settings* settingsInstance;

        int volume; 
        int brightness;

        Settings();
};

inline void
Settings::setVolume(int volume)
{
    this->volume = volume;
}
inline int
Settings::getVolume()
{
    return this->volume;
}

inline void
Settings::setBrightness(int brightness)
{
    this->brightness = brightness;
}
inline int 
Settings::getBrightness()
{
    return this->brightness;
}

#endif