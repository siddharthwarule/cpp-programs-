
//multilavel inheritance 

#include <iostream>
using namespace std;

class student{
 
 protected:
  
  int rollNo;

  public:

   void setRollNo(int);

   void getRollNo();

};

void student ::setRollNo(int rn){

rollNo = rn;

}

void student::getRollNo(){

    cout<<"The roll number is :"<<rollNo<<endl;

}


class exam: public student {

 protected :
   
   float phisics ;
   float maths ;

   public :

   void setMarks(int ,int);
   void getMrks();

};


void exam:: setMarks(int p,int m ){

    phisics =p;
    maths = m;

}

void exam ::getMrks(){

       
    cout <<"Marks Of MATHS :"<<maths<<endl;
    cout <<"Marks Of PHISICS :"<<phisics<<endl;

}




class result : public exam{

protected:

float percentage;

public:

void setPercent();

void display();

};


void result :: display(){


    getRollNo();
    getMrks();
    cout <<"Your Percentage is :"<<percentage<<endl;
    

}

void result :: setPercent(){
    // setMarks(20,50);

    percentage = ((maths+phisics)/2);


}
    


int main(){
  
  result sid;

  sid.setRollNo(101);
  sid.setMarks(90,99);
  sid.display();
  

  

 return 0;
}