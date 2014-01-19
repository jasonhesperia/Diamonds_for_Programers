/* 
 * File:   main.cpp
 * Author: jason Colburn 
 *
 * Created on January 18, 2014, 3:57 PM
 */

#include <iostream>
#include <cmath>
using namespace std;

//Global Constants

//Functional Prototypes

//Execution starts here!
int main(int argc, char** argv) 
{
   //Declare variables
   float x,r,nGuess,oGuess;
   //Input the value to find the sq root of
   cout<<"What number do you wish to find the "
           <<"Square Root of ?"<<endl;
   cin>>x;
   //First approximate and keep count
   nGuess=oGuess=x/2;
   int count=0;
   do{
       oGuess=nGuess;
       r=x/oGuess;
       nGuess=(oGuess+r)/2;
       count++;
   }while(nGuess-oGuess);
   //Output the approximation
   cout<<"The Approximation = "<<nGuess<<endl;
   cout<<"It took "<<count<<" iterations for the solution"<<endl;
   //Output the actual answer
   cout<<"Exact answer = "<<sqrt(x)<<endl;
   //Exit stage right
  
    return 0;
}

