//
//  Alien.hpp
//  Alien
//
//  Copyright © 2017 Flavio. All rights reserved.
//

#ifndef alien_hpp
#define alien_hpp

#include <stdio.h>

class Alien
{
private:
    int speed;
    int year_time;
    int light_years;
    char aka[30];

public:
	// The last parameter is optional
    Alien(int _speed, int _year_time, char _aka[] = "");
    void CalcLightYears();
    int getLightYears();
};

#endif /* alien_hpp */
