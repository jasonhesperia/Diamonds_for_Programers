/* 
 * File:   main.cpp
 * Author: Jason Colburn
 * Created on January 30, 2014
 * Midterm for CSC5 C++
 * Prof. Mark Lehr M/W 5-10:00pm
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Global Constants Here!!!

//Function Prototypes Here!!!
void Menu();
int getN();
void def(int);
void problem1(int,int,int);
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();

//Begin Execution Here!!!
int main(int argv,char *argc[]){
    int inN,lns,nmbr,loop;
    do{
        Menu();
        inN=getN();
        switch(inN){
        case 1:    problem1();break;
        case 2:    problem2();break;
        case 3:    problem3();break;
        case 4:    problem4();break;
        case 5:    problem5();break;
        case 6:    problem6();break;
        default:   def(inN);}
    }while(inN>=1&&inN<=6);
    return 0;//If midterm not perfect, return something other than 1
}

void Menu(){
    cout<<"Menu for the Midterm"<<endl;
    cout<<"Type 1 for problem 1"<<endl;
    cout<<"Type 2 for problem 2"<<endl;
    cout<<"Type 3 for problem 3"<<endl;
    cout<<"Type 4 for problem 4"<<endl;
    cout<<"Type 5 for problem 5"<<endl;
    cout<<"Type 6 for problem 6"<<endl;
    cout<<"Type anything else to exit \n"<<endl;
}

int getN(){
        int inN;
        cin>>inN;
        return inN;
}

void problem1(int lns,int nmbr,int loop){
        cout<<"In problem # 1"<<endl<<endl;
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
