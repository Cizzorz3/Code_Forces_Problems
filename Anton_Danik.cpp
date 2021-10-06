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
	int a ,b,counter{0};
	cin>>a>>b;
	for(int i{0};i<10;i++){
		if(b>=a){
			a*=3;
			b*=2;
			counter+=1;
		}
	}
cout<<counter;


    return 0;
}
