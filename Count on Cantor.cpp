#include <iostream>
using namespace std;

int main(){
	int t,n;
	cin>>t;
	for(int x=0;x<t;x++){
		cin>>n;
		int k=1,i=1,j=1;
		while(k<n){
			j++;
			k++;
			if(k==n)
			break;
			while(j>1&&k<n){
				i++;
				j--;
				k++;
			}
			if(k==n)
			break;
			i++;
			k++;
			if(k==n)
			break;
			while(i>1&&k<n){
				j++;
				i--;
				k++;
			}
			if(k==n)
			break;
		}
		 cout<<"TERM "<<n<<" IS "<<i<<"/"<<j<<endl;
	}
}
