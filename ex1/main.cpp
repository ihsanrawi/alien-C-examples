//
//  main.cpp
//  Alien
//
//  Created by Flavio on 21/03/17.
//  Copyright © 2017 Flavio. All rights reserved.
//

#include <iostream>
#include "alien.hpp"

int main(int argc, const char * argv[]) {
    
    struct Alien et1, et2;
    
    et1.speed = 100;
    et1.year_time = 40;
    et1.CalcLightYears();
    
    et2.speed = 130;
    et2.year_time = 23;
    et2.CalcLightYears();
    
    printf("Light Years of ET1 %d\n", et1.light_years);
    printf("Light Years of ET2 %d\n", et2.light_years);
}
