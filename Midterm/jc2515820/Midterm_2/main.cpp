/* 
 * File:   main.cpp
 * Author: Jason Colburn
 * January 30th, 2014
 * Midterm problem #2 "Number of stars"
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
    
    int nmbr,count;
    char ans;
    do
    {
    cout<<"Choose a number between 3 and 27 and press enter: ";   
    cin>>nmbr;

    if(nmbr==3)
        cout<<"***\n";
    else if(nmbr==4)
        cout<<"****\n";
    else if(nmbr==5)
        cout<<"*****\n";
    else if(nmbr==6)
        cout<<"******\n";
    else if(nmbr==7)
        cout<<"*******\n";
    else if(nmbr==8)
        cout<<"********\n";
    else if(nmbr==9)
        cout<<"*********\n";
    else if(nmbr==10)
        cout<<"**********\n";
    else if(nmbr==11)
        cout<<"***********\n";
    else if(nmbr==12)
        cout<<"************\n";
    else if(nmbr==13)
        cout<<"*************\n";
    else if(nmbr==14)
        cout<<"**************\n";
    else if(nmbr==15)
        cout<<"***************\n";
    else if(nmbr==16)
        cout<<"****************\n";
    else if(nmbr==17)
        cout<<"*****************\n";
    else if(nmbr==18)
        cout<<"******************\n";
    else if(nmbr==19)
        cout<<"*******************\n";
    else if(nmbr==20)
        cout<<"********************\n";
    else if(nmbr==21)
        cout<<"*********************\n";
    else if(nmbr==22)
        cout<<"**********************\n";
    else if(nmbr==23)
        cout<<"***********************\n";
    else if(nmbr==24)
        cout<<"************************\n";
    else if(nmbr==25)
        cout<<"*************************\n";
    else if(nmbr==26)
        cout<<"**************************\n";
    else if(nmbr==27)
        cout<<"***************************\n";
    else
        cout<<"Sorry number entered is outside of range.\n";
    
    cout<<"If you want to run again press y: ";
    cin>>ans;
    }while(ans=='y'||ans=='Y'); 
    
    
    
    cout<<endl;
    //Exit stage right;
    return 0;
}

