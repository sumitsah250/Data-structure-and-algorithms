#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> subset;

void helper(vector<int> set,int index){
    int temp;
    if(index>=set.size()){
        subset.push_back(set);
        return;
    }
    // else{
    //     for(index;index<set.size();index++){
    //         for(int i=index;i<set.size();i++){
    //         temp=set[index];
    //         set[index]=set[index+i];
    //         set[index+i]=temp;
    //         return helper(set,index+i);
    //     }
    //     }
    // }

    for(int j=index;j<set.size();j++){
        swap(set[index],set[j]);
        helper(set,index+1);
        //backtracking
        swap(set[index],set[j]);
    }
    return;
}


int main(){
    vector<int> set;
    int n,num;
    cout<<"enter how many elements you want to enter:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter element"<<i<<endl;
        cin>>num;
        set.push_back(num);
    }
    helper(set,0);
    for(int i=0;i<subset.size();i++){
        for(int j=0;j<subset[i].size();j++){
            cout<<subset[i][j];
        }
        cout<<endl;
    }
    return 0;
}