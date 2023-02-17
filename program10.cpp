// parameterized constructors 

#include <iostream>
using namespace std;

class complex 
{

int a , b;

public :

  complex(int , int );


  
 void printNum(){
 
 cout<< "your number is :"<<a <<" + "<<b<<"i"<<endl;

 }


};


complex::complex(int x , int y ){

 a=x;
 b=y;

}


int main(){
    
    // implicite call 

      
     complex c1(20,40) ;
     c1.printNum();

    
     //explicite call

      complex c2 =complex(10,20);
       c2.printNum();

    return 0;
}

