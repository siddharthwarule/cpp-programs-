// vector 

//resizable array

#include <iostream>
#include <vector>
using namespace std;

    template <class T>

      void display(vector<T> &v){
for(int i=0 ;i<v.size();i++ ) {
         
         cout<<v[i]<<endl;
            //   cout<<vec2.pop_back(elememts)<<endl;

     }      
      }
     



int main(){

    vector<int> vec1 ; //simple 0 vectors 


    vector <char> vec2 ;



    // vector<int>vec2(4);// characters vectors 

     vector <int>:: iterator itr = vec1.begin();

     vector<char>::iterator itr2 = vec2.begin();

     vec2.insert(itr2,10,'s');


        vec1.insert(itr,10,555);

          

        // Tamplate <class T>

    vector <int> vec3;

 int elememts;
        // add elements in vector


    //   cout<<"Enter the charater in the Vectors :";
    //  for(int i=0 ; i<5;i++ ) {
         
    //     cin>>vec2[i];

    //     // vec2.push_back(elememts);

    //  }      

       
       display(vec1);
       display(vec2);

    return 0;
}

