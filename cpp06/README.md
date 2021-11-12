<img width="1334" alt="Graded by peers" src="https://user-images.githubusercontent.com/74931024/141278089-eff970da-40be-4504-bb89-c81c306b6544.png">

**If you want to learn more about IT topics, visit my website:** [**IA Notes**](https://ia-notes.com/)

### What is the cast operator?
A cast operator is a **unary operator** that allows you to convert a data into another of a different type. C ++ supports **four types** of cast operators:

#### Static cast
It is the simplest cast operator that can be used. **It is done at compile time**. It allows **implicit conversions** between different data types (int, float, void *, etc.). However, in the case of objects, you can only statically cast two objects if they are related to each other.

    float numberOne = 5.32f;
    int   numberTwo = static_cast<int>(numberOne)

#### Dynamic cast
To convert pointers or references within an inherited hierarchy. **This cast is done at run time**, which allows it to be used with polymorphism between classes. In this way, you can try to convert all kinds of types and objects (derived to base and base to derivative). If casting is not possible, it **returns NULL**.

    Derived*  deri;
    Base*     base = dynamic_cast<Base *>(deri);

#### Reinterpret cast

#### Const cast
#### Cast operators
#### Explicit keyword
