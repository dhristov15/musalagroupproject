#ifndef CDATE_H
#define CDATE_H
#include "CAbstract.h"
using namespace std;


class CDate : public CAbstract
{
    public:
        CDate();
        CDate(int,int,int);

        int Getday() { return m_day; }
        void Setday(int val) { m_day = val; }
        int Getmonth() { return m_month; }
        void Setmonth(int val) { m_month = val; }
        int Getyear() { return m_year; }
        void Setyear(int val) { m_year = val; }

        void Read();
        void Print();

    private:
        int m_day;
        int m_month;
        int m_year;
};

#endif // CDATE_H
