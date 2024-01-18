/* LANG: C++ */ 
#include <iostream> 
#include <string.h>

using namespace std;

int main() {

int num[100]; int i,n,max=0,min=1000; float avg=0;

cin >> n;

for(i=0; i<=n-1; i++) cin >> num[i];

for (i=0; i<=n-1; i++) {

	avg += num[i];

	if (num[i]>max) max=num[i];

	if(num[i]<min) min=num[i];

}

cout << "Avg = " << avg/n << endl;
cout << "Max = "<< max << endl; 
cout << "Min = " << min << endl;

return 0;

}
