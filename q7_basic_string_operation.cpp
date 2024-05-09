#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
   
    string sumit="sumit";
    sumit.erase(sumit.begin()+3);
    sumit.insert(1,"sumit");
    sumit.push_back('x');
    sumit.push_back('x');
    sumit.pop_back();

  
    cout<<sumit;
    
    
    for(int i=0;i<sumit.size();i++){
        cout<<endl<<sumit[i];
    }
      cout<<endl<<sumit.at(sumit.size()-1); 
       cout<<endl<<sumit.at(sumit.size()-1);
    
    

 
    return 0;
}