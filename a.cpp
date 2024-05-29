  #include<iostream>
  #include<string>
  #include<math.h>
  using namespace std;
//   void helper(string & x,int start,int end){
//         if(start>=end){
//             return;
//         }else{
//             swap(x[start],x[end]);
//             return(helper(x,start+1,end-1));
//         }
//       }

//     int reverse(int x) {
//         string s=to_string(x);
//         if(s[0]=="-"){
//             helper(x,1,s.size()-1);
//             return -*stoi(s);
//         }
//         else{
//             helper(x,0,s.size()-1)
//             return stoi(s);
//         }
        
        
//     }
    int main(){
        int x=19;
        string s= to_string(x);
        if(s[0]=='1'){
            cout<<s;
        }
        cout<<(s.size()*(10^4))<<endl;
        cout<<(10^4);
        cout<<pow(10,4);
        // cout<<s[1];
        return 0;
    }