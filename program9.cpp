
// default Constructor 

#include <iostream>
using namespace std;

/*

constructor

constructors are the special type of function with same space name as the class
it is used to initialize the objects of the class its invoked automaticaly when object is created ;


cunstructor which not have parameters are the defualt constructor .


*/

class complex{


int a ,b ;

public :


// constructor 

 complex(void);  //constructor defination 


 void printNum(){
 
 cout<< "your number is :"<<a <<" + "<<b<<"i"<<endl;

 }

};

complex :: complex(void){        //this is the defualt constructor 
    a=10;
    b=20;
}

int main(){

    complex c ;

    c.printNum();   


    return 0;
}

/*

it should br declered on public section of the class 

Do not have return type.do not return value 

it can have defult arguments 

we cannot reffer to the addresses 

*/
