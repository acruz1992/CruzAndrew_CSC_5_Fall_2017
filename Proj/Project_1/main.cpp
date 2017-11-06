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
    int pctotal,dctotal;
    char ch;
    char hit;
    
    //Loop the Menu and Problems
    cout<<"How many games would you like to play?: ";
    cin>>choice;
    cin.ignore();
    do{
        {
        cout<<"Dealers hand: "<<endl;
        int dcard1=(rand()%(14-2+1))+2;  //dealer card 1
        int dcard2=(rand()%(14-2+1))+2;  //dealer card 2
                
        
        switch (dcard1)
                {
                    case 11: cout<<"Ace";
                    break;
                    case 12: cout<<"Jack";
                    break;
                    case 13: cout<<"Queen";
                    break;
                    case 14: cout<<"King";
                    break;
                    default: cout<<dcard1;
                    break;
                }
                cout<<" and ";
                switch (dcard2)
                {
                    case 11: cout<<"Ace";
                    break;
                    case 12: cout<<"Jack";
                    break;
                    case 13: cout<<"Queen";
                    break;
                    case 14: cout<<"King";
                    break;
                    default: cout<<dcard2;
                    break;
                }
                if(dcard1>=12)dcard1=10;
                if(dcard2>=12)dcard2=10;
                dctotal=dcard1+dcard2;
                cout<<"\nTotal is "<<dctotal<<endl;
                if (dctotal<=12)
                        {
                            int dcard=(rand()%(14-2+1))+2;  //dealer card 3 to hit if needed
                            cout<<"new card ";
                            switch (dcard)
                            {
                                case 11: cout<<"Ace";
                                break;
                                case 12: cout<<"Jack";
                                break;
                                case 13: cout<<"Queen";
                                break;
                                case 14: cout<<"King";
                                break;
                                default: cout<<dcard;
                                break;
                            }
                            if(dcard>=12)
                                dcard=10;
                            else if(dcard==11)
                                dcard=1;
                                dctotal+=dcard;
                            cout<<"\nNew total is "<<dctotal<<"\n"<<endl;
                        }
                        if(dctotal>21)
                        cout<<"Dealer Lost\n"<<endl;
        
        }
        {
        cout<<"Players hand:"<<endl;
        int pcard1=(rand()%(14-2+1))+2;  //dealer card 1
        int pcard2=(rand()%(14-2+1))+2;  //dealer card 2
                
        
        switch (pcard1)
                {
                    case 11: cout<<"Ace";
                    break;
                    case 12: cout<<"Jack";
                    break;
                    case 13: cout<<"Queen";
                    break;
                    case 14: cout<<"King";
                    break;
                    default: cout<<pcard1;
                    break;
                }
                cout<<" and ";
                switch (pcard2)
                {
                    case 11: cout<<"Ace";
                    break;
                    case 12: cout<<"Jack";
                    break;
                    case 13: cout<<"Queen";
                    break;
                    case 14: cout<<"King";
                    break;
                    default: cout<<pcard2;
                    break;
                }
                if(pcard1>=12)pcard1=10;
                if(pcard2>=12)pcard2=10;
                pctotal=pcard1+pcard2;
                cout<<"\nTotal is "<<pctotal<<endl;
                if (pctotal<=20)
                {
                    do
                    {
                        cout<<"\nWould you like to hit again? Y/N: ";
                        cin>>hit;
                        if (hit=='Y'||hit=='y')
                        {
                            int pcard=(rand()%(14-2+1))+2;  //dealer card 3 to hit if needed
                            cout<<"new card ";
                            switch (pcard)
                            {
                                case 11: cout<<"Ace";
                                break;
                                case 12: cout<<"Jack";
                                break;
                                case 13: cout<<"Queen";
                                break;
                                case 14: cout<<"King";
                                break;
                                default: cout<<pcard;
                                break;
                            }
                            if(pcard>=12)
                                pcard=10;
                            else if(pcard==11)
                                pcard=1;
                                pctotal+=pcard;
                            cout<<"\nNew total is "<<pctotal<<"\n"<<endl;
                        }
                    }while ((!(hit=='n'||hit=='N'))||!pctotal>=21);
                }
                if(pctotal>21)
                cout<<"\nYou loose!"<<endl;
        }
    }while(--choice>=1);
    
    return 0;
}