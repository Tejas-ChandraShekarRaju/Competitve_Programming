## Main Reason for why Spring? 
### Dependency Injection. When you annotate something as @Autowired Spring will fetch the object implementation of it and attach it to that variable. In the future you don't have to change the code to attach a new object

1:- Main goal of Spring framework is how to decouple relationship between dependent Object
2:- Dependency Injection means separate   the class which is dependent and inject them when its needed from outside

1. By default Spring follows singleton design pattern. So all classes annotated with @Component will be created on start of the application and added to the spring context/container(which is inside the JVM)

2. @Component annotating on the class will tell Spring to put it in the container/context. @Autowired will tell spring to search for that class in the container.

3. @Scope annotation lets us override the design pattern that spring uses for instantiating objects where @Component is mentioned. @Scope(value="protoype") -> will create an object when the object is needed and not on the start of application, which is the default behaviour of spring(@Scope(value="singleton")).
