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



    //  this is use for right

int main(){

       
        //  string st = " Hallow sid good morning";
         string st2 ="";


         ifstream in("./text.txt") ;

         ofstream out("text2.txt"); //write operation


        //  in>>st2; 

        getline(in,st2);

           cout <<"The output is :"<<st2<<endl;

        //    cin >>st;
                      
         out<<st2;

    return 0;
}