#include<iostream>
#include<vector>
#include<list>
#include<string>
#include<fstream>

#define USE_LIST

class guest
{
  public:
    guest(){}
    ~guest(){}
    void set_gender(std::string in)
    {
      char i = in.c_str()[0];
      if ( i == 'b' || i == 'B' || i == 'm' || i == 'M' )
        gender = "Boy";
      else
        gender = "Girl";
    }
  std::string name;
  std::string gender;
  int age;
};

#ifdef USE_VECTOR
    typedef std::vector<guest> my_container;
#elif defined USE_LIST
    typedef std::list<guest> my_container;
#endif

void read_file(my_container *my_guests)
{
  std::string in_str;
  std::ifstream in_file("my_guests.txt");
  if(in_file.is_open())
  {
    guest temp;
    while(getline(in_file, in_str))
    {
      temp.name = in_str;
      getline(in_file, in_str);
      temp.set_gender(in_str); 
      getline(in_file, in_str);
      temp.age = stoi(in_str);

      my_guests->push_back(temp);
    }
    in_file.close();
  }
  else
    std::cout << "Unable to open file ! \n\n";
}

bool delete_guest(my_container *my_guests, const int index)
{
  auto it = my_guests->begin();
  for(int i=0; i<index; i++, it++)
  {
    if(it==my_guests->end())
      return false;
  }
  my_guests->erase(it);
  return true;
}

bool get_guest_iterator(const my_container *my_guests, const int index, guest &ret)
{
  auto it = my_guests->begin();
  for(int i=0; i<index; i++, it++)
  {
    if(it==my_guests->end())
      return false;
    else
      ret = *it;
  }
  return true;
}

float average_age(const my_container& my_guests)
{
  float avg = 0;
  for(guest g : my_guests)
  {
    avg = avg + g.age;
  }
  avg = avg / my_guests.size();
  return avg;
}

void print_guests(my_container *my_guests)
{
  auto it = my_guests->begin();

  std::cout << "-- Container Content Start -- \n";
  std::cout << "----------------------------- \n";
  while (it != my_guests->end()) 
  {
    std::cout << "Name   : " << it->name << std::endl;
    std::cout << "Age    : " << it->age << std::endl;
    std::cout << "Gender : " << it->gender << std::endl;
    std::cout << "----------------------------- \n";

    it++;
  }
  std::cout << "-- Container Content End --- \n";

}

void print_guest(const my_container *my_guests, const int i)
{
  guest g1;
  if( get_guest_iterator(my_guests, i, g1 ) )
  {
    std::cout << "----------------------------- \n";
    std::cout << "Name   : " << g1.name << std::endl;
    std::cout << "Age    : " << g1.age << std::endl;
    std::cout << "Gender : " << g1.gender << std::endl;
    std::cout << "----------------------------- \n";
  }
  else
    std::cout << "-- Sorry, there are only " << my_guests->size() + 1 << " guests  --- \n";
}

int main()
{

  if (__cplusplus == 201703L ) std::cout << "C++17\n";
  else if (__cplusplus == 201402L ) std::cout << "C++14\n";
  else if (__cplusplus == 201103L ) std::cout << "C++11\n";
  else if (__cplusplus == 199711L ) std::cout << "C++98\n";
  else std::cout << "pre-standard C++\n";

  my_container *my_guests = new my_container;
  read_file(my_guests);
  print_guests(my_guests);

  int i;
  std::cout << "which guest's info do you want ?" << std::endl;
  std::cin >> i;
  print_guest(my_guests, i);

  std::cout << "which guest's info do you want to remove ?" << std::endl;
  std::cin >> i;
  if( delete_guest(my_guests, i ) )
    std::cout << "-- Requested guest deleted " << std::endl;
  else
    std::cout << "-- Sorry, there are only " << my_guests->size() + 1 << " guests  --- \n";

  print_guests(my_guests);

  std::cout << "-- Average guest age is " << average_age( *my_guests ) << std::endl;

  return 0;
}