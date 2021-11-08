<img width="1334" alt="Graded by peers" src="https://user-images.githubusercontent.com/74931024/140664496-09a8e075-9e7d-45cc-8555-6a982d98c317.png">

**If you want to learn more about IT topics, visit my website:** [**IA Notes**](https://ia-notes.com/)

### New & Delete
In C, when we want to allocate some memory in the heap we use **malloc()**, while if we want to free that allocated memory we use **free()**. With C ++ we can also use these functions, but why use them when two new operators are added to allocate and free memory in a much more efficient way: **new & delete**.
- **new:** send a request to allocate memory in the heap. If enough memory is available, the new operator initializes the memory and returns the address of the first memory block that was allocated. If we want to specify the number of objects/arrays/variables/attributes to save, we have to use the **[size] operator**.

      int* numberOne = new int(3); // This line allocates a memory block containing int 3
      int* numberTwo = new int [3]; // This line allocates memory for an array of 3 ints

- **delete:** it's used to free the memory allocated by new. In case of having indicated the number of variables to be stored with new, delete must be followed by the **[] operator**, which this time remains empty.

      delete numberOne;
      delete [] numberTwo;

### How to use references?
When a **reference** is declared, it is converted to an alternate name to refer to the variable it refers to. If you create a reference to a variable and change the value of the reference, the value of the variable will change, because both the reference and the variable are at the same memory address. However, if with pointers we must use * to access the content of the memory address it points to, references are treated as variables.<br> So to define a reference, **we use &**:

      int  x = 10;
      int& y = x;
      
      y = 2;
      std::cout << x; // Output: 2
      
<br>    
The main characteristics that we can highlight from all this are:

- With a reference we can modify the value of the variable to which it refers.
- We avoid using copies of objects and variables when passing them as arguments to methods and functions.
- A reference can never be of type void.
- **A reference cannot be updated** (it always refers to the same value).

### File Streams
So far, we have used the **\<iostream\>** library to use the **std::cin** and **std::cout** methods. This allows us both to read from the system's stdin and to write to the stdout. However, we can also use file streams to read data from some files and write data to other files.<br>
<br>
To be able to write to or read from a file, we use the **\<fstream\>** library. This library defines three new types of data that will allow us to achieve our goal:

- **ofstream:** represents an output file stream and is used to create new files or write to files.
- **ifstream:** represents an input file stream and is used to read data from files.
- **fstream:** it is a general stream that is used to read and write, and can even create new files.
