#include <iostream>
using namespace std;

const int  m=10;
 main() {
  int a[m];
  int i,j,temp,n;
   for( i=0; i<m; i++)
  {
    cout <<"please enter value ["<<i<<"]:";
     cin >> a[i];
 }
    cout <<"please enter another value :";
      cin >> n;
      a[10]=n;
      for(i=0; i<m; i++)
      { 
	   for(j=0; j<(m-i); j++)
  {
  	  if(a[j]>a[j+1] )
   {
   
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
}
    } 
 } 
  cout <<"Array after sort:";
   for (i=0; i<m; i++)
    {
	   cout << "  "<< a[i];  
	   }
 }
	
      
      

	
