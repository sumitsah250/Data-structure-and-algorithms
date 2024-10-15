#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> sub;

void subset(vector<int> set,vector<int>tempset,int index){
    if(index>=set.size()){
        sub.push_back(tempset);
        return;
    }
    else{
        subset(set,tempset,index+1);
        tempset.push_back(set[index]);
        subset(set,tempset,index+1);
        return;
    }
}


int main(){
    int n,num;
    vector<int> set,tempset;
    cout<<"how many number you are going to enter"<<endl;cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter the numer:";cin>>num;
        set.push_back(num);
    }
    subset(set,tempset,0);
    for(int i=0;i<sub.size();i++){
        for(int j=0;j<sub[i].size();j++){
            cout<<sub[i][j];
        }
        cout<<endl;
    }

}