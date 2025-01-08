#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string,int> m;
  //pair insertion type
    pair<string,int> p= make_pair("sumit",1);
    m.insert(p);

    pair<string,int> p2("aadi",3);
    m.insert(p2);
    
    m["sumit"]=2;
    //pair insertion type


    //searching
    cout<< m["sumit"]<<endl; //if sumit dose't exist it creates new entry with sumit and assign zero to it 
    //where as
    cout<< m.at("sumit")<<endl; //if sumit dose't exist it throw an exception with key not found

    cout<<m.size();
    //removing the element
    m.erase("aadi");

    cout<<m.size()<<endl;

    //fiding if the element is or is not in list  
    cout<<m.count("love")<<endl;   //0 if doesnt exist and 1 if exist
      cout<<"the count is "<<m.count("aadi")<<endl; 


    //first traversing method
    for( auto i:m){
      cout<<i.first<<" "<<i.second<<endl;
    }
    //

    // second traversing method
    unordered_map<string,int> :: iterator it = m.begin();
    while(it!=m.end()){
      cout<<it->first<<" "<<it->second<<endl;
      it++;
    }
  int j=0;
    for(int i=0;i<10;++i){
      ++j;
      cout<<j;

    }



    return 0;
}