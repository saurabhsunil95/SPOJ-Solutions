#include<iostream>
#include<math.h>
using namespace std;
 
int main(){
	int s,j;
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		long long unsigned a,b;
		cin>>a;
		cin>>b;
		if(a==1||b==0)
		{
			s=1;
			cout<<s<<endl;
		}
		else
		{
		if(b%4==0)
		cout<<((a*a*a*a)%10)<<endl;
		else{
			
			cout<<int (pow(a,b%4))%10<<endl;
			}
		}
		
	}
        return 0;
} 
