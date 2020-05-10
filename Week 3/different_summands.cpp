#include <iostream>
#include <vector>

using std::vector;
vector<int> optimal_summands(int n) {
  vector<int> summands;
  int sum=0;
  for(int i=1;;++i){
  	sum+=i;
  	
  	if(sum<n && (i+1)<=(n-sum)){
  		
  		summands.push_back(i);
	  }
	  else{
	  	sum-=i;
	  	break;
	  }
  }
  summands.push_back(n-sum);
  return summands;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> summands = optimal_summands(n);
  std::cout << summands.size() << '\n';
  for (size_t i = 0; i < summands.size(); ++i) {
    std::cout << summands[i] << ' ';
  }
}
