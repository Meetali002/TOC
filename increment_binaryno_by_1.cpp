#include <iostream>
using namespace std;
 
int main()
{
	long b1,b2=1;
	int i=0, r=0;
	int S[20]; 
	cout << " Enter the number in Binary: ";
	cin>> b1;
	
  while (b1 != 0 || b2 != 0) 
  {
   S[i++] = (int)((b1 % 10 + b2 % 10 + r) % 2);
   r = (int)((b1 % 10 + b2 % 10 + r) / 2);
   b1 = b1 / 10;
   b2 = b2 / 10;
  }
  if (r != 0) {
   S[i++] = r;
  }
  --i;
  cout<<" After Increment : ";
  while (i >= 0) {
   cout<<(S[i--]);
  }
   cout<<("\n");  
 }