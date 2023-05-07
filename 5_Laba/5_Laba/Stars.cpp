#include "Stars.h"
#include<iostream>
#include<string>
#include<cmath>
using namespace std;



/*Stars::Stars(long long m, long long r, long long v, long long t, string name, long long distance, char Spectrum) : skyBodies(m, r, v, t, name)
{
	this->distance = distance;
	this->Spectrum = Spectrum;
}*/

void Stars::setDistance(long long distance)
{
	this->distance = distance;
}
void Stars::setSpectrum(char Spectrum)
{
	this->Spectrum = Spectrum;
}

long long Stars::getDistance()
{
	return this->distance;
}
char Stars::getSpectrum()
{
	return this->Spectrum;
}

string Stars::Color()
{

	if (this->getTemperature()<60000&& this->getTemperature() > 30000)
	{
		return " Blue";
	}
	else if (this->getTemperature() <= 30000 && this->getTemperature() > 10000)
	{
		return "White-blue";
	}
	else if (this->getTemperature() <= 10000 && this->getTemperature() > 7500)
	{
		return "White";
	}
	else if (this->getTemperature() <= 7500 && this->getTemperature() > 6000)
	{
		return "White-yellow";
	}
	else if (this->getTemperature() <= 6000 && this->getTemperature() > 5000)
	{
		return "Yellow";
	}
	else if (this->getTemperature() <= 5000 && this->getTemperature() > 3500)
	{
		return "Orange";
	}
	else if (this->getTemperature() <= 3500 && this->getTemperature() > 2000)
	{
		return "Red";
	}
	else
	{
		return " Cold";
	}
	
}