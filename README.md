<h3>Algorithm</h3>
    <pre>
1. Start.
2. Function reverse(int n):
   - If n < 10:
       - Print n.
       - Return.
   - Else:
       - Print n % 10.
       - Call reverse(n / 10).
3. Main Function:
   - Declare an integer n.
   - Prompt user for a four-digit integer.
   - Read n.
   - Print "Reversed integer: ".
   - Call reverse(n).
4. End.
    </pre>

  <h3>Usage</h3>
    <ol>
        <li>Compile the C++ program.</li>
        <li>Run the executable.</li>
        <li>Enter a four-digit integer when prompted.</li>
        <li>The program will display the reversed integer.</li>
    </ol>

  <h2>2. Reverse String Program</h2>
    <p>This C++ program reverses a string using two different recursive methods.</p>

  <h3>Features</h3>
    <ul>
        <li>Accepts a string as input from the user.</li>
        <li>Reverses the string using a recursive function.</li>
        <li>Demonstrates an alternate method of reversing a string recursively.</li>
        <li>Prints both the reversed strings to the console.</li>
    </ul>

   <h3>Code Explanation</h3>
    <p>The program consists of two main functions for reversing the string:</p>
    <ol>
        <li><code>reverse(char *str, int i, int n)</code>: This function recursively reverses the string by first calling itself to reach the end of the string, then printing each character during the unwinding of the recursive calls.</li>
        <li><code>print_rev(char *str)</code>: This alternate method recursively prints the string in reverse by first processing the subsequent characters before printing the current character.</li>
    </ol>

  <h3>Algorithm</h3>
1. Start.
2. Function length(char *str):
   - Initialize l = 0.
   - While str[l] is not '\0':
       - Increment l.
   - Return l (length of the string).

3. Function reverse(char *str, int i, int n):
   - If i == n, return.
   - Call reverse(str, i + 1, n).
   - Print str[i].

4. Function print_rev(char *str):
   - If *str != '\0':
       - Call print_rev(str + 1).
       - Print *str.

5. Main Function:
   - Declare a char array str[50].
   - Prompt user for a string.
   - Read str.
   - Call length(str) to get the string length.
   - Call reverse(str, 0, n) to print the reversed string.
   - Call print_rev(str) to demonstrate the alternate method.
6. End.
    <h3>Usage</h3>
    <ol>
        <li>Compile the C++ program.</li>
        <li>Run the executable.</li>
        <li>Enter a string when prompted.</li>
        <li>The program will display the reversed string using both methods.</li>
    </ol>
<h1>Factorial Calculation Program</h1>
<p>This C++ program calculates the factorial of a non-negative integer using recursion.</p>

<h2>Features</h2>
<ul>
    <li>Accepts a non-negative integer as input.</li>
    <li>Uses recursion to calculate the factorial.</li>
    <li>Handles negative input gracefully by providing an error message.</li>
    <li>Displays the calculated factorial to the console.</li>
</ul>

<h2>Code Explanation</h2>
<p>The program defines a function <code>factorial_recursive(int n)</code> that performs the following:</p>
<ol>
    <li>Checks if the input <code>n</code> is negative; if so, it returns an error message.</li>
    <li>Checks if <code>n</code> is equal to 0; if so, it returns 1 (since <code>0! = 1</code>).</li>
    <li>Otherwise, it returns <code>n</code> multiplied by the factorial of <code>(n - 1)</code>.</li>
</ol>

<h2>Algorithm</h2>
<ol>
    <li>Start.</li>
    <li>Function <code>factorial_recursive(int n)</code>:
        <ul>
            <li>If <code>n < 0</code>: return an error message.</li>
            <li>If <code>n == 0</code>: return 1.</li>
            <li>Else: return <code>n * factorial_recursive(n - 1)</code>.</li>
        </ul>
    </li>
    <li>Main Function:
        <ul>
            <li>Declare an integer <code>n</code>.</li>
            <li>Prompt user for a non-negative integer.</li>
            <li>Read <code>n</code>.</li>
            <li>Call <code>factorial_recursive(n)</code> to calculate the factorial.</li>
            <li>If the result is not an error, display the factorial.</li>
        </ul>
    </li>
    <li>End.</li>
</ol>
