#pragma once

#include <SFML/Audio.hpp>
#include <map>
#include <string>

/* ///////////////////////////////////////////////
  Author Diego J D Arias - diegojdarias@gmail.com
*///////////////////////////////////////////////


namespace die {
    class SoundManager {
    public:
        void init();
        void playMusic(const std::string& name);
        void stopMusic(const std::string& name);
        void playEffect(const std::string& name);
        void stopAll();

    private:
        std::map<std::string, sf::Music> music;
        std::map<std::string, sf::SoundBuffer> buffers;
        std::map<std::string, sf::Sound> effects;
    };
}



