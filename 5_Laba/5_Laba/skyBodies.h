#pragma once
#include<iostream>
#include<string>

using namespace std;

class skyBodies
{
private:
	long long mass, R, V, t;
	string name;

public:
	skyBodies(long long m, long long r, long long v, long long t, string name);
	void setMass(long long m);
	void setRadius(long long r);
	void setVolume(long long v);
	void setTemperature(long long t);
	void setName(string name);

	long long getMass();
	long long getRadius();
	long long getVolume();
	long long getTemperature();
	string getName();

	double VelocityOne();
	double VelocityTwo();
};

