// 1.) What is a Linked List, and how does it differ from an Array ?  

// Ans.> A Linked List is a linear data structure where elements are called as a nodes and elements are stored in separate memory locations and connected using pointers. 
//       Each node contains two parts:  1.) Data – The actual value stored in the node.
//                                      2.) Pointer – A reference to the next node.

//    -> In Linked List we can allocate memory Dynamiclly, Wherever Array supports static and dynamic memory allocation.
//    -> Linked List Required extra for Pointers , Array not needed extra memory for Pointers.
//    -> Linked List is basically use when frequent insertions/deletions are required.
//    -> When we required fast access to elements is needed whenever array is used.


// 2.) What are Singly Linked List ?

// Ans.> A Singly Linked List is a type of linked list where each node points to the next node in the sequence but does not have a reference to the previous node,
//       Each node is connected in a one-way direction, meaning traversal is only possible in the forward direction.
//       It consists of:  1.) Data – The actual value stored in the node.
//                        2.) Next Pointer – A reference to the next node in the list. 


// 3.) What are Doubly Linked List ?

// Ans.> A Doubly Linked List (DLL) is a type of linked list where each node contains two pointers:
//       Previous Pointer – Points to the previous node in the list.
//       Next Pointer – Points to the next node in the list.

//    -> This allows bi-directional traversal, making operations like insertion, deletion, and traversal more efficient compared to a Singly Linked List.


// 4.) What are Circular Linked List ?

// Ans.> A Circular Linked List (CLL) is a type of linked list where all nodes are connected in a circular manner. 
//       Unlike Singly Linked Lists or Doubly Linked Lists, the last node in a Circular Linked List does not point to NULL; instead:

//    -> In a Singly Circular Linked List, the last node points back to the first node.
//    -> In a Doubly Circular Linked List, the last node’s next points to the first node, and the first node’s prev points to the last node.


// 5.) What is a Stack, and how does it follow the LIFO (Last In, First Out) principle?  

// Ans.> A Stack is a linear data structure that follows the LIFO (Last In, First Out) principle. 
//       This means that the last element added (pushed) is the first one to be removed (popped)—just like a stack of plates.

//    -> You place a plate on top (push operation).
//    -> The last plate added is the first one you take off (pop operation).


// 6.) What is a Queue, and how does it follow the FIFO (First In, First Out) principle ?

// Ans.) A Queue is a linear data structure that follows the FIFO (First In, First Out) principle.
//       This means that the first element added (enqueued) is the first one to be removed (dequeued)
//       — similar to a real-world queue (like a line at a ticket counter).

//    -> The first person to enter the queue is the first one to be served.
//    -> The last person to enter has to wait for everyone ahead of them.


// 7.) What is the difference between Queue and Stack ?  

// Ans.> A stack removes the most recently added item first (LIFO), Wherever A queue removes the earliest added item first (FIFO).
//    -> In a stack, push and pop happen at the same end (top), Wherever In a queue, insertion (enqueue) happens at the rear, and removal (dequeue) happens at the front.
//    -> Stack is basically used When you need to process the most recently added element first, Wherever Queue is used When you need to process the oldest added element first


// 8.)  Explain dynamic memory allocation using new and delete in C++. 

// Ans-> Dynamic Memory Allocation allows a program to allocate memory at runtime using the new operator and deallocate it using the delete operator. 
//       This is useful when the size of data structures (arrays, objects, etc.) is unknown during compilation.

//       New :
//              -> The new operator dynamically allocates memory from the heap.
//              -> It returns a pointer to the allocated memory.

//              Syntax : 
//                       pointer_variable = new data_type;

//      Delete : 
//              -> The delete operator frees up dynamically allocated memory.

//              Syntax : 
//                       delete pointer_variable;