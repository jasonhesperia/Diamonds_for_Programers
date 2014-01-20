/* 
 * Author: Jason Colburn
 * Created on January 19, 2014, 1:45 PM
 */

#include <iostream>
using namespace std;

//Global Constants

//Execution starts here
int main(int argc, char** argv) 
{

    //Declare Variables
    int sphr_lbs,sphr_rds,sphr_vlm,buoy_itm;
    
    //Set precision
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(6);
    
    //Prompts for inputs
    cout<<"Enter the weight in pounds of a sphere "<<endl;
    cin>>sphr_lbs;
    cout<<"Enter the radius of the sphere in feet "<<endl;
    cin>>sphr_rds;
    
    sphr_vlm=(1.3333)*3.141592*sphr_rds*sphr_rds*sphr_rds;
    cout<<sphr_vlm;
    
    buoy_itm=sphr_vlm*S
    

    return 0;
}

