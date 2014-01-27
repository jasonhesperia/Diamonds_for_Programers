/* 
 * File:   main.cpp
 * Author: Jason Colburn
 * Created on January 25, 2014, 6:39 PM
 */

#include <cstdlib>
#include <cmath>
#include <iomanip>
using namespace std;

//Global Constants
const int DLR_VAL=1.00;
const int H_VAL=.50;
const int Q_VAL=.25;
const int D_VAL=.10;
const int N_VAL=.05;
const int TWNK_COST=3.50;

//Functional prototypes

//Execution starts here!
int main(int argc, char** argv) 
{
    //Declare variables
    float amtTend;
    char answer;
    
    //Loop to ask numerous times for more coins
    do{
        cout<<"A deep fried twinkie will cost $3.50, please insert value"<<endl;
        cin>>const int;
        
        amtTend=TWNK_COST-const int;
        
    }while(amtTend<TWNK_COST);
        cout<<"please insert another coin"<<endl;
        cin>>const int;
        
    return 0;
}