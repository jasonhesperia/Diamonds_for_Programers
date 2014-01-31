/* 
 * File:   main.cpp
 * Author: Jason Colburn
 * January 30th, 2014
 * Midterm problem #1 "Number of lines"
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Global Constants


//Functional Prototypes


//Execution starts here!
int main(int argc, char** argv) 
{
    //Declare variables
    int lns,nmbr,loop;
    
    //User input
    cout<<"Enter number of lines: ";
    cin>>lns;
    
    for(nmbr=1;nmbr<=lns+1;nmbr++){
        for(loop=1;loop<nmbr;loop++){
        if(loop<nmbr-1)
            cout<<' ';
        else
            cout<<loop%10;
    }    
    cout<<endl;
    }
    return 0;
}

