#include <iostream>
using namespace std;

/*
AB^2+AC^2=(2r)^2
AB^2=4r^2-AC^2
s=4r^2-AC^2+AC
maximu value of a quad. eq is x=-b/2a i.e., AC=-b/2a=-1/(2*(-2))=1/2
putting value of AC in above eq of s
s=4r^2-(1/2)^2+(1/2)
s=4r^2+(1/4)
*/

int main(){
	int t;
	long long r;
	cin>>t;
	for(int i=1;i<=t;i++){
		cin>>r;
		double q=(double)(4*r*r);
		double s=q+0.25;
		printf("Case %d: %.2lf\n",i,s);
	}
	return 0;
}

