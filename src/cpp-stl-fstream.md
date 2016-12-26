**C++ Library - <fstream>**

Introduction
This data type represents the file stream generally, and has the capabilities of both ofstream and ifstream which means it can create files, write information to files, and read information from files.

Definition
Below is definition of std::fstream.


template<
   class CharT,
   class Traits = std::char_traits<CharT>>
class basic_fstream : public std::basic_iostream<CharT, Traits>

Parameters
charT − Aliased as member char_type.

traits − Aliased as member traits_type.

Member types
Following member types can be used as parameters or return type by member functions.

S.N.	Member types	Definition
1	char	Character Type
2	char_traits<char>	traits_type
3	int	const value_type
4	int	int_type
5	streampos	pos_type
6	streamoff	off_type
Functions from <fstream>
Below is list of all methods from <fstream>

Member functions
S.N.	Method & description

**1	fstream::close**
Closes the file currently associated with the object, disassociating it from the stream.

```cpp
#include <fstream>      

int main () {
  using namespace std;

   fstream fs;
   fs.open ("test.txt", fstream::in | fstream::out | fstream::app);

   fs << " more lorem ipsum";

   fs.close();

   return 0;
}
```

**2	fstream::is_open**
Returns whether the stream is currently associated to a file.
```cpp
#include <iostream>     
#include <fstream>      

int main () {
  using namespace std;
   fstream fs;
   fs.open ("test.txt");
   if (fs.is_open()) {
      fs << "lorem ipsum";
      cout << "Operation successfully performed\n";
      fs.close();
   } else {
      cout << "Error opening file";
   }
   return 0;
}
```

3	fstream::open
Opens the file identified by argument filename, associating it with the stream object.

```cpp
#include <fstream>

int main () {
  using namespace std;
  fstream fs;
  fs.open ("test.txt", fstream::in | fstream::out | fstream::app);

  fs << " more lorem ipsum";

  fs.close();

  return 0;
}
```

**4	fstream::operator=**
Returns a constant iterator which points to the start of the array.
```cpp
#include <fstream>

int main () {
  using namespace std;
  fstream foo;
  fstream bar ("test.txt");

  swap(foo,bar);

  foo << "tutorialspoint";

  foo.close();

  return 0;
}
```

**5	fstream::rdbuf**
Returns a pointer to the internal filebuf object.
```cpp
#include <fstream>
#include <cstdio>

int main () {
  using namespace std;
  fstream src,dest;
  src.open ("test.txt");
  dest.open ("copy.txt");

  filebuf* inbuf  = src.rdbuf();
  filebuf* outbuf = dest.rdbuf();

  char c = inbuf->sbumpc();
  while (c != EOF) {
    outbuf->sputc (c);
    c = inbuf->sbumpc();
  }
  dest.close();
  src.close();

  return 0;
}
```

**6	fstream::swap**
Exchanges all internal data between `x and *this`.

```cpp
#include <fstream>

int main () {
  using namespace std;
  fstream foo;
  fstream bar ("test.txt");

  swap(foo,bar);

  foo << "tutorialspoint";

  foo.close();

  return 0;
}
```

Non-member overloaded functions
S.N.	Method & description
1	swap-free
Exchanges the values of the fstream objects x and y.
