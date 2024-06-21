#include <iostream>
#include <queue>

int main()
{
  std::queue<int> q;
  int data = 0;
  
  do 
  {
    std::cout << "Enter data" << std::endl;
    std::cin >> data;
    if( data > 0)
      q.push(data);
  } while(data>0);

  std::cout << "{ ";
  while(q.size() > 0 )
  {
    std::cout << q.front() << "  ";
    q.pop();
  }
  std::cout << "} ";

  return 0;
}