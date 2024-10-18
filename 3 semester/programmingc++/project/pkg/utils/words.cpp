#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
class Game {
private:
  std::unordered_map<char, bool> UsedLetters;
  std::string WordToGuess;
  std::string Guessed;
  unsigned int AttemptsLeft;
  unsigned int MaxAttempts;
  unsigned int Difficulty;

public:
  Game(std::string word, unsigned int difficulty) : Difficulty(difficulty) {
    unsigned int maxAttempts;

    switch (difficulty) {
    case 1:
      maxAttempts = 12;
      break;
    case 2:
      maxAttempts = 9;
      break;
    case 3:
      maxAttempts = 7;
      break;
    default:
      maxAttempts = 7;
    }

    std::string guessedword(word.size(), '~');
    std::transform(word.begin(), word.end(), WordToGuess.begin(), ::toupper);
    Guessed = guessedword;
    AttemptsLeft = maxAttempts;
    MaxAttempts = maxAttempts;
  }
  ~Game() { std::cout << "YOU LOSE" << std::endl; }
  void Test() {
    std::cout << WordToGuess << " " << Guessed << " " << AttemptsLeft << " "
              << MaxAttempts << " " << Difficulty << " " << std::endl;
  }
};
