#include <iostream>
using namespace std;

int main(){
	long long x,y;
	char c;
	int t;
	cin>>t;
	while(t--){
		cout<<endl;
		long long int sum=0;
			cin>>x;
			cin>>c;
			sum=x;
		while(1){
			if(c==61){
				break;
			}
			else{
				cin>>y;
				if(c==42)
				sum=sum*y;
				else if(c==43)
				sum=sum+y;
				else if(c==45)
				sum=sum-y;
				else if(c==47)
				sum=sum/y;
				cin>>c;	
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
