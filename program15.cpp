#include <iostream>
using namespace std;

class base1
{

    int data1, data2;

public:
    base1(int a, int b)
    {

        data1 = a;
        data2 = b;

        cout << "The base 1 cunstructor is called..." << endl;
    }

    void printData1()
    {

        cout << "The Data 1 : " << data1 << endl;
        cout << "The Data 2 :" << data2 << endl;
    }
};

class base2
{

    int data3, data4;

public:
    base2(int a, int b)
    {

        data3 = a;
        data4 = b;

        cout << "base 2 counstructor are called.." << endl;
    }

    void printData2()
    {

        cout << "The Data 3:" << data3 << endl;
        cout << "The Data 4: " << data4 << endl;
    }
};

class derived : public base1, public base2
{

    int data5, data6;

public:
    derived(int a, int b, int c, int d, int e, int f) : base1(a, b), base2(c, d)
    {

        data5 = e;
        data6 = f;

        cout << "derived counstructor are called.." << endl;
    }

    void printData3()
    {

        cout << "The Data 5:" << data5 << endl;
        cout << "The Data 6 :" << data6 << endl;
    }
};

int main()
{
    
  derived dr1(12,14,16,18,20,22);

  dr1.printData1();
  dr1.printData2();
  dr1.printData3();

    return 0;
}