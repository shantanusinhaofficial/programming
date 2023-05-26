#include<bits/stdc++.h>
using namespace std;
int main()
{
    // last auccerance
    vector<int>v(6);
    for(int i=0;i<6;i++)
    {
        cin>>v[i];
    }
    cout<<"enter x"<<endl;
    int x;
    cin>>x;
    int ouccerance =-1;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==x)
        {
           ouccerance=i;
        }
    }
    cout<<ouccerance<<endl;

}
