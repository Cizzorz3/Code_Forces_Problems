#include<bits/stdc++.h>
using namespace std;

int main(){

int n{0},cnt{0},x{0},y{0},z{0},no{0};

cin>>n;

int arr[n];
for(int i{0};i<n;i++){
	cin>>no;
	arr[i]=no;
}
for(int f{0};f<n;f++){
	if(arr[f]==-1){
		x=arr[f];
	}
	else if(arr[f]>-1){
		y+=arr[f];
	}
	if(x==-1){
		if(y==0){
			z+=1;
			x=0;
		}
		else if(y!=0){
			if(x+y==0){
				z+=0;
				y-=1;
				x=0;
			}
			else if(x+y>0){
				z+=0;
				x=0;
				y-=1;
			}	
		}
	}

}
cout<<z<<'\n';











}
