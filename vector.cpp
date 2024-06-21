#include <iostream>
#include <vector>

void print(const std::vector<int>& v)
{
  std::cout << "v" << std::endl;
  std::cout << "{  ";
  for(const int& val : v)
  {
    std::cout << val << "  ";
  }
  std::cout << "}" << std::endl;

}

int main()
{
  std::vector<int> v;
  int input = 0;

  std::cout << "Push back" << std::endl;
  std::cout << "Enter value to input" << std::endl;
  while(input >= 0)
  {
    std::cin >> input;
    if ( input >=0 )
      v.push_back(input);
  }
  print(v);

  input = 0;

  std::cout << "Push front" << std::endl;
  std::cout << "Enter value to input" << std::endl;
  while(input >= 0)
  {
    std::cin >> input;
    if ( input >=0 )
      v.insert(v.begin(), input);
  }
  print(v);

  int index = 0;

  std::cout << "Enter using index" << std::endl;
  while(index >= 0)
  {
    std::cout << "Enter index" << std::endl;
    std::cin >> index;
    if ( index >=0 )
    {
      std::cout << "Enter value to input" << std::endl;
      std::cin >> input;
      v.insert(v.begin() + index, input);
    }
  }
  print(v);

  index = 0;

  std::cout << "Modify using index" << std::endl;
  while(index >= 0)
  {
    std::cout << "Enter index" << std::endl;
    std::cin >> index;
    if ( index >=0 )
    {
      std::cout << "Enter value to input" << std::endl;
      std::cin >> input;
      v[index] = input;
    }
  }
  print(v);
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