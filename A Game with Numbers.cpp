#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	long long x;
	cin>>x;
	if (x%10==0)
	{
		cout<<"2";
	}
	else {
		cout<<"1"<<endl;
		int arr[10]={0};
		int i=0;
		while(x!=0){
			arr[i]=x%10;
			x=x/10;
			i++;
		}
		sort(arr,arr+10);
		cout<<arr[9];
	}
	return 0;
}
