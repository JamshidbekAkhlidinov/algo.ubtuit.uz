#include <iostream>

//Jamshidbek Axlidinov 
//Tatu Dif 315-21

using namespace std;
int main(){
	
	int n;
	cin>>n;
	
	int k,s=0;
	for (int i=1; i<=n; i++){
		cin>>k;
		s+=k;
	}
	
	cout<<s;
	
}   