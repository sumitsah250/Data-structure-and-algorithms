#include<iostream>
using namespace std;
int stairs(int n){
    if(n==1 ||n== 2){
        return n;
    }else return(stairs(n-1)+stairs(n-2));

}
  // given condition that no more than 2 steps can be taken at a time
int main(){
    int n;
    cout<<"enter the number of stairs:";cin>>n;
    cout<<endl<<"the number of possible solution is:"<<stairs(n);

}