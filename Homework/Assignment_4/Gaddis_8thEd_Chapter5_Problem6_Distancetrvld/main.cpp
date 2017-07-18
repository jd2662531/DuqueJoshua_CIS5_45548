/* 
 * File:   main.cpp
 * Author: Joshua Duque
 * Created on 7-10-17
 * Purpose: use loop to determine distance traveled
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables Here
    int hr;
    float dis,speed;
    
    cout<<"This program will calculate distance traveled"<<endl;
    cout<<"How fast were you traveling in miles per hour?"<<endl;
    cin>>speed;
    cout<<"How long were you traveling for in hours?"<<endl;
    cin>>hr;
    cout<<"-----------------------------------------------------"<<endl;
    cout<<"Hour"<<"          "<<"Distance"<<endl;
    
    for(int count=0; count<=hr; count++)
    {
         dis=count*speed;
         cout<<count<<"            "<<dis<<endl;
    }
       
   
        
    
    //Input or initialize values Here
    
    //Process/Calculations Here
    
    //Output Located Here
    
    //Exit
    return 0;
}

  