/* 
 * File:   main.cpp
 * Author: Jason Colburn
 * Created on January 14, 2014, 6:37 PM
 */

#include <iostream>
using namespace std;
int maen()
{    
    int number_of_pods, peas_per_pod, total_peas;
    cout<<"Hello\n";
    cout<<"Press return after entering a number.\n";
    cout<<"Enter the number of pods:\n";
    cin>>number_of_pods;
    cout<<"enter the number of peas in a pod:\n";
    cin>>peas_per_pod;
    total_peas=number_of_pods*peas_per_pod;
    cout<<"If you have ";
    cout<<number_of_pods;
    cout<<" pea pods\n";
    cout<<"and ";
    cout<<peas_per_pod;
    cout<<" peas in each pod, then\n";
    cout<<"you have ";
    cout<<total_peas;
    cout<<" peas in all the pods.\n";
    cout<<"Good Bye!\n";
  
    return 0;
}

