#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    //method 1
    // a= a-b;
    // b=a+b;
    // a=b-a;
    // cout<<a<<" "<<b<<endl;
    // method 2
    //   a= a^b;
    //   b= a^b;
    //   a = a^b;
    // method 3
    int temp = a;
    a=b;
    b=temp;
         cout<<a<<" "<<b<<endl;
    return 0;
}
