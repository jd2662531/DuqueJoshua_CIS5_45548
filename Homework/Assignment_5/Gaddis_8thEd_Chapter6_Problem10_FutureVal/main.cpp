/* 
 * File:   main.cpp
 * Author: Joshua Duque
 * Created on 7-17-17
 * Purpose:  Determine future value
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
float FV(float, float, float);
//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables Here
    float t, i, f, p;
    
    cout<<"Please enter present value  ";
    cin>>p;
    cout<<"please enter monthly intrest rate";
    cin>>i;
    cout<<"Enter number of months";
    cin>>t;
    
    
    f = FV(p,i,t);
    cout<<"The Future Value is "<<setprecision(2)<<fixed<<f<<endl;
    
    
    
    //Process/Calculations Here
    
    //Output Located Here
   
    //Exit
    return 0;
}

float FV(float P, float I, float T)
    {
   
    float result;
    result=((P)*pow((1+I),T));
    return result;
    }
    
