#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;

        vector<bool> isPrime(n, true);
        isPrime[0] = isPrime[1] = false;

        for (int i = 2; i * i < n; ++i) {
            if (isPrime[i]) {
                for (int j = i * i; j < n; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        int count = 0;
        for (int i = 2; i < n; ++i) {
            if (isPrime[i]) {
                ++count;
            }
        }

        return count;
    }
};

int main()
{
Solution solution;
int n;
cout << "Enter a number: ";
cin >> n;
int ans = solution.countPrimes(n);
cout << "Number of primes up to " << n << " is: " << ans << endl;
return 0;
}