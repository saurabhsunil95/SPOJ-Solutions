#include<boost/multiprecision/cpp_int.hpp>
#include<iostream>
namespace mp=boost::multiprecision;
using namespace std;

int main(){
	unsigned int x,y,n,k,c;
	mp::cpp_int f;
	cin>>y;
	int arr[y];
	for(x=0;x<y;++x)
	{
		cin>>n;
		f=1;
		for(k=1;k<=n;++k)
		{
			f=f*k;
		}
       cout<<f<<endl;
	}
        return 0;
}
