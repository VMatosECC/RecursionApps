// RecursionApps.cpp 
#include <iostream>
#include <string>
using namespace std;

//Prototypes----------------------------------------------
int  fib(int n);
int  fibNonResursive(int n);
bool isPalindrome(string s);
void experiment01();
void experiment02();

int main()
{

    //experiment01();       //fibonacci, palindromes
    experiment02();

}
//------------------------------------------------------------------------

void experiment02() {

}

// ------------------------------------------------------------------------
void experiment01() {
    int n = 5;
    int result = fib(n);
    cout << "Fibonacci(" << n << ")= " << result << endl;

    result = fibNonResursive(n);
    cout << "Fibonacci Non-Recursive(" << n << ")= " << result << endl;


    cout << "Enter a string: ";
    string s;
    getline(cin, s);
    cout << "isPalindrome returned " << isPalindrome(s) << endl;
}


//------------------------------------------------------------------------
bool isPalindrome(string s) {
    if (s.size() <= 1)
        return true;
    else {
        char first = s[0];
        char last = s[s.size() - 1];
        if (first != last)
            return false;
        else
            return isPalindrome(s.substr(1, s.size() - 2));
    }
}

//------------------------------------------------------------------------
int fib(int n) {
    //Base case
    if (n == 0 || n == 1)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}

int fibNonResursive(int n) {
    int fib1 = 1;
    int fib2 = 1;
    int fib = 1;
    for (int i = 2; i <= n; i++) {
        fib = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib;
    }
    return fib;
}