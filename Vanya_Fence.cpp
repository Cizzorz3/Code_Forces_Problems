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
int n ,Anton{0} ,Danik{0} ;
string s{""};
char c {'a'};
cin>>n;
for(int i{0};i<n;i++){
	cin>>c;
	s+=c;
}


for(auto c :s){
	if(c=='D'){
		Danik+=1;
	}
	else if(c=='A'){
		Anton+=1;
	}
}

if(Anton>Danik){
	cout<<"Anton";
}
else if(Anton<Danik){
	cout<<"Danik";
}
else{
	cout<<"Friendship";
}


    return 0;
}
