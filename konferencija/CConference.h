#ifndef CCONFERENCE_H
#define CCONFERENCE_H
#include <string>
#include "CDelegat.h"

class CConference
{
    public:
        CConference();
        CConference(string,string,int);
        ~CConference();

        string Getplace() { return m_place; }
        void Setplace(string val) { m_place = val; }
        string Getname_conf() { return m_name_conf; }
        void Setname_conf(string val) { m_name_conf = val; }
        int Getnum() { return m_num; }
        void Setnum(int val) { m_num = val; }

        void Read();
        void Print();
        void Add();
        //tie dva metodi se za birenje
        int Find_Delegat(int);
        void Delete();
        //tie dva metodi treba za dadeno egn delegat da pecati ama nes ne backa
        int Find_Egn(int);
        void Find_Egn();
        //metodi za najrano pristignal maz
        void Find_Date();
        //metodi za sumata na plastanje za edin hotel
        int Pay_sum(string);
        void Pay_sum();

    private:
        string m_place;
        string m_name_conf;
        int m_num;
        CDelegat *m;
};

#endif // CCONFERENCE_H
