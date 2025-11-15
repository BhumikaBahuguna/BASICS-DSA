#include<bits/stdc++.h>
using namespace std;
bool ismonotonic(vector<int>&nums){
    bool increase=true,decrease=true;
    for(int i=0;i<nums.size()-1;i++){
        if(nums[i]>nums[i+1]){
            increase=false;
        }
        if(nums[i]<nums[i+1]){
            decrease=false;
        }
    }
    return increase || decrease;
}
int main(){
    vector<int>nums={1,2,0,3};
    cout<<(ismonotonic(nums) ? "true" :"false");
    return 0;
}