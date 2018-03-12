#include <iostream>
#include <string.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t!=0)
	{
		char arr[200];
		cin>>arr;
		int n=strlen(arr);
		int x=n/t;
		char s[x][t];
		int i,j,k=0;
		for(i=0;i<x;i++){
			if((i%2)!=0)
			{
				for(j=t-1;j>=0;j--)
				s[i][j]=arr[k++];
			}
			else{
				for(j=0;j<t;j++)
				s[i][j]=arr[k++];
			}
		}
		for(i=0;i<t;i++)
		{
			for(j=0;j<x;j++)
			cout<<s[j][i];
		}
		cout<<endl;
		cin>>t;
	}
	return 0;
}
