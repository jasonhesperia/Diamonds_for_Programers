/* 
 * File:   main.cpp
 * Author: Jason Colburn
 * Created on January 24, 2014, 2:16 PM
 */

#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

//Global constants
const float LTRS=.264179;
const float LTRS_GLLN=3.78541;

//Function Prototypes
float mpg(float,int);


//Execution starts here!
int main(int argc, char** argv) 
{
    //Declare variables
    float liters,mpg;
    int nmb_miles;
    char ans;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    do
    {
    //Read in the variables
    cout<<"Enter the number of liters of gasoline you used: \n";
    cin>>liters;
    cout<<"Enter the number of miles you drove \n";
    cin>>nmb_miles;
    
    //Run the function
    mpg=(nmb_miles/(liters/LTRS_GLLN));
    cout<<"Miles per gallon are:  ";
    cout<<mpg<<endl;
    
    cout<<"Try again?"
            <<" (Type y for yes or n for no): ";
    cin>>ans;
    cout<<endl;
    }while (ans=='y'||ans=='Y');
    //Exit stage right
    
    return 0;
}

