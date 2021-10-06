#include <iostream>
#include<string>
#include <vector>
using namespace std ;
int main() {
const int dom_size {2};
int M {0}, N{0} , no_of_dom{0} ,board_size{0} , i{1};
cin>>M>>N;

board_size=M*N;
if(M>=1 && N>=M && N<=16){
	while( i * dom_size <= board_size){
		no_of_dom+=1;
		i++;
	}
}
	cout<<no_of_dom;




	return 0 ;
}