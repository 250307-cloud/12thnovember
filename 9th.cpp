#include <iostream>
using namespace std;

bool isPalindrome(int n){
    int reversed = 0, original = n;
    while (n > 0){
        reversed *= 10;
        reversed += n % 10;
        n /= 10;
    }
    if (reversed == original){
        return true;
    } else {
        return false;
    }
}

int main() {
    int n;
    cin >> n;
    int summ = 0;
    for (int i = 1; i <= n; i++){
        if (isPalindrome(i)){
            summ += i;
        }
    }
    
    cout << summ;
    
    return 0;
}
