#include <iostream>
#include<vector>
using namespace std;

int main() {
	vector<int> arr;
	long long a;
	long long size;
	cin>>size;
	while(cin>>a){
		arr.push_back(a);
	}
	long move=0;
	for(int i=1; i<size;i++){
	    if(arr[i]<arr[i-1]){
	       move += arr[i-1]-arr[i];
	       arr[i] += arr[i-1]-arr[i];
	    }
	}
	cout<<move;
	
	return 0;
}