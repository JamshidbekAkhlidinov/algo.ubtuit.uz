#include <iostream>
#include <iomanip>
#include <cmath>

//Jamshidbek Axlidinov 
//Tatu Dif 315-21

using namespace std;
int main(){
	cout<<setprecision(8);
	int n;
	cin>>n;
	float k[n];
	
	float s1=1,s2=0;
	for(int i=1; i<=n; i++){
		cin>>k[i];
		if(i%2==1){
			s1*=k[i];
		}else{
			s2+=k[i];
		}
		
	}
	
	float s=s1/s2;
	cout<<setprecision(2);
	cout<<fixed<<s;
		
}