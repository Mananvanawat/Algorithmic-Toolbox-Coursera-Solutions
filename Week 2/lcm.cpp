#include <iostream>

long long lcm_naive(int a, int b) {
 if(a<b){
 	long long temp;
 	temp = a;
 	a=b;
 	b=temp;
 }
 if(a%b==0)
 return a;
 else
 for(long long i=2;;++i){
 	if((a*i)%b==0)
 	return a*i;
 }
}

int main() {
  long long a, b;
  std::cin >> a >> b;
  
  std::cout << lcm_naive(a, b) << std::endl;
  return 0;
}
