//codeforce problem no - 231A
//problem name - Team
#include<iostream>
using namespace std;
int main()
{
int n,i,p,v,t,count=0;
cin>>n;
for(i=0;i<n;i++)
{
cin>>p>>v>>t;
if(p+v+t>=2)
 {
   count++;
 }
}
cout<<count<<endl;
return 0;
}