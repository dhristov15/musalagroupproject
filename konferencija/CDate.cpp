#include<iostream>
#include "CDate.h"
#include "CAbstract.h"
using namespace std;


CDate::CDate()
{
    m_day=m_month=m_year=0;
}

CDate::CDate(int d,int m,int y)
{
    Setday(d);
    Setmonth(m);
    Setyear(y);
}

void CDate::Read()
{
    cout<<"Insert data for class CDate "<<endl;
    cout<<"Insert day : ";
    int n;
    cin>>n;
    Setday(n);
    cout<<"Insert month : ";
    cin>>n;
    Setmonth(n);
    cout<<"Insert year : ";
    cin>>n;
    Setyear(n);

}

void CDate::Print()
{
    cout<<"Day : "<<Getday()<<endl;
    cout<<"Month : "<<Getmonth()<<endl;
    cout<<"Year : "<<Getyear()<<endl;

}
