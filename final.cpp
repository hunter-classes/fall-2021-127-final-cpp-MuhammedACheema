#include <iostream>

bool isRightTriangle(int a, int b, int c) {
  int x, y, z;
  x = a*a;
  y = b*b;
  z = c*c;

  if(x+y==z){
    return true;
  }
  else; {
    return false;
  }
} 

void fizzbuzz(int x){
  for(int i = 1; i <= 21; i++) {
    if(i % 15 == 0) {
      std::cout << "FizzBuzz" << std::endl;
    } 
    else if(i % 3 == 0) {
      std::cout << "Fizz"<< std::endl;
    } 
    else if(i % 5 == 0) {
      std::cout << "Buzz"<< std::endl;
    } 
    else {
      std::cout << i << std::endl;
    }
  }
}

int main() {
  std::cout << "this is the isRightTriangle" << std::endl;
  std::cout << "0 = False" << std::endl;
  std::cout << "1 = True" << std::endl;
  std::cout << isRightTriangle(5, 6, 13) << std::endl;
  std::cout << isRightTriangle(3, 4, 5) << std::endl;

  std::cout << "this is the fizz buzz" << std::endl;
  fizzbuzz(21);
  return 0;
}