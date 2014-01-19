/* 
 * File:   main.cpp
 * Author: Jason Colburn
 * Created on January 14, 2014, 6:37 PM
 */

#include <iostream>
using namespace std;
int main()
{    
    int number_A, number_B, sum_of, product_of;
    cout<<"Press return after entering a number.\n";
    cout<<"Enter a number:\n";
    cin>>number_A;
    cout<<"enter another number:\n";
    cin>>number_B;
    sum_of=number_A+number_B;
    cout<<sum_of;
    cout<<" is the sum:\n";
    product_of=number_A*number_B;
    cout<<product_of;
    cout<<" is the product:\n";
    cout<<"Good Bye!\n";
  
    return 0;
}


