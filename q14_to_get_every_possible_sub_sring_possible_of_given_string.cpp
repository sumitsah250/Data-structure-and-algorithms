#include<iostream>
#include<vector>
#include<string>
#include<list>
using namespace std;
  list<string> sumit;

void dispaly( list<string> &lst){
    list<string> :: iterator iter = lst.begin();
    for(int i=0;i<lst.size();i++){
            cout<<*iter<<endl;
            iter++;
    }
    cout<<endl;
}

void helper(string s,string tempans,int index){
  if(s.size()== index){
    sumit.push_back(tempans);
    return;
  }else{
    helper(s,tempans+s[index],index+1);
    helper(s,tempans,index+1);
    return;
    
  }
}

int main(){
    string s;
    cout<<"enter the string:"<<endl;
    cin>>s;
    helper(s,"",0);
    sumit.sort();
    dispaly(sumit);
  
 

    return 0;
}