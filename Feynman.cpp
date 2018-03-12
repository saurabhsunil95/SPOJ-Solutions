#include <iostream>
using namespace std;

int main(){
int n,i=1;
cin>>n;

while(n!=0)
{
int sum=0;
if(n!=0)
{
for(i=1;i<=n;++i)
{
	sum=(sum+(i*i));
	
}
cout<<sum<<endl;
}
cin>>n;
}
return 0;
}
