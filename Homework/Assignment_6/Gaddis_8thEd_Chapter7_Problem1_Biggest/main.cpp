/* 
 * File:   main.cpp
 * Author: Joshua Duque
 * Created on 7-24-17
 * Purpose:  Use arrays to determine which input is the largest
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
    int min,max;
    int numb = 10;
    int num[numb]; //10 elements
    for(int count=0;count<10;count++)
    {
    cout<< "Enter 10 numbers and I will tell you the largest and the smallest: ";
    cin>> num[count]; // puts values in array
    }

    min=num[0];
    max=num[0];
    for(int count=1;count<10;count++)
	{
		if(min>num[count])
		{
			min=num[count];
		}
		else if(max<num[count])
		{
			max = num[count];
		}
	}

cout<<"Maximum is: "<< max << endl;
cout<<"Minimum is: "<< min << endl;

    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}