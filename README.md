# Development Dialogue

### Entry 1: Starting with the Node

#### Things Done
Today I started by building the foundation, a simple Node struct for a singly
linked list. Coming from higher level languages, I am used to object oriented
patterns where data and methods are bundled together in classes. In C I learned
that the equivalent is done with typedef struct, and instead of attaching
methods to a class, I create functions that accept pointers to my Node type.

#### Things Learned
This design shift shows me both the freedom and the danger of C. Memory
management is completely manual, which makes it incredibly fast and efficient,
but also easy to misuse. There are no built in guard rails, structs can be
directly modified with ->, and there is no concept of visibility modifiers like
private or protected to prevent accidental misuse. The responsibility is on me
to write safe and consistent functions.

Working with dynamic memory also forces me to deal with issues like dangling
pointers and double frees. Implementing a freeNode function helps me understand
the role of double pointers, since being able to update the caller’s pointer to
NULL after freeing ensures I do not leave behind invalid memory references.

#### Plans Going Forward
I am starting with a recursive version to free a node and all subsequent nodes,
which is elegant, but next I am going to implement an iterative version. I also
plan to differentiate between freeing an entire list of nodes and freeing just a
single node (merging the two neighbors around it), to make the data structure
more dynamic.

Another big focus will be writing checks in every function to validate memory
before using it, making sure pointers are not NULL or already freed. In the
past, languages I have worked with gave me built in safety nets. In C I have to
provide my own.
