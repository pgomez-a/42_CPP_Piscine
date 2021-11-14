**If you want to learn more about IT topics, visit my website:** [**IA Notes**](https://ia-notes.com/)

### Containers
A container is an **object capable of storing a collection of other objects**. They are implemented as template classes, allowing greater flexibility of the types handled. The container manages memory usage and the methods provided to access it, directly or **through iterators**.<br><br>
Many containers have common implementations, so when deciding which types to choose from, we must also study which one is the most efficient. The different types of containers that are implemented by default, in the **standard template library**, or **STL**, are:
- **Secuential Containers**
-  - Array
-  - Vector
-  - Deque
-  - Forward list
-  - List

- **Associative Containers**
- - Set
- - Map
- - Multiset
- - Multimap

- **Unordered Associative Containers**
- - Unordered_set
- - Unordered_map
- - Unordered_multiset
- - Unordered_multimap

- **Adaptors (interfaces for containers)**
- - Stack
- - Queue
- - Priority_queue

### Iterators
An iterator is an object that points to an element within a container. **We can use it to move around the contents of a container**. It is similar to a pointer, without being exactly the same.<br>
Depending on the type of iterator, we can classify them into five categories:
- **Random Access**
- **Bidirectional**
- **Forward**
- **Input / Output Iterators**

Not all containers use all types of iterators, so we need to make sure that the containers we use have the required iterators.
