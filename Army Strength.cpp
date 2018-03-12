#include <iostream>
#include<algorithm>
using namespace std;

int main(){
	int t;
	cin>>t;
	int arr1[100000];
	int arr2[100000];
	int x,y;
	for(int a=0;a<t;a++){
		cin>>x>>y;
		for(int b=0;b<x;b++)
		cin>>arr1[b];
		sort(arr1,arr1+x);
		for(int c=0;c<y;c++)
		cin>>arr2[c];
		sort(arr2,arr2+y);
	
		if(arr1[x-1]>=arr2[y-1])
		cout<<"Godzilla"<<endl;
		else cout<<"MechaGodzilla"<<endl;
	}
}
