#include <iostream>
#include <cmath>
#include <iomanip>

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
	int a,b;
	cin>>a>>b;

	int d = (b-a)+1;
	float s=0;
	for(int i=a; i<=b; i++){
		s+= k[i];
	}
	s = s/d;
	cout<<setprecision(1);
	cout<<fixed<<s;
	
	
}