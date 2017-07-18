/* 
 * File:   main.cpp
 * Author: Joshua Duque
 * Created on 7-10-17
 * Purpose: use loop to display Calories burned at 5 min intervals 
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
    int max=30, min=5;
    float lvl;
    cout<<"Running on this treadmill burns 3.6 calories per minute."<<endl;
    cout<<"Here is the amount of calories burned in 5 min Intervals."<<endl;
    cout<<"----------------------------------------------------------"<<endl;
    
    cout<<"Time Passed"<<"      "<<"Calories Burned"<<endl;
    while(min<=max)
    {
        
         cout<<min<<"                "<<(lvl+=(3.6*5))<<" Calories"<<endl;
         min+=5;
    }
    
    //Input or initialize values Here
    
    //Process/Calculations Here
    
    //Output Located Here
    
    //Exit
    return 0;
}

  