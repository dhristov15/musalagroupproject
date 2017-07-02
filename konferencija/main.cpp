#include <iostream>
#include "CPerson.h"
#include "CDate.h"
#include "CHotel.h"
#include "CPaper.h"
#include "CStudent.h"
#include "CTeacher.h"
#include "CDelegat.h"
#include "CConference.h"
#include <string>

using namespace std;

int main()
{
//    CPerson p;
//    p.Read();
//    p.Print();
//do tuk testvam class CPerson i dobre backa

//    CDate d;
//    d.Read();
//    d.Print();
// do tuk testvam class CDate i dobre backa

//      CHotel h;
//      h.Read();
//      h.Print();
//do tuk testvam class CHotel i dobre backa

//        CPaper p;
//        p.Read();
//        p.Print();
//do tuk testvam class CPaper i dobre backa

//        CStudent s;
//        s.Read();
//        s.Print();
//do tuk testvam class CStudent i dobre backa

//        CTeacher t;
//        t.Read();
//        t.Print();
//do tuk testvam class CTeacjer i dobre backa

//        CDelegat d;
//        d.Read();
//        d.Print();
//do tuk testvam class CDelegat i dobre backa
//i vsicki konstruktori dobre rabotata ako ne sam gi testval

//    CConference c;
//    c.Read();
//    c.Print();
//do tuk testvam class COnference i dobre backa

    CConference c;
    int choice;

    do
    {
        cout<<"1. ???"<<endl;
        cout<<"2. Read Conference"<<endl;
        cout<<"3. Print Conference"<<endl;
        cout<<"4. Add new delegat"<<endl;
        cout<<"5. Delete one delegat for a given delegat number"<<endl;
        cout<<"6. Insert Delegat number to Update his data "<<endl;
        cout<<"7. Show the sum of rent price for all delegats"<<endl;
        cout<<"8. Show the first comming delegat in the hotel"<<endl;
        cout<<"9. Insert EGN of one Delegat to show his data"<<endl;
        cout<<"0. Exit\n";
        cout<<"Your choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                {

                    break;
                }

            case 2:
                {
                    c.Read();
                    break;
                }

            case 3:
                {
                    c.Print();
                    break;
                }

            case 4:
                {
                    c.Add();
                    break;
                }

            case 5:
                {
                    c.Delete();
                    break;

                }
            case 6:
                {
                    c.Update();
                    break;
                }
            case 7:
                {
                    c.Pay_sum();
                    break;
                }
             case 8:
                {
                    c.Find_Date();
                    break;
                }
            case 9:
                {
                    c.Find_Egn();
                    break;
                }
            case 0:
                {
                    break;
                }



            default: cout<<"Error\n";
        }
    }while(choice);

    return 0;
}
