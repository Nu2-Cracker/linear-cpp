// 2文字の入力を受け取る

#include <iostream>
#include <string>

int main() {
  int x, y;

  std::cout << "Two number";
  if(std::cin >> x >> y){
    std::cout << "right!";
  }else{
    std::cout << << "Something you entered wasn't a number.\n";
  }

  return 0;

}