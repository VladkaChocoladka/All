#pragma once
#include "skyBodies.h"
class planet : public skyBodies
{
private:
	double gravity;

public:
	planet(long long m, long long r, long long v, long long t, string name, double gravity) : skyBodies(m, r, v, t, name)
	{
		this->gravity = gravity;
	}

	double Graviry();
};

