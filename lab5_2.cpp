#include<iostream>
#include<string>
using namespace std;



string mixText(string str1,string str2){

	if (str1.size()==str2.size()){
		string mix="";
		int i=0;

		while (i<str1.size()){
			cout << str1[i] << str2[i];
			i++;
			
		}
		return mix;

	}else{

		return "E";

	}
}




int main(){	
	cout << mixText("AAA","BBB") << "\n";
	cout << mixText("Hello","World") << "\n";
	cout << mixText("SOTUS","CHEER") << "\n";
	cout << mixText("1234","5678") << "\n";
	cout << mixText("6","9") << "\n";
	cout << mixText("XXXXXXX","YYY") << "\n";	
	cout << mixText("Y","XX") << "\n";	
	
	return 0;	
}
