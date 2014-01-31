/* 
 * File:   main.cpp
 * Author: Jason Colburn
 * January 30th, 2014
 * Midterm problem #6 "Funny sequence"
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


//Global constants

//Function prototypes
double fnny(int,int,int);

//Execution starts here!
int main(int argc, char** argv) 
{
    //Declare variables
    int X=1,n;
    double ans;
    
    //Run the program

    
    for(X=1;X<=1501;X++)
    for(n=1501;n>=1;n++)
        ans=sqrt(X);
    cout<<ans<<" X "<<n<<endl;    
    cout<<n%10;
    
    return 0;
}
