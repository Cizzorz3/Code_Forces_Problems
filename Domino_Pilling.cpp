#include <iostream>
#include<string>
#include <vector>
using namespace std ;
int main() {
int n{0} , result{0} ,X{0};
string op{" "};
cin>>n;
if(n>=1 && n<=150){
	for(int i{0}; i<n;i++){
		cin>>op;
		if(op=="++X" || op=="X++"){
			result+=1;
		}
		
		else{
			result-=1;
		}

	}
}
cout<<result;





	return 0 ;
}