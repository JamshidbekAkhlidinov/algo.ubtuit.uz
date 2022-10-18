#include <iostream>
#include <iomanip>

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
		s+=k[i];
	}
	
	int a,b;
	cin>>a>>b;
	float d = (b-a)+1;
	d  = n-d;
	float s2=0;
	for(int i=a; i<=b; i++){
		s2+= k[i];
	}
	cout<<setprecision(2);
	cout<<fixed<<(s-s2)/d;
		
}