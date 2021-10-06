#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <cctype>
using namespace std;
int main() {
	int n;
	cin>>n;
	vector<int>vec;
	int k;
	for(int i{0};i<n;i++){
		cin>>k;
		vec.push_back(k);
	}
	sort(vec.begin(),vec.end());
	for(int i{0};i<n;i++){
		cout<<vec[i]<<" ";
	}




    return 0;
}
//cin>>arr[i];
		// for(int j{0};j<n-1;j++){
		// 	if(arr[i]<arr[j+1]){
		// 		min=arr[j+1];
		// 		arr[j+1]=arr[i];
		// 		arr[i]=min;

		// }
		// 	}