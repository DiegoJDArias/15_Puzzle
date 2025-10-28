#pragma once

#include <SFML/Graphics.hpp>
#include "Headers/SoundManager.h"
#include "Headers/Cronometro.h"

/* ///////////////////////////////////////////////
  Author Diego J D Arias - diegojdarias@gmail.com
*///////////////////////////////////////////////


namespace die {
    class Game {
    public:
        Game();
        void run();

    private:
        const int width{ 390 };
        const int height{ 320 };
        int grid[6][6]{};
        int contador{}, w{ 64 };
        bool completado{ true };
        bool resetTiempo{ true };
        bool movimiento{ false };
        bool activado{ false };

        sf::RenderWindow app;
        sf::Image icon;
        sf::Texture t, menu;
        sf::Sprite sprite[20], menus;
        sf::Font texto;
        sf::Text msj, score, tiempo, tomando;
        sf::Color color;
        die::Cronometro cronometro;
        die::SoundManager sm;
    };
}
