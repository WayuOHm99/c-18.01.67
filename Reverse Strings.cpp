/* LANG: C++ */ 
#include <iostream>
using namespace std;

int main() { string s[100]; int i,n;

cin >> n;

for (i=0;i<=n-1;i++) 
cin >> s[i];

for(i=n-1;i>=0;i--)
cout << s[i];

for (i=1;i<=n-1;i++) 
cout << s[i];

return 0; 
}
