#include<iostream>
#include<set>
#include<unordered_set>

int main()
{
  std::unordered_multiset<int> s;
  int temp=0;

  std::cout << "Inserting .. \n";

  while(temp >= 0)
  {
    std::cout << "Enter value : ";
    std::cin >> temp;

    if(temp >= 0)
      s.insert(temp);
  }

  std::cout << "{";
  for(auto it=s.begin(); it!=s.end(); it++)
    std::cout << *it << "  ";
  std::cout << "}\n";

  temp = 0;
  while(temp >= 0)
  {
    std::cout << "Enter value to remove : ";
    std::cin >> temp;

    if(temp > 0)
      s.erase(temp);
  }

  std::cout << "{";
  for(auto it=s.begin(); it!=s.end(); it++)
    std::cout << *it << "  ";
  std::cout << "}\n";
  return 0;

}