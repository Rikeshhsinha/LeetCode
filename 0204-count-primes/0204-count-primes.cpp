class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;

        // Using vector<char> instead of vector<bool> avoids bit-packing overhead
        vector<char> isPrime(n, 1);
        
        for (long long i = 3; i * i < n; i += 2) {
            if (isPrime[i]) {
                // Step by 2*i to only mark odd multiples (e.g. 9, 15, 21...)
                for (long long j = i * i; j < n; j += 2 * i) {
                    isPrime[j] = 0;
                }
            }
        }

        // 2 is prime
        int ans = 1;
        for (int i = 3; i < n; i += 2) {
            if (isPrime[i]) {
                ans++;
            }
        }

        return ans;
    }
};