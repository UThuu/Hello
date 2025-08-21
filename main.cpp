#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    long long sum = 0;
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) sum += i;
    }

    cout << "Tong cac so nguyen to <= " << n << " la: " << sum << endl;
    return 0;
}
