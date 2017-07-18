/* 
 * File:   main.cpp
 * Author: Joshua Duque
 * Created on 7-10-17
 * Purpose: Predict population increase
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
    float per, pop, days, total=0;
    cout<<"This program will predict size population"<<endl;
    cout<<"Enter starting population"<<endl;
    cin>>pop;
    cout<<"enter predicted growth percentage in decimal"<<endl;
    cin>>per; cout<<"%"<<endl;
    cout<<"enter amount of days"<<endl;
    cin>>days;
    cout<<"Days"<<"          "<<"Population"<<endl;
    for (int count=1;count<=days;count++)
    {
        
        cout<<count<<"          "<<total<<endl;        
      pop*=per;
           
    }
    
    //Input or initialize values Here
    
    //Process/Calculations Here
    
    //Output Located Here
    
    //Exit
    return 0;
}

  