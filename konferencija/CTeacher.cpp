#include<iostream>
#include "CTeacher.h"
#include "CPerson.h"
#include <string>
using namespace std;


CTeacher::CTeacher()
{
    m_namet="";
    m_titlet="";
    m_dutyt="";
    m_science="";
}
CTeacher::CTeacher(string n,string t,string d,string s,string np,int ep):CPerson(np,ep)
{
    Setnamet(n);
    Settitlet(t);
    Setdutyt(d);
    Setscience(s);
}

void CTeacher::Read()
{
    string s;
    //cout<<"Data form CPerson (CTeacher) "<<endl;
    CPerson::Read();
    cout<<"Insert university name : ";
    cin>>s;
    Setnamet(s);
    cout<<"Insert title : ";
    cin>>s;
    Settitlet(s);
    cout<<"Insert duty : ";
    cin>>s;
    Setdutyt(s);
    cout<<"Insert science : ";
    cin>>s;
    Setscience(s);
}

void CTeacher::Print()
{
    cout<<"Data from CPerson "<<endl;
    CPerson::Print();
    cout<<"University name : "<<Getnamet()<<endl;
    cout<<"Title : "<<Gettitlet()<<endl;
    cout<<"Duty : "<<Getdutyt()<<endl;
    cout<<"Science : "<<Getscience()<<endl;
}
