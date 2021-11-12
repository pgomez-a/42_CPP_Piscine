<img width="1334" alt="Graded by peers" src="https://user-images.githubusercontent.com/74931024/140664740-fa5200dc-621f-4a24-a08b-c07f83a1e261.png">

**If you want to learn more about IT topics, visit my website:** [**IA Notes**](https://ia-notes.com/)

### Nested classes
A nested class is a **class that is defined within the definition of another class**. We have to consider nested classes as yet another attribute. Like every class, it will have its own constructor, destructor, and attributes. And if you wonder about its relationship with inheritance, the truth is that there are no similarities. A nested class does not inherit from the class in which it is defined. **It will only act as one more attribute**, so we could define specific methods to treat them.

### Exceptions
An **exception** is a **problem that appears during the execution of a program**. An exception in C ++ is a response to an exceptional circumstance that occurs during the execution of a program, such as dividing by 0. <br>
Exceptions will allow us to transfer control of one part of our program to another part that can handle that error. Because of this, exceptions in C ++ are built on:
- **throw:** the program throws an exception when a problem is detected.
- **catch:** an exception is caught with an exception handler in the place where the problem is to be handled.
- **try:** identifies a block of code so that special exceptions can be caught.

### Throw exceptions
Exceptions can be thrown anywhere in the program using the **throw keyword**:

    if (this->_size > 10)
      throw "The size is too big";
      
The operand determines the type of exception, being able to throw **any expression**, so the result of the expression determines the type of exception thrown.

### Catch exceptions
The **try block** is followed by the **catch block**, which can catch all kinds of exceptions. The type of exception to catch must be specified. This is determined by the type used in the catch block declaration:

    try {
      // code to detect the exception
    }
    catch (ExceptinType e) {
      // code to manage the exception
    }
    catch (...) {
      // code to handle exception regardless of type
    }
    
If you want to handle all kinds of exception, you should not specify the type -> **catch (...)**

### std::exceptions
- **std::exception     ->** any exception from std
- **std::bad_alloc     ->** released by new
- **std::bad_cast      ->** thrown by dynamic cast
- **std::bad_exception ->** unexpected exception
- **std::range_error   ->** attempt to store a value out of range
- **std::runtime_error ->** error difficult to detect when reading code
