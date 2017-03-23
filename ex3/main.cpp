//
//  main.cpp
//  Alien
//
//  Copyright © 2017 Flavio. All rights reserved.
//

#include <iostream>
#include "Alien.hpp"

int main(int argc, const char * argv[]) {
    
    Alien et1(100, 40);
    Alien et2(130, 23);
    
    et1.CalcLightYears();
    et2.CalcLightYears();
    
    // Reaplce the direct access to the variable for a getter method
    printf("Light Years of ET1 %d\n", et1.getLightYears());
    printf("Light Years of ET2 %d\n", et2.getLightYears());
}
