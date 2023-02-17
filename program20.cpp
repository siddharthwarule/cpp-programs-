//Standerd Tamplate Librery

// generic classed and function time savings

// we can be used well tested components resuse the well statested code

/*
components of stl 

containers 

algorithms

itretors 

*/

#include<array>
#include<iostream>
using namespace std; 


int main(){
    
int arr[10];

cout<<"Enter the Elements in Array"<<endl;

for(int i=0;i<10;i++){

   cout<<"Enter the "<<i<<"th elements :"<<endl;
       cin>>arr[i];

}


cout<<"The output of array is :"<<endl;
for(int i=0; i<10;i++){

    cout<<arr[i]<<endl;
}

return 0;


}