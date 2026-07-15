//
// Created by dimit on 3.7.2026..
//

//HelloWorld.cpp  → definition (the "how")

#include <iostream>
#include "HelloWorld.h"

void HelloWorld::greet()
{
    std::cout << "Hello World";
}

int main()
{
    HelloWorld hw;
    hw.greet();
    return 0;
}


