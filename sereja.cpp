#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int n{0},x{0},y{0},no{0},m{1},f{0},total{0};
	cin>>n;
	vector<int>v;
	for(int i{0};i<n;i++){
		cin>>no;
		v.push_back(no);
		total+=no;
	}
for(int z{0};z<n;z++){
if(x+y==total){
		break;
	}
if(n>=m && n>f){
	if(v[f]>v[n-m]){
		x+=v[f];
		f++;
	}
	else{
		if(n>=m){
			
		x+=v[n-m];
		m++;
		}
	}
	}

if(x+y==total){
		break;
	}
if(n>=m && n>f){
	if(v[f]>=v[n-m]){
		y+=v[f];
		f++;
	}
	else{
		if(n>=m){
		y+=v[n-m];
		m++;
		}
	}
	}
	}

	


cout<<x<<" "<<y<<endl;

	return 0;
}
