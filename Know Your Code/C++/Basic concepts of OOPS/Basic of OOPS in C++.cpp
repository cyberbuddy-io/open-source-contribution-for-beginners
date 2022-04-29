Object-oriented programming – As the name suggests uses objects in programming. Object-oriented programming aims to implement real-world entities like inheritance, hiding, polymorphism, etc in programming. The main aim of OOP is to bind together the data and the functions that operate on them so that no other part of the code can access this data except that function.

Characteristics of an Object-Oriented Programming language



Class: The building block of C++ that leads to Object-Oriented programming is a Class. It is a user-defined data type, which holds its own data members and member functions, which can be accessed and used by creating an instance of that class. A class is like a blueprint for an object.

For Example: Consider the Class of Cars. There may be many cars with different names and brands but all of them will share some common properties like all of them will have 4 wheels, Speed Limit, Mileage range etc. So here, Car is the class and wheels, speed limits, mileage are their properties.

A Class is a user-defined data type that has data members and member functions.
Data members are the data variables and member functions are the functions used to manipulate these variables together these data members and member functions define the properties and behaviour of the objects in a Class.
In the above example of class Car, the data member will be speed limit, mileage, etc and member functions can apply brakes, increase speed, etc.
We can say that a Class in C++ is a blueprint representing a group of objects which shares some common properties and behaviors.

In C++, we use the keyword class to define a class. There are two sections in the class declaration: private and public, which will be explained later. For examples,

class Circle {         // classname
private:
   double radius;      // Data members (variables)
   string color;
public:   
   double getRadius(); // Member functions
   double getArea();
}
class SoccerPlayer {   // classname
private:
   int number;         // Data members (variables)
   string name;
   int x, y;
public:   
   void run();         // Member functions
   void kickBall();
}

Object: An Object is an identifiable entity with some characteristics and behavior. An Object is an instance of a Class. When a class is defined, no memory is allocated but when it is instantiated (i.e. an object is created) memory is allocated.


class person
{
    char name[20];
    int id;
public:
    void getdetails(){}
};
  
int main()
{
   person p1; // p1 is a object 
}
Objects take up space in memory and have an associated address like a record in pascal or structure or union in C.

When a program is executed the objects interact by sending messages to one another.

Each object contains data and code to manipulate the data. Objects can interact without having to know details of each other’s data or code, it is sufficient to know the type of message accepted and type of response returned by the objects.

Encapsulation: In normal terms, Encapsulation is defined as wrapping up of data and information under a single unit. In Object-Oriented Programming, Encapsulation is defined as binding together the data and the functions that manipulate them.

Consider a real-life example of encapsulation, in a company, there are different sections like the accounts section, finance section, sales section, etc. The finance section handles all the financial transactions and keeps records of all the data related to finance. Similarly, the sales section handles all the sales-related activities and keeps records of all the sales
Now there may arise a situation when for some reason an official from the finance section needs all the data about sales in a particular month. In this case, he is not allowed to directly access the data of the sales section. He will first have to contact some other officer in the sales section and then request him to give the particular data. This is what encapsulation is. Here the data of the sales section and the employees that can manipulate them are wrapped under a single name “sales section”.


Encapsulation in C++

Encapsulation also leads to data abstraction or hiding. As using encapsulation also hides the data. In the above example, the data of any of the section like sales, finance or accounts are hidden from any other section.

Abstraction: Data abstraction is one of the most essential and important features of object-oriented programming in C++. Abstraction means displaying only essential information and hiding the details. Data abstraction refers to providing only essential information about the data to the outside world, hiding the background details or implementation.

Consider a real-life example of a man driving a car. The man only knows that pressing the accelerators will increase the speed of the car or applying brakes will stop the car but he does not know about how on pressing the accelerator the speed is actually increasing, he does not know about the inner mechanism of the car or the implementation of accelerator, brakes, etc in the car. 
This is what abstraction is.
For example: A class called Circle is to be defined as illustrated in the class diagram. It contains two data members: radius (of type double) and color (of type String); and three member functions: getRadius(), getColor(), and getArea().

Three instances of Circles called c1, c2, and c3 shall then be constructed with their respective data members, as shown in the instance diagrams.


* The Circle class */
#include <iostream>    // using IO functions
#include <string>      // using string
using namespace std;
 
class Circle {
private:
   double radius;      // Data member (Variable)
   string color;       // Data member (Variable)
 
public:
   // Constructor with default values for data members
   Circle(double r = 1.0, string c = "red") {
      radius = r;
      color = c;
   }
 
   double getRadius() {  // Member function (Getter)
      return radius;
   }
 
   string getColor() {   // Member function (Getter)
      return color;
   }
 
