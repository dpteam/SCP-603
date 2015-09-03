//
//  main.cpp
//  SCP-603
//
//  Created by Alex Qyoun-ae on 03/09/15.
//  Copyright (c) 2015 DartPower Team. All rights reserved.
//

#include <iostream>
#define ___DEBUG_SCP___

bool isPrime(uint64_t num) {
    for (uint64_t i = 2; i < num; ++i) {
        if (num % i == 0)
            return false;
    }
    return true;
}

void mainLoop() {
#ifdef ___DEBUG_SCP___
    std::string a;
#endif
    uint64_t num = 1, counter = 0;
    std::srand((unsigned int)std::time(NULL));
    while(++num)
    {
        if (!isPrime(num))
            continue;
        std::cout << num << std::endl;
        
        if (!isPrime(++counter))
            continue;
#ifdef ___DEBUG_SCP___
        std::cout << "x2" << std::endl;
#endif
        if(std::rand() % 100 == 0)
            std::cin >> a;
    }
}

int main(int argc, const char * argv[]) {
    mainLoop();
    return 0;
}
