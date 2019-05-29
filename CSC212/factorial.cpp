#include<iostream>
#include<math.h>


int factorial(int a)
{

  int fact = 1;
	while(a >= 1)
	{
		fact = fact * a;
		a--;
	}

	return fact;
}

int main(){
  int n;

  std::cin >> n;
  int ifover = n;
    if (ifover > 10) {
    return 0;
  }
  if (ifover >= 1){
    int num[n];
    int ans[n];
    for (int i = 0; i < n; ++i){
      std::cin >> num[i];
      ans[i] = factorial(num[i]);
    }
    for (int i = 0; i < n; i++){
      if (ans[i] > 10){
        std::cout << 0 << std::endl;
      }
      if (ans[i] < 10){
      std::cout << ans[i] << std::endl;
      }
    }
  }

      return 0;
}

