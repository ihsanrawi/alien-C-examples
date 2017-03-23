//
//  main.cpp
//  Alien
//
//  Copyright © 2017 Flavio. All rights reserved.
//

#ifndef alien_hpp
#define alien_hpp

#include <stdio.h>

struct Alien
{

    int speed;
    int year_time;
    int light_years;
    
    // Adding a contruct to the Struct
    // In C++, they do not use this->
    // A good pratic is to put a underscore under the local variables
    // Constructs do not have a return
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
