Stacks are a type of container adaptors with LIFO(Last In First Out) type of working, where a new element is added at one end (top) and an element is removed from that end only.  Stack uses an encapsulated object of either vector or deque (by default) or list (sequential container class) as its underlying container, providing a specific set of member functions to access its elements.

Stack Syntax:-

For creating  a stack, we must include the <stack> header file in our code. We then use this syntax to define the std::stack:

template <class Type, class Container = deque<Type> > class stack;