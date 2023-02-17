//destructor in c++


#include <iostream>
using namespace std;

class num 
{

int a , b , count=0;

public :

  num(){
 
   count++;
  cout << "this is the time when constructor is called "<<count<<endl;


  }

// destructors initialization 

  ~num(){

     count--;
    cout<<"time when the destructor is called "<<count<<endl;


  }
   



  
 void printNum(){
 
 cout<< "your number is :"<<a <<" + "<<b<<"i"<<endl;

 }


};




int main(){
    
    // implicite call 

      
     num c1 ;

     c1.printNum();


    //  c1.printNum();
    
     //explicite call

    return 0;
}

