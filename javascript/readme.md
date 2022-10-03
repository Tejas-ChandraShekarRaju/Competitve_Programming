<!-- https://www.freecodecamp.org/news/javascript-promise-tutorial-how-to-resolve-or-reject-promises-in-js/#:~:text=It%20produces%20a%20value%20after,by%20the%20reject%20function%20call. -->

## Promises
1. **Definition : The Promise object represents the eventual completion (or failure) of an asynchronous operation and its resulting value.** **(Like Futures in Java).**
Just to review, a promise can be created with the constructor syntax, like this:

let promise = new Promise(function(resolve, reject) {
  // Code to execute
});

2. The constructor function takes a function as an argument. This function is called the executor function.
3. The executor function takes two arguments, resolve and reject. These are the callbacks provided by the JavaScript language. Your logic goes inside the executor function that runs automatically when a new Promise is created.
4. A Promise uses an executor function to complete a task (mostly asynchronously). A consumer function (that uses an outcome of the promise) should get notified when the executor function is done with either resolving (success) or rejecting (error).

The handler methods, .then(), .catch() and .finally(), help to create the link between the executor and the consumer functions so that they can be in sync when a promise resolves or rejects.



# Q&A

1. When do we see callback hells created in the code base?
   When there is a hierarchy of dependencies where each function depends on the result of another function and the last function has to notify the parent.
2. 