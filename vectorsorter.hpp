#ifndef vectorsorter_hpp
#define vectorsorter_hpp

#include <functional>
#include <vector>

template <typename T>
void vectorSorter(vector<T> &array, function<bool(T, T)> func) {
  for(int i = 0; i < array.size() - 1;i++) {
    for(int j = i + 1;j < array.size();j++) {
      if(func(array[j], array[i])) {
        auto temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
  }
}

#endif
