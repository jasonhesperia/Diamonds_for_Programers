/* 
 * File:   main.cpp
 * Author: Jason Colburn
 * January 30th, 2014
 * Midterm problem #4 "Gross Pay"
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
    double paid_hr,dbl_pay,trp_pay,
        ttl_hrs,gross_pay;
    
    //Run with it
    cout<<"Let's calculate your gross pay!\n"
            <<"Enter your total hours worked: ";
    cin>>ttl_hrs;
    cout<<"How much do you get paid hourly? ";
    cin>>paid_hr;
    
    dbl_pay=paid_hr*2;
    trp_pay=paid_hr*3;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    if(ttl_hrs<=20)
        gross_pay=(ttl_hrs*paid_hr);
    else if(ttl_hrs>20&&ttl_hrs<=39)
        gross_pay=((ttl_hrs-20)*dbl_pay)+(20*paid_hr);
    else if(ttl_hrs>40)
        gross_pay=((ttl_hrs-40)*trp_pay)+(19*dbl_pay)+(20*paid_hr);
            
    cout<<"Gross pay is = $ "<<gross_pay<<endl;
    
    //Exit stage right
    return 0;
}

