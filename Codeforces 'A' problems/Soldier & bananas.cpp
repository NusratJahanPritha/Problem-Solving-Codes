#include<iostream>
#include<string>
using namespace std;
int main()
{
int k,n,w;
  cin>>k>>n>>w;
  int sum=0;
  for(int i=0; i<=w; i++)
  {
          sum+=i;
  }
int d=(k*sum)-n;
if(d<0)
{
        cout<<"0";
}
else{
        cout<<d;
}
}
