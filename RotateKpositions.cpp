#include <bits/stdc++.h>
using namespace std;

void RotateArray(vector<int> &nums,int n,int k){
    if(n == 0 || k <= 0) return nums; // for empty array or negative k value

    k = k%n; // handle the case when k is greater then n 

    reverse(nums.begin(),nums.end()); // reversing the whole array
    reverse(nums.begin(),nums.begin() + k); // reversing the array till kth element
    reverse(nums.begin() + k, nums.end()); // reversing the the last n-k elements

}

int main(){
    int n,k;
    cin>>n>>k; // size of array
    vector<int> arr(n); // initilisation of array
    for(int i=0;i<n;i++) cin>>arr[i]; // taking input for the array
    RotateArray(arr,n,k); // rotated array
    for(auto it:arr) cout<<it<<" "; //printing the array

}