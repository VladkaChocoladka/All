#pragma once
#include "planet.h"
class Giant : public planet
{
private:
	int rings;
public:
	Giant(long long m, long long r, long long v, long long t, string name, double gravity, int rings);


	void SetRings(int rings);

	int GetRings();
};

