# Design Patterns: Elements of Reusable Object-Oriented Software (1994) - Erich Gamma, Richard Helm, Ralph Johnson, and John Vlissides
  ### 1. Composition over inheritance
  ### 2. Write for interface and not for implementation.

## Three different natures of design pattern
1. Creational - How to create something. Ex - How should an object be instantiated.
    i. Singleton
    ii. Factory - One interface, which will have multiple implementations. Factory class will be responsible for  giving us the object based on some paramters.
    iii. Abstract Factory
    iv. Builder - https://youtu.be/k4EkJgY9P4c. This is just about how to populate values inside the object
    v. Prototype
2. Structural - How to compose objects, Ex - Should we inherit functionaliies?, add another object inside the existing object? - All these descisions are made in this pattern. 
3. Behavioural - How objects communicate with each other if it cannot be composed in 2, 