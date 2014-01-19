/* 
 * File:   main.cpp
 * Author: Jason Colburn
 * Email: jason.livingearth@gmail.com
 * Assignment 2 - #14
 * Created on January 18, 2014, 3:31 PM
 */

#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution starts here!
int main(int argc, char** argv) 
{
    //Declare Variables
    double radius,vm;
    //Input a value
    cout<<"Enter radius of a sphere."<<endl;
    cin>>radius;
    vm=(4.0/3.0)*3.1415*radius*radius;//Computes the volume of sphere
    cout<<" The volume is "<<vm<<endl;
    
  
    return 0;
}

