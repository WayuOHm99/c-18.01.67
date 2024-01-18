#include<iostream>
using namespace std;
int main(){
	int n=6;
	int num[n];
	for(int i=0;i<n;i++){
		cin >> num[i];
		if(num[i]<0 || num[i]>100){
			i--;
		}
	}
	int even[n];
	int odd[n];
	int total_even=0;
	int total_odd=0;
	
	for (int i=0;i<n;i++){
		if(num[i]%2==0){
			even[total_even++]=num[i];
		}else{
			odd[total_odd++]=num[i];
		}
	}
	cout << "Even = ";
	for(int i=0;i<total_even;i++){
		cout << even[i] << " ";
	}
	
	 cout << endl << "Odd = ";
	for(int i=0;i<total_odd;i++){
		cout << odd[i] << " ";
	}
}
