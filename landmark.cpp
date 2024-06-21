#include<iostream>
#include<map>
#include<unordered_map>
#include<string>

int main()
{
  std::map<std::pair<int,int>, std::string> pins;
  int temp=0;

  std::string str;
  std::pair<int, int> coordinates;
  std::pair<std::pair<int,int>, std::string> p;

  std::cout << "Enter data \n";
  while(temp>=0)
  {
    std::cout << "Enter latitude : ";
    std::getline(std::cin, str);
    temp = stoi(str);
    coordinates.first = temp;
    std::cout << "Enter latitude : ";
    std::getline(std::cin, str);
    temp = stoi(str);
    coordinates.second = temp;
    std::cout << "Enter name : ";
    std::getline(std::cin, str);

    if(temp>=0)
    {
      p.first = coordinates;
      p.second = str;
      pins.insert(p);
    }
  }

  std::cout << "Data";
  std::cout << "----";
  std::cout << "\n{\n";
  for(auto it = pins.begin(); it != pins.end(); it++ )
  {
    std::cout << it->first.first << "," << it->first.second << " --> " << it->second << std::endl;
  }
  std::cout << "}\n";

  //temp = 0;
  //std::cout << "Enter data to remove ";
  //while(temp>=0)
  //{
  //  std::cout << "Enter key : ";
  //  std::getline(std::cin, str);
  //  temp = stoi(str);
  //  if(temp>=0)
  //  {
  //    pins.erase(temp);
  //  }
  //}

  //std::cout << "Data";
  //std::cout << "----";
  //std::cout << "\n{\n";
  //for(auto it = pins.begin(); it != pins.end(); it++ )
  //{
  //  std::cout << it->first << " --> " << it->second << std::endl;
  //}
  //std::cout << "}\n";


  return 0;
}