#CrackYourPlacement

# C++ STL(Standard Template Libraray)

```C++ STL is a collection of C++ libraries.
It is divided into four parts:
1. Algorithms
2. Containers
3. Functions
4. Iterators
```

# Pair

```
Pair is a template class that can be used to store two values of the same type.

Example:

void Pair() {
  pair<int, int> p = {1, 2};
  cout << p.first << " " << p.second << endl;
}
```

## Nested Pair:-

```
pair<int, pair<int, int>> p1 = {1, {2, 3}};
cout << p1.second.first;
```

## Array Pair:-

```
pair<int, int>arr[] = {{1, 2}, {3, 4}, {5,6}};
cout<<arr[1].second;
```

# Vectors
