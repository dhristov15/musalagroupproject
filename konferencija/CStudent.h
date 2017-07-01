#ifndef CSTUDENT_H
#define CSTUDENT_H
#include <string>
#include "CPerson.h"


class CStudent : public CPerson
{
    public:
        CStudent();
        CStudent(string,int,string,string,int);

        string Getnames() { return m_names; }
        void Setnames(string val) { m_names = val; }
        int Getcourses() { return m_courses; }
        void Setcourses(int val) { m_courses = val; }
        string Getspecs() { return m_specs; }
        void Setspecs(string val) { m_specs = val; }

        void Read();
        void Print();

    private:
        string m_names;
        int m_courses;
        string m_specs;
};

#endif // CSTUDENT_H
