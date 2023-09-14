
#include <iostream>
#include<map>
using namespace std;


int main() {
    cout<<"enter size";
 int n;
 cin>>n;
 int arr[n];
 cout<<"enter the array";
 for(int i=0;i<n;i++){
     
     cin>>arr[i];
 }
 map<int,int>map;
 for(int i=0;i<n;i++){
     map[arr[i]]++;
 }
 for(auto it : map){
     cout<<it.first<<"->"<<it.second<<endl;
 }
 int q;
 cin>>q;
 while(q--){
     cout<<"enter the number"
     int number;
     cin>> number;
     cout<<map[number]<<endl;
 }
    return 0;
}
