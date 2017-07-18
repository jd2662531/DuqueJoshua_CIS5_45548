/* 
 * File:   main.cpp
 * Author: Joshua Duque
 * Created on 7-17-17
 * Purpose:  Determine celsius conversion
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Like PI, e, Gravity, or conversions

//Function Prototypes Here
float C(float);
//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables Here
    float c, ws;
    
    cout<<"Please enter Temperature in fahrenheit ";
    cin>>ws;
     
    
   
    c = C( ws);
    cout<<ws<<" Degrees F is "<<c<<"Degrees C "<<endl;
    
    cout<<"-----------------------------------------------"<<endl;
    for ( ws=0; ws<=20; ws++)
    {
         c = C( ws);
         cout<<ws<<" Degrees F is "<<c<<" Degrees C "<<endl;
    }
    
    //Process/Calculations Here
    
    //Output Located Here
   
    //Exit
    return 0;
}

float C(float t)
    {
   
    float result;
    result = ((5.0/9.0)*(t-32));
    return result;
    }
    