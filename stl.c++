#include <bits/stdc++.h>
using namespace std;
// This header file includes all standard library headers.

// C++ STL
// C++ STL is a collection of C++ libraries.
// It is divided into four parts:
// 1. Algorithms
// 2. Containers
// 3. Functions
// 4. Iterators

// Pairs
// Pair is a template class that can be used to store two values of the same
// type.

void Pair() {
  // pair<int, int> p = {1, 2};
  // cout << p.first << " " << p.second << endl;

  // Nested pair:-
  //  pair<int, pair<int, int>> p1 = {1, {2, 3}};
  //  cout << p1.second.first;

  // Array:-
  //  pair<int, int>arr[] = {{1, 2}, {3, 4}, {5,6}};
  //  cout<<arr[1].second;
}

void Vector() {
  // Why vector is better than array?
  // 1. Vector is dynamic in size.
  // 2. Vector is slower than array.
  // 3. Vector can be resized.
  // 4. Vector can be used as a stack.

  vector<int> v; // This creates an empty vector of size 0 {}

  v.push_back(1);
  v.emplace_back(2); //This is faster than push_back
  vector<pair<int,int>>vec;
  vec.push_back({1,2});
  vec.emplace_back(1,2);
}

int main() {

  Pair();
  Vector();
}
