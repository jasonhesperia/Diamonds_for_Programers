/* 
 * Author: Jason Colburn
 *
 * Created on January 19, 2014, 9:01 AM
 */

#include <iostream>
using namespace std;

//Global Constants

//Functional Prototypes

//Execution Starts Here!
int main(int argc, char** argv) 
{
    //Declare Variables
    int plyr_1,plyr_2,PR,PS,PP,RR,RS,RP,SR,SS,SP;
    short score;
    char result;
       
    
    cout<<"Let's play paper rock scissor!\n";
    cout<<"P for paper, R for rock, S for scissor!\n";
    cout<<"Player A enter your choice, player B enter your choice, \n"
            "and the press ENTER\n";
    cin>>score;
    
    //Process the game
    if(score=PR)        result='A';
    if(score=RP)        result='A';
    
    if(score=PS)        result='B';
    if(score=SP)        result='A';
    
    if(score=RS)        result='A';  
    if(score=SR)        result='B';
    

    
    
    //Output the results
    cout<<"The winner is player "<<result<<endl;
    
    //Exit stage right
    return 0;
}

