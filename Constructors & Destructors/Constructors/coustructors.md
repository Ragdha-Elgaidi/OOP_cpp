#  constructor
- a special type of member function that is called automatically when an object is created.
- In C++, a constructor has the same name as that of the class and it does not have a return type.
###  Default Constructor:
-  A constructor with no parameters is known as a default constructor.
### Parameterized Constructor:
-   a constructor with parameters  
-   This is the preferred method to initialize member data
-  When you have a parameterized constructor it will override the default constructor.
### copy constructor 
- It is used to initialize the members of a newly created object by copying the members of an already existing object.
- It is also called member-wise initialization because the copy constructor initializes one object with the existing object, both belonging to the same class on a member-by-member copy basis.
- It can be defined explicitly by the programmer. If the programmer does not define the copy constructor, the compiler does it for us.
