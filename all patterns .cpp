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
    // void print7(int n){
//  for(int i=0;i<n;i++){
//      for(int j=0;j<n-i-1;j++){
//          cout<<" ";
//      }
//      for(int j=0;j<2*i-1;j++){
//          cout<<"*";
//      }
//       for(int j=0;j<n-i-1;j++){
//          cout<<" ";
//      }
//      cout<<endl;
//  }
// }
// void print8(int n){
//  for(int i=0;i<n;i++){
//      for(int j=0;j<1;j++){
//          cout<<" ";
//      }
//      for(int j=0;j<2*n-(2*i+1);j++){
//          cout<<"*";
//      }
//       for(int j=0;j<1;j++){
//          cout<<" ";
//      }
//      cout<<endl;
//  }
// }
// void print9(int n){
//   for(int i=0;i<=2*n-1;i++){
//       int star=i;
//       if(i>n) star=2*n-i;
//       for(int j=1;j<=star;j++){
//           cout<< "*";
//       }
//       cout<<endl;
//   }
// }
// void print10(int n){
//     for(int i=0;i<n;i++){
//         int start=1;
//         if(i%2==0) start =1;
//         else start=0;
//         for(int j=0;j<=i;j++){
//             cout<<start;
//             start=1-start;
//         }
//         cout<<endl;
//     }

// void print11(int n)
// {
//     int space=2*(n-1);
//     for(int i=0;i<n;i++)
//     {
//         //numbers
//         for(int j=1;j<=i;j++)
//         {
//             cout<<j;
//         }
        
//         // space
//                      for(int j=i;j<=space;j++)
//                      {
//             cout<<j;
      
//         }
        
//         //numbers
//              for(int j=i;j<=1;j++){
//             cout<<j;
//              }
//              cout<<endl;
//              space-=2;
//     }
// }
// void print12(int n){
//     int num=1;
//     for(int i=1;i<n;i++){
//         for(int j=1;j<+i;j++){
//             cout<< num<<" ";
//             num=num+1;
//         }
//         cout<<endl;
//     }
// }
// void print13(int n){
//     for(char ch ='A';ch<= 'A'+1;ch++){
//         cout<<ch<<" ";
//     }
//     cout<<endl;
// }
// void print14(int n){
//     for(int i=1;i<n;i++){
//       for(char ch ='A';ch<= 'A'+(n-i-1);ch++){
//         cout<<ch<<" ";
//       }
//     cout<<endl;
// }
// }
void print15(int n){
         for(int i=1;i<n;i++){
             char ch='A'+i;
       for(int j=1;j<=i;j++) {
         cout<<ch<<" ";
       }
     cout<<endl;
}
i
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
