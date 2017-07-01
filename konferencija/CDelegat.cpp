#include<iostream>
#include <string>
#include "CTeacher.h"
#include "CPaper.h"
#include "CHotel.h"
#include "CStudent.h"
#include "CDelegat.h"

using namespace std;


CDelegat::CDelegat()
{
    m_numd=0;
    m_datein="";
    m_dateout="";
    m_night_num=0;
}
CDelegat::CDelegat(int n,int nn,string din,string dout,string ns,int courss,string specs,string np,int ep,string namet,string titlet,string dutyt,string science,string tp,int te,string pname,int pnum,string hname,int hnum,int hprice)
        :CStudent(ns,courss,specs,np,ep),CTeacher(namet,titlet,dutyt,science,tp,te),CPaper(pname,pnum),CHotel(hname,hnum,hprice)
{
    Setnumd(n);
    Setdatein(din);
    Setdateout(dout);
    Setnight_num(nn);
}

void CDelegat::Read()
{
    int d;
    string s;
    cout<<"TEACHER"<<endl;
    CTeacher::Read();
    cout<<"STUDENT"<<endl;
    CStudent::Read();
    cout<<"PAPER"<<endl;
    CPaper::Read();
    cout<<"HOTEL"<<endl;
    CHotel::Read();
    cout<<"Insert data just for class CDelegat " <<endl;
    cout<<"Insert delegat number : ";
    cin>>d;
    Setnumd(d);
    cout<<"Insert Number of polagasci se noshuvki : ";
    cin>>d;
    Setnight_num(d);
    cout<<"Insert comming date : ";
    cin>>s;
    Setdatein(s);
    cout<<"Insert leaving date : ";
    cin>>s;
    Setdateout(s);
    cout<<endl;

}
void CDelegat::Print()
{
    CTeacher::Print();
    CStudent::Print();
    CPaper::Print();
    CHotel::Print();
    cout<<"Delegation number : "<<Getnumd()<<endl;
    cout<<"Number of polagasci se noshuvki : "<<Getnight_num()<<endl;
    cout<<"Comming date : "<<Getdatein()<<endl;
    cout<<"Leaving date : "<<Getdateout()<<endl;

}
