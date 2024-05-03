#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;
typedef unordered_map<char, int>  fastHash;
int sumofnums(int x){
  int s = 0;
  while (x){
    s+=x%10;
    x/=10;
  }
  return s;
}
int main(){
  fastHash M = 
  {
    {' ', 4},
    {'.', 5},
    {';',7},
    {',',2},
    {'=',3},
    {'+',3},
    {'-',3},{'\'',3},{ '\"',3},
    {'(', 1},
    {')', 1},
    {'[', 8},
    {']', 8},
    {'{', 8},
    {'}', 8},
    {'<', 8},
    {'>', 8}
  };
  for (int i=65; i<=90;i++){
    M.insert({char(i),sumofnums(i-64)+10});  
    M.insert({char(i+32),sumofnums(i-64)});
  }
  for (int i = 0;i<10;i++){
    
    M.insert({char(i+48),13-i});
  }
  string abc;
  long long res = 0;

  while(!getline(cin, abc).eof()){
  size_t N = abc.size();
  for (size_t i=0;i<N;i++){
    res += M[abc.at(i)];
    //cout << var << '\t'<<M[var] << '\n';
  }}
  cout << res;
  return 0;
}
