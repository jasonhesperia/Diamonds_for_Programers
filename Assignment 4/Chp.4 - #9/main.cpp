/* 
 * File:   main.cpp
 * Author: Jason Colburn
 * Created on January 25, 2014, 3:22 PM
 */

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//Global Constants

//Functional prototypes
float hat_size(int,int);
float jacket_size(int,int);
float waist_inches(int);

//Execution starts here!
int main(int argc, char** argv) 
{
    //Declare variables
    int hght,wght,yrs;
    float ht_size,jckt_size,wst_size;
    
    //Run in the variables
    cout<<"Enter your height in feet only ";
    cin>>hght;
    cout<<"Enter your weight ";
    cin>>wght;
    cout<<"Enter your age ";
    cin>>yrs;
    
    ht_size=hat_size(wght,hght);
    jckt_size=jacket_size(hght,wght);
    wst_size=waist_inches(wght);
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(3);
    
    cout<<"Your hat size is = "<<hat_size(wght,hght);
    cout<<"Your jacket size = "<<jacket_size(hght,wght);
    cout<<"Your waist size is = "<<waist_inches(wght);
    
    return 0;
}

    float hat_size(int wght, int hght)
    {
        return(wght/(hght/12))*2.9;
    }   
    float jacket_size(int hght, int wght)
    {
        return(hght*wght/288);
    }
    float waist_inches(int wght)
    {
        return(wght/5.7);
    }