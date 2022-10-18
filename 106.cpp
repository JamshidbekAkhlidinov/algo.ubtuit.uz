#include <iostream>

//Jamshidbek Axlidinov 
//Tatu Dif 315-21

using namespace std;
int main(){
	int n;
	cin>>n;
	int k[n];
	float s = 0;
	for(int i=1; i<=n; i++){
		cin>>k[i];
		s+=k[i]*k[i];
	}
	cout<<s;

		
}