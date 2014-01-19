/* 
 * File:   main.cpp
 * Author: Jason Colburn
 * Created on January 16, 2014, 7:20 PM
 */

#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Starts Here!
int main(int argc, char** argv) 

{
    int distance_ft,time_sec;
    cout<<"How many feet will it drop?\n";
    cout<<"Press enter after entering a number of seconds.\n";
    cin>>time_sec;
    distance_ft=(32*time_sec*time_sec)/2;
    cout<<distance_ft<<" feet";

    return 0;
}

