/* 
 * File:   main.cpp
 * Author: Joshua Duque
 * Created on 7-17-17
 * Purpose:  Determine Present value
 */

//System Libraries Here
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Like PI, e, Gravity, or conversions

//Function Prototypes Here
float PV(float, float, float);
//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables Here
    float n, r, f, p;
    
    cout<<"Please enter Future value  ";
    cin>>f;
    cout<<"please enter annual intrest rate";
    cin>>r;
    cout<<"Enter number of years";
    cin>>n;
    
    
    p = PV(f,r,n);
    cout<<"The Present Value is "<<setprecision(2)<<fixed<<p<<endl;
    
    
    
    //Process/Calculations Here
    
    //Output Located Here
   
    //Exit
    return 0;
}

float PV(float F, float R, float N)
    {
   
    float result;
    result=F/(pow((1+R),N));
    return result;
    }
    
