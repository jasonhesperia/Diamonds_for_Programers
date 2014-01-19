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
double const scl_scty=.06;//Social Security withheld 
double const fdr_tax=.14;//Federal Tax
double const st_tax=.05;//State tax
double const un_dues=10.0;//Union dues 
double const dpnts_cost=35.0;//Dependant deduction
double const crt_pay_rate=16.78;//Current pay rate
double const OT_pay=25.17;//OT pay 
double const nrm_hrs=40;//Normal work week hours

// Execution start here!
int main(int argc, char** argv) 
{
    //Declare Variables
    int crnt_hrs,net_pay,net_pay1,net_pay2,grs_pay,nmbr_dpnts,ttl_deduct;
    int scl_SCTY,fdr_TAX,st_TAX;
    
    cout<<"How many hours did you work this week? ";
    cin>>crnt_hrs;
    cout<<"How many dependants do you have? ";
    cin>>nmbr_dpnts;
    
        if(crnt_hrs>40)
    {
        cout<<"For hours over 40 you make time and a half.\n";
        grs_pay=((crnt_hrs-nrm_hrs)*(OT_pay))+(40*crt_pay_rate);
        cout<<grs_pay;
        cout<<" = gross pay pre tax.\n"<<endl;
        
    }
    else
    {
        grs_pay=(crnt_hrs*crt_pay_rate);
        cout<<grs_pay;
        cout<<" = weekly gross pay.\n";
    }  
    
    cout<<"Breakdown of tax cost\n";
    scl_SCTY=grs_pay*scl_scty;
    cout<<scl_SCTY;
    cout<<" = Social security tax\n";
    fdr_TAX=grs_pay*fdr_tax;
    cout<<fdr_TAX;
    cout<<" = Federal tax\n";
    st_TAX=grs_pay*st_tax;
    cout<<st_TAX;
    cout<<" = State tax\n";
    
    ttl_deduct=(grs_pay-un_dues)*(scl_scty+fdr_tax+st_tax);
    cout<<ttl_deduct;
    cout<<" = weekly total deductions.\n";
    net_pay=grs_pay-ttl_deduct;
    cout<<net_pay;
    cout<<" = weekly net pay.\n";        
    
    if(nmbr_dpnts>=3)
    {
        cout<<"An additional $35 will be deducted to cover your excessive dependants cost.\n";
        net_pay2=net_pay-dpnts_cost;
        cout<<"New net pay is $";
        cout<<net_pay2;
    }
    else
    {
        
                
    }

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    return 0;
}

