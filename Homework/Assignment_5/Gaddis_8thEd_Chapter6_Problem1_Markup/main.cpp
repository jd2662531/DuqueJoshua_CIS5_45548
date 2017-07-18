/* 
 * File:   main.cpp
 * Author: Joshua Duque
 * Created on 7-17-17
 * Purpose:  Display Retail price using functions 
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Like PI, e, Gravity, or conversions

//Function Prototypes Here
float calculateRetail(float, float);
//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables Here
    float price, per, ws;
    
    cout<<"Please enter wholesale price: $";
    cin>>ws;
    cout<<"please enter mark up percentage: %";
    cin>>per;
    
    if (ws>0 && per>0)
    {
    price= calculateRetail(ws, per);
    cout<<"The retail price is $"<<price<<endl;
    }
    else
        cout<<"Enter positives";
    
    //Process/Calculations Here
    
    //Output Located Here
   
    //Exit
    return 0;
}

float calculateRetail(float wss, float pers)
    {
   
    float result;
    result=wss + (wss*(pers/100.0));
    return result;
    }
    
