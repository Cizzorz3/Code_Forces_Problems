#include <iostream>
#include<string>
#include <vector>
using namespace std ;
int main() {
	int n {0} , k{0} , advanced_stud{0} ,score_of_stud{0};
	vector<int> scores{};
	cin>>n>>k;
	if(k>=1 && k<=n && n<=50){
		for(int i{0};i<n ; i++){
			cin>>score_of_stud ;
			scores.push_back(score_of_stud);
		}

	}
	for(int i{0};i<scores.size();i++){
		if(scores[i]>= scores[k] && scores[i]>0) {
			advanced_stud+=1;
		}
		

}
	
	cout<<advanced_stud;







	return 0 ;
}