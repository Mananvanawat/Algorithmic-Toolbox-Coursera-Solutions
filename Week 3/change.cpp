#include <iostream>

int get_change(int m) {
	int n=0;
	while(m>0){
	
  while(1){
  	if(m>=10)
  	{++n;
  	m-=10;
  	break;
	}
	if(m>=5){
		++n;
		m-=5;
		break;
	}
	if(m>=1){
		++n;
		m-=1;
		break;
	}
  }}
  return n;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
