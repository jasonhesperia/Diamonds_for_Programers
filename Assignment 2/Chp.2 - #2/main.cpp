/* 
 * File:   main.cpp
 * Author: Jason Colburn
 *
 * Created on January 17, 2014, 8:52 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

//Global Constants
const float SWT_DTH=1e-3;//Sweetener death amount

// Execution start here!
int main(int argc, char** argv) 
{
    //Declare Variables
    float death,live;

    int mouse_weight,kill_mouse,kllr_amount,diet_wght;
    
    cout<<"Proven!!! Drink this diet soda and your guaranteed to loose 30lbs!\n";
    cout<<"Careful, Ingest 3% of you body weight in sweetener and you die.\n";
    cout<<"Lets see how much you can drink without dying!\n";
    
    //Prompt User
    cout<<"How many lbs. do you want to weigh after your diet? \n";
    cin>>diet_wght;
    
    
    //Process calculate 
    kllr_amount=(diet_wght*.03)/SWT_DTH;
    
    //Output
    cout<<"Drink ";
    cout<<kllr_amount<<" cans and you will die.\n"<<endl;
    
    
    
    return 0;
}

