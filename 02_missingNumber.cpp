#include <iostream>
#include<vector>
using namespace std;

int main() {
	vector<long> arr;
	long long a,b;
	cin>>b;
	while(cin>>a){
		arr.push_back(a);
	}
	long long expected = (b*(b+1))/2;
	long long result=0;
	for(int i=0; i<arr.size();i++){
		result=result+arr[i];
	}
	cout<<expected-result;
	return 0;
}

