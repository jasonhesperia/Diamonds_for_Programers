/* 
 * File:   main.cpp
 * Author: Jason Colburn
 * Created on January 25, 2014, 2:18 PM
 */

#include <cstdlib>
#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants
const float MRGNL_TAX_RATE=.35;//35% Marginal tax rate

//Functional prototypes
float total_cost(float,float);
float tax_savings(float,float);
//Execution starts here
int main(int argc, char** argv) 
{
    //Declare variables
    float ann_mort,dwn_pmnt,
            prc_hse,int_blnc;
    float tax_svgs,post_tax,pre_tax;
    
    //Read in the variables
    cout<<"How much was the house? ";
    cin>>prc_hse;
    cout<<"How much did you put down? ";
    cin>>dwn_pmnt;
    
    post_tax=total_cost(ann_mort,tax_svgs); 
    pre_tax=tax_savings(MRGNL_TAX_RATE,int_blnc);
  
    
    //Run the function
    int_blnc=prc_hse-dwn_pmnt;
    ann_mort=(.03*int_blnc)+(.06*int_blnc);
    tax_svgs=.35*(.06*int_blnc);
            
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    cout<<"The after tax cost of a new house for the first year "
            "of ownership is = $ "<<total_cost<<endl;
    cout<<"The total home owner tax savings are = $ "<<tax_savings<<endl;
    
    //Exit stage right
    return 0;
}
        float total_cost(float ann_mort,float tax_svgs)
        {
            return(ann_mort-tax_svgs);
        }
        float tax_savings(float MRGNL_TAX_RATE,float int_blnc)
        {
            return(MRGNL_TAX_RATE*(.06*int_blnc));
        }