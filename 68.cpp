#include <iostream>
#include <cmath>
#include <iomanip>

//Jamshidbek Axlidinov 
//Tatu Dif 315-21

int faktr(int n){
	int s=1;
	for(int i=1; i<=n; i++){
		s*=i;
	}
	return s;
}

using namespace std;
int main(){
	int n,x;
	cin>>n>>x;
	
	float s=0;
	
	for(int i=1; i<=n; i++){
		s+= pow(x,i)/faktr(i);
	}
	
	cout<<setprecision(3);
	cout<<fixed<<s;
	
	
	
}