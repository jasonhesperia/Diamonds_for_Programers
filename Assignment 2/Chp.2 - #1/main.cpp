/* 
 * File:   main.cpp
 * Author: Jason Colburn
 *
 * Created on January 17, 2014, 6:40 PM
 */

#include <iostream>
using namespace std;
//Global Constants

//Function Prototypes

//Begin Execution Here
int main(int argc, char** argv) 
{
    //Declare Variables
    int ounces, mtrc_tons, nmbr_bxs, count_down;
    char answer;

    do{
        cout<<"Enter the number of ounces your box of cereal is:\n";
        cin>>ounces;
        nmbr_bxs=35273.92/ounces;
    
        cout<<"It would take ";
        cout<<nmbr_bxs;
        cout<<" number of boxes to equal 1 metric ton.\n";
    
        cout<<nmbr_bxs;
        cout<<" would be exactly ";
        mtrc_tons=ounces*nmbr_bxs;
        cout<<mtrc_tons;
        cout<<" ounces of cereal.\n"<<endl;
        
        //Run Again
        cout<<"Would you like to run again, (y or n)\n";
        cin>>answer;
    }while(answer=='y');
   
    return 0;
}


