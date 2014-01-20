/* 
 * Author: Jason Colburn
 * Created on January 19, 2014, 12:25 PM
 */

#include <iostream>
using namespace std;

//Global Constants

//Execution starts here!
int main(int argc, char** argv) 
{
    //Declare variables
    double brth_day,hroscp_sign;
    
    //Input your Birthday month/day
    cout<<"Enter your birthday in month/day (ex. 2.08)";
    cin>>brth_day;
    
    //Process the horoscope
    if((brth_day>=3.21)&&(brth_day<=4.19))
            cout<<"Your horoscope is Aires"
                    " and your sign is the air";
        else if(brth_day>=3.19)
            cout<<"You were born on a solar cusp"
                    "and may be Aires or Pisces";
    else if((brth_day>=4.20)&&(brth_day<=5.20))
            cout<<"Your horoscope is Taurus"
                    " and your sign is the bull";
        else if(brth_day>=4.18)
            cout<<"You were born on a solar cusp"
                    "and may be Taurus or Aires";
    else if((brth_day>=5.21)&&(brth_day<=6.21))
            cout<<"Your horoscope is Gemini"
                    " and your sign is the genie";
        else if(brth_day>=5.19)
            cout<<"You were born on a solar cusp"
                    "and may be Gemini or Taurus";
    else if((brth_day>=6.22)&&(brth_day<=7.22))
            cout<<"Your horoscope is Cancer"
                    " and your sign is the crab";
        else if(brth_day>=6.20)
            cout<<"You were born on a solar cusp"
                    "and may be Cancer or Gemini";
    else if((brth_day>=7.23)&&(brth_day<=8.22))
            cout<<"Your horoscope is Leo"
                    " and your sign is the lion";
        else if(brth_day>=7.21)
            cout<<"You were born on a solar cusp"
                    "and may be Leo or Cancer";
    else if((brth_day>=8.23)&&(brth_day<=9.22))
            cout<<"Your horoscope is Virgo"
                   " and your sign is the beetle";
        else if(brth_day>=8.21)
            cout<<"You were born on a solar cusp"
                    "and may be Virgo or Leo";
    else if((brth_day>=9.23)&&(brth_day<=10.22))
            cout<<"Your horoscope is Libra"
                    " and your sign is the horse";
        else if(brth_day>=9.21)
            cout<<"You were born on a solar cusp"
                    "and may be Libra or Virgo";
    else if((brth_day>=10.23)&&(brth_day<=11.21))
            cout<<"Your horoscope is Scorpio"
                    " and your sign is the scorpion";
        else if(brth_day>=10.21)
            cout<<"You were born on a solar cusp"
                    "and may be Scorpio or Libra";
    else if((brth_day>=11.22)&&(brth_day<=12.21))
            cout<<"Your horoscope is Sagittarius"
                    " and your sign is big foot";
        else if(brth_day>=11.20)
            cout<<"You were born on a solar cusp"
                    "and may be Sagittarius or Scorpio";
    else if((brth_day>=12.22)&&(brth_day<=1.19))
            cout<<"Your horoscope is Capricorn"
                    " and your sign is popcorn";
        else if(brth_day>=12.20)
            cout<<"You were born on a solar cusp"
                   "and may be Capricorn or Sagittarius";
    else if((brth_day>=1.20)&&(brth_day<=2.17))
            cout<<"Your horoscope is Aquarius"
                    " and your sign is the water";
        else if(brth_day>=1.18)
            cout<<"You were born on a solar cusp"
                    "and may be Aquarius or Capricorn";
    else if((brth_day>=2.19)&&(brth_day<=3.18))
            cout<<"Your horoscope is Pisces"
                    " and your sign is the fish";
        else if(brth_day>=2.18)
            cout<<"You were born on a solar cusp"
                    "and may be Pisces or Aquarius";
    
    return 0;
}

