#include <iostream>
#include <list>

void print(const std::list<int>& ll)
{
  std::cout << "ll" << std::endl;
  std::cout << "{  ";
  for(const int& val : ll)
  {
    std::cout << val << "  ";
  }
  std::cout << "}" << std::endl;

}

int main()
{
  std::list<int> ll;
  int input = 0;

  std::cout << "Push back" << std::endl;
  std::cout << "Enter value to input" << std::endl;
  while(input >= 0)
  {
    std::cin >> input;
    if ( input >=0 )
      ll.push_back(input);
  }
  print(ll);

  input = 0;

  std::cout << "Push front" << std::endl;
  std::cout << "Enter value to input" << std::endl;
  while(input >= 0)
  {
    std::cin >> input;
    if ( input >=0 )
      ll.push_front(input);
  }
  print(ll);
  return 0;
}
/*
int main()
{
  std::vector<int> v = {1, 2, 3, 4, 5};

  v.push_back(99);

  std::cout << "Vector" << std::endl;
  std::cout << "------" << std::endl;
  std::cout << "Size     : " << v.size() << std::endl;
  std::cout << "Capacity : " << v.capacity() << std::endl;
  std::cout << "Max size : " << v.max_size() << std::endl;
  std::cout << "Front    : " << v.front() << std::endl;
  std::cout << "Back     : " << v.back() << std::endl;
  std::cout << "Is empty?: " << v.empty() << std::endl;

  for(int i=0; i<100; i++) {
    v.push_back(i);
  }

  std::cout << "Capacity : " << v.capacity() << std::endl;
  std::cout << v[105] << std::endl;
  std::cout << v.at(105) << std::endl;

  v.insert(v.begin() + 2, -100);
  std::cout << "v[2]     : " << v[2] << std::endl;
  std::cout << "Size     : " << v.size() << std::endl;
  v.pop_back();
  std::cout << "Size     : " << v.size() << std::endl;

  std::list<int> ll = {-100, -200, -300};
  v.insert(v.begin(), ll.begin(), ll.end());
  std::cout << "v[0]     : " << v[0] << std::endl;
  std::cout << "v[1]     : " << v[1] << std::endl;
  std::cout << "v[2]     : " << v[2] << std::endl;

  v.erase(v.begin()+1, v.begin()+3);

  std::cout << "v[0]     : " << v[0] << std::endl;
  std::cout << "v[1]     : " << v[1] << std::endl;
  std::cout << "v[2]     : " << v[2] << std::endl;


  return 0;
}
*/