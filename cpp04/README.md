<img width="1334" alt="Graded by peers" src="https://user-images.githubusercontent.com/74931024/140664664-1abd73a4-e6d3-4746-b4b7-8dc1f0b42021.png">

**If you want to learn more about IT topics, visit my website:** [**IA Notes**](https://ia-notes.com/)

### Sub-typing polymorphism
A class can use methods that are not implemented in itself, but in other classes that inherit from it. That is, the same class can take as many forms as derived classes it has. Following this principle, we can find two types of polymorphism:
- **Static polymorphism:** the memory reserved for a static polymorphism is done at compile time. It can be attributed to operator and method overloads.
- **Dynamic polymorphism:** memory is allocated at runtime, that is, when the application needs it. This situation occurs with the use of base class virtual methods that are redefined in derived classes. The use of the **"virtual"** keyword is strictly necessary. It is also important to know that this polymorphism depends on a process in which a pointer to a table of virtual functions requests to resolve which of the specified functions should be called. So thanks to this you can use a pointer to a base class which can point to all the classes derived from that class.

### Abstract classes & Interfaces
An abstract class is a class that contains at least one **pure virtual function**. A pure virtual function is a **function without definition**. Because of this, classes that inherit from this class must provide a specific definition for the pure virtual function. Otherwise, the derived class will become abstract.<br><br>

> **The return value of a pure virtual function must be consistent**. That is, the return value will be of the same type regardless of the class it comes from. So it doesn't matter if two classes overload the same function because the return value will be of the same type.
<br>

An abstract class is designed to be used only as a base class. And because a pure virtual function does not have a definition, the prototype must be followed by **"= 0"**. In addition, there are two characteristics that we must take into account when using these classes:
- We cannot pass the type of an abstract class as a parameter. We cannot declare an object of that class either, only of its derived classes. However, pointers to the abstract class can be declared, as well as references. Therefore, the main objective of a base class will be to offer an interface to the classes that inherit from it.
- The reason we cannot declare an object of an abstract class is that when the pure virtual function is created, a memory block is allocated for that function in the **VTABLE**. Because it has no definition, that memory block will remain empty, so the table will be incomplete. When the compiler detects this, it will throw an error.

### Virtual tables (VTABLE)

### Interfaces
