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

//Functional prototypes


//Execution starts here!
int main(int argc, char** argv) 
{
    //Declare variables
    char A,P,time,ans;
    int hour,minutes;
    
    
    do{
    //Read in the variables
    cout<<"Enter the number of hours up to 24: ";
    cin>>hour;
    cout<<"Enter the number of minutes up to 59: ";
    cin>>minutes;
    
    //Run the function

    if(hour>12)
        hour=hour-12, time='A';
    else   
        time='P';
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"The time is "<<hour<<':'<<minutes<<" "<<time<<'m'<<endl;
        
    cout<<"Would you like to do it again? "
            <<"Type y for yes and n for no: ";
    cin>>ans;
    cout<<endl;
    }while (ans=='y'||ans=='Y');
    
    return 0;
}
