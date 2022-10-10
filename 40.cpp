#include <iostream>

//Jamshidbek Axlidinov 
//Tatu Dif 315-21

int func(int a){
	if(a>0) return a*a;
	else return a;
}

using namespace std;
int main(){
	int n=3;
	int k[n];
	for(int i=1; i<=n; i++){
		cin>>k[i];
	}
	
	for(int i=1; i<=n; i++){
		cout<<func(k[i])<<" ";
	}
	
}