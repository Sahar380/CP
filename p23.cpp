#include <iostream>
using namespace std;

main(){
 int n,c,i,s;
  cout << "please enter a positive number :";
  cin  >> c;
  s=0; 
  for(n=2;  n<=c; n++) 
  {
  	for (i=2;  n<=(n/2) ; i++)
  	{
	  if(n%i==0)
	  {
	   i=n;
	   break;
} 
}
 if(i!=n)
 {
  s+=n;
 }
 }
  s+=2;
   cout << "result : " << s;
}
  

