#include<iostream>
#include<math.h>

int main(){
  int N;
  float b;
  float p;
  int t;
  float MinAbpm;
  float bpm;
  float MaxAbpm;
  std::cin >> N;
  float holder[N*3];
  for (int i = 0; i < N; i++){
    std::cin >> b >> p;
    if (b <= 1){
      return 0;
    }
    if (p < 1){
      return 0;

    }

  }
}