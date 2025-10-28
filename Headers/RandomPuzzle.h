#pragma once

#include <algorithm>
#include <vector>
#include <ctime>
#include <random>


/* ///////////////////////////////////////////////
  Author Diego J D Arias - diegojdarias@gmail.com
*///////////////////////////////////////////////

namespace die {
	int coincidencias(int grid[][6]) noexcept;

	bool comparar(int grid[][6]) noexcept;

	void randomMixer(int grid[][6], int movimientos, std::mt19937& rng);
}

