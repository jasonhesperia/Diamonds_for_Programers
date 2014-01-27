/* 
 * File:   main.cpp
 * Author: Jason Colburn
 * Created on January 25, 2014, 7:32 PM
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Global Constants

//Functional Prototypes
double stock_price(int,int,int,int);

//Execution starts here!
int main(int argc, char** argv) 
{
    //Declare variables
    int nbr_stck,whl_prc,num,den;
    float result; 
    char slash;
    
    //Input the stock
    cout<<"Enter the number of shares you have ";
    cin>>nbr_stck;
    cout<<"Enter the stock price as xxx x/x ";
    cin>>whl_prc>>setw(2)>>num>>slash>>den;
    
 
    result=stock_price(nbr_stck,whl_prc,num,den);
    
    cout<<setprecision(6)<<fixed<<showpoint;
    cout<<"Price of one share of stock is = "<<result<<endl;
    
    return 0;
}

double stock_price(int nbr_stck,int whl_prc,int num,int den)
{
    return(nbr_stck*(whl_prc + (num/den)));
}