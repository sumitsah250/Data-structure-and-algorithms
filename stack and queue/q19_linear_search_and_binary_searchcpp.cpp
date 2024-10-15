#include<iostream>
#include<vector>
using namespace std;
int ans=0;
int linearsearch(vector<int> a,int num){
    for(int i=0;i<a.size();i++){
        if(a[i]==num){
            return i;
        }
    }
    return -1;
}

void binarysearch(vector<int> a,int num,int startindex,int endindex){
    if(a[(startindex+endindex)/2]==num){
        ans=(startindex+endindex)/2;
        return;
    }
    else if(num<(startindex+endindex)/2){
        binarysearch(a,num,startindex,(startindex+endindex)/2);
    }
    else{
        binarysearch(a,num,(startindex+endindex)/2,endindex);
    }
}


int main(){
    vector<int> a;
    int num;
    a={1,2,3,4,5,6,7,8,9};
    cout<<"enter the number you want to search"<<endl;
    cin>>num;
    // cout<<"the position is "<<linearsearch(a,num);
    binarysearch(a,num,0,a.size());
    cout<<endl<<ans;
    return 0;
}