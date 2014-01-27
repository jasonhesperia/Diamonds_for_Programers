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
    float liters,mpg,litersB,mpgB;
    int nmb_miles,nmb_milesB;
    
    //Read in the variables
    cout<<"Enter the number of liters of gasoline car #1 used: ";
    cin>>liters;
    cout<<"Enter the number of miles car #1 drove: ";
    cin>>nmb_miles;
    
    cout<<"Enter the number of liters of gasoline car #2 used: ";
    cin>>litersB;
    cout<<"Enter the number of miles car #2 drove: ";
    cin>>nmb_milesB;
    
    //Run the function
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    cout<<endl;
    
    mpg=(nmb_miles/(liters/LTRS_GLLN));
    cout<<"Miles per gallon car#1:  ";
    cout<<mpg<<endl;
    
    mpgB=(nmb_milesB/(litersB/LTRS_GLLN));
    cout<<"Miles per gallon car#2:  ";
    cout<<mpgB<<endl;
    
    cout<<endl;
    
    if(mpg>mpgB){
        cout<<"Car #1 has the best fuel economy"<<endl;
    }
    else{
        cout<<"Car #2 has the best fuel economy"<<endl;
    }
    //Exit stage right
    return 0;
}


