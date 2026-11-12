#include <iostream>
using namespace std;

int gcd(int a, int b){
    while (b != 0){
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

bool canMeasureWater(int x, int y, int target){
    if (target <= x + y && target % gcd(x, y) == 0){
        return true;
    } else {
        return false;
    }
}

int main() {
    int x, y, target;
    cin >> x >> y >> target;

    if (canMeasureWater(x, y, target)){
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}
