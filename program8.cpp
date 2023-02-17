#include <iostream>
using namespace std ;

class complex;

class calculator {

public:
int add(int a ,int b){
    return (a+b);
}

int sumComplex(complex,complex);

};

class complex {
   
friend int calculator ::sumComplex(complex ,complex);

int a ;
int b;

public:
 
 void setNo(int a1 ,int b1){
    
    a=a1;
    b=b1;

 }


 

};


int calculator ::sumComplex(complex c1,complex c2){
  
      return(c1.a+c2.b);

}


int main(){

complex c1 ,c2;
calculator cal;
c1.setNo(10,20);
c2.setNo(20,40);

int res = cal.sumComplex(c1,c2);

cout << "the sum of complex is the :"<<res;
return 0;


}