#include <fstream>
#include <iostream>
#include <string>
#include <sys/stat.h>

bool fileExists(const std::string &filename) {
  struct stat buffer;

  if (stat(filename.c_str(), &buffer) != -1)
    return (true);
  return (false);
}

int main(int argc, char **argv) {

  if (argc != 4) {
    std::cout << "Error" << std::endl
              << "Enter 3 arguments" << std::endl
              << "1. A valid file (filename.txt) | 2. the "
                 "string to be replaced | 3. the string to replace with"
              << std::endl;
    return (1);
  }

  std::string outfile;
  std::string infile;
  std::string buffer;
  std::size_t found;
  std::string s1;
  std::string s2;

  infile = argv[1];
  s1 = argv[2];
  s2 = argv[3];
  outfile.append(infile + ".replace");
  if (fileExists(outfile)) {
    std::cout << outfile << "Error" << std::endl
              << "File already exists" << std::endl;
    return (1);
  }
  std::ifstream reader(infile.c_str());
  if (!reader.is_open()) {
    std::cout << "Error" << std::endl
              << "File can't open or deosn't exists" << std::endl;
    return (1);
  }
  std::ofstream writer(outfile.c_str());
  found = 0;

  while (std::getline(reader, buffer)) {
    for (std::string::iterator it = buffer.begin(); it != buffer.end();
         it = buffer.begin() + found) {
      found = buffer.find(s1);
      if (found != std::string::npos) {
        buffer.erase(found, s1.length());
        buffer.insert(found, s2);
      } else
        break;
    }
    writer << buffer << std::endl;
  }
  reader.close();
  writer.close();
  return (0);
}
