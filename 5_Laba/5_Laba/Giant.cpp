#include "Giant.h"
#include<iostream>
#include<string>
#include<cmath>

using namespace std;


Giant::Giant(long long m, long long r, long long v, long long t, string name, double gravity, int rings) : planet(m, r, v, t, name, gravity)
{
	this->rings = rings;
}

void Giant::SetRings(int rings)
{
	this->rings = rings;
}

int Giant::GetRings()
{
	return this->rings;
}