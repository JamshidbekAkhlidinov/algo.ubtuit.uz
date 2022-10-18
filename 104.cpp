#include <iostream>

//Jamshidbek Axlidinov 
//Tatu Dif 315-21

using namespace std;
int main(){
	int n;
	cin>>n;
	int k[n];
	for(int i=1; i<=n; i++){
		cin>>k[i];
	}
	int min = k[1];
	int ll = 1;
	for(int i=1; i<=n; i++){
		if(min>k[i]){
			min = k[i];
			ll = i;
		}
	}
	k[ll] = k[n];
	k[n] = min;
	
	//cout<<"\n";

	for(int i=1; i<=n; i++){
		cout<<k[i]<<" ";
}
	
	
}