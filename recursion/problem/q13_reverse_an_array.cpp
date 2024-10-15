#include<iostream>
#include<string>
using namespace std;
int rev(string & sumit,int start,int end){
    if(start>=end){
        return 1;
    }
    else{
        char temp;
        temp=sumit[start];
        sumit[start]=sumit[end];
        sumit[end]=temp;
        return(rev(sumit,start+1,end-1));
    }
}
int main(){
    string sumit;
    cout<<"enter the string to be checked:"<<endl;
    cin>>sumit;
    rev(sumit,0,sumit.size()-1);
    cout<<sumit;
    return 0;
}