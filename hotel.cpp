#include<iostream>
#include<map>
#include<unordered_map>
#include<string>

int main()
{
  std::unordered_map<int, std::string> hotel;
  int temp=0;
  std::string str;
  std::pair<int, std::string> p;

  std::cout << "Enter data \n";
  while(temp>=0)
  {
    std::cout << "Enter room number : ";
    std::getline(std::cin, str);
    temp = stoi(str);
    std::cout << "Enter guest's name : ";
    std::getline(std::cin, str);

    if(temp>=0)
    {
      p.first = temp;
      p.second = str;
      hotel.insert(p);
    }
  }

  std::cout << "Data";
  std::cout << "----";
  std::cout << "\n{\n";
  for(auto it = hotel.begin(); it != hotel.end(); it++ )
  {
    std::cout << it->first << " --> " << it->second << std::endl;
  }
  std::cout << "}\n";

  std::cout << "Enter existing room number ";
  std::getline(std::cin, str);
  temp = stoi(str);
  std::cout << "Enter guest's name : ";
  std::getline(std::cin, str);
  p.first = temp;
  p.second = str;
  hotel.insert(p);

  temp = 0;
  std::cout << "Enter room number to remove ";
  while(temp>=0)
  {
    std::cout << "Enter key : ";
    std::getline(std::cin, str);
    temp = stoi(str);
    if(temp>=0)
    {
      hotel.erase(temp);
    }
  }

  std::cout << "Data";
  std::cout << "----";
  std::cout << "\n{\n";
  for(auto it = hotel.begin(); it != hotel.end(); it++ )
  {
    std::cout << it->first << " --> " << it->second << std::endl;
  }
  std::cout << "}\n";


  return 0;
}