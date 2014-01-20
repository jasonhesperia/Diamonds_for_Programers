/* 
 * File:   main.cpp
 * Author: Jason Colburn
 *
 * Created on January 19, 2014, 11:01 AM
 */

#include <iostream>
using namespace std;

//Global Constants
double const intrst=.015;//Interest if balance is under 1000
double const intrstd=.01;//interest on balance over a 1000
double const mnm_INT=.1;//% to calculate minimum payment

//Execution starts here!
int main(int argc, char** argv) 
{
    double accnt_blnc,ttl_due,mnm_pymt,int_due;
    //Set precision on output 
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);  
    
    cout<<"Enter your account balance $";
    cin>>accnt_blnc;
    
    
    //Calculate interest amounts
    if(accnt_blnc<=1000)
        ttl_due=accnt_blnc*intrst;
    else
    {
        ttl_due=(((accnt_blnc-1000)*intrstd)+(1000*intrst)+accnt_blnc);    
    }

    cout<<"Total balance due = $ "<<ttl_due<<endl;
    int_due=ttl_due-accnt_blnc;
    cout<<"Interest due this period = $ "<<int_due<<endl;

    
    //Calculate minimum payment
    if(ttl_due<=10)
        mnm_pymt=ttl_due;
    else
    {
            mnm_pymt=ttl_due*mnm_INT;
    }
    cout<<"Minimum monthly payment = $ "<<mnm_pymt<<endl;
    
     
                
    return 0;
}

