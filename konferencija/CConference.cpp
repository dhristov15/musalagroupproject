#include<iostream>
#include "CConference.h"
#include "CDelegat.h"
#include "CTeacher.h"
#include <string>
using namespace std;


CConference::CConference()
{
    m_name_conf="";
    m_place="";
    m_num=0;
    m=NULL;
}
CConference::CConference(string name,string place,int num)
{
    Setname_conf(name);
    Setplace(place);
    Setnum(num);

    m=new CDelegat[m_num];

    for(int i=0;i<m_num;i++)
    {
        m[i].Read();
    }
}

void CConference::Read()
{
    string s;
    int n;
    cout<<"Insert Conference Name : ";
    cin>>s;
    Setname_conf(s);
    cout<<"Insert Conference Place : ";
    cin>>s;
    Setplace(s);
    cout<<"Insert number of Delegats : ";
    cin>>n;
    Setnum(n);
    cout<<endl;

    delete []m;

    m=new CDelegat[m_num];

    for(int i=0;i<m_num;i++)
    {
        m[i].Read();
    }
}

void CConference::Print()
{
    cout<<endl;
    cout<<"Conference Name : "<<Getname_conf()<<endl;
    cout<<"Conference Place : "<<Getplace()<<endl;

    for(int i=0;i<m_num;i++)
    {
        m[i].Print();
    }
}

void CConference::Add()
{
    CDelegat* p=m;
    int i;
    m_num++;

    m=new CDelegat[m_num];
    for(i=0;i<m_num;i++)
    {
        m[i]=p[i];
    }
    delete []p;
    m[i].Read();
}

int CConference::Find_Delegat(int fn)
{
    for(int i=0;i<m_num;i++)
    {
        if(fn==m[i].Getnumd())
        {
            return i;
        }
    }
    return -1;
}

void CConference::Delete()
{
    int res,f;
    cout<<"Insert Delegat number to delete : ";
    cin>>f;
    res=Find_Delegat(f);

    if(res==-1)
    {
        cout<<"No such Delegat "<<endl;
    }


    int i,j;
    CDelegat *p=m;
    m_num--;
    m=new CDelegat[m_num];
    for(i=0,j=0;i<m_num;i++)
    {
        if(res!=i)
        {
            m[j++]=p[i];
        }
    }
    delete []p;

}
int CConference::Find_Egn(int fn)
{
    for(int i=0;i<m_num;i++)
    {
        //tuka puka oti sakam da pristapam do metod od CPerson i nz kako ke se resi sega za sega
        //sega pocna i tuk pisa CTeacher oti nemoze direkno da pristapis tuku mora so toaa klasa pod nego so e
        if(fn==m[i].CTeacher::Getegn())
        {
            return i;
        }
    }
    return -1;

}

void CConference::Find_Egn()
{
    int res,f;
    cout<<"Insert EGN to show delegat data : ";
    cin>>f;
    res=Find_Egn(f);

    if(res==-1)
    {
        cout<<"No such EGN of delegat "<<endl;
    }

    for(int i=0;i<m_num;i++)
    {
        if(res==i)
        {
            m[i].Print();
        }
    }

}

void CConference::Find_Date()
{
    cout<<"The first Delegat in Hotel is : ";

    CDelegat ms=m[0];

    for(int i=0;i<m_num;i++)
    {
        if(ms.Getdatein()<m[i].Getdatein())
        {
            ms=m[i];
        }
    }

    for(int i=0;i<m_num;i++)
    {
        if(ms.Getdatein()==m[i].Getdatein())
        {
            m[i].Print();
        }
    }
}

int  CConference::Pay_sum(string fn)
{
    for(int i=0;i<m_num;i++)
    {
        if(fn==m[i].Getnameh())
        {
            return i;
        }
    }
    return -1;
}
void CConference::Pay_sum()
{
    string fn;
    cout<<"Insert Hotel name to show you the bill : ";
    cin>>fn;
    int res=Pay_sum(fn);

    if(res==-1)
    {
        cout<<"No such Hotel "<<endl;
    }

    int i,sum=0;
    for(i=0;i<m_num;i++)
    {
        if(fn==m[i].Getnameh())
        {
            sum+=m[i].Getpriceh()*m[i].Getnight_num();
        }
    }
    cout<<"The amount to pay for "<<fn<<" is : "<<sum<<endl;

}


CConference::~CConference()
{
    //dtor
}
