/* 
 * File:   main.cpp
 * Author: Jason Colburn
 * January 30th, 2014
 * Midterm problem #5 "ISP has 3 options"
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Global Constants

//Functional Prototypes

//Execution starts here!
int main(int argc, char** argv) 
{
    //Declare variables
    char option,package,a,b,c;
    double hrs_used,base,hrs_acs,add_hrs,addt_hrs,
            score, mnthly_chrg;
    
    //Run with it
    cout<<"Which package do you have (a, b or c)? ";
    cin>>package;
    cout<<"How many hours did you use? ";
    cin>>hrs_used;
    
    //Process the monthly charge
    if(package=='a'||package=='A')
    {
        if(hrs_used>22)
        mnthly_chrg=5+2.75+29.95;
        else if (hrs_used>11&&hrs_used<22)
        mnthly_chrg=2.75+29.95;
        else if(hrs_used<=11)
        mnthly_chrg=29.95;
    }
    
    if(package=='b'||package=='B')
    {
        if(hrs_used>33)
        mnthly_chrg=(2.50*(hrs_used-34))+2.75+34.95;
        else if (hrs_used>22&&hrs_used<=33)
        mnthly_chrg=1.50+34.95;
        else if(hrs_used<=22)
        mnthly_chrg=34.95;
    }
    
    if(package=='c'||package=='C')
    {
        if(hrs_used>=0)
        mnthly_chrg=39.75;
    }
    //Precision 
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<"Your monthly bill is = $ "<<mnthly_chrg<<endl;   
    cout<<endl;
    //Exit stage right
    return 0;
}

