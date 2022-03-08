// Copyright (c) 2022 Coffi All rights reserved.
// Created by: Marc Coffi
// Date: Feb 28, 2022
/* 
 This is a program that calculates the circumference of a circle using tau
*/

#include <iostream>
#include<cmath>

const float TAU = M_PI*2;
int radius;

int main() {
    std::cout << "Input a radius in centimeters: \n";
    std::cin >> radius;
    std::cout << "The circumference is " << radius*TAU << "cm\n";
}
