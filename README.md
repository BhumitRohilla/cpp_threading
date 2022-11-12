# cpp_threading
Learning multithreading in cpp

***
## RESOURCE :- [CppNuts](https://www.youtube.com/c/CppNuts)

[Playlist](https://www.youtube.com/playlist?list=PLk6CEY9XxSIAeK-EAh3hB4fgNvYkYmghp)
***

**What do you understand by thread?**
<p>
In every application there is a default thread which is main(), in side this we create other threads.
A thread is also known as lightweight process. Idea is achieve parallelism by diving a process into multiple threads.
</p>

For example:

1. The browser has multiple tabls that can be different threads.
2. MS Word must be using multiple threads, one thread to format the text, antther thread to prcess spell checker.
3. IDEs Intellicence.

<p>
How to create Thread in Cpp

1. Function Pointer :- It is basic type of the thread creation.
2. Lambda Functions :- We can create thread by directly injecting lambda function.
3. [Functor](https://www.geeksforgeeks.org/functors-in-cpp/) (Function Object) :- Callable Object 
4. Member Functions
5. Static Member Funciton

</p>
