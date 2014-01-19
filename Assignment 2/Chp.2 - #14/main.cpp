/* 
 * File:   main.cpp
 * Author: Jason Colburn
 *
 * Created on January 18, 2014, 2:41 PM
 */

#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Starts here!
int main(int argc, char** argv) 
{
    int name_inst,my_name,food_typ,nmbr_typ,adjective_typ,color_typ,animal_typ;
    
    cout<<"Type all answers on one line with a space between them.\n";
    cout<<"Your instructors first or last name \n";
    cout<<"Your first name is \n";
    cout<<"A food type\n";
    cout<<"A number between 100 and 200 \n";
    cout<<"An adjective \n";
    cout<<"A color \n";
    cout<<"A animal \n";
    cin>>name_inst>>my_name>>food_typ>>nmbr_typ>>adjective_typ>>color_typ>>animal_typ;
    
    cout<<"Dear Instructor ";
    cout<<name_inst;
    cout<<"I am sorry that I am unable to turn in my homework at this time."
            "First, I ate a rotten ";
    cout<<food_typ;
    cout<<", which made me turn";
    cout<<color_typ;
    cout<<"and extremely ill."
          "I came down with a fever of ";
    cout<<nmbr_typ;
    cout<<"Next, my ";
    cout<<adjective_typ;
    cout<<"pet ";
    cout<<animal_typ;
    cout<<"animal must have smelled the remains of the ";
    cout<<food_typ;
    cout<<"on my homework,because he ate it. I am currently re-writing my"
            "homework and hope you will accept it late."
            
            "Sincerely,";
    cout<<my_name;
    
    
    return 0;
}

