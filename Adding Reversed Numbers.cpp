#include <iostream>
using namespace std;

int main(){
	int N;
	cin>>N;
	for(int j=0;j<N;j++){
		int n, a, y=0, m=0, r, rr, rrr, z=0;

    cin>>n;
    while(n != 0)
    {
        r=n%10;
        m=m*10 + r;
        n /= 10;
    }
    
    cin>>a;
    while(a != 0)
    {
        rr=a%10;
        y=y*10 + rr;
        a /= 10;
    }

     int s=m+y;
	while(s != 0)
    {
        rrr=s%10;
        z=z*10 + rrr;
        s /= 10;
    }
	cout<<z<<endl;	
	}
return 0;	
}




