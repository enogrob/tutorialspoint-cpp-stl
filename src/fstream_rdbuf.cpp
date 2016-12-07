#include <fstream>
#include <cstdio>

int main () {
    std::fstream src,dest;
    src.open ("/Users/enogrob/Things/Projects/tutorialspoint-cpp-stl/src/test.txt");
    dest.open ("/Users/enogrob/Things/Projects/tutorialspoint-cpp-stl/src/copy.txt");

    std::filebuf* inbuf  = src.rdbuf();
    std::filebuf* outbuf = dest.rdbuf();

    char c = inbuf->sbumpc();
    while (c != EOF) {
        outbuf->sputc (c);
        c = inbuf->sbumpc();
    }

    dest.close();
    src.close();

    return 0;
}