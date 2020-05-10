#include <iostream>
typedef long long ll;
ll get_fibonacci_last_digit_naive(ll n) {
    ll fib[n];
    fib[0]=0;
    fib[1]=1;
    for(ll i=2;i<=n;++i){
    	fib[i]=fib[i-1]+fib[i-2];
    	fib[i]=fib[i]%10;
	}

    return fib[n];
}

int main() {
    ll n;
    std::cin >> n;
    int c = get_fibonacci_last_digit_naive(n);
    std::cout << c << '\n';
    }
