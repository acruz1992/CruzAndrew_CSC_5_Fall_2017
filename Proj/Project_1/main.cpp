/* 
 * File:   main.cpp
 * Author: Andrew Cruz
 * Created on Oct 28th, 2017, 9:00 AM
 * Purpose:  Blackjack Game Project
 */
//System Libraries

#include <iostream>     //Input/Output Stream Library
#include <cstdlib>      //Library set random number seed
#include <ctime>        //Libary to seed the random number generator
#include <iomanip>      //Format Library
#include <fstream>      //File Library
#include <string.h>     //String Library
using namespace std;    //Standard Name-space under which System Libraries reside
    

int main(int argc, char** argv) {

    int choice;
    float wager;
    float housewager;
    float bets;
    char action;
    int ctotal;
    char ch;
    char hit;
    
    //Loop the Menu and Problems
    cout<<"How many games would you like to play?: ";
    cin>>choice;
    cin.ignore();
    do{
        cout<<"Dealers hand:"<<endl;
        int card1=(rand()%(14-2+1))+2;  //dealer card 1
        int card2=(rand()%(14-2+1))+2;  //dealer card 2
        int card=(rand()%(14-2+1))+2;  //dealer card 3 to hit if needed
            switch (card1)
                {
                    case 11: cout<<"Ace";
                    break;
                    case 12: cout<<"Jack";
                    break;
                    case 13: cout<<"Queen";
                    break;
                    case 14: cout<<"King";
                    break;
                    default: cout<<card1;
                    break;
                }
            cout<<" and ";
                switch (card2)
                {
                    case 11: cout<<"Ace";
                    break;
                    case 12: cout<<"Jack";
                    break;
                    case 13: cout<<"Queen";
                    break;
                    case 14: cout<<"King";
                    break;
                    default: cout<<card2;
                    break;
                }
                if(card1<=14&&card1>=12)
                    card1=10;
                if(card2<=14&&card2>=12)
                card2=10;
                
                ctotal=card1+card2;
                cout<<"\nTotal is "<<ctotal<<endl;
                if (ctotal<=20)
                {
                    cout<<"\nWould you like to hit again? Y/N: ";
                    cin>>hit;
                    if (hit=='Y'||hit=='y')
                    {
                        cout<<card1<<" and "<<card2<<" and ";
                        switch (card)
                        {
                            case 11: cout<<"Ace";
                            break;
                            case 12: cout<<"Jack";
                            break;
                            case 13: cout<<"Queen";
                            break;
                            case 14: cout<<"King";
                            break;
                            default: cout<<card;
                            break;
                        }
                        if(card<=14&&card>=12)
                        card=10;
                        else if(card==11)
                        card=1;
                        ctotal+=card;
                        cout<<"\nNew total is "<<ctotal<<"\n"<<endl;
                        if(ctotal>21)
                            {
                            cout<<"\nYou loose!\n";
                            cout<<endl;
                            }
                    }
                    else if(hit=='N'||hit=='n');
                }
    
                
                       // if (action=='H'||action=='h')
                    
    }while(--choice>=1);
    
    return 0;
}