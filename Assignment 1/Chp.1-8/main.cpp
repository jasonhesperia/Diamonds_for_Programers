/* 
 * File:   main.cpp
 * Author: Jason Colburn
 * Created on January 14, 2014, 6:37 PM
 */

#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Starts Here!
int main()
{    
    int number_of_quarters, number_of_dimes, number_of_nickels, total_change;
    cout<<"Press return after entering a number.\n";
    cout<<"Enter the number of quarters:\n";
    cin>>number_of_quarters;
    number_of_quarters=.25;
    cout<<"Enter the number of dimes:\n";
    cin>>number_of_dimes;
    total_change=((number_of_quarters*.25)+(number_of_dimes*.10)+(number_of_nickels*.05));
    number_of_dimes=.10;
    cout<<"Enter the number of nickels:\n";
    cin>>number_of_nickels;
    number_of_nickels=.05;
    cout<<"Total change:\n";
    cout<<total_change;
    //Setup Heading
    cout<<" for you to spend.\n";
    cout<<setprecision(4)<<endl;
    cout<<"Good Bye!\n";
  
    return 0;
}

