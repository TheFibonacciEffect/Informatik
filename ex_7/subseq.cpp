#include <vector>
#include <iostream>
#include <cassert>
#define Vec(type) std::vector<type>

void readVector( Vec(int)& vec )  
{
  int integer = 0;
  while (integer >= 0)
  {
    std::cin >> integer;
    vec.push_back(integer);
  }
  // keep trailing terminator, it will be useful later
}

void print_vector(Vec(int) v)
{
  for (int i: v)
  {
    std::cout << i << " ";
  }
}

// PRE : a vector with a negative terminator at the end
// POST: a matrix, where every row is a vector with an increasing subsequence
Vec(Vec(int)) split_increase(const Vec(int)& v)
{
  assert(v.at(v.size()-1) < 0);

  // initize out with lenght 1 by default
  Vec(Vec(int)) out(1);
  
  int i = 0;
  while(i < v.size() -1)
  {
    if (v.at(i) < v.at(i+1))
    {
      out.at(out.size()-1).push_back(v.at(i));
      i++;
      continue;
    }
    out.at(out.size()-1).push_back(v.at(i));
    if (v.at(i + 1) < 0)
    {
      break;
    }
    out.push_back({});
    i++;
  }
  return out;
}

Vec(int) find_longest(const Vec(Vec(int))& v)
{
  for (Vec(int) i : v)
  {
    bool is_longest = true;
    for (Vec(int) j : v)
    {
      if (i.size() < j.size())
      {
        is_longest = false;
      }
    }
      if (is_longest)
      {
        return i;
      }
  }
  throw "error";
}

Vec(int) findIncrease(Vec(int)& v)
{
  Vec(int) w(0);

  Vec(Vec(int)) split;
  split = split_increase(v);
  w = find_longest(split);
  return w;
}

int main() 
{
    std::vector<int> values(0);
    
    readVector(values);
    
    if (values.size() == 1)
    {
      std::cout << "empty";
      return 0;
    }
    
    Vec(int) increase = findIncrease(values);

    print_vector(increase);
    

    return 0;
}

// // c++ doesnt seem to have a standard function to print vectors and matricies, so I am gonna go ahead and define them here
// std::ostream& operator<<(std::ostream &out, std::vector<std::vector<int>> const&v) {
//   for(auto &&i : v) {
//     for(auto &&j : i) out << j << " ";
//     out << std::endl;
//   }
//   return out;
// }

// std::ostream& operator<<(std::ostream &out, Vec(int) const&v) {
//   for(auto &&j : v) out << j << " ";
//     out << std::endl;
//   return out;
// }