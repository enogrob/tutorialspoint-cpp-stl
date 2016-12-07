#include <fstream>

int main () {
   std::fstream foo;
   std::fstream bar ("/Users/enogrob/Things/Projects/tutorialspoint-cpp-stl/src/test.txt");

   swap(foo,bar);

   foo << "tutorialspoint";

   foo.close();

   return 0;
}