   double getArea() {    // Member function
      return radius*radius*3.1416;
   }
};   // need to end the class declaration with a semi-colon
 
// Test driver function
int main() {
   // Construct a Circle instance
   Circle c1(1.2, "blue");
   cout << "Radius=" << c1.getRadius() << " Area=" << c1.getArea()
        << " Color=" << c1.getColor() << endl;
 
   // Construct another Circle instance
   Circle c2(3.4); // default color
   cout << "Radius=" << c2.getRadius() << " Area=" << c2.getArea()
        << " Color=" << c2.getColor() << endl;
 
   // Construct a Circle instance using default no-arg constructor
   Circle c3;      // default radius and color
   cout << "Radius=" << c3.getRadius() << " Area=" << c3.getArea()
        << " Color=" << c3.getColor() << endl;
   return 0;
}
To compile and run the program (with GNU GCC under Windows):

> g++ -o CircleAIO.exe CircleAIO.cpp
   // -o specifies the output file name
 
> CircleAIO
Radius=1.2 Area=4.5239 Color=blue
Radius=3.4 Area=36.3169 Color=red
Radius=1 Area=3.1416 Color=red


 Constructors
A constructor is a special function that has the function name same as the classname. In the above Circle class, we define a constructor as follows:

// Constructor has the same name as the class
Circle(double r = 1.0, string c = "red") {
   radius = r;
   color = c;
}
A constructor is used to construct and initialize all the data members. To create a new instance of a class, you need to declare the name of the instance and invoke the constructor. For example,

Circle c1(1.2, "blue");
Circle c2(3.4);      // default color
Circle c3;           // default radius and color
                     // Take note that there is no empty bracket ()
A constructor function is different from an ordinary function in the following aspects:

The name of the constructor is the same as the classname.
Constructor has no return type (or implicitly returns void). Hence, no return statement is allowed inside the constructor's body.
Constructor can only be invoked once to initialize the instance constructed. You cannot call the constructor afterwards in your program.
Constructors are not inherited (to be explained later).

 Default Arguments for Functions
In C++, you can specify the default value for the trailing arguments of a function (including constructor) in the function header. For example,

1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
/* Test function default arguments */
#include <iostream>
using namespace std;
 
// Function prototype
int sum(int n1, int n2, int n3 = 0, int n4 = 0, int n5 = 0);
 
int main() {
   cout << sum(1, 1, 1, 1, 1) << endl; // 5
   cout << sum(1, 1, 1, 1) << endl;    // 4
   cout << sum(1, 1, 1) << endl;       // 3
   cout << sum(1, 1) << endl;          // 2
// cout << sum(1) << endl;  // error: too few arguments
}
 
// Function definition
// The default values shall be specified in function prototype,
//   not the function implementation
int sum(int n1, int n2, int n3, int n4, int n5) {
   return n1 + n2 + n3 + n4 + n5;
}

"public" vs. "private" Access Control Modifiers
An access control modifier can be used to control the visibility of a data member or a member function within a class. We begin with the following two access control modifiers:

public: The member (data or function) is accessible and available to all in the system.
private: The member (data or function) is accessible and available within this class only.
For example, in the above Circle definition, the data member radius is declared private. As the result, radius is accessible inside the Circle class, but NOT outside the class. In other words, you cannot use "c1.radius" to refer to c1's radius in main(). Try inserting the statement "cout << c1.radius;" in main() and observe the error message:

 error: 'double Circle::radius' is private
Try moving radius to the public section, and re-run the statement.

On the other hand, the function getRadius() is declared public in the Circle class. Hence, it can be invoked in the main().

UML Notation: In UML notation, public members are denoted with a "+", while private members with a "-" in the class diagram.

 Information Hiding and Encapsulation
A class encapsulates the static attributes and the dynamic behaviors into a "3-compartment box". Once a class is defined, you can seal up the "box" and put the "box" on the shelve for others to use and reuse. Anyone can pick up the "box" and use it in their application. This cannot be done in the traditional procedural-oriented language like C, as the static attributes (or variables) are scattered over the entire program and header files. You cannot "cut" out a portion of C program, plug into another program and expect the program to run without extensive changes.

Data member of a class are typically hidden from the outside word, with private access control modifier. Access to the private data members are provided via public assessor functions, e.g., getRadius() and getColor().

This follows the principle of information hiding. That is, objects communicate with each others using well-defined interfaces (public functions). Objects are not allowed to know the implementation details of others. The implementation details are hidden or encapsulated within the class. Information hiding facilitates reuse of the class.

Rule of Thumb: Do not make any data member public, unless you have a good reason.


 Keyword "this"
You can use keyword "this" to refer to this instance inside a class definition.

