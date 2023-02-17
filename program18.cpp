
#include <iostream>
#include <fstream>
#include <string.h>

using namespace std ;


int main() {
 

       ofstream hout("./sample.txt");
       string name ;


       cout<<"Enter your name "<<endl;
       cin>>name;

  
         hout<<name;

        //  getline(hout,name);


         hout.close();

         ifstream in("sample.txt");
           string s2;
       
          in>>s2;

         cout <<"Your name is the :"<<s2<<endl;
         

    


    hout.close();       

    return 0;
}