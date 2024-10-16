// Print integer in reverse
#include <iostream>
using namespace std; 

void reverse(int n)
{
   if (n < 10) 
   {
      cout << n;
      return;
   }
   else
   {
      cout << n % 10;
      reverse(n / 10);
   }
}

int main()
{
   int n;
   cout << "Enter a four-digit integer: ";
   cin >> n;
   cout << "Reversed integer: ";
   reverse(n);
   cout << endl;
   return 0; 
}

/*
OUTPUT: 
Enter a four-digit integer: 5647
Reversed integer: 7465
*/

