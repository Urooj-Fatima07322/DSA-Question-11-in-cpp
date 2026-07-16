#include<iostream>
using namespace std;

void reverseACharaterArray(char str[],int len){
	int start=0;
	int end=len-1;
	while(start<end){
		swap(str[start],str[end]);
		start++;
		end--;
	}
}

int main(){
	char str[]="Apna College";
	int len=strlen(str);
	reverseACharaterArray(str,len);
	cout<<str<<endl;
	return 0;
}