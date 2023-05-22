#include<iostream>
using namespace std;
// palidrom 
bool Palidrom(char ward[]){
	int i=0;
	int n = strlen(ward);
	
	int j=n-1;
	
	while(i<=j){
		if(ward[i] != ward[j]){
			return false;
		}
		else{
			i++;
			j--;
		}
	}
	return true;
}

int main(){
	
	char arr[100]  = "Tanamay";
	cout<<"plindrom check:"<<Palidrom(arr);
}
