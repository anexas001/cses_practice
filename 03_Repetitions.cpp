#include <iostream>
#include<vector>
using namespace std;

int main() {
	vector<char> arr;
	char a;
	while(cin>>a){
		arr.push_back(a);
	}
	int result=1;
	int i = 0;
	int j = i + 1;
	while(i<arr.size()){
	    int max_count=1;
	    while(arr[i]==arr[j]){
	        j++;
	        max_count++;
	    }
	    i=j;
	    j++;
	    result=max(max_count,result);
	}
	cout<<result;
	return 0;
}