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
void deal(int&, int&, int&);// deal player function
void dealh(int&, int&, int&); //deal house function
//Execution Starts Here
int main(int argc, char** argv) {
   //Random Seed and Variable Declaration
    srand(static_cast<unsigned int>(time(0))); 
    //Declare all variables here
    char choice;
    string enter;
    
    cout<<"Type 'enter' to begin or type 'leave' to exit" <<endl;
    cin>>enter;
    
    while (enter != "leave" ){
        // Menu
        cin.get();
        cout<<"---------------------------------------------------------"<<endl;
        cout<<"BlackJack! Select an option"<<endl;
        cout<<"1: Rules and How to"<<endl;
        cout<<"2: Start!"<<endl;
        cout<<"3: End Game"<<endl;
        cout<<"---------------------------------------------------------"<<endl;
        //Input your choice
        cin>>choice;
        //Solve the problem chosen
        switch(choice){
            
            case '1':
                cout<<"Rules and How to play"<<endl;
                cout<<"The objective is to score 21 points."<<endl;
                cout<<"Cards 2-10 show its worth values."<<endl;
                cout<<"Face cards are all worth 10."<<endl;
                cout<<"Aces are worth 1 or 11."<<endl;
                cout<<"Your initially dealt two cards and asked to";
                cout<<" Hit or Sit."<<endl;
                cout<<"If you choose to hit, you will be given ";
                cout <<"another card."<<endl;
                cout<<"If you choose to sit, you will stay with ";
                cout<<"the current cards you have"<<endl;
                cout<<"The closest one to 21 without going over ";
                cout<< "wins."<<endl;
                cout<<"Going Over 21 is known as a bust";
                cout<<" and will result in a lost"<<endl;
                cout<<"If a draw is to occur, no one wins"<<endl;
                cout<<"Press Enter to continue"<<endl;
                cin.get();
                break;                    
                               
            case '2':     
                       
            {
                        int card1,card2,value, suit, pT, total, hT; //card1
                        //card2, value to pass to by reference, suit , player total
                        //points, total to pass by reference, house total
                        char yn; //yes or no 
                        bool stay=true; //leave menu true or false
                        //initialize accumulator for running total
                        pT=0;// player total
                        hT=0;//house total
                        //Player's Initial Hand
                        
                        cout<<"You have been dealt the following cards: ";
                      
                        deal(card1, suit, total);
                        cout<<" | ";  
                        deal(card2, suit, total);
                        pT=card1+card2;
                      
                        cout<<"Your score is now: ";
                        cout<<pT<<endl;
                        cout<<"Would you like another card?"<<endl;
                                cout<<"Enter '1' for yes and '0' for no: ";
                                cin>>stay;
                        //Allow Player to Hit or Sit
                        
                        while (stay && pT<21)
                        {
                             cout<<"You have been dealt a ";
                            deal(value, suit, total); // deal player function call
                            pT+=value; //accumulate total player 
                            cout<<"Your score is now: ";
                            cout<<pT;
                                cout<<" "<<endl;
                                cout<<"Would you like another card?"<<endl;
                                cout<<"Enter '1' for yes and '0' for no: ";
                                cin>>stay;
                            
                        }
                        //House's Hand
        
                       cout<<" "<<endl;
                       cout<<"The house has been dealt: ";
                       dealh(value, suit, total);
                       hT+=value;
                       do{
                       cout<<" | ";
                       dealh(value, suit, total);
                       hT+=value;
                       //if points are less than 16 house continues to deal
                       }while(hT<16);
                       cout<<" The house's score is: ";
                       cout<<hT;
                       cout<<" "<<endl;
                       
                       //Outcome of game
                       if(pT==21 && (pT!=hT))
                           cout<<"BlackJack! You win!"<<endl;
                       if(pT>hT&&pT<21)
                       {
                           cout<<"You win"<<endl;
                       }
                       else if(hT>21&&pT<=21)
                       {
                           cout<<"House went over 21. You win"<<endl;
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
                       cout<<" "<<endl;
                       cout<<"Press enter to continue"<<endl;
                       cin.get();
                                break;
            }  
            case '3': 
                    cout<<"Goodbye!"<<endl;
                    exit(0);
                    break;
                                
            default: cout<<"Please pick the given options"<<endl;
                                
                            }
                        }
    cout<<"Goodbye"<<endl;
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
        cout<<"would you like the value to equal 1 or 11: ";
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
