/* 
 * File:   main.cpp
 * Author: Joshua Duque
 * Created on 7-05-2017
 * Purpose: Determines the result color of mixing primary colors. 
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <string>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    string color1, color2, red, blue, yellow, purple, orange, green; 
    
    cout<<"Enter two of the following colors and I will tell you the combined"
            "color"<<endl;
    cout<<"red, blue, yellow"<<endl;
    cin>>color1>>color2;
    
    purple=red+blue;
    orange=red+yellow;
    green=yellow+blue;
    
    if(color1=="red" && color2=="blue")
        cout<<"Red + Blue = Purple"<<endl;
    else if (color1=="blue" && color2=="red")
        cout<<"Red + Blue = Purple"<<endl;
    else if (color1=="red" && color2=="yellow")
        cout<<"Red + Yellow = Orange"<<endl;
    else if (color1=="yellow" && color2=="red")
        cout<<"Red + Yellow = Orange"<<endl;
    else if (color1=="yellow" && color2=="blue")
        cout<<"Blue + Yellow = Green"<<endl;
    else if (color1=="blue" && color2=="yellow")
        cout<<"Blue + Yellow = Green"<<endl;
    else 
        cout<<"invalid color"<<endl;
     
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
   
  
    //Exit stage right!
    return 0;
}

