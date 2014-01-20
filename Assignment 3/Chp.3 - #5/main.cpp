/* 
 * File:   main.cpp
 * Author: Jason Colburn
 *
 * Created on January 19, 2014, 11:45 AM
 */

#include <iostream>
using namespace std;

//Global Constants
double const Sa_Su=.15;//Time of use on weekends 
double const Mo_Fri_day=.40;//Time of use on week days
double const Mo_Fri_nght=.25;//Time of use on week nights


//Executions starts here!
int main(int argc, char** argv) 
{
    //Declare Variables
    
    char Mo,Tu,We,Th,Fr,Sa,Su;
    int mnts_used,time_Srt,day_of_wk,cost_of_call;
    
    do{
        cout<<"Enter the amount of minutes your call lasted\n";
        cin>>mnts_used;
        
        do{
            cout<<"What day of the week is it? ";
            cin>>day_of_wk;    
        }while(day_of_wk=Sa)
                cost_of_call=mnts_used*Sa_Su;
                cout<<"Cost of call = $"<<cost_of_call<<endl;
                
        
        
        
        
        
        
        
    }  
    
    
    
    
    
    
    return 0;
}

