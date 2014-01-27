/* 
 * File:   main.cpp
 * Author: Jason Colburn
 * Created on January 26, 2014, 6:18 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

//Global constants
const int MAX_MNTS=60;
const int MAX_HRS=24;

//Functional prototypes

//Execution starts here!
int main(int argc, char** argv) 
{
    //Declare variables
    int hour,minutes,wait_hr,wait_mnts,
            new_hr,new_mnt;
    char colon;
    
    //Read in the variables
    cout<<"Enter the current time in hour and minutes: ";
    cin>>hour>>minutes;
    cout<<"Enter the wait time in hour and minutes: ";
    cin>>wait_hr>>wait_mnts;
    
    new_hr=(hour+wait_hr);
    new_mnt=(minutes+wait_mnts);
    minutes<=60;
    hour<=24;
    
    if(new_mnt>60)
        new_hr=new_hr+1;
        new_mnt=new_mnt-60;
        if(new_hr>12)
            new_hr=new_hr+hour-12;
        
    cout<<setprecision(2)<<fixed<<showpoint;       
    cout<<"You will be waiting till "<<new_hr<<':'<<new_mnt<<endl;
      
    //Exit stage right
    
    return 0;
}

