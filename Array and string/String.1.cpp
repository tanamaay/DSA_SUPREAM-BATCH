#include<iostream>
#include<string.h>
using namespace std;

bool compare(string a,string b){
	if(a.length()!=b.length())
	return false;
	int j=0;
		 for(int i=0;i<a.length();i++){
		 	if(a[i] !=b[j]){
		 		return false;
			 } 
		 }
	return true; 
}

int main(){
	//string str;
	//cin>>str;
	
	//getline(cin,str);
//	cout<<str;
	
	//cout<<str.length()<<endl;
	//cout<<"isEmpty"<<str.empty()<<endl;
	//str.push_back('A');
	//cout<<str;
	
	//str.pop_back();
	//cout<<str<<endl;
	
	//cout<<str.substr(0,6)<<endl;
	
///	string a = "Love";
	//string b = "Lover";
	//if(a.compare(b)==0){
	//	cout<<"a and b is same"<<endl;
	//}
///	else{
	//	cout<<"a and b is not same"<<endl;
//	}
	
	//string x = "cbcd";
//	string y = "bcda";
	//cout<<x.compare(y)<<endl;
	
	//find function
//	string sentence ="hello ji kaise ho saare";
//	string target ="hello";
//	cout<<sentence.find(target);
	
	string str="This is my love";
	string word ="Tanmay";
	str.replace(0,4,word);
	cout<<str<<endl;
	
}
