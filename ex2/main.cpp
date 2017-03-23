//
//  main.cpp
//  Alien
//
//  Copyright © 2017 Flavio. All rights reserved.
//

#include <iostream>
#include "alien.hpp"

int main(int argc, const char * argv[]) {
    
    // Using the construct instead of set the elements one by one
    Alien et1(100, 40);
    Alien et2(130, 23);
    
    et1.CalcLightYears();
    et2.CalcLightYears();
    
    printf("Light Years of ET1 %d\n", et1.light_years);
    printf("Light Years of ET2 %d\n", et2.light_years);
}
