//convert the string upperCase
//'a' -> 97-'a'+'A'
//'A'->65
 // lowecase -> Uppercase
 
#include<iostream>
using namespace std;

 void  converIntouppercase(char arr[]){
 	int n = getLength(arr);
 	
 	for(int i=0;i<n;i++){
 		arr[i] = arr[i]-'a'+'A';
	 }
 }

int main(){
	char arr[100] = "babbar";
	
	converIntouppercase(arr);
	cout<<arr<<endl;
	return 0;
}
