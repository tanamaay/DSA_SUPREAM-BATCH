#include<iostream>
using namespace std;

int fact(int n){
	if(n==1)
	return 1;
	
	int chhoti = fact(n-1);
	int badi = n*chhoti;
	return badi;
}

int main(){
	int n;
	cout<<"Enter your num:"<<endl;
	cin>>n;
	
	int ans = fact(n);
	
	cout<<ans<<endl;
}
