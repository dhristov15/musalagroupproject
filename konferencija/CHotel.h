#ifndef CHOTEL_H
#define CHOTEL_H
#include <string>
#include "CAbstract.h"
using namespace std;

class CHotel : public CAbstract
{
    public:
        CHotel();
        CHotel(string,int,int);

        string Getnameh() { return m_nameh; }
        void Setnameh(string val) { m_nameh = val; }
        int Getnumh() { return m_numh; }
        void Setnumh(int val) { m_numh = val; }
        int Getpriceh() { return m_priceh; }
        void Setpriceh(int val) { m_priceh = val; }

        void Read();
        void Print();

    private:
        string m_nameh;
        int m_numh;
        int m_priceh;
};

#endif // CHOTEL_H
