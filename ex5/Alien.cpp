//
//  Alien.cpp
//  Alien
//
//  Copyright © 2017 Flavio. All rights reserved.
//

#include "Alien.hpp"
#include <string.h>

Alien::Alien(int _speed, int _year_time, char _aka[])
{
	speed = _speed;
	year_time = _year_time;
	strcpy(aka, _aka);
}

void Alien::CalcLightYears()
{
    light_years = speed * year_time;
    // Bring the print to the method
    printf("Light Years of %s %d\n", aka, year_time);
}

int Alien::getLightYears()
{
    return light_years;
}
