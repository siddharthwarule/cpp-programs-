#include <iostream>
using namespace std;

class Base
{

    int data1;

public:
    int data2;
    void setData(void);
    int getData1();
    int getData2();
};

void Base ::setData()
{

    data1 = 10;
    data2 = 20;


}

int Base ::getData1()
{

    return data1;
}

int Base::getData2()
{
    return data2;
}






class Derived : private Base
{

    int data3;

public:
    void setData3();
    int getData3();
    void display();
};

void Derived ::setData3()
{
     setData();
    data3 = (data2 * getData1());
}

int Derived ::getData3()
{
    return data3;
    
}

void Derived :: display(){

    cout << "data 01 :"<<getData1()<<endl;
    cout << "data 02 :"<<data2<<endl;
    cout << "data 03 :"<<data3<<endl;

}


int main()
{

    Derived dr1 ;
    Base b1 ;

    // b1.setData();
    
    dr1.setData3();
    dr1.display();


    return 0;
}