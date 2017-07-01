#ifndef CDELEGAT_H
#define CDELEGAT_H
#include <string>
#include "CTeacher.h"
#include "CPaper.h"
#include "CHotel.h"
#include "CStudent.h"


class CDelegat : public CStudent,public CTeacher,public CPaper,public CHotel
{
    public:
        CDelegat();
        //tuka mi se podredeni kako sto nasledava redosledno
        CDelegat(int,int,string,string,string,int,string,string,int,string,string,string,string,string,int,string,int,string,int,int);

        int Getnumd() { return m_numd; }
        void Setnumd(int val) { m_numd = val; }
        int Getnight_num() { return m_night_num; }
        void Setnight_num(int val) { m_night_num = val; }
        string Getdatein() { return m_datein; }
        void Setdatein(string val) { m_datein = val; }
        string Getdateout() { return m_dateout; }
        void Setdateout(string val) { m_dateout = val; }

        void Read();
        void Print();

    private:
        int m_numd;
        int m_night_num;
        string m_datein;
        string m_dateout;
};

#endif // CDELEGAT_H
