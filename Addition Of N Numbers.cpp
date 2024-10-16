#include <iostream>
using namespace std;
int sumOfIntegers(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + sumOfIntegers(n - 1);
    }
}
int main()
 {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    if (num <= 0)
	{
        cout << "Please enter a positive integer greater than 0." << endl;
    } 
	else 
	{
        int result = sumOfIntegers(num);
        cout << "The sum of all integers from 1 to " << num << " is " << result << endl;
    }
    return 0;
}

