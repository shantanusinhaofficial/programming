#include<bits/stdc++.h>
using namespace std;

    // int row,cols;
    //vcin>>row>>cols;
    // void print1(int n){
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         cout<<"* ";
    //     }
    //   cout<<endl;
    // }
    // }

// void print2(int n) {
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j <+ i; j++) {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }
    //     *
    // *    *
    // void pattern3(int n){
    //     for(int i=1;i<=n;i++)
    //     {
    //         for(int j=1;j<+i;j++){
    //          cout<<j<<" ";
    //         }
    //         cout<<endl;
    //     }
    // }
    // void print4(int n)
    // {
    //     for(int i=1;i<=n;i++){
    //         for(int j=1;j<=i;j++){
    //             cout<< i <<" ";
    //         }
    //         cout<<endl;
    //     }
        
    // }\
    
    void print5(int n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i+1){
                cout<<"* ";
            }
            cout<<endl;
        }
    }
        void print6(int n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i+1){
                cout<<n;
            }
            cout<<endl;
        }
    }
    
    int main()
    {
        int n;
        cin>>n;
        // // print1(n);
        // print2(n);
        // pattern3(n);
        // print4(n);
        // print5(n);
        print6(n);
    }
