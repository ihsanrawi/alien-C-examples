//
//  Alien.hpp
//  
//
//  Created by Flavio on 21/03/17.
//
//

#ifndef Alien_hpp
#define Alien_hpp

#include <stdio.h>

struct Alien
{
    int speed;
    int year_time;
    int light_years;
    
    void CalcLightYears()
    {
        light_years = speed * year_time;
    }
};

#endif /* Alien_hpp */
