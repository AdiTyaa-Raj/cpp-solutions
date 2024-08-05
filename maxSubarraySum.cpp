#include <bits/stdc++.h>
using namespace std;

int maxArraySum(vector<int> arr,int n){
    if(n == 0) return 0; // if size of array is 0 then max sum will be zero
    int mxSum = arr[0],curr_sum = arr[0]; 
    // declaring current sum and max sum as first element of array

    for(int i=1;i<n;i++){
        curr_sum = max(curr_sum + arr[i],arr[i]); 
        // if the value of summation current sum and current element is less then then current element itself we will update the value of current sum
        mxSum = max(curr_sum,mxSum);
        // maximising the value of max sum
    }
    return mxSum
}

int main(){
    int n;
    cin>>n; // size of array
    vector<int> arr(n); // initilisation
    for(int i=0;i<n;i++) cin>>arr[i]; // taking input for the array
    int mxSum = maxArraySum(arr,n); // calling function to finf maximum sum
    cout<<mxSum;
}