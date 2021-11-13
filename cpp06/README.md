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
It is guaranteed that if a pointer is casted to a pointer of another type and then that pointer is re-cast back to the initial pointer type, the original value is returned. What you do is **change the way in which the stored bits are handled** in the address to which it is pointed. That is why it is necessary to recast again, otherwise the content does not make sense.

    Struct*     data;
    uintptr_t   tmp;
    Struct*     result;
    
    tmp = reinterpret_cast<uintptr_t>(data); // Now tmp stores an int, which in fact is the casted struct
    result = reinterpret_cast<Struct *>(tmp); // Now result is pointing to the same address as data

#### Const cast
It is used when we want **to modify a constant value**. Due to the fact that we cannot modify a constant value, we can avoid this limitation by using const_cast. But this could be very risky, because why would we want to change a constant value? So before using this cast, ask yourself if you could do what you want to achieve by doing something different.

    ClassType&  ClassType::operator=(ClassType const & classtype)
    {
        ClassType*  change;
        
        change = const_cast<ClassType *>(&classtype);
        change->value = 10;
        return (*this);
    }

### Cast operators
Once we know the four types of cast operators that exist, we have a right to ask ourselves about the cast between objects and data types. With the conversions we've seen, we don't know of any method to convert a class to, for example, an int. To achieve this, we have **cast operators**, which have a specific syntax and will allow us to **convert a class into a specific data type**.<br><br>
To make a cast operator to a generic type called generic, we must do **\"operator generic() { return static_cast\<generic>(this->_value); }\"**. Now, we substitute the generic word for the type of data that we want to cast. Below, you have an example:
    
    class   CastExample
    {
        public:
            // [...] Requirements for canonical form
    
            operator int()      { return static_cast<int>(this->_value); }
            operator float()    { return static_cast<float>(this->_value); }
            operator char()     { return static_cast<char>(this->_value); }
    
        private:
            float   _value;
    };

### Explicit keyword
