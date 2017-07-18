/* 
 * File:   main.cpp
 * Author: Joshua Duque
 * Created on 7-10-17
 * Purpose:  Determine the sum of all numbers between two integers
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables Here
    int num1=1,num2, total=0;
    
     
    //Input or initialize values Here
    cout<<"This program will sum up all the numbers between one and an integers"
            "greater than one and zero "<<endl;
    cout<<"Choose an ending number"<<endl;
    cin>>num2;
    
    
    
    
    //Process/Calculations Here
    
    //Output Located Here
    
    
 
        for(int count=num1; (count<=num2); count++)
        
            total+=count;
      
    
        
    cout<<"The sum of numbers between 1 "<<" and "<<num2<<" is "<<total;

    //Exit
    return 0;
}

  