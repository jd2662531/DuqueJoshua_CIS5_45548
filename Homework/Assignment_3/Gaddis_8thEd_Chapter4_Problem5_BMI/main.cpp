/* 
 * File:   main.cpp
 * Author: Joshua Duque
 * Created on 7-05-2017
 * Purpose: Determines BMI and determines if the user is over weight, has 
 * optimal weight or underweight. Mostly applies to users with a sedentary
 * lifestyle. 
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <cmath>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float height, weight, BMI; 
    cout<<"Enter your weight in pounds"<<endl;
    cin>>weight;
    
    cout<<"Enter your height in inches"<<endl;
    cin>>height;
    
    BMI=weight*(703/(pow(height,2)));
    cout<<"Your BMI is "<<BMI<<endl;        
    cout<<"Based on a sedentary lifestyle, ";
    
    if(BMI>18.5 && BMI<25) 
        cout<<"your BMI is optimal"<<endl;
    else if(BMI<18.5)
        cout<<"your BMI suggest you are underweight."<<endl;
    else 
        cout<<"your BMI suggest you are overweight."<<endl;
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
   
  
    //Exit stage right!
    return 0;
}

