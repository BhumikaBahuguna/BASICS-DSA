#include<bits/stdc++.h>
using namespace std;
int removeduplicates(vector<int>&nums){
    if(nums.empty()) return 0;
    int i=1;
    for(int j=1;j<nums.size();j++){
        if(nums[j]!=nums[i-1]){
            nums[i]=nums[j];
            i++;
        }
    }
    return i;
}
int main(){
    vector<int>nums={1,1,2,2,3,4,4,5};
    int newlength=removeduplicates(nums);
    cout<<"New length after removing duplicates: "<<newlength<<endl;
    cout<<"Array after removing duplicates: ";
    for(int i=0;i<newlength;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}