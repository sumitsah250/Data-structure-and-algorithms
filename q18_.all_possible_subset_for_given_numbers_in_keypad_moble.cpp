#include<iostream>
#include<vector>
#include<string>
using namespace std;
class solution{
    public:
    vector<string> keys ={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> ans;
    void(helper(int a[],int n,string temp,int i)){
        if(i == n){
            ans.push_back(temp);
            return;
        }
        for(int j=0;j<keys[a[i]].size();j++){
            helper(a,n,temp+keys[a[i]][j],i+1);
        }
        return;
    }

};

int main(){
    solution s1;
    int a[]={2,3,4};
    s1.helper(a,3,"",0);
    for(int i=0;i<s1.ans.size();i++){
        cout<<s1.ans[i]<<"  ";
    }
    return 0;
}