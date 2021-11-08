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

### File Streams
