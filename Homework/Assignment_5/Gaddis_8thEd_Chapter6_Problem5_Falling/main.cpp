/* 
 * File:   main.cpp
 * Author: Joshua Duque
 * Created on 7-17-17
 * Purpose:  Determine falling distance 
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Like PI, e, Gravity, or conversions

//Function Prototypes Here
float fall(float);
//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables Here
    float c, ws;
    
    cout<<"Please enter Falling time in seconds ";
    cin>>ws;
     
    
   
    c = fall( ws);
    cout<<ws<<"seconds of falling = "<<c<<" meters of falling "<<endl;
    
    cout<<"-----------------------------------------------"<<endl;
    for ( ws=1; ws<=10; ws++)
    {
         c = fall( ws);
         cout<<ws<<"seconds of falling = "<<c<<" meters of falling "<<endl;
    }
    
    //Process/Calculations Here
    
    //Output Located Here
   
    //Exit
    return 0;
}

float fall(float t)
    {
   
    float result;
    result = ((.5)*(9.8)*t*t);
    return result;
    }
    