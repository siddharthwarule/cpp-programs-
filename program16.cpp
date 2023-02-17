#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

/*

  1. fstreambase
  2. ifstream     -->  derived form fstreambase 
  3. ofstream     -->  derived from fstreambase
  
  */


    //  1 using the constructor 
    //  2. using the member function open() of the class 



    //  this is use for write 

int main(){

         
         string st = " Hallow sid good morning";

         ofstream out("text.txt"); //write operation

         out<<st;

    return 0;
}