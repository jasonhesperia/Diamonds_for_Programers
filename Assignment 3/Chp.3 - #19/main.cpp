/* 
 * Author: Jason Colburn
 *
 * Created on January 19, 2014, 4:42 PM
 */

#include <iostream>
using namespace std;

//Global Constants

//Execution starts here!
int main(int argc, char** argv) 
{
        //Declare Variables
        short frst_go,scnd_go,thrd_go,frth_go,fth_go,sth_go,svth_go,eth_go,nth_go,tnth_go;
        short cmpt_frst,cmpt_scnd,cmpt_thr,cmpt_fth,cmpt_sth,cmpt_svth,cmpt_eth;
        short rslt_1,rslt_2,rslt_3,rslt_4,rslt_5,rslt_6,rslt_7,rslt_8,rslt_9,rslt_10,
                rslt_11,rslt_12,rslt_13,rslt_14,rslt_15,rslt_16,rslt_17,rslt_18;
        
        cout<<"Lets play a game of 23.\n";
        cout<<"Choose a number between 1 and 3. ";
        cin>>frst_go;
        
        rslt_1=23-frst_go;
        cout<<rslt_1<<endl;      

        if(rslt_1>=4)
            cout<<"Computer chose: ";
            rslt_2=rslt_1-(4-frst_go);
            cout<<rslt_1;
            cout<<" - ";
            cout<<(4-frst_go);
            cout<<" =  ";
            cout<<rslt_2<<endl;
            
        cout<<"Choose another number between 1 and 3. ";
        cin>>scnd_go;
            
        rslt_3=rslt_2-scnd_go;
        cout<<rslt_3<<endl;         
            
        if(rslt_3>=4)
            cout<<"Computer chose: ";
            rslt_4=rslt_3-(4-scnd_go);
            cout<<rslt_3;
            cout<<" - ";
            cout<<(4-scnd_go);
            cout<<" = ";
            cout<<rslt_4<<endl;
        
        cout<<"Choose another number between 1 and 3. ";
        cin>>thrd_go;
            
        rslt_5=rslt_4-thrd_go;
        cout<<rslt_5<<endl;  
        
        if(rslt_5>=4)
            cout<<"Computer chose: ";
            rslt_6=rslt_5-(4-thrd_go);
            cout<<rslt_5;
            cout<<" - ";
            cout<<(4-thrd_go);
            cout<<" = ";
            cout<<rslt_6<<endl;
        
        cout<<"Choose another number between 1 and 3. ";
        cin>>frth_go;
            
        rslt_7=rslt_6-frth_go;
        cout<<rslt_7<<endl; 
        
         if(rslt_7>=4)
            cout<<"Computer chose: ";
            rslt_8=rslt_7-(4-frth_go);
            cout<<rslt_7;
            cout<<" - ";
            cout<<(4-frth_go);
            cout<<" = ";
            cout<<rslt_8<<endl;
        
        cout<<"Choose another number between 1 and 3. ";
        cin>>fth_go;
            
        rslt_9=rslt_8-fth_go;
        cout<<rslt_9<<endl; 
        
          if(rslt_9>=4)
            cout<<"Computer chose: ";
            rslt_10=rslt_9-(4-fth_go);
            cout<<rslt_9;
            cout<<" - ";
            cout<<(4-fth_go);
            cout<<" = ";
            cout<<rslt_10<<endl;
        
        cout<<"Choose another number between 1 and 3. ";
        cin>>sth_go;
            
        rslt_11=rslt_10-sth_go;
        cout<<rslt_11<<endl;   
        
        if((rslt_11<4)&&(rslt_11>2))
            cout<<"Computer chose: ";
            rslt_12=rslt_11-2;
            cout<<rslt_11;
            cout<<" - 2";
            cout<<" =  ";
            cout<<rslt_12<<endl;
            cout<<"You lose"<<endl;
            
        if(rslt_11==2)
            cout<<"Computer chose: ";
            rslt_12=rslt_11-1;
            cout<<rslt_11;
            cout<<" - 1";
            cout<<" =  ";
            cout<<rslt_12<<endl;
            cout<<"You win"<<endl;

         if(rslt_11==1)
            cout<<"Computer chose: ";
            rslt_12=rslt_11-1;
            cout<<rslt_11;
            cout<<" - 1";
            cout<<" =  ";
            cout<<rslt_12<<endl;
            cout<<"You win"<<endl;
            
            
    return 0;
}

