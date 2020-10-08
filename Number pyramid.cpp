
// C++ program to printing pyramid pattern of numbers

#include <iostream>
using namespace std;
 
// Function to demonstrate printing pattern
void pypart(int n)
{
    int i = 1, j = 0;
 
    int num = 1;
    while (i <= n) 
    {
        while (j <= i - 1) 
        {
            cout << num << " ";
            num++; // here we are incresing num for every iteration.
            j++;
        }
        j = 0;
        i++;
        
        cout << endl; // Ending line after each row
    }
}
 
int main()
{
    int n = 5;
    pypart(n);
    return 0;
}
