#include <iostream>
#include <string.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	char c[10];
	while(t--){
		int k=0;
		cin>>c;
		int l=strlen(c);
		for(int i=0;i<l;i++){
			if(c[i]!=c[l-1-i]){
				k=0;
				break;
			}
			else if(i==l-1-i||i+1==l-1-i){
				k=1;
				break;
			}
		}
		if(k==1)
		cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
