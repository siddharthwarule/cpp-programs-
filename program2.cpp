#include <iostream>
using namespace std; 


/*
data types in c++

premitives / built in data types

Int 

Float 

Char

Double

Boolean

decleartion 

Int a = 4 ,b = 4,c = 10;

types 

local 

global


User defind data types are 

Struct 

Union

Enum 


derived data types in c++ 

Array

Function

Pointer 

presindece first is local veriable 
*/

int a = 60 ;

void sum( int a , int b ){
    int x = a ;
     int y = b;

     cout << "the sum is " << x+ y;

}

int main(){

//    int a = 10;
   float pi = 3.15;
   int b = 20;



   cout << "this is the value of A :"<<a<<"\nthis is the value of B :" <<b<<"\nthe value of pi is "<<pi;

   sum(a,b);
    return 0;
}