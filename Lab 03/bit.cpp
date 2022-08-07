//Codeforce problem no - 282A
//Codeforce problem name - bit++
#include<iostream>
#include<string>
using namespace std;
int main()
{
int num1,value=0,i,j; 
char str1[4];
cin>>num1;
for(i=0;i<num1;i++) 
{ 
cin>>str1; 
for(j=0;j<3;j++)
{ 
if(str1[j]!='\0'&&str1[j]=='+')
{ 
value++; 
break; 
} 
else if(str1[j]!='\0'&&str1[j]=='-') 
{ 
value--; 
break; 
} 
} 
}
cout<<value<<endl;
    return 0;
}