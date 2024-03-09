#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;
typedef unordered_map fastHash;
int main(){
  fastHash<string, int> M = 
  {
    {' ', 4};
    {'.', 5};
    {';',7};
    {',',2};
    {'=',3};
    {'+',3};
    {'-',3};{'\'',3};{ '\"',3};
    {'(', 1};
    {')', 1};
    {'[', 8};
    {']', 8};
    {'{', 8};
    {'}', 8};
    {'<', 8};
    {'>', 8};

  };

  return 0;
}
