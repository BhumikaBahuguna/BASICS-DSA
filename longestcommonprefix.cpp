#include<bits/stdc++.h>
using namespace std;
string longestcommonprefix(vector<string>&strs){
    if(strs.empty()) return "";
    sort(strs.begin(),strs.end());
    string first=strs[0];
    string last=strs[strs.size()-1];
    string result="";
    for(int i=0;i<first.size();i++){
        if(i>=last.size() ||first[i]!=last[i]){
            break;
        }
        result+=first[i];
    }
    return result;
}
int main(){
    vector<string>strs={"floower","floow","flooight"};
    cout<<"Longest Common Prefix: "<<longestcommonprefix(strs);
    return 0;
}