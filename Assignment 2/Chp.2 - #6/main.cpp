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
const short brd_cpty=400;//number of people allowed in board room at one time.

// Execution start here!
int main(int argc, char** argv) 
{
    //Declare Variables
    int crnt_members,pls_members,mns_members;
   
    cout<<"How many people will attend your meeting? ";
    cin>>crnt_members;
    
    
    if(crnt_members<=400)
    {
        cout<<"Your meeting will be fire compliant\n";
        pls_members=400-crnt_members;
        cout<<pls_members;
        cout<<" more members can attend\n";
    }
    else
    {
        mns_members=crnt_members-400;
        cout<<mns_members;
        cout<<" members will have to leave the meeting to be fire safe.\n";
                
    }
     
            
    return 0;
}