//Array of objects 

#include <iostream>
#include <string>
using namespace std;

class Employee
{
  
  static int total;
  int id ;
 int salary;
  string name;
 
 
 static void totalSalary();

  public:

   void setName(){
      
      cout <<"Enter the name of employee \n";
      cin >>name;

   }

  void setId(){

    //  salary = 122;
    cout << "Enter the id of employee"<<endl;
    cin>>id;
  }

  

  void setSalary(){

    cout <<"Enter the salary of employee"<<endl;
    cin >>salary;

  }


  void getId(){

    cout << " The id of employee is \n"<<id <<endl;
    
  }


   void getName(){
      
      cout <<" The name of employee is \n"<<name<<endl;

   }


  void getSalary(){
    cout <<"The salary of employee is \n"<<salary<<endl;
    

  }
  

};




int main(){

// Employee harry , sid , rohan , gura ;
// sid.getId();
// sid.getSalary();

Employee fb[5];


for ( int i = 0; i < 5; i++)
{
    fb[i].setId();
    fb[i].setName();
    fb[i].setSalary();

    fb[i].getId();
    fb[i].getName();
    fb[i].getSalary();

    
}

return 0;
}