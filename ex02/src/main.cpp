#include <iostream>
#include <string>

int main()
{
  std::string string = "HI THIS IS BRAIN";
  std::string notString = "HI THIS IS NOT BRAIN";
  std::string *stringPTR = &string;
  std::string &stringREF = string;

  std::cout << "string         address : " << &string << std::endl;
  std::cout << "stringPTR      address : " << &stringPTR << std::endl;
  std::cout << "stringPTR held address : " << stringPTR << std::endl;
  std::cout << "stringREF held address : " << &stringREF << std::endl;
  std::cout << "string           value : " << string << std::endl;
  std::cout << "stringPTR        value : " << *stringPTR << std::endl;
  std::cout << "stringREF        value : " << stringREF << std::endl
            << std::endl;
  *stringPTR = "HI THIS IS STILL BRAIN";
  std::cout << "[Changing strinPTR value to : \"HI THIS IS STILL BRAIN\"]"
            << std::endl;
  std::cout << "string         address : " << &string << std::endl;
  std::cout << "stringPTR      address : " << &stringPTR << std::endl;
  std::cout << "stringPTR held address : " << stringPTR << std::endl;
  std::cout << "stringREF held address : " << &stringREF << std::endl;
  std::cout << "string           value : " << string << std::endl;
  std::cout << "stringPTR        value : " << *stringPTR << std::endl;
  std::cout << "stringREF        value : " << stringREF << std::endl
            << std::endl;
  std::cout << "[Changing stringREF value to : \"HI THIS IS VERY MUCH BRAIN\"]"
            << std::endl;
  stringREF = "HI THIS IS VERY MUCH BRAIN";
  std::cout << "string         address : " << &string << std::endl;
  std::cout << "stringPTR      address : " << &stringPTR << std::endl;
  std::cout << "stringPTR held address : " << stringPTR << std::endl;
  std::cout << "stringREF held address : " << &stringREF << std::endl;
  std::cout << "string           value : " << string << std::endl;
  std::cout << "stringPTR        value : " << *stringPTR << std::endl;
  std::cout << "stringREF        value : " << stringREF << std::endl
            << std::endl;
  stringPTR = &notString;
  std::cout << "[Assigning stringPTR address to stringPTR]" << std::endl;
  std::cout << "string         address : " << &string << std::endl;
  std::cout << "stringPTR      address : " << &stringPTR << std::endl;
  std::cout << "stringPTR held address : " << stringPTR << std::endl;
  std::cout << "stringREF held address : " << &stringREF << std::endl;
  std::cout << "string           value : " << string << std::endl;
  std::cout << "stringPTR        value : " << *stringPTR << std::endl;
  std::cout << "stringREF        value : " << stringREF << std::endl
            << std::endl;
  stringREF = notString;
  std::cout << "[Assigning notString value to stringREF]" << std::endl;
  std::cout << "string         address : " << &string << std::endl;
  std::cout << "stringPTR      address : " << &stringPTR << std::endl;
  std::cout << "stringPTR held address : " << stringPTR << std::endl;
  std::cout << "stringREF held address : " << &stringREF << std::endl;
  std::cout << "string           value : " << string << std::endl;
  std::cout << "stringPTR        value : " << *stringPTR << std::endl;
  std::cout << "stringREF        value : " << stringREF << std::endl
            << std::endl;
}
