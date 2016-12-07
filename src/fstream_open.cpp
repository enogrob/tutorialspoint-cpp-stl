#include <fstream>

int main () {

   std::fstream fs;
   fs.open ("/Users/enogrob/Things/Projects/tutorialspoint-cpp-stl/src/test.txt", std::fstream::in | std::fstream::out | std::fstream::app);

   fs << " more lorem ipsum";

   fs.close();

   return 0;
}