// id and price program
#include <iostream>
using namespace std;


class Shop{

    int id[100] ;
    int price[100];
    int counter ;
    int sum =0;
    int no =0;



 public:

 void setdata(){

     cout<<"How much element you wants to enter :";
     cin>>no;


     for (int i = 1; i < no; i++)
     {

       cout<<"Enter the id of "<<i<<"element"<<endl;
       cin>>id[i];

       cout<<"Enter the price of "<<i<<"element"<<endl;
       cin>>price[i];


       counter++;
     }
     
 }

   void initCounter(){
     counter=1;
   }
 
   void setData(){
       
       cout<< "Enter the Id of "<< counter+1 <<endl;
       cin >>id[counter];

       cout<< "Enter the price of "<< counter+1 <<endl;
       cin >>price[counter];
         
         counter++;

}

   void display();
   
  void total(){

     for (int i = 1; i < counter; i++)
    {
         sum = sum + price[i];

    }
        cout<<"The total price is :" <<sum<<endl;
                   }
  
};


void Shop ::display(){

    for (int i = 1; i < counter; i++)
    {
        cout<<"The id of item " <<i<<" is "<<id[i]<<" The price of item is "<<price[i]<<endl;
       
          
    }
    
}


int main(){
   
   Shop s1;

   s1.initCounter();
   s1.setdata();
//    s1.setData();
//    s1.setData();
   s1.display();
   s1.total();

    return 0;
}