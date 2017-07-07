/* 
 * File:   main.cpp
 * Author: Joshua Duque
 * Created on 6/29/17
 * Purpose:   
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <iomanip>
#include <cmath>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float rad,sine,cosine,tang;
    cout<<"Enter an angle in radians"<<endl;
    cin>>rad;
    
    sine=sin(rad);
    cosine=cos(rad);
    tang=tan(rad);
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout<<"sin("<<rad<<") = "<<setprecision(4)<<fixed<<sine<<endl;
    cout<<"cos("<<rad<<") = "<<setprecision(4)<<fixed<<cosine<<endl;
    cout<<"tan("<<rad<<") = "<<setprecision(4)<<fixed<<tang<<endl;
    //Exit stage right!
    return 0;
}

