<img width="1334" alt="Graded by peers" src="https://user-images.githubusercontent.com/74931024/140664551-cf185b3e-b4ea-4308-90f8-3263c2270087.png">

**If you want to learn more about IT topics, visit my website:** [**IA Notes**](https://ia-notes.com/)

### Polymorphism (Overload)
In OOP, **polymorphism** refers to the property by which it is possible to send syntactically the same messages to objects of different types. The only requirement that the object to be used polymorphically must meet is to be able to respond to the message that is sent to it. In other words, **with polymorphism we can define how an object should behave when it appears with a specific syntax or is called in a certain way**.<br>
<br>
There are two different types of polymorphism:
- **Dynamic polymorphism:** one that does not specify the type of data on which the object should work, so the compiler cannot check if it is an error situation. This means that if there are any errors, you are notified at run time.
- **Static polymorphism:** one in which attributes must specify their type before being used by the object for which the polymorphism is defined.

This behavior is also known as **operator overload**. There can be more than one definition with the same behavior and prototype within the same scope. Each of these definitions must differ from the rest in the type of parameters received and the number of arguments passed as parameters. We cannot overload functions that only differ in return type.

### Operator overload
We can redefine or overload most of the operators that come with C++ by default, so that **we can do operations with data types that could not otherwise be operated**. We refer to functions that are preceded by the **keyword "operator"** and accompanied by the operator to be overloaded. However, because it is a function, it must have its own return value and a list of parameters.<br><br>
So imagine you have two classes of animals and you want to multiply both, why would you want to multiply two animals? I don't know, but the truth is that you can do it thanks to the overload. Of course, once mastered, you will fall in love with the overload. Now imagine you want to check if two classes are equal, how could you compare two objects that are not built into C ++ by default? Now you know how to answer this.

### Canonical form - Standard for classes
