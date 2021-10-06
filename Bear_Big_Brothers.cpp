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
	int sum{0} , x{0},m{0};
	int arr[5][5];
	for(int i{0};i<5;i++){
		for(int j{0};j<5;j++){
			cin>>arr[i][j];
			if(arr[i][j]==1){
				x=2-i;
				x=abs(x);
				m=2-j;
				m=abs(m);
			}
		}



	}
sum=m+x;
cout<<sum;





    return 0;
}
