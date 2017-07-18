/* 
 * File:   main.cpp
 * Author: Joshua Duque
 * Created on 7-17-17
 * Purpose:  Determine KE
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Like PI, e, Gravity, or conversions

//Function Prototypes Here
float KE(float, float);
//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables Here
    float price, per, ws;
    
    cout<<"Please enter mass in kg ";
    cin>>ws;
    cout<<"please enter velocity in m/s";
    cin>>per;
    
   
    price = KE( ws, per);
    cout<<"The KE is "<<price<<endl;
    
    
    
    //Process/Calculations Here
    
    //Output Located Here
   
    //Exit
    return 0;
}

float KE(float wss, float pers)
    {
   
    float result;
    result=(.5)*wss*pers*pers;
    return result;
    }
    
