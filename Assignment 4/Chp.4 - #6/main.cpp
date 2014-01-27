/* 
 * File:   main.cpp
 * Author: Jason Colburn
 * Created on January 24, 2014, 6:21 PM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

//Global constants

//Functional prototypes
float ttl_int(float,float,int);
//Execution starts here!
int main(int argc, char** argv) 
{

    //Declare variables
    float int_blnc,mthly_rt;
    int prds;
    double rate;
    char ans;
    
    do{
    //Read in the variables
    cout<<"Initial balance = $";
    cin>>int_blnc;
    cout<<"Monthly interest rate = ";
    cin>>mthly_rt;
    cout<<"Amount of months interest must be paid = ";
    cin>>prds;
    
    rate=ttl_int(int_blnc,mthly_rt,prds);
    
    //Run the function
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    cout<<"Interest due = "<<ttl_int(int_blnc,mthly_rt,prds)<<endl;
    cout<<"Would you like to do it again?\n"
            <<"Type y for yes and n for no: ";
    cin>>ans;
    cout<<endl;
    
    }while (ans=='y'||ans=='Y');

    //Exit stage right
    return 0;
}
float ttl_int(float int_blnc,float mthly_rt,int prds){
    double subtotal;
    
    subtotal=int_blnc*mthly_rt;
    mthly_rt=(1+mthly_rt/100);
    return (int_blnc*mthly_rt);
}
