//
//  Alien.cpp
//  Alien
//
//  Copyright © 2017 Flavio. All rights reserved.
//

#include "Alien.hpp"
#include <string.h>
#include <iostream>

using std::cout;
using std::endl;

Alien::Alien(int _speed, int _year_time, char* _aka)
{
	speed = _speed;
	year_time = _year_time;
	strcpy(aka, _aka);
}

void Alien::CalcLightYears()
{
    light_years = speed * year_time;
    // Change printf for Cout
    std::cout << "Light Years of " << aka << " is " << year_time << std::endl;
}

int Alien::getLightYears()
{
    return light_years;
}
