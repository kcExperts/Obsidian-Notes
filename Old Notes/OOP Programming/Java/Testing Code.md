Testing code is a vital part of the development process. 

#### Java Testing
There are different methods for testing. Using `main` method. But this is highly inefficient as you yourself has to check the output. We want something more automatic. 

>[!def|*] JUnit
>`JUnit` is a test framework (a semi-complete program which you finish) to test your program. To access it in Java (Eclipse), we do:
>- `File` $\rightarrow$ `New` $\rightarrow$ `JUnit Test Case` (use JUnit 4 test) and select the methods you want to test.
>- To test outputs against each other, use `assertEquals(exp, got)` to verify that they are equal. Depending on the complexity of your code, you might need to overwrite [[Equals Method]]. 
>- Define `exp` as the expected output of your code.
>- Define `got` as the output provided by your code.
>- `assertEquals(exp,got)` requires the arguments in that order.