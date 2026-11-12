#include <iostream>
using namespace std;

long long powerOfTwo(int e){
    long long result = 1;
    for (int i = 0; i < e; i++){
        result *= 2;
    }
    return result;
}

void printLucky(int k){
    int length = 1;
    long long position = k;

    while (position > powerOfTwo(length)){
        position -= powerOfTwo(length);
        length++;
    }

    position--;
    for (int i = length - 1; i >= 0; i--){
        long long p = powerOfTwo(i);
        if (position >= p){
            cout << 7;
            position -= p;
        } else {
            cout << 4;
        }
    }
}

int main() {
    int k;
    cin >> k;

    printLucky(k);

    return 0;
}
