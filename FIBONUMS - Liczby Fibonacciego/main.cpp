#include <iostream>
#include <unordered_map>

using namespace std;

unordered_map<unsigned long long, unsigned long long> FibSeq;

unsigned long long fib(unsigned long long n)
{
    if (n < 2)
        return 1;
    if (FibSeq.find(n) != FibSeq.end())
        return FibSeq[n];
    FibSeq[n] = (fib((n + 1) / 2)*fib(n / 2) + fib((n - 1) / 2)*fib((n - 2) / 2)) % 1000000007;
    return FibSeq[n];
}
int main()
{
    int tests;
    cin >> tests;
    for (int i = 0; i < tests; ++i)
    {
        unsigned long long N;
        cin >> N;
        cout << fib(N-1)<< "\n";
    }
    return 0;
}
