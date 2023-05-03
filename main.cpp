#include <iostream>
using namespace std;

int main() {
  int numbers[20], zero = 0;
  cout << "Задай 20 чисел для массива!\n";
  for (int i = 0; i < 20; i++) cin >> numbers[i];
  for (int output : numbers){
    if (output == 0) zero++;
  }
  cout << zero << " нулей в массиве";
}
