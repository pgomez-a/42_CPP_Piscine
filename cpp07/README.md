<img width="1334" alt="Graded by peers" src="https://user-images.githubusercontent.com/74931024/141612312-79cf3401-d9d0-4c87-89e7-c5f46bc29b3f.png">

**If you want to learn more about IT topics, visit my website:** [**IA Notes**](https://ia-notes.com/)

### Templates
Templates are a special type of function that allow us **to operate on generic types**. These allow us to define a single function capable of working with different types of data, without having to define the same function several times for different types of data.<br>
In C ++ we can achieve this using **"template parameters"**. This is a special type of parameter that is used to pass a type as an argument. The two possible ways to define a template function are:
- **template < class identifier > function_declaration;**
- **template < typename identifier > function_declaraion;**

These two expressions are totally equivalent. To make a call to a template function we use:
    
    function_name< type >(parameters)
    
A class can also be defined as a **template class**, so that it has methods capable of accepting different types of data.
