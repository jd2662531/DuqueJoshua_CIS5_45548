/* 
 * File:   main.cpp
 * Author: Joshua Duque
 * Created on 7/20/17
 * Purpose: Blackjack!
 */

//System Libraries
#include <cstdlib>//Random function srand
#include <iostream>//Standard input/output
#include <ctime>//time for random and program
#include <cstdlib>   //srand
#include <string>// string 

using namespace std;
//Function Prototypes
void deal(int&, int&, int&);
void dealh(int&, int&, int&);
//Execution Starts Here
int main(int argc, char** argv) {
   //Random Seed and Variable Declaration
    srand(static_cast<unsigned int>(time(0))); 
    //Declare all variables here
    
    int card1,card2,value, suit, pT, total, hT;
    char yn;
    //initialize accumulator for running total
    pT=0;
     hT=0;
     //Player's Initial Hand
                        
   cout<<"You have been dealt the following cards: ";
                      
    deal(card1, suit, total);
    cout<<" | ";  
    deal(card2, suit, total);
    pT=card1+card2;
                      
    cout<<"Your score is: ";
    cout<<pT<<endl;
                        
    //Allow Player to Hit or Sit
    //A little buggy. sometimes fails to end loop if
    //pT (total) goes over 21.
do{
    if(pT<21){
        cout<<" Would you like another card?"<<endl;
        cout<<"Enter 'y' for yes and 'n' for no: ";
        cin>>yn;
        if (yn='y'){
            cout<<"You have been dealt a ";
            deal(value, suit, total);
            pT+=value;
            cout<<"Your score is now: ";
            cout<<pT;
        }
                                
    else yn='n';    
    } 
    if (pT>=21)
        yn='n';
}
while (yn='y'); 
//House's Hand
        
 cout<<" "<<endl;
 cout<<"The house has been dealt: ";
 dealh(value, suit, total);
 hT+=value;
 do{
 cout<<" | ";
 dealh(value, suit, total);
 hT+=value;
 //if less than 16 house continues to deal
}while(hT<16);
cout<<"The house's score is: ";
cout<<hT;
cout<<" "<<endl;
                       
//Outcome Output
if(pT==21 && (pT!=hT))
   cout<<"BlackJack! You win!"<<endl;
if(pT>hT&&pT<21)
{
   cout<<"You win"<<endl;
}
else if(hT>21&&pT<=21)
{
   cout<<"You win"<<endl;

}
else if(pT>21)
{
   cout<<"Bust! You went over 21!"<<endl;
}
else if(pT<hT&&hT<=21)
{
   cout<<"House Wins "<<endl;
}
else if(pT==hT)
{
   cout<<"Draw!"<<endl;
}
    return 0;
}

//Function Definition (Card Dealing Function)
void deal(int& crdV, int& crdS, int& Total){ //deal player
    //Randomly selects card values
    crdV=rand()%14+1;
    if ((crdV<=10) && (crdV>=2)){
        cout<<crdV;
        cout<<" of ";
    }
    if (crdV==11){
        cout<<" Jack of ";
        crdV=10;
    }
    if (crdV==12){
        cout<<" Queen of ";
        crdV=10;
    }
    if (crdV==13){
        cout<<" King of ";
        crdV=10;
    }
    if (crdV==1){        
        cout<<" You got an Ace, ";
        int ace;
        cout<<"would you like it to equal 1 or 11"<<endl;
        cin>>ace;
     
        if (ace==1){
            crdV=1;
        }else
            crdV=11;
        }
   crdS=rand()%4+1; // Suits
   if(crdS==1){
       cout<<"Clubs ";
   }
   if(crdS==2){
       cout<<"Diamonds ";
   }
   if(crdS==3){
       cout<<"Spades  ";
   }
   if (crdS==4){
       cout<<"Hearts ";
   }
}
void dealh (int& crdV, int& crdS, int& Total){ //deal house 
    //Randomly selects card values
    crdV=rand()%14+1;
    if (crdV<=10&&crdV>=2){
        cout<<crdV;
        cout<<" of ";
    }
    if (crdV==11){
        cout<<" Jack of ";
        crdV=10;
    }
    if (crdV==12){
        cout<<" Queen of ";
        crdV=10;
    }
    if (crdV==13){
        cout<<" King of ";
        crdV=10;
    }
    if (crdV==14||crdV==1){        
        cout<<" Ace of ";
         if (Total<10){
            crdV=11;
        }else
            crdV=1;
    }
   crdS=rand()%4+1; // Suits
   if(crdS==1){
       cout<<"Clubs ";
   }
   if(crdS==2){
       cout<<"Diamonds ";
   }
   if(crdS==3){
       cout<<"Spades ";
   }
   if (crdS==4){
       cout<<"Hearts ";
   }
}
