#include <iostream>
#include <stack>
#include <string>

int main()
{
  std::stack<std::string> back_stack, front_stack;
  std::string temp, website;

  while(temp != "exit")
  {
    std::cout << " What do you want to do ? " << std::endl;
    std::cout << " [1] Visit a website [2] Go Back [3] Go Front " << std::endl;
    std::cin >> temp;
    if ( temp == "exit" )
      break;
    if ( temp == "1" )
    {
      std::cout << " Please enter the website " << std::endl;
      std::cin >> website;
      back_stack.push(website);
    }
    else if ( temp == "2" )
    {
      if( back_stack.size() !=0 )
      {
        front_stack.push(back_stack.top());
        back_stack.pop();
      }
    }
    else if ( temp == "3" )
    {
      if( front_stack.size() !=0 )
      {
        back_stack.push(front_stack.top());
        front_stack.pop();
      }
    }
    if( back_stack.size() !=0 )
      std::cout << " URL :  " << back_stack.top() << std::endl;

  }
  return 0;
}