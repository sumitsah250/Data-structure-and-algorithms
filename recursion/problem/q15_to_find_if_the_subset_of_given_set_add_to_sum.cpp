#include<iostream>
#include<vector>
using namespace std;

  bool helper(vector<int> data ,int tempsum,int index,int sum){
    
        if(tempsum==sum){
            return true;
        }
        if(index>=data.size()){
            return false;
        }
       bool call1= helper(data,tempsum+data[index],index+1,sum);
       bool call2 = helper(data,tempsum,index+1,sum);
       return call1 ||call2;
  }

int main(){
    vector<int> dataset;
    int n,num;

    cout<<"enter how many values you want to save";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter the number";cin>>num;dataset.push_back(num);
    }
    if(helper(dataset,0,0,9)){
        cout<<"their exist a subset"<<endl;
    }else{
        cout<<"no sub set exists"<<endl;
    }
    return 0;
}