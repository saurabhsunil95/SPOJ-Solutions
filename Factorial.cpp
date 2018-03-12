#include<iostream>
using namespace std;

int main(){
	int y,n;
	cin>>y;
	for(int x=0;x<y;++x)
	{
		cin>>n;
		int a=(n/5);
		int b=(n/25);
		int c=(n/125);
		int d=(n/625);
		int e=(n/3125);
		int f=(n/15625);
		int g=(n/78125);
		int h=(n/390625);
		int i=(n/1953125);
		int j=(n/9765625);
		int k=(n/48828125);
		int l=(n/244140625);
		int s=a+b+c+d+e+f+g+h+i+j+k+l;
		cout<<s<<endl;
	}
}


