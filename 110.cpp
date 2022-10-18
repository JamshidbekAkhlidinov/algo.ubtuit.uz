#include <iostream>

//Jamshidbek Axlidinov 
//Tatu Dif 315-21

using namespace std;
int main(){
	int n;
	cin>>n;
	float d[n];
	for(int i=1; i<=n; i++){
		cin>>d[i];
	}
	
	float m,k;
	cin>>m>>k;
	float s=1;
	for(int i=1; i<=n; i++){
		if(d[i]==m){
			s*=m;
		}
		if(d[i]==k){
			s*=k;
		}
	}	
	
	cout<<s;
		
}