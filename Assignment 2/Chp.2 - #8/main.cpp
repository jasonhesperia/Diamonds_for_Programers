/* 
 * File:   main.cpp
 * Author: Jason Colburn
 *
 * Created on January 18, 2014, 1:52 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants
const short CNV_PERC=100;

//Execution starts here!
int main(int argc, char** argv) 
{
    //Declare Variables
    float presVal,fchrVal,iRate;
    unsigned short nPeriods;
    
    
    //Prompt For Inputs
    cout<<"What is the present value of pencils? $ "<<endl;
    cin>>presVal;
    cout<<"How many years will you purchase pencils? "<<endl;
    cin>>nPeriods;
    cout<<"What % rate of inflation? "<<endl;
    cin>>iRate;
    iRate/=CNV_PERC;
    
    //Setup the Heading
    cout<<"Year  Future Value"<<endl;
    cout<<setprecision(2)<<fixed<<showpoint;
    
    //Loop to determine the future values
    //Print every year
    fchrVal=presVal;//At time = 0
    int year=1;
    while (year<=nPeriods){
        fchrVal+=(1+iRate);
        cout<<setw(4)<<year;
        cout<<setw(11)<<fchrVal<<endl;
        year++;
    }
    
    return 0;
}

