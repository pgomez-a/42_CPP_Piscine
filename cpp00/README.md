# CPP00
<img width="1334" alt="Graded by peers" src="https://user-images.githubusercontent.com/74931024/140664361-1bcd9d6b-040b-46ca-a832-4ec52f547970.png">

**If you want to learn more about IT topics, visit my website:** [**IA Notes**](https://ia-notes.com/)

### What are namespaces?
It is a way of creating a block where different functions will be entered, so that when you want to use this block you can use all the functions of it using a namespace to **identify the functions** and distinguish them from others.
Imagine that there are two blocks that contain a function with the same prototype. In C we could have a compilation error, but thanks to the namespaces we can use both functions by referring to their namespace first.<br>
<br>
One of the most common functions we use is **std::cout,** which is used to display something in STD_OUT. This function comes from the std namespace, so we have two different ways to call it:

    #include <iostream>
    
    std::cout << "Hello World!";

Using std namespace:

    #include <iostream>
    using namespace std
    
    cout << "Hello World!";

### Input & output streams
The standard library of C++ is **\<iostream\>**. This library defines objects created for managing input/output streams:
  - Standard input  --> **std::cin**
  - Standard output --> **std::cout**
  - Standard error  --> **std::cerr**

Although these are the most important streams to consider, we can also find other related utilities for displaying things in STD_OUT or receiving data from STD_IN. Some of these utilities are:
  - **std::getline()** is a function that reads from an input stream (like stdin) and puts it in a std::string. It does not ignore whitespace or newlines. This feature differentiates this function from std::cin, which skips blanks, tabs, and newlines. If std::getline goes after std::cin, it will find a newline in the input stream. By default, the delimiter of std::geline will be a \n, so we won't be able to read the input unless we read the newline with another std::geline.
  - **std::cin.clear()** removes the error rate from std::cin so that the following input streams can work correctly. If there is an error, the error rate will be set and future attempts to read from an input stream will fail.
  - **std::cin.ignore()** searches the line break up to a series of breaks that are indicated by the user. It also removes all items it finds from the buffer until it reaches de \n.

### What are member functions and member attributes?
Once we understand what a class is, we see that it is made up of different values and functions. Values are known as **attributes** and **define all the properties of a class**. For example, let's imagine a kind of car. Like every car, our class will have an attribute that defines the number of wheels, an attribute that defines the type of car, another that defines the color, etc. So we can see how attributes are the characteristics that define a class.<br>
On the other hand, we can also find functions inside the class. These functions are called **methods**. Methods provide a way to **access and modify the attributes of a class**. So if we have an attribute for the color of the car, every time we want to change the color of the class, we should have access to a change_color method. If there is no method to do this, in general we will not be able to change the color attribute.<br><br>
All attributes and functions that are defined within a class are **member attributes** and **member functions**. Soon, we will see when we can modify attributes of a class directly or only using appropriate methods.

### This pointer
It is defined within an object as a **pointer to the containing object**. This is done to be able to access all the elements of the object when we are inside it. The main reason for this is because if we are inside an object working with a variable received as an argument with the same name as the object's attribute, we can differentiate them using the **this** pointer.

    class compare_values(int val)
    {
        this->val = val // this->val refers to the class attribute
    }

### How to initialize an object of a class?
There are some special methods that are used to initialize objects:
- **Constructor:** subroutine whose mission is to initialize an object of a specific class. In the constructor the attributes of a new object are initialized. In C ++, a constructor is a special method of a class that is called automatically each time a new object is created. A constructor has the same name as the class it belongs to and never returns anything.

- **Destructor:** used to free up resources that have been used by an object, since the object will no longer be used. It is also used to remove links between other objects and the current object. The call to this special method is also automatic when the object goes out of scope where it was declared.

### Const operator
The **const operator** is used to declare an **immutable object or variable**, or to specify that no value can be modified within a function. In this way we avoid making unwanted changes over values that we don't want to change.<br>
It's important to note that using the const operator doesn't mean that the value is stored in a read-only memory address. The use of the const operator tells the compiler to verify if the value declared as const is modified during execution so that it throws an error if it occurs, leading to not compiling the program.

### Visibility of classes

### Differences between class and struct

### What are accessors?

### Non-member attributes & Non-member functions

### Pointers to members
