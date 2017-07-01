#ifndef CTEACHER_H
#define CTEACHER_H
#include <string>
#include "CPerson.h"


class CTeacher : public CPerson
{
    public:
        CTeacher();
        CTeacher(string,string,string,string,string,int);

        string Getnamet() { return m_namet; }
        void Setnamet(string val) { m_namet = val; }
        string Gettitlet() { return m_titlet; }
        void Settitlet(string val) { m_titlet = val; }
        string Getdutyt() { return m_dutyt; }
        void Setdutyt(string val) { m_dutyt = val; }
        string Getscience() { return m_science; }
        void Setscience(string val) { m_science = val; }

        void Read();
        void Print();

    private:
        string m_namet;
        string m_titlet;
        string m_dutyt;
        string m_science;
};

#endif // CTEACHER_H
