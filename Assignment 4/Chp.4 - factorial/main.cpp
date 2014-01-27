/* 
 * File:   main.cpp
 * Author: Jason Colburn
 *
 * Created on January 24, 2014, 3:42 PM
 */

#include <iostream>

using namespace std;

//Functional prototypes
int factorial(int n)

{
    int product=1;
    while(n>0)
    {
        product=n*product;
        n--;
    }
    return product;
}

