#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
     set<int>s;
     int x,t;
     int s1;
     cin>>s1;
     while(s1>0)
     {
         cin>>t;
         if(t==1)
         {
             cin>>x;
             s.insert(x);
         }
         else if (t==2)
         {
            cin>>x; 
            s.erase(x);
         }
          else
         {
            cin>>x;
            cout<<(s.find(x)==s.end()?"No":"Yes")<<endl;
         }
         s1--;
     }  
    
    
    return 0;
}



