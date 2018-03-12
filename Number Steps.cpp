#include<iostream>
using namespace std;

int main(){
	int i,j,k,x,y;
	cin>>k;
	for(i=0;i<k;++i){
		cin>>x>>y;
		if((x-y==2)||(x==y))
		{
		
		if(((x%2)==0)&&((y%2)==0))
		cout<<(x+y)<<endl;
		else if(((x%2)!=0)&&((y%2)!=0))
		cout<<(x+y-1)<<endl;
		else cout<<"No Number"<<endl;
	}
	else cout<<"No Number"<<endl;
		
	}
	return 0;
	
}

