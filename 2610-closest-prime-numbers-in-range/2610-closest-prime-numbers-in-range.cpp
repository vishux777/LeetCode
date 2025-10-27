class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<bool> isPrime(right + 1, true);
        isPrime[0] = isPrime[1] = false;

        for (int i = 2; i * i <= right; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= right; j += i)
                    isPrime[j] = false;
            }
        }

        vector<int> primes;
        for (int i = 2; i <= right; i++) {
            if (isPrime[i] && i >= left)
                primes.push_back(i);
        }

        if (primes.size() < 2) return {-1, -1};

        int a = primes[0], b = primes[1];
        for (int i = 0; i < (int)primes.size() - 1; i++) {
            if (primes[i + 1] - primes[i] < b - a) {
                a = primes[i];
                b = primes[i + 1];
            }
        }
        return {a, b};
    }
};
