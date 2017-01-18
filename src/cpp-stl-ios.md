**C++ Library - <ios>**

**Introduction**

The C++ standard libraries provide an extensive set of input/output capabilities which we will see in subsequent chapters. This chapter will discuss very basic and most common I/O operations required for C++ programming.

Input-Output base classes and types for the IOStream hierarchy of classes as shown below −

**Types**

Class templates

| S.N.	| Member types	| Definition
|-----------------------------------
| 1	    | basic_ios     | Base class for streams (type-dependent components   
| 2	    | fpos	        | Stream position class template

Classes

| S.N.  | Member types	| Definition
|-----------------------------------
| 1     | ios           | Base class for streams (type-dependent components)
| 2	    | ios_base	    | Base class for streams
| 3	    | wios	        | Base class for wide character streams

Other types

|S.N.	  | Member types	| Definition
|-----------------------------------
| 1	    | io_errc	      | Input/output error conditions
| 2	    | streamoff	    | Stream offset type
| 3	    | streampos	    | Stream position type
| 4	    | streamsize	  | Stream size type
| 5	    | wstreampos	  | Wide stream position type

Format flag manipulators (functions)
Independent flags (switch on) −

| S.N.	 | Member types| Definition
|----------------------------------
| 1	   | boolalpha     | Alphanumerical bool values
| 2	   | showbase	     | Show numerical base prefixes
| 3	   | showpoint	   | Show decimal point
| 4	   | showpos	     | Show positive signs
| 5	   | skipws	       | Skip whitespaces
| 6	   | unitbuf	     | Flush buffer after insertions
| 7	   | uppercase	   | Generate upper-case letters

Independent flags (switch off) −

| S.N.  | Member types | Definition
|----------------------------------
| 1	    | noboolalpha	 | No alphanumerical bool values
| 2	    | noshowbase	 | Do not show numerical base prefixes
| 3	    | noshowpoint	 | Do not show decimal point
| 4	    | noshowpos    | Do not show positive signs
| 5	    | noskipws	   | Do not skip whitespaces
| 6	    | nounitbuf	   | Do not force flushes after insertions
| 7	    | nouppercase	 | Do not generate upper case letters

Numerical base format flags ("basefield" flags) −

| S.N.	| Member types | Definition
|----------------------------------
| 1	    | dec	         | Use decimal base
| 2	    | hex	         | Use hexadecimal base
| 3	    | oct	         | Use octal base

Floating-point format flags ("floatfield" flags) −

| S.N.	| Member types | Definition
|---------------------------------
| 1	    | fixed	       | Use fixed floating-point notation
| 2	    | scientific	 | Use scientific floating-point notation

Adustment format flags ("adjustfield" flags) −

| S.N.	| Member types | Definition
|---------------------------------
| 1	    | internal	   | Adjust field by inserting characters at an internal position
| 2	    | left	       | Adjust output to the left
| 3	    | right	       | Adjust output to the right
