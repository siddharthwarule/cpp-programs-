
#include <iostream>
#include <map>
#include <string>
using namespace std;


int main(){

    map <string , int> marks;

    marks["sid"]=90;      
    marks["guru"]=80;       
    marks["mithilesh"]=83;       
    marks["Ankit"]=95;       


     marks.insert({{"Aadi",78},{"Rushi",80},{"ajinkya",88},{"aniket",90}});

     marks.insert({{"prasad",89},{"shiva",88}});

     map<string,int> ::iterator itr;

     itr = marks.begin();

     for(int i =0; i <marks.size();i++){
            
           cout<<(*itr).first<<" -> "<<(*itr).second<<endl;

           itr++;
          
     }


    return 0;


}