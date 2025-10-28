#pragma once

#include <SFML/Graphics.hpp>
#include <string>
#include <format>

/* ///////////////////////////////////////////////
  Author Diego J D Arias - diegojdarias@gmail.com
*///////////////////////////////////////////////

namespace die {
    class Cronometro {
    private:
        sf::Clock reloj;
        sf::Time tiempoTranscurrido;

    public:
        explicit Cronometro();
        void actualizar();
        std::string obtenerTiempo() const;
        void reset();
    };
}

