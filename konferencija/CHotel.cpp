#include<iostream>
#include "CHotel.h"
using namespace std;


CHotel::CHotel()
{
   m_nameh="";
   m_numh=0;
   m_priceh=0;
}
CHotel::CHotel(string n,int s,int p)
{
    Setnameh(n);
    Setnumh(s);
    Setpriceh(p);
}

void CHotel::Read()
{
    string s;
    int n;
    cout<<"Insert data for the class CHotel "<<endl;
    cout<<"Insert name of the hotel : ";
    cin>>s;
    Setnameh(s);
    cout<<"Insert room number : ";
    cin>>n;
    Setnumh(n);
    cout<<"Insert price for one night :";
    cin>>n;
    Setpriceh(n);
}

void CHotel::Print()
{
    cout<<"Name of Hotel : "<<Getnameh()<<endl;
    cout<<"Room number : "<<Getnumh()<<endl;
    cout<<"Price for one night : "<<Getpriceh()<<endl;
}
