/* 
 * File:   main.cpp
 * Author: Jason Colburn
 * Created on January 24, 2014, 4:24 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Functional Prototypes
double inflation(double,double);

//Execution starts here!
int main(int argc, char** argv) 
{

    //Declare variables
    float itm_tdy,itm_bfr;
    double rate;
    
    //Read in the variables  
    cout<<"Enter the value of the item you bought today ";
    cin>>itm_tdy;
    cout<<"Enter the value of the same item from 1 year ago ";
    cin>>itm_bfr;

    rate=inflation(itm_tdy,itm_bfr);
    
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"The rate of inflation is ="<<inflation(itm_tdy,itm_bfr)<<'%'<<endl;
    
    return 0;
}

double inflation(double itm_tdy,double itm_bfr){
    return(((itm_tdy-itm_bfr)/itm_bfr)*100);
    
}