#include <iostream>
using namespace std;

main() {
 int m,n,a,b,i;
 cout << "please enter first number: ";
cin >> m;

cout << "please enter second number: "; 
 cin >> n;
 
  a=0;
  b=0;
  while   ( m-a>=n ) 
  { 
  a=a+n;
  i=m-a;
  b=b+1;
  }
     
 
   cout <<"bagh : " << i <<  "\n";
   cout <<"kharej : " << b;
}
     
     

