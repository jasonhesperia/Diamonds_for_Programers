/* 
 * File:   main.cpp
 * Author: Jason Colburn
 * January 30th, 2014
 * Midterm problem #3 "Checking Account"
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
    unsigned short accnt_nbr,blnce_bgn,chk_ttl,dpst_ttl;
    double balance,fine_blnc;
    
    //Run with it
    cout<<"Enter account number: ";
    cin>>accnt_nbr;
    

    
if(accnt_nbr<=32768&&accnt_nbr>-32768)
{
        cout<<"Enter balance at beginning of month: ";
        cin>>blnce_bgn;
        cout<<"Enter total checks written this month: ";
        cin>>chk_ttl;
        cout<<"Enter total deposits this month: ";
        cin>>dpst_ttl;
        cout<<endl;
        
        balance=(blnce_bgn-chk_ttl)+dpst_ttl;
        fine_blnc=(balance*-1)+27.75;
        
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);
        
        if(balance<0)
        {  
        cout<<"You have overdrawn your account."
                "You have been fined $27.75 \n"
                "Your total amount due is $ "<<fine_blnc<<endl;
        }
        else
        {
        cout<<"Your balance is = $ "<<balance<<endl;
        }
}
else 
{
    cout<<"Not a valid account number.";
}

    //Exit stage right
    return 0;
}

