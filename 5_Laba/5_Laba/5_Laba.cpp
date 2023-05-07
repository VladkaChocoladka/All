#include<iostream>
#include<string>
#include"skyBodies.h"
#include<cmath>
#include "Stars.h"
#include "planet.h"
#include "Giant.h"
using namespace std;

int main()
{
	//mass radius volume t name
	skyBodies Earth(597 * pow(10, 12), 6371000, 1, 293,"Earth"); // функция на небесные тела
	
	cout << Earth.VelocityOne() << endl << Earth.VelocityTwo() << endl;

	Stars Star(597 * pow(10, 12), 6371000, 1, 50500, "Earth", 1, 'd');// функция на звёздочки
	cout << Star.Color() << endl;

	planet Venus(123, 5, 3, 13, "Venus", 8.87);
	cout << Venus.Graviry() << endl;

	Giant Jupiter(132, 421, 13,41, "Jupiter", 4, 13);
	cout << Jupiter.getName()<<" has: " << Jupiter.GetRings() << " rings" << endl;

	return 0;
}
