#include<iostream>
#include<math.h>
using namespace std;
int main() {
  cout<<"For the quadratic equation Enter your A,B,C"<<endl;
  int a=1,b=10,c=-24;
  cin>>a>>b>>c;
 cout<<"your equation is "<<a<<"x^2 + "<<b<<"x + "<<c<<" = 0"<<endl;
if((a<0 && c<0 && b<0) || ((a<0)&&(b<0)) || ((a<0)&&(c<0)) || ((c<0)&&(b<0)))
{
  a=-1*a;
  b=-1*b;
  c=-1*c;
}

if((b*b-4*a*c)>=0)
{
  int q,rm,y,z;
  q=a*c;
  int pv=q;
  if(pv<0)
  {
    pv=-1*pv;
  }
  if(a<0)
  {
    a=-1*a;
  }
  if(c<0)
  {
    c=-1 * c;
  }
  for(int i=1;i<=pv;i++)
    {
      rm=pv/i;
      if((b==(rm+i)) || (b==(-rm-i)) ||(b==(rm-i)) || (b==(i-rm)))
      {    
        if(rm>=a)
        {
          for(int j=1;j<=a;j++)
            {
              if(rm%j==0)
              {
                y=j;
              }
            }
        }
        else
        {
          for(int j=1;j<=rm;j++)
            {
              if(a%j==0)
              {
                y=j;
              }
            }
        }
        if(c>=i)
        {
          for(int j=1;j<=i;j++)
            {
              if(c%j==0)
              {
                z=j;
                
              }
            }
        }
        else
        {
          for(int j=1;j<=c;j++)
            {
              if(i%j==0)
              {
                z=j;
               
              }
            }
        }        
        if(b==(rm+i))
        {
        cout<<"1st "<<-c/(float)i<<endl;
        cout<<"2nd "<<-z/(float)y<<endl;
        break;
        }
        else if(b==(-rm +(-i)))
        {
        cout<<"1st "<<c/(float)i<<endl;
        cout<<"2nd "<<z/(float)y<<endl;
          break;
        }
        else if(b==(rm-i) && (q==-(rm*i)))
        {
        cout<<"1st "<<-c/(float)i<<endl;
        cout<<"2nd "<<z/(float)y<<endl;
          break;
        }
        else if(b==(i-rm) && (q==-(rm*i)))
        {
          cout<<"1st "<<c/(float)i<<endl;
        cout<<"2nd "<<-z/(float)y<<endl;
          break;
        }       
      }  
    }
}
else
{
  cout<<" wrong "<<endl;
}    
  return 0;
}