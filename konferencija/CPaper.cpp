#include<iostream>
#include "CPaper.h"
#include <string>
using namespace std;



CPaper::CPaper()
{
   m_namep="";
   m_nump=0;
}
CPaper::CPaper(string s,int n)
{
    Setnamep(s);
    Setnump(n);
}
void CPaper::Read()
{
    string s;
    int n;
    cout<<"Insert data for class CPaper "<<endl;
    cout<<"Insert name : ";
    cin>>s;
    Setnamep(s);
    cout<<"Insert number of section : ";
    cin>>n;
    Setnump(n);
}

void CPaper::Print()
{
    cout<<"Name : "<<Getnamep()<<endl;
    cout<<"Number of section : "<<Getnump()<<endl;
}
