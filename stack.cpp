#include <iostream>
#include <stack>

int main()
{
  std::stack<int> st;
  int data = 0;
  
  do 
  {
    std::cout << "Enter data" << std::endl;
    std::cin >> data;
    if( data > 0)
      st.push(data);
  } while(data>0);

  std::cout << "{ ";
  while(st.size() > 0 )
  {
    std::cout << st.top() << "  ";
    st.pop();
  }
  std::cout << "} ";

  return 0;
}