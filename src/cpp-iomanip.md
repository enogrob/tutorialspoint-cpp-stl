**C++ Library - <iomanip>**

Introduction
iomanip is a library that is used to manipulate the output of C++ program. Using C++, header providing parametric manipulators as shown below −

Parametric manipulators
Below are the Parametric manipulators −

S.N.	Method & description
*1	setiosflags*
It is used to Set format flags.
```cpp
#include <iostream>
#include <iomanip>

int main () {
   std::cout << std::hex;
   std::cout << std::setiosflags (std::ios::showbase | std::ios::uppercase);
   std::cout << 100 << std::endl;
   return 0;
}
```

*2	resetiosflags*
It reset format flags.
```cpp
#include <iostream>
#include <iomanip>

int main () {
   std::cout << std::hex << std::setiosflags (std::ios::showbase);
   std::cout << 100 << std::endl;
   std::cout << std::resetiosflags(std::ios::showbase) << 100 << std::endl;
   return 0;
}
```

*3	setbase*
It is used to set basefield flag.

Parameters
base − Numerical radix to be used as shown below −

S.N.	base argument & same as inserting
* 8 oct
* 10 dec
* 16 hex
* any otherresetiosflags(ios_base::basefield)

```cpp
#include <iostream>
#include <iomanip>

int main () {
   std::cout << std::setbase(16);
   std::cout << 110 << std::endl;
   return 0;
}
```

*4	setfill*
It is used to set fill character.
```cpp
#include <iostream>
#include <iomanip>

int main () {
   std::cout << std::setfill ('x') << std::setw (10);
   std::cout << 77 << std::endl;
   return 0;
}
```

*5	setprecision*
It is used to set decimal precision.
```cpp
#include <iostream>
#include <iomanip>

int main () {
   double f =3.14159;
   std::cout << std::setprecision(5) << f << '\n';
   std::cout << std::setprecision(9) << f << '\n';
   std::cout << std::fixed;
   std::cout << std::setprecision(5) << f << '\n';
   std::cout << std::setprecision(9) << f << '\n';
   return 0;
}
```

*6	setw*
It is used to set field width.
```cpp
#include <iostream>
#include <iomanip>

int main () {
   std::cout << std::setw(10);
   std::cout << 77 << std::endl;
   return 0;
}
```

*7	get_money*
It is used to get monetary value.
```cpp
#include <iostream>     
#include <iomanip>      

int main () {
   long double price;
   std::cout << "Please, enter the price: ";
   std::cin >> std::get_money(price);

   if (std::cin.fail())
      std::cout << "Error reading price\n";
   else
      std::cout << "The price entered is: " << price << '\n';

   return 0;
}
```

*8	put_money*
It is used to put monetary value.
```cpp
#include <iostream>
#include <iomanip>

int main () {
   std::cout << "Price:" << std::put_money(10.50L) << '\n';
   return 0;
}
```

*9	get_time*
It is used to get date and time.
```cpp
#include <iostream>     
#include <iomanip>      
#include <ctime>        

int main () {
  struct std::tm when;
  std::cout << "Please, enter the time: ";
  std::cin >> std::get_time(&when,"%R");   

  if (std::cin.fail()) std::cout << "Error reading time\n";
  else {
    std::cout << "The time entered is: ";
    std::cout << when.tm_hour << " hours and " << when.tm_min << " minutes\n";
  }

  return 0;
}
```

*10	put_time*
It is used to put date and time.
```cpp
#include <iostream>
#include <iomanip>
#include <ctime>
#include <chrono>

int main () {
   using std::chrono::system_clock;
   std::time_t tt = system_clock::to_time_t (system_clock::now());

   struct std::tm * ptm = std::localtime(&tt);
   std::cout << "Now (local time): " << std::put_time(ptm,"%c") << '\n';

   return 0;
}
```
