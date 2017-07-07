/* 
 * File:   main.cpp
 * Author: Joshua Duque
 * Created on 7-05-2017
 * Purpose: program that places three finishers of a race.
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
    string r1, r2, r3; //names of the three runners 
    float t1, t2, t3; //time of all three runners
    
    cout<<"Enter the name of runner one"<<endl;
    cin>>r1;
    cout<<"Enter the time in seconds it took for "<<r1<<" to finish the race"<<endl;
    cin>>t1;
    
    cout<<"Enter the name of runner two"<<endl;
    cin>>r2;
    cout<<"Enter the time in seconds it took for "<<r2<<" to finish the race"<<endl;
    cin>>t2;
    
    cout<<"Enter the name of runner three"<<endl;
    cin>>r3;
    cout<<"Enter the time in seconds it took for "<<r3<<" to finish the race"<<endl;
    cin>>t3;
    
    if((t1>0) && (t2>0) && (t3>0))
    
        if(t1<t2 && t1<t3)
        {
            if(t2<t3)
            cout<<"first place is "<<r1<<endl;
            cout<<"Second Place is "<<r2<<endl;
            cout<<"Third Place is "<<r3<<endl;
        }
        else
        {    
            cout<<"first place is "<<r1<<endl;
            cout<<"Second Place is "<<r3<<endl;
            cout<<"Third Place is "<<r2<<endl;
        }
    else if(t2<t3 && t2<t1)
            if(t3<t1)
            {    
            cout<<"first place is "<<r2<<endl;
            cout<<"Second Place is "<<r3<<endl;
            cout<<"Third Place is "<<r1<<endl;
        }
        else
        {    
            cout<<"first place is "<<r2<<endl;
            cout<<"Second Place is "<<r1<<endl;
            cout<<"Third Place is "<<r3<<endl;
       
        }
         else if(t3<t1 && t3<t2)
            if(t1<t2)
            {    
            cout<<"first place is "<<r3<<endl;
            cout<<"Second Place is "<<r1<<endl;
            cout<<"Third Place is "<<r2<<endl;
        }
        else
        {    
            cout<<"first place is "<<r3<<endl;
            cout<<"Second Place is "<<r2<<endl;
            cout<<"Third Place is "<<r1<<endl;
        }
         else
             cout<<"Only positive values for time";
       
     
        
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
   
  
    //Exit stage right!
    return 0;
}

