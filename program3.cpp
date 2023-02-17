#include <iostream>
using namespace std;



int main(){


    int num1 ,num2 ,sum;


       // << this is called insersion oprator 

     cout << "Enter the value of num 01 \n";


       // >> this is called extraction oprator 
  
      cin>> num1;

     cout <<"Enter the value of num2 \n";

       cin >> num2;

       sum = num1 + num2;

        cout <<" the sum is :"<<sum ; 
    



//********************************* reference veriable****************************************************** 

float x = 444;

float & y = x;

cout<<x <<endl;

cout<<y<<endl;





    return 0;







}