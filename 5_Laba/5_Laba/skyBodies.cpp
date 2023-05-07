#include "skyBodies.h"
#include<iostream>
#include<string>
#include<cmath>
using namespace std;

skyBodies::skyBodies(long long m, long long r, long long v, long long t, string name)
{
	this->mass=m;
	this->R = r;
	this->V = v;
	this->t = t;
	this->name = name;
}

void skyBodies::setMass(long long m)
{
	this->mass = m;
}
void skyBodies::setRadius(long long r)
{
	this->R = r;
}
void skyBodies::setVolume(long long v)
{
	this->V = v;
}
void skyBodies::setTemperature(long long t)
{
	this->t = t;
}
void skyBodies::setName(string name)
{
	this->name = name;
}


long long skyBodies::getMass()
{
	return this->mass;
}
long long skyBodies::getRadius()
{
	return this->R;
}
long long skyBodies::getVolume()
{
	return this->V;
}
long long skyBodies::getTemperature()
{
	return this->t;
}
string skyBodies::getName()
{
	return this->name;
}


double skyBodies::VelocityOne()
{
	double VelOne;

	double g = (this->mass) / ((this->R) * (this->R));
	g = g * 6.67 / (10*10 * 10 * 10 * 10 * 10 * 10 * 10 * 10 * 10 * 10);
	VelOne = g * (this->R);
	VelOne = VelOne * pow(10, 8);
	VelOne = sqrt(VelOne);
	
	return VelOne;
}
double skyBodies::VelocityTwo()
{
	double VelTwo;

	VelTwo=sqrt(2)*VelocityOne();

	return VelTwo;
}