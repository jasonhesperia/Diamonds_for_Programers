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
const double MTRS_N_FT=.3048;

//Functional prototypes
float mtr_math(int,double);
float cmtr_math(int,double);

//Execution starts here!
int main(int argc, char** argv) 
{
    
    //Declare variables
    int feet,inches,length,calc;
    float calc1;
    char ans;

    do{
    //Read in the variables
    cout<<"Enter the length of feet: ";
    cin>>feet;
    cout<<"Enter the amount of inches up to 11": ";
    cin>>inches;
    
    //Run the function
    calc=mtr_math(feet,MTRS_N_FT);
    calc1=cmtr_math(inches,MTRS_N_FT);

    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(4);  
        
    cout<<"The metric length is "<<mtr_math<<" meters and "
            <<cmtr_math<<" centimeters."<<endl;   
        
    cout<<"Would you like to run again? ";
    cin>>ans;
    
    }while(ans=='y'||ans=='Y');
    
    //Exit stage right
    return 0;
}


        float mtr_math(int feet,double MTRS_N_FT)
        {
        return(feet*MTRS_N_FT);
        }
        float cmtr_math(int inches,double MTRS_N_FT)
        {
        return(((inches/12)/MTRS_N_FT)*100); 
        }
