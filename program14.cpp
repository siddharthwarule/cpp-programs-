//protected public private

#include <iostream>
using namespace std;

class Base
{


protected: //it is the private veriable which is use for inheritance
     int a;

private:     
     int b= 10;  

public:
    int c;
   
};



class Derived :protected  Base
{



};





int main()
{

    Derived dr1 ;
    Base b1 ;


    return 0;
}

