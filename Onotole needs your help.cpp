#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	sort(arr,arr+n);
	int j=0;
	while(1){
		if(arr[j]!=arr[j+1]){
			printf("%d",arr[j]);
			break;
		}
		j=j+2;
	}
	return 0;
}
