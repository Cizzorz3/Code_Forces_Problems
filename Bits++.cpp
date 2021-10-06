#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
using namespace std;
int main() {
  string s1{""};
  string s2{""};
  string alphabet {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
  int fir{0},sec{0} , max{0};
  cin>>s1;
  cin>>s2;
for(int i{0};i<s1.length();i++){
	s1[i]=toupper(s1[i]);
	s2[i]=toupper(s2[i]);
}
for(int i{0};i<s1.length();i++){
	fir=alphabet.find(s1[i]);
	sec=alphabet.find(s2[i]);
	if(fir==sec){
		max=0;
}
	else if(fir<sec){
		max=-1;
	}
	else{
		max=1;
	}





}
cout<<max;
    return 0;

}