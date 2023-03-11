#include<iostream>
using namespace std;

int checkKey(string str,int i,int n,char key){
	if(i>=n){
		return 0;
	}
	if(str[i] == key)
	return i;
	
	int ans = checkKey(str,i+1,n,key);
	return ans;
}

int main(){
	string str= "TanmaySingh";
	int n = str.length();
	
	char key = 'h';
	int i=0;
	int ans  = checkKey(str ,i,n,key);
	cout<<"Answer is :"<<ans<<endl;
	return 0;
}
