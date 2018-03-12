#include <iostream>
using namespace std;

int main(){
	int t;
	long long int x,y,sum,a,d,c,n;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>x>>y>>sum;
		c=x+y;
		n=(2*sum)/(x+y);
		d=(y-x)/(n-5);
		a=x-(2*d);
		cout<<n<<endl;
		for(int j=1;j<=n;j++){
			cout<<a<<" ";
			a=a+d;
		}
		cout<<endl;
	}
	return 0;
}
