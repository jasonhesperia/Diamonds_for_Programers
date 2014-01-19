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
    int crnt_salary,ftr_salary,rtro_pay,mth_salary,mths_retro;
    double PAY_INC=.076;//7.6% pay increase
    
    cout<<"You have been awarded a 7.6% pay increase with your amount of months retro pay.\n";
    cout<<"What is your current annual salary? $";
    cin>>crnt_salary;
    cout<<"How many months retro pay are you owed? ";
    cin>>mths_retro;
    ftr_salary=(crnt_salary*PAY_INC)+crnt_salary;
    cout<<"$";
    cout<<ftr_salary<<" new annual salary\n";
    mth_salary=((crnt_salary*PAY_INC)+crnt_salary)/12;
    cout<<"$";
    cout<<mth_salary<<" new monthly salary\n";
    rtro_pay=((ftr_salary/12)-(crnt_salary/12))*mths_retro;
    cout<<"$";
    cout<<rtro_pay<<" retro active pay due to you for ";
    cout<<mths_retro;
    cout<<" months of work.\n";
            

    return 0;
}
