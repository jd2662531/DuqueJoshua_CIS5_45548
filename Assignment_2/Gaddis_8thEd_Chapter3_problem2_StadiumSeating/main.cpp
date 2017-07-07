/* 
 * File:   main.cpp
 * Author: Joshua Duque
 * Created on 6/29/17
 * Purpose:   
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float CA=15.0,CB=12.0,CC=9.0, tmoney; // cost of class A,B,C seats and total
                                          //income generated 
    int A,B,C; // amount of class A,B and C tickets sold 
    cout<<"enter total Class A, B and C tickets sold separated by a space"<<endl; 
    cin>>A>>B>>C; 
    tmoney=(A*CA)+(B*CB)+(C*CB); 
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout<<"total income generated = $"<<setprecision(4)<<showpoint<<tmoney<<endl;
  
    //Exit stage right!
    return 0;
}

