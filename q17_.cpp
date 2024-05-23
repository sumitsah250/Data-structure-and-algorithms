#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector<vector<int>> subset;

void helper(vector<int> set , int index){
if(index >= set.size()){
    subset.push_back(set);
    return;
}
for(int i=index;i<set.size();i++){
    swap(set[index],set[i]);
    helper(set,index+1);
    swap(set[index],set[i]);
}
return;

}

int main(){
    vector<int> set;
    set.push_back(1);
    set.push_back(2);
    set.push_back(3);
    set.push_back(4);
    helper(set,0);
    for(int i=0;i<subset.size();i++){
        for(int j=0;j<subset[i].size();j++){
            cout<<subset[i][j];
        }
        cout<<endl;
    }
    return 0;
}