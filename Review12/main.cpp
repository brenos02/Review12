//
//  main.cpp
//  Review12
//
//  Created by Breno Sallouti on 09/06/17.
//  Copyright © 2017 Breno Sallouti. All rights reserved.
//- Get number from user and detect if it is a prime number

#include <iostream>

int main(int argc, const char * argv[]) {
    float a;
    bool prime;
    prime = true;
    
    std::cin>> a;
   
    if (a == prime) {
        prime =true;
        std::cout<<"It is a prime number";
    }
    else{
        std::cout<<"It not a prime number";
        prime =false;
    }
    return 0;
}
