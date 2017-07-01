#ifndef CPAPER_H
#define CPAPER_H
#include "CAbstract.h"
#include <string>
using namespace std;


class CPaper : public CAbstract
{
    public:
        CPaper();
        CPaper(string,int);

        string Getnamep() { return m_namep; }
        void Setnamep(string val) { m_namep = val; }
        int Getnump() { return m_nump; }
        void Setnump(int val) { m_nump = val; }

        void Read();
        void Print();

    private:
        string m_namep;
        int m_nump;
};

#endif // CPAPER_H
