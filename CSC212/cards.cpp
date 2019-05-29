/*#include<iostream>
#include<math.h>

int main(){
  int N;
  int suit;
  int ans;
  char input;
  char input2;

  std::cin >> N; std::cin >> suit;
  for (int i = 0; i < N; i++){
    for (int j = 0; j < 4; j++){
      std::cin >> input; std::cin >> input2;
      if (input == suit){
        if (input2 == 'A'){
          ans = ans + 11;
        }
        if (input2 == 'K'){
          ans = ans + 4;
        }
        if (input2 == 'Q'){
          ans = ans + 3;
        }
        if (input2 == 'J'){
          ans = ans + 20;
        }
        if (input2 == 'T'){
          ans = ans + 10;
        }
        if (input2 == '9'){
          ans = ans + 14;
        }
        if (input2 == '8'){
          ans = ans + 0;
        }
        if (input2 == '7'){
          ans = ans + 0;
        }

        }
      if (input != suit){
        if (input2 == 'A'){
          ans = ans + 11;
        }
        if (input2 == 'K'){
          ans = ans + 4;
        }
        if (input2 == 'Q'){
          ans = ans + 3;
        }
        if (input2 == 'J'){
          ans = ans + 2;
        }
        if (input2 == 'T'){
          ans = ans + 10;
        }
        if (input2 == '9'){
          ans = ans + 0;
        }
        if (input2 == '8'){
          ans = ans + 0;
        }
        if (input2 == '7'){
          ans = ans + 0;
        }
        std::cout << ans << std::endl;
      }
      }
        }std::cout << ans << std::endl;
        return 0;
    }*/

