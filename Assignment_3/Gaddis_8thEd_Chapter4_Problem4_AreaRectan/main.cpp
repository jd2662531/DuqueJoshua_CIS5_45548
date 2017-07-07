/* 
 * File:   main.cpp
 * Author: Joshua Duque
 * Created on 7-05-2017
 * Purpose: Determines area of two rectangles and tells which one has a bigger 
 * area or if they are equal
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float w1, h1, w2, h2, a1, a2; 
    
    cout<<"enter the width and hight of the first rectangle separated by a "
            "space"<<endl;
    cin>>w1>>h1;
    
    cout<<"enter the width and hight of the second rectangle separated by a "
            "space"<<endl;
    cin>>w2>>h2;
    
    a1=w1*h1;
    a2=w2*h2;
    
    if(a1>a2)
        cout<<"Rectangle 1 has an area of "<<a1<< " and is larger than "
                "Rectangle 2 with an area of "<<a2<<endl;
    else if (a1<a2)
        cout<<"Rectangle 2 has an area of "<<a2<< " and is larger than "
                "Rectangle 1 with an area of "<<a1<<endl;
    else 
        cout<<"The areas of the two rectangles are equal with an area of "
                <<a1<<endl;
        
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
   
  
    //Exit stage right!
    return 0;
}

