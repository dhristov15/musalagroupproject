#ifndef CPERSON_H
#define CPERSON_H
#include <string>
#include "CAbstract.h"
using namespace std;

class CPerson : public CAbstract
{
    public:
        CPerson();
        CPerson(string,int);

        string Getname() { return m_name; }
        void Setname(string val) { m_name = val; }
        int Getegn() { return m_egn; }
        void Setegn(int val) { m_egn = val; }

        void Read();
        void Print();

    private:
        string m_name;
        int m_egn;
};

#endif // CPERSON_H
