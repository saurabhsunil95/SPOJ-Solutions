#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int a,d;
	while(1){
		cin>>a>>d;
		if(a==0&&d==0)
		break;
		else {
			int arr1[a],arr2[d];
			for(int i=0;i<a;i++)
			cin>>arr1[i];
			for(int j=0;j<d;j++)
			cin>>arr2[j];
			sort(arr1,arr1+a);
			sort(arr2,arr2+d);
			if(arr2[0]<=arr1[0]&&arr2[1]<=arr1[0])
			cout<<"N"<<endl;
			else cout<<"Y"<<endl;	
		}
	}
	return 0;
}
