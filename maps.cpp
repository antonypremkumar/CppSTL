#include<iostream>
#include<map>
#include<unordered_map>
#include<string>

int main()
{
  std::unordered_map<int, std::string> m;
  int temp=0;
  std::string str;
  std::pair<int, std::string> p;

  std::cout << "Enter data \n";
  while(temp>=0)
  {
    std::cout << "Enter key : ";
    std::getline(std::cin, str);
    temp = stoi(str);
    std::cout << "Enter value : ";
    std::getline(std::cin, str);

    if(temp>=0)
    {
      p.first = temp;
      p.second = str;
      m.insert(p);
    }
  }

  std::cout << "Data";
  std::cout << "----";
  std::cout << "\n{\n";
  for(auto it = m.begin(); it != m.end(); it++ )
  {
    std::cout << it->first << " --> " << it->second << std::endl;
  }
  std::cout << "}\n";

  temp = 0;
  std::cout << "Enter data to remove ";
  while(temp>=0)
  {
    std::cout << "Enter key : ";
    std::getline(std::cin, str);
    temp = stoi(str);
    if(temp>=0)
    {
      m.erase(temp);
    }
  }

  std::cout << "Data";
  std::cout << "----";
  std::cout << "\n{\n";
  for(auto it = m.begin(); it != m.end(); it++ )
  {
    std::cout << it->first << " --> " << it->second << std::endl;
  }
  std::cout << "}\n";


  return 0;
}