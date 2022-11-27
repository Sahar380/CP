#include <iostream>
using namespace std;

main() {

int n,c,i;
 cout << "please enter a number :";
  cin >> n;
  i=0;
  for (c=1;  c<=n; i++) 
    {
   
   if (n%i==0)
    { 
    	i+=c;
    }  
   }
     cout << "The answer is : "<< i <<"\n";
 }
   
    
  
  

