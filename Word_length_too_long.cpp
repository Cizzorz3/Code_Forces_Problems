#include <iostream>
#include <string>
using namespace std ;
int main () {
 int n {};
 string word ;
 cin>>n;
 if (n>=1 && n<=100){
 	for(size_t i{0} ; i<n ; i++){
 		cin>>word;
 		if(word.length()>10){
 			cout<<word[0]<<word.length()-2<<word.back()<<endl;
 		}
 		else {
 			cout<<word<<endl;
 		}
 
 		
 	}
 	
 }




	return 0 ;
}