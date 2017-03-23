//
//  main.cpp
//  Alien
//
//  Copyright © 2017 Flavio. All rights reserved.
//

#ifndef alien_hpp
#define alien_hpp

#include <stdio.h>

// In the next example we will replace struct by class
// Class is often used in C++
// In Classes, when not splicit attributes are private by default
struct Alien
{

// Lets set the attributes as private
private:
    int speed;
    int year_time;
    int light_years;

// When not splicit, elements are already public
// But why not be splicit?
public:
    Alien(int _speed, int _year_time)
    {
    	speed = _speed;
    	year_time = _year_time;
    }

    void CalcLightYears()
    {
        light_years = speed * year_time;
    }
};

#endif /* alien_hpp */
