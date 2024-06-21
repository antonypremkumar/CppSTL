#include <iostream>
#include <deque>

int main()
{
  std::deque<int> dq;
  int data = 0;
  
  do 
  {
    std::cout << "Enter data" << std::endl;
    std::cin >> data;
    if( data > 0)
      dq.push_back(data);
  } while(data>0);

  std::deque<int>::iterator it;

  std::cout << "{ ";
  for(it= dq.begin(); it!=dq.end(); it++)
    std::cout << *it << "  ";
  std::cout << "} ";

  data = 0;

  do 
  {
    std::cout << "Enter data" << std::endl;
    std::cin >> data;
    if( data > 0)
      dq.push_front(data);
  } while(data>0);

  std::cout << "{ ";
  for(it= dq.begin(); it!=dq.end(); it++)
    std::cout << *it << "  ";
  std::cout << "} ";

  return 0;
}