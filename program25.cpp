#include <iostream>
#include <string>
#include <functional>
#include <algorithm>

using namespace std ;

int main(){

   // function in objects 
   
//    object act as function 
   int arr[]={1,432,3,4,34,6,743,434,9};

               sort(arr,arr+9);
   
   // this is the functors 
       sort(arr ,arr+9,greater<int>());



               for(int i =0; i<9;i++){
      
                  cout<<arr[i]<<endl;

               }


    return 0;
}