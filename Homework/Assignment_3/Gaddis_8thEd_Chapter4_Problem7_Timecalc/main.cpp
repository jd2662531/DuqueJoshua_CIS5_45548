/* 
 * File:   main.cpp
 * Author: Joshua Duque
 * Created on 7-05-2017
 * Purpose: Enter a duration in seconds and it will be converted to min, hours,
 * day.
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <cmath>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float seconds, sim=60,sih=3600,sid=86400; 
    
    cout<<"Enter any amount of seconds"<<endl;
    cin>>seconds;
    
    if((seconds>=sim)&&(seconds<sih))
        cout<<"that is equal to "<< (seconds/sim)<<" minutes(s)";
    else if ((seconds>= sih)&&(seconds<sid))
        cout<<"that is equal too "<< (seconds/sih)<<" hour(s)"; 
    else 
        cout<<"that is equal too "<< (seconds/sid)<<" day(s)";
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
   
  
    //Exit stage right!
    return 0;
}

