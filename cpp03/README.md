<img width="1334" alt="Graded by peers" src="https://user-images.githubusercontent.com/74931024/140664597-a98de7ae-6c29-4dfa-8c25-b60ba314c98a.png">

**If you want to learn more about IT topics, visit my website:** [**IA Notes**](https://ia-notes.com/)

### What is inheritance?
Inheritance allows us to perform hierarchical classifications. With inheritance, it is possible to create a general class that defines common attributes of a set of related objects. This class could then be inherited by more specific classes, each adding only those characteristics that are unique to this particular inherited class. <br>
A class that inherits another class is called a derived class. The class that is inherited is called the base class. One important thing to note is that a base class can point to a derived class but a derived class cannot point to a base class, so if we have a base class called Animal it can point to two more concrete classes like Dog class or Cat class as long as both classes inherit the Animal class.<br>

    class BaseClass
    {
      // Definition of BaseClass
    }
  
    class DerivatedClass : public BaseClass
    {
      // Definition of DerivatedClass
    }

C ++ supports inheritance by allowing a class to embed another class within its declaration. The biggest advantage of inheritance is that it allows you to create a base class that can be incorporated into more specific classes. In this way, each derived class can be precisely created for its own needs, forming part of the more generic part at the same time.
