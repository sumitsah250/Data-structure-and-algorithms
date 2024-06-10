#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        vector<char> vec;

        for(int i=0;i<s.size();i++){
            if(s[i] =='(' || s[i] =='{' || s[i] =='[' ){
                vec.push_back(s[i]);
            }
            if(vec[vec.size()-1] == '('  &&  s[i]==')'){
                vec.pop_back();
            }
            if(vec[vec.size()-1] == '{'  &&  s[i]=='}'){
                vec.pop_back();
            }
            if(vec[vec.size()-1] == '['  &&  s[i]==']'){
                vec.pop_back();
            }

        }
        if(vec.size()==0){
            return true;
        }else{
            return false;
        }
        
    }
};
int main(){

    Solution s1;
    cout<<s1.isValid("[{()}]");
    
    return 0;
}



// class Solution {
// public:
//     bool isValid(string s) {
//         int index1=0;
//         int index2=0;
//         int index3=0;
//         for(int i=0;i<s.size();i++){
//             if(s[i]=='(' ){     
//                  index1++;
//             }else if(s[i]==')'){
//                 index1--;
//             }

//             if(s[i]=='{' ){
//                 index2++;
//             }
//             else if(s[i]=='}'){
//                 index2--;
//             }
//             if(s[i]=='[' ){
//                 index3++;
//             }
//             else if(s[i]==']'){
//                 index3--;
//             }


//         }
//         if(index1==0  && index2==0 && index3==0){
//             return true;
//         }else{
//             return false;
//         }
        
//     }
// };