
/*

by default in class in c++ every thing is the private 

class 

clases are the tamplate which having the propertyes and metrhods which we can be acess through
making its intance of object

object 

objects are real entity which is cal hold the values with the help of objects we can accesing the functionality of classews


*/

#include <iostream>
#include <string>
using namespace std;



// class creation in CPP
class binary{
 
 string s1 ;

 public:
 
 void read(){

   cin>>s1;   

 }

 void chk_bin(){

    for (int i = 0; i < s1.length(); i++)
    {
        if (s1.at(i)!='0' && s1.at(i)!='1')
        {
            cout<<"Incorrect binery format";
              exit(0);
        }
        
    }
 }

 void makeBinOne(){

   for (int i = 0; i < s1.length(); i++)
   {
     
      if (s1.at(i)=='0')
      {
        s1.at(i) = '1';
      }
      if (s1.at(i)=='1')
      {
        s1.at(i)='1';
      }
      
         }

 }
    void display();    

};

void binary ::display(){

for (int i = 0; i < s1.length(); i++)
{

cout<<s1.at(i);

}

cout<<endl;

}


int main(){

// object creation in c++
binary  b1;

b1.read();
b1.chk_bin();
b1.display();
b1.makeBinOne();
b1.display();


return 0;
}