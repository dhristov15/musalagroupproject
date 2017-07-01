#include<iostream>
#include "CStudent.h"
#include "CPaper.h"
#include <string>
using namespace std;


CStudent::CStudent()
{
    m_names="";
    m_specs="";
    m_courses=0;
}
CStudent::CStudent(string name_uni,int course,string speci,string np,int ep):CPerson(np,ep)
{
    Setnames(name_uni);
    Setspecs(speci);
    Setcourses(course);
}

void CStudent::Read()
{
    string n;
    int c;
    //cout<<"Thats data from Person (Insert)CStudent "<<endl;
    CPerson::Read();
    cout<<"Insert data for class CStudent "<<endl;
    cout<<"Insert university name : ";
    cin>>n;
    Setnames(n);
    cout<<"Insert course : ";
    cin>>c;
    Setcourses(c);
    cout<<"Insert speciality : " ;
    cin>>n;
    Setspecs(n);
}

void CStudent::Print()
{
    cout<<"Data from class CPerson "<<endl;
    CPerson::Print();
    cout<<"University name : "<<Getnames()<<endl;
    cout<<"Course : "<<Getcourses()<<endl;
    cout<<"Sepeciality : "<<Getspecs()<<endl;

}
