/* LANG: C++ */
#include <iostream> 
#include <string.h>
using namespace std;

int main() {

int num[6], odd [6], even [6]; 
int i=0,j=0, k=0, rem;

for(i=0;i<=5;i++) 
cin >> num[i];

for (i=0;i<=5;i++) {
    rem=num[i]%2;
    if (rem==0) 
    even [j++]=num[i]; 
    else odd [k++]=num[i];

}

cout << "Even ";

for (i=0;i<=j-1;i++)

cout << even[i] << " " ;

cout <<  "\nOdd = ";

for (i=0;i<=k-1;i++) 
cout << odd[i] << "";

return 0;

}
