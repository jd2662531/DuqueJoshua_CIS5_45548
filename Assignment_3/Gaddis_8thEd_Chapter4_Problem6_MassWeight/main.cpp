/* 
 * File:   main.cpp
 * Author: Joshua Duque
 * Created on 7-05-2017
 * Purpose: Determines weight of an object in newtons by inputting an objects
 * mass.
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
    float mass, weight; // mass in kilograms and weight in Newtons 
    cout<<"Enter the mass of an object in kilograms"<<endl;
    cin>>mass;
  
    
    weight=mass*9.8;
    cout<<"The weight of this object is "<<weight<<" N"<<endl;
    
    if(weight>1000.0)
        cout<<"This object is too heavy."<<endl;
    else if(weight<10.0)
        cout<<"This object is too light."<<endl;
            
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
   
  
    //Exit stage right!
    return 0;
}

