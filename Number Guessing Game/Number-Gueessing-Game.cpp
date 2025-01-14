#include <iostream>
#include <ctime>

int main(){

  int num;
  int guess;
  int tries;

  srand(time(NULL));
  num = rand() % 100 + 1;
  tries = 0;

  std::cout << "*********Number Guessing Game********* \n";

  do{
    std::cout << "Enter a guess between (1-100): ";
    std::cin >> guess;

    if (std::cin.fail() || guess < 1 || guess > 100) {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "Invalid input. Please enter a number between 1 and 100.\n";
        continue;
    }

    tries++;

    if (guess > num){
      std::cout << "Too high! \n";
    }

    else if (guess < num){
      std::cout << "Too low! \n";
    }

    else{
      std::cout << " CORRECT!!! # of Tries: " << tries << '\n';
    }

    } while (guess != num);
  
  std::cout << "************************************** \n";

  return 0;
}