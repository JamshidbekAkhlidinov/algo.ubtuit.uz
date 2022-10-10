#include <iostream>
#include <iomanip>

//Jamshidbek Axlidinov 
//Tatu Dif 315-21

using namespace std;
int main(){
	
	int m;
	cin>>m;
	int k[m][m];
	for(int i=1; i<=m; i++){
		for(int j=1; j<=m; j++){
			cin>>k[i][j];
		}
	}
	int n,count=0;
	cin>>n;
	double s=0;
	for(int i=1; i<=m; i++){
		for(int j=1; j<=m; j++){
			if(k[i][j]%n==0){
				s+=	k[i][j];
				count++;	
			}
		}
	}
		
	cout<<setprecision(2)<<fixed<< s/count;
}   