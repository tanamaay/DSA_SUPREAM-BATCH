#include<iostream>
using namespace std;


int getLength(char name[]){
	int length=0;
	int i=0;
	while(name[i] !='\0'){
		length++;
		i++;
	}
	return length;
}
//Lenght of string
int main(){
	char name[100];
	cin>>name;
	
	cout<<"length is : "<<getLength(name)<<endl;
	//cout<<"lenght is --> "<< strlen(name)<<endl;
}