One of the main usage of keyword this is to resolve ambiguity between the names of data member and function parameter. For example,

class Circle {
private:
   double radius;                 // Member variable called "radius"
   ......
public:
   void setRadius(double radius) { // Function's argument also called "radius"
      this->radius = radius;
         // "this.radius" refers to this instance's member variable
         // "radius" resolved to the function's argument.
   }
   ......
}
In the above codes, there are two identifiers called radius - a data member and the function parameter. This causes naming conflict. To resolve the naming conflict, you could name the function parameter r instead of radius. However, radius is more approximate and meaningful in this context. You can use keyword this to resolve this naming conflict. "this->radius" refers to the data member; while "radius" resolves to the function parameter.

"this" is actually a pointer to this object. I will explain pointer and the meaning of "->" operator later.

Alternatively, you could use a prefix (such as m_) or suffix (such as _) to name the data members to avoid name crashes. For example,

class Circle {
private:
   double m_radius;  // or radius_
   ......
public:
   void setRadius(double radius) {
      m_radius = radius;  // or radius_ = radius
   }
   ......
}
C++ Compiler internally names their data members beginning with a leading underscore (e.g., _xxx) and local variables with 2 leading underscores (e.g., __xxx). Hence, avoid name beginning with underscore in your program.

"const" Member Functions
A const member function, identified by a const keyword at the end of the member function's header, cannot modifies any data member of this object. For example,

double getRadius() const {  // const member function
   radius = 0;  
      // error: assignment of data-member 'Circle::radius' in read-only structure
   return radius;
}
2.16  Convention for Getters/Setters and Constructors
The constructor, getter and setter functions for a private data member called xxx of type T in a class Aaa have the following conventions:

class Aaa {
private:
   // A private variable named xxx of type T
   T xxx;
public:
   // Constructor
   Aaa(T x) { xxx = x; }
   // OR
   Aaa(T xxx) { this->xxx = xxx; }
   // OR using member initializer list (to be explained later)
   Aaa(T xxx) : xxx(xxx) { }
 
   // A getter for variable xxx of type T receives no argument and return a value of type T
   T getXxx() const { return xxx; }
 
   // A setter for variable xxx of type T receives a parameter of type T and return void
   void setXxx(T x) { xxx = x; }
   // OR
   void setXxx(T xxx) { this->xxx = xxx; }
}
For a bool variable xxx, the getter shall be named isXxx(), instead of getXxx(), as follows:

private:
   // Private boolean variable
   bool xxx;
public: 
   // Getter
   bool isXxx() const { return xxx; }
 
   // Setter
   void setXxx(bool x) { xxx = x; }
   // OR
   void setXxx(bool xxx) { this->xxx = xxx; }

 Default Constructor
A default constructor is a constructor with no parameters, or having default values for all the parameters. For example, the above Circle's constructor can be served as default constructor with all the parameters default.

Circle c1;   // Declare c1 as an instance of Circle, and invoke the default constructor
Circle c1(); // Error!
             // (This declares c1 as a function that takes no parameter and returns a Circle instance)
If C++, if you did not provide ANY constructor, the compiler automatically provides a default constructor that does nothing. That is,

ClassName::ClassName() { }  // Take no argument and do nothing
Compiler will not provide a default constructor if you define any constructor(s). If all the constructors you defined require arguments, invoking no-argument default constructor results in error. This is to allow class designer to make it impossible to create an uninitialized instance, by NOT providing an explicit default constructor.

 Constructor's Member Initializer List
Instead of initializing the private data members inside the body of the constructor, as follows:

Circle(double r = 1.0, string c = "red") {
   radius = r;
   color = c;
}
We can use an alternate syntax called member initializer list as follows:

Circle(double r = 1.0, string c = "red") : radius(r), color(c) { }
Member initializer list is placed after the constructor's header, separated by a colon (:). Each initializer is in the form of data_member_name(parameter_name). For fundamental type, it is equivalent to data_member_name = parameter_name. For object, the constructor will be invoked to construct the object. The constructor's body (empty in this case) will be run after the completion of member initializer list.

It is recommended to use member initializer list to initialize all the data members, as it is often more efficient than doing assignment inside the constructor's body.

2.19  *Destructor
A destructor, similar to constructor, is a special function that has the same name as the classname, with a prefix ~, e.g., ~Circle(). Destructor is called implicitly when an object is destroyed.

If you do not define a destructor, the compiler provides a default, which does nothing.

class MyClass {
public:
   // The default destructor that does nothing
   ~MyClass() { }
......
}
Advanced Notes
If your class contains data member which is dynamically allocated (via new or new[] operator), you need to free the storage via delete or delete[].
