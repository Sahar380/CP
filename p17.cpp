#include <iostream>
using namespace std;

main() {
 int n,m,Num;
 cout <<" please enter first number: ";
  cin >> m;

 cout <<"please enter second number: ";
  cin >> n;
   
    
    if( n=0 ){
	    cout <<"The answer is 1: ";
	}
	Num=1;
	while ( n>0 ){
         Num=Num*m;
         n=n-1;
     }
     cout  << "The Num is : "<<Num ;
	
	 }
	 
    
  

