#include <map>
#include <iostream>
#include <string>
#include <unordered map>
#include <algorithm>
#include <functional>
using namespace  std;
int solution(string a,string b){
  /*
    unordered_map<char,short int> testmap;
    for (char var: a){
      testmap[var] = 1;
    }
    for (char var: b){
      if (testmap[var] == 1){
          testmap[var] += 1;
      }
    }
    char mx = 'a';
    for (auto it = testmap.begin();it!=testmap.end();it++){
      if (it->second == 2){
        mx = max(it->first,mx); 
      }
    }
    */
    sort(a.begin(),a.end(),greater<char>);
    sort(b.begin(),b.end(),greater<char>);
    auto ap = a.begin();
    auto bp = b.begin();
    string res;
    char chf;
    while (true){
      if ((*a) ==(*b)){
        ch = *a;
        break;
      }
      if ((*a)>(*b))a++;
      if ((*b)>(*a))b++;
    }
    res.push_back(ch);
    string::size_type n = a.find(ch);
    string subs = s.substr(n);
    vector<string> suffixmas(subs.size());
    for (int i = 0;i<subs.size();i++){
      suffixmas[i] = s.substr(i);
    }
    
    
    
}

int main(){


  return 0;
}
