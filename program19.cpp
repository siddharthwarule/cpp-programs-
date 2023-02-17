
#include <iostream>
#include <fstream>
#include <string>

using namespace std ;

int main() {

  ofstream out ;
 
  string s1="";

  cout<<"Enter the string is :  "<<endl;
  cin>>s1;

  out.open("sample.txt");
  out<<"This is me sid The ";
  out<<s1;

//  getline(out,s1);
 
  out.close();
  
  string s2 ,s3,s4;


  ifstream in;

  in.open("sample.txt");
  
  in>>s2>>s3>>s4;


   

 getline(in,s2);


  
  while(in.eof()==0){

    getline(in,s2);
    cout<<s2<<endl;
  }

  cout<<"the string is is "<<s2;

//   cout<<"the string is is "<<s2<<" "<<s3<<" "<<s4" "<<endl;

  in.close();
    return 0;
}