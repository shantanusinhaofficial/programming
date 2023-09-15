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
void bubble_Sort(int arr[], int n) 
{
    //write your code here
    for(int i=n-1;i>=0;i--){
        int didswap=0;
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j] = temp;
                didswap = 1;
            }
        }
        if(didswap == 0){
            break;
        }
        cout<<"runs\n";
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
   bubble_Sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
