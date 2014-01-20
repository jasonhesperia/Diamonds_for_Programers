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
    char result;
    int P,R,S,prp_cvrs_rck,
            rck_brks_scr,
            scr_cut_prp,
            nby_wns,
            plyr_1,
            plyr_2;
    
    cout<<"Let's play paper rock scissor!\n";
    cout<<"P for paper, R for rock, S for scissor!\n";
    cout<<"Player #1 enter your choice  \n";
    cin>>plyr_1;
    cout<<endl;
    
    
    
    
    cout<<"Player #2 enter your choice  \n";
    cin>>plyr_1;
    cout<<endl;
      if((plyr_1=='P')||(plyr_1=='p'))
      if((plyr_1=='R')||(plyr_1=='r'))
      if((plyr_1=='S')||(plyr_1=='s'))  
          
    cout<<"Player #2 enter your choice  \n";
    cin>>plyr_2;
    cout<<endl;
      if((plyr_2=='P')||(plyr_2=='p'))
      if((plyr_2=='R')||(plyr_2=='r'))
      if((plyr_2=='S')||(plyr_2=='s'))
          
          
          
          
          
    switch(result)
    {
        case'PR':
            cout<<"Player 1 you win!\n";
            break;
        case'PS':
            cout<<"Player 2 you win!\n";
            break;
            
            
        default:
            cout<<"That is not a possible option.\n";
            
            
    }

    cout<<"end of program\n";  
    
    return 0;
}

