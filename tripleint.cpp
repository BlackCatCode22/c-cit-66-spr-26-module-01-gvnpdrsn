//tripleint.cpp
// Created by GP on 1/13/2026.

#include <iostream>

int main() {
    std::cout <<"Enter an integer:";

    int num{}; //define variable num as an integer variable
    std::cin >>num; //get integer from keyboard

    std::cout<<"Triple that number is:" << num*3 << '\n';

    return 0;
}