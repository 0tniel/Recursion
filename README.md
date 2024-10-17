<title>Sum of Integers using Recursion</title>
</head>
<body>

 <h1>Sum of Integers using Recursion</h1>

 <h2>Aim</h2>
    <p>The purpose of this program is to calculate the sum of all integers from 1 to a given positive integer using recursion in C++.</p>

 <h2>Algorithm</h2>
    <ol>
        <li>Start</li>
        <li>Input a positive integer <code>n</code> from the user.</li>
        <li>Check if the input is valid:
            <ul>
                <li>If <code>n</code> is less than or equal to 0, prompt the user to enter a positive integer.</li>
            </ul>
        </li>
        <li>Recursive Function Call:
            <ul>
                <li>If <code>n == 1</code>, return 1 (base case).</li>
                <li>Otherwise, return <code>n + sumOfIntegers(n - 1)</code> to recursively calculate the sum.</li>
            </ul>
        </li>
        <li>Display the sum of integers from 1 to <code>n</code>.</li>
        <li>End</li>
    </ol>

<h2>Understanding Recursion</h2>
    <p><strong>Recursion</strong> is a programming technique where a function calls itself in order to solve a problem. In this program, recursion is used to calculate the sum of integers from 1 to a given number.</p>
    <p>Each recursive call breaks the problem into smaller instances of itself until a base condition is met, in this case when <code>n == 1</code>. The function then starts returning the results back through the chain of recursive calls.</p>
    <p>This approach allows complex problems to be solved in a simple and elegant way by dividing them into smaller, more manageable sub-problems.</p>
    <h2>Code Explanation</h2>
    <p>The program uses a recursive function <code>sumOfIntegers(int n)</code> to calculate the sum. The base case is when <code>n == 1</code>, and the recursion continues by reducing <code>n</code> by 1 in each call until the base case is reached.</p>

</body>
<h1>Factorial using Recursion</h1>

<h2>Aim</h2>
    <p>The purpose of this program is to calculate the factorial of a given positive integer using recursion in C++.</p>
    <h2>Algorithm</h2>
    <ol>
        <li>Start</li>
        <li>Input a positive integer <code>n</code> from the user.</li>
        <li>Check if the input is valid:
            <ul>
                <li>If <code>n</code> is less than 0, display a message that the factorial is not defined for negative numbers.</li>
            </ul>
        </li>
        <li>Recursive Function Call:
            <ul>
                <li>If <code>n == 0</code> or <code>n == 1</code>, return 1 (base case).</li>
                <li>Otherwise, return <code>n * factorial(n - 1)</code> to recursively calculate the factorial.</li>
            </ul>
        </li>
        <li>Display the factorial of <code>n</code>.</li>
        <li>End</li>
    </ol>
    <h2>Understanding Recursion</h2>
    <p><strong>Recursion</strong> is a method where a function calls itself to solve a problem. In this program, recursion is used to calculate the factorial of a number. The factorial of a number <code>n</code> is the product of all positive integers from 1 to <code>n</code>.</p>
    <p>The function calls itself repeatedly, reducing <code>n</code> by 1 in each recursive step until the base case (when <code>n</code> is 0 or 1) is reached. The factorial of 0 and 1 is defined as 1.</p>
    
 <h1>Reverse Integer using Recursion</h1>

<h2>Aim</h2>
    <p>The aim of this program is to reverse a given four-digit integer using recursion in C++.</p>

<h2>Algorithm</h2>
    <ol>
        <li>Start</li>
        <li>Input a four-digit integer <code>n</code> from the user.</li>
        <li>Recursive Function Call:
            <ul>
                <li>If <code>n</code> is less than 10, print <code>n</code> (base case).</li>
                <li>Otherwise, print the last digit of <code>n</code> (i.e., <code>n % 10</code>).</li>
                <li>Recursively call the function with <code>n / 10</code> to reverse the remaining digits.</li>
            </ul>
        </li>
        <li>Display the reversed integer.</li>
        <li>End</li>
    </ol>

<h2>Understanding Recursion</h2>
    <p><strong>Recursion</strong> is a technique where a function calls itself to break down a complex problem into simpler sub-problems. In this program, recursion is used to reverse an integer. The function keeps printing the last digit of the number and calling itself with the remaining digits until a single-digit number is reached (the base case).</p>

h2>Code Explanation</h2>
    <p>The program uses the function <code>reverse(int n)</code> to print the digits of the number in reverse order. If <code>n</code> is a single digit, it is printed directly. Otherwise, the last digit of <code>n</code> is printed, and the function is recursively called with <code>n / 10</code>.</p>
<h1>Print String in Reverse using Recursion</h1>

<h2>Aim</h2>
    <p>The aim of this program is to reverse a string using two methods that implement recursion in C++.</p>

 <h2>Algorithm</h2>

<h3>First Method</h3>
    <ol>
        <li>Start</li>
        <li>Input a string from the user.</li>
        <li>Find the length of the string using a helper function <code>length()</code>.</li>
        <li>Recursive Function Call:
            <ul>
                <li>Base case: if the current index equals the length of the string, stop recursion.</li>
                <li>Recursively call the function with the next character, and after the recursive call, print the current character.</li>
            </ul>
        </li>
        <li>End</li>
    </ol>
<h3>Alternate Method</h3>
    <ol>
        <li>Start</li>
        <li>Input a string from the user.</li>
        <li>Recursive Function Call:
            <ul>
                <li>Base case: if the current character is <code>'\0'</code> (end of string), stop recursion.</li>
                <li>Recursively call the function with the next character, and after the recursive call, print the current character.</li>
            </ul>
        </li>
        <li>End</li>
    </ol>
    <h2>Understanding Recursion</h2>
    <p><strong>Recursion</strong> is a technique where a function calls itself to solve a problem. In this program, recursion is used to print a string in reverse. The function first moves through the string, pushing characters onto the call stack, and then starts printing characters as the recursion unwinds.</p>
    <h2>Code Explanation</h2>
    <p>The program includes two methods to reverse a string:</p>
    <ul>
        <li>The first method uses a helper function to calculate the length of the string and then prints each character after the recursive call.</li>
        <li>The alternate method directly works on the string, checking for the end of the string, and then printing the character as the recursion unwinds.</li>
    </ul>
