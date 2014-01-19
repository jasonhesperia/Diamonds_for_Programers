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

// Execution start here!
int main(int argc, char** argv) 
{
    //Declare Variables
    int crnt_salary,ftr_salary,rtro_pay,mth_salary;
    double PAY_INC=.076;//7.6% pay increase
    
    cout<<"You have been awarded a 7.6% pay increase with 6 months retro pay.\n";
    cout<<"what is your current annual salary? $";
    cin>>crnt_salary;
    ftr_salary=(crnt_salary*PAY_INC)+crnt_salary;
    cout<<ftr_salary<<" new annual salary\n";
    mth_salary=((crnt_salary*PAY_INC)+crnt_salary)/12;
    cout<<mth_salary<<" new monthly salary\n";
    rtro_pay=((ftr_salary/12)-(crnt_salary/12))*6;
    cout<<rtro_pay<<" retro active pay due to you\n";
            

    return 0;
}

