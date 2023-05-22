#include<iostream>
#include<string.h>
using namespace std;


int reverse(char name[]){
	int i=0;
	int n = getLength(name);
	int j = n-1;
	
	while(i<=j){
		swap(name[i],name[j]);
		i++;
		j--;
	}
}
int main(){
	
	char name[100];
	cin>>name;
	
	cout<<"length is : "<<getLength(name)<<endl;
	
	cout<<"Initially:"<< name<<endl;
	reverse(name);
	
	cout<<"Afeeret rervrse Array"<< name <<endl;
	
	
}
