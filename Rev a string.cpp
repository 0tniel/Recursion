// Print a string in reverse (using the first method)
#include <iostream>
using namespace std;

int length(char *str) 
{
    int l = 0;
    while (str[l] != '\0') 
    {
        l++;
    }
    return l;
}

void reverse(char *str, int i, int n)  
{ 
    if (i == n) 
        return;  
    reverse(str, i + 1, n);  
    cout << str[i]; 
}

int main() 
{ 
    char str[50]; 
    cout << "Enter a string: ";
    cin >> str;

    int n = length(str);  
    reverse(str, 0, n); 

    cout << endl; // Add a new line for better formatting

    // Now using the alternate method
    cout << "Reversed using alternate method: ";
    void print_rev(char *str);
    print_rev(str);
    
    return 0; 
}

// ALTERNATE METHOD

void print_rev(char *str)
{
    if (*str != '\0')
    {
        print_rev(str + 1);
        cout << *str;
    }
}

