#include<iostream>
using namespace std;
int fact(int n){
    if(n==1 || n==0){
        return 1;
    }else{
        return(fact(n-1)*n);
    }
}
int main(){
    cout<<fact(5);  // it has O(n) time and space complexity
    return 0;
}
