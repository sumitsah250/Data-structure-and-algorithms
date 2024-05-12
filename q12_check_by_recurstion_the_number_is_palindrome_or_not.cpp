#include<iostream>
#include<string>
using namespace std;
int palindrome_check(string sumit,int start,int end){
    if(start>=end){
        return 1;
    }
    if(sumit[start] != sumit[end]){
        return 0;
    }else{
        return(palindrome_check(sumit,start+1,end-1));
    }
    
}





int main(){
    string sumit;
    cout<<"enter the string to be checked:"<<endl;
    cin>>sumit;
    // cout<<sumit.size();   this gives the number of elements on it
    if(palindrome_check(sumit,0,sumit.size()-1)==1){
        cout<<"the string given is palindrome";
    }else{
        cout<<"the string is not palindrome";
    }
    return 0;

}