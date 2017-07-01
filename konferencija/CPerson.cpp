#include<iostream>
#include "CPerson.h"
#include "CAbstract.h"
#include <string>
using namespace std;


CPerson::CPerson()
{
    m_name="";
    m_egn=0;
}

CPerson::CPerson(string s,int n)
{
    Setname(s);
    Setegn(n);
}

void CPerson::Read()
{
    cout<<"Insert data for class Person"<<endl;
    int n;
    string s;
    cout<<"Insert person name : ";
    cin>>s;
    Setname(s);
    cout<<"Inser person egn : ";
    cin>>n;
    Setegn(n);
}

void CPerson::Print()
{
    cout<<"Person Name : "<<Getname()<<endl;
    cout<<"Person EGN : "<<Getegn()<<endl;
}
