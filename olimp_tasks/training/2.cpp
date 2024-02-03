#include <iostream>
#include <tuple>
#include <vector>
#include <map>
#include <list>
#include <algorithm>
using namespace std;


struct Node
{
  int x,y;
  int s;

};
bool can_move(tuple<int, int> p1, tuple<int, int> p2){
    return (get<0>(p1) == get<0>(p2)) || (get<1>(p1) == get<1>(p2));
}


int main(){
  map<tuple<int, int>, vector<tuple<int, int>>> graph; 
  int N,xs,ys,xf,yf;
  cin >> N >> xs>> ys>> xf>> yf;
  vector<tuple<int,int>> inp;
  inp.push_back(make_tuple(xs,ys));
  inp.push_back(make_tuple(xf,yf));
  for (int i = 0,x,y; i<N; i++){
    cin >> x >> y;
    inp.push_back(make_tuple(x,y));
  }

  vector<tuple<int, int>> visited;
  for (auto p1: inp){   
    for (auto p2: inp){
      if ((p1!=p2) && can_move(p1,p2) ){
        graph[p1].push_back(p2);
        graph[p2].push_back(p1);
      }
    }
  }
  ///*
  tuple<int, int> final1 = make_tuple(xf,yf);
  list<tuple<int,int,int>> queue;
  bool fl = true;
  int mx = 0;
  queue.push_back(make_tuple(xs,ys,0));
  while (!queue.empty()&&fl){
    int x,y,t;
    tuple<int,int,int> cord(0,0,0);
    cord = queue.front();
    queue.pop_front();
    x = get<0>(cord);
    y = get<1>(cord);
    t = get<2>(cord);
    //cout << x << " "<<y<<"\n";
    if (find(visited.begin(), visited.end(),make_tuple(x,y))!=visited.end()){
      //cout << "bebra";  
      continue;   
    }
    if ((x==xf) && (y == yf)){
        //cout << t;
        mx = t;
        fl = false;
        break;
    }


    for (auto var: graph[make_tuple(x,y)]){
        /*if (find(visited.begin(), visited.end(),make_tuple(get<0>(var),get<1>(var)))==visited.end()){
          continue;
        } */ 
        queue.push_back(make_tuple(get<0>(var),get<1>(var),t+1));
    }
    visited.push_back(make_tuple(x,y));
  }
  //cout << fl<< "\n";
  //cout << xf <<" "<< yf<< "\n";
  cout << mx-1;
  //*/
  //cout << graph[]
  return 0;
}
