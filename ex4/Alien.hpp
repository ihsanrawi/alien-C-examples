//
//  Alien.hpp
//  Alien
//
//  Copyright © 2017 Flavio. All rights reserved.
//

// Now we split the Class file in 2.
// The header just with the signature of the methods and atributes
// And the Class file (Alien.cpp) with the method by yourself

#ifndef alien_hpp
#define alien_hpp

#include <stdio.h>

// Now using Class
class Alien
{
// Remember that by default, atributes are private
// But we can be splicit
private:
    int speed;
    int year_time;
    int light_years;

public:
    Alien(int _speed, int _year_time);
    void CalcLightYears();
    int getLightYears();
};

#endif /* alien_hpp */
