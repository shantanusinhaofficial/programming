  #include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[],int n){
    for(int i=0;i<n-2;i++){
      int mini = 1;
      for(int j=i;j<n-2;j++){
          if(arr[j]<arr[mini]){
              mini=j;
          }
      }
      int temp=arr[mini];
      arr[mini]=arr[i];
      arr[i]=temp;
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    selection_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
