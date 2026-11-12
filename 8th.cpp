#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int largest = 0;
    int summ = 1;
    int t = 0;
    if (n == 0){
        cout << 0;
        return 0;
    }
    while (n > 0) {
        t = n % 10;
        if (t > 0){
            summ *= t;
        }
        if (largest < t){
            largest = t;
        }
        
        n /= 10;
        
    }
    cout << summ << " " << largest;
    
    return 0;
}
