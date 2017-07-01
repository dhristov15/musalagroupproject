#ifndef CABSTRACT_H
#define CABSTRACT_H


class CAbstract
{
    public:
        CAbstract();

    virtual void Read()=0;
    virtual void Print()=0;

    private:
};

#endif // CABSTRACT_H
