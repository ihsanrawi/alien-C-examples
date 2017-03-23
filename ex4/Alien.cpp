//
//  Alien.cpp
//  Alien
//
//  Copyright © 2017 Flavio. All rights reserved.
//

// This file have the method implementation
// The header just contain the signature of the methods

#include "Alien.hpp"

// Note the different way that we write the method now
Alien::Alien(int _speed, int _year_time)
{
	speed = _speed;
	year_time = _year_time;
}

void Alien::CalcLightYears()
{
    light_years = speed * year_time;
}

int Alien::getLightYears()
{
    return light_years;
}
