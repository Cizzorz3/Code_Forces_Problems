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
int n,h,width{0},tall{0};
cin>>n>>h;
for(int i{0};i<n;i++){
	cin>>tall;
	if(tall<=h){
		width+=1;
	}
	else {
		width+=2;
	}
}
cout<<width;



    return 0;
}
