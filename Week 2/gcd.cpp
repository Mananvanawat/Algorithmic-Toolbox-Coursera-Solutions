#include <iostream>
typedef long long ll;
ll gcd_naive(ll a, ll b) {
  if(a<b){
  	ll temp;
  	temp=a;
  	a=b;
  	b=temp;
  }
  if(b==0)
   return a;
  else  return gcd_naive(b,a%b);
}

int main() {
  ll a, b;
  std::cin >> a >> b;
  std::cout << gcd_naive(a, b) << std::endl;
  return 0;
}
