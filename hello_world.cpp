#include <iostream> //*If I have just added some comms...*
#include <string>

int
main()
{ // Something here...
  std::cout << "Pls your name" << std::endl;
  std::string name = "";
  std::cin >> name;
  std::cout << "Hello world from " + name << std::endl; // Maybe here too...
  return 0;
}

