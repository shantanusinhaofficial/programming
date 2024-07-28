#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;
int findunique(vector<int> &arr){
    unordered_map<int,int>mpp;
    for(int nums : arr){
        mpp[nums]++;
    }
    for(int nums : arr){
        if(mpp[nums]==1){
            return nums;
        }
    }
    return -1;
}

int main() {
    int n;
    cin>>n;
vector<int>arr(n);
n = arr.size();
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int unique = findunique(arr);
if(unique != -1){
    cout<< unique<<endl;
}
else{
    cout<<"no unique element"<<endl;
}
return 0;
}
