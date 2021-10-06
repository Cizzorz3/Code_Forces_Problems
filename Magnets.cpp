  #include<iostream>
  #include<string>
  using namespace std;
  int main(){
    int counter{0} , n{0},no{0},x{0};
    cin>>n;
    int arr[n];

   for(int i{0};i<n;i++){
      cin>>no;
      arr[i]=no;
    }
    x=arr[0];
    for(int k{1};k<=n;k++){
      if(x!=arr[k]){
        counter+=1;
        x=arr[k];
      }
    }
cout<<counter<<endl;
  }
