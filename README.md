📅 Day 01 – Basic Logic with Conditions and Loops
✅ Total Questions Solved: 5
No.	Problem Title
1	Check Even or Odd
2	Check Positive, Negative, or Zero
3	Find the Largest of Three Numbers
4	Check Leap Year
5	Print Numbers from 1 to N Divisible by 3

🔍 Problem-wise Explanation
1️⃣ Check Even or Odd
Problem: Determine if the given number is even or odd.
Logic:

A number is even if it’s divisible by 2 (i.e., num % 2 == 0)

Else, it is odd.

Sample Input: 7
Sample Output: 7 is an odd number.

2️⃣ Check Positive, Negative, or Zero
Problem: Classify the given number as positive, negative, or zero.
Logic:

Use an if-else ladder:

> 0 → Positive

< 0 → Negative

== 0 → Zero

Sample Input: -3
Sample Output: -3 is a negative number.

3️⃣ Find the Largest of Three Numbers
Problem: Find the largest among three integers.
Logic:

Use if-else:

Compare a, b, and c pairwise using &&

Sample Input: 10 4 7
Sample Output: 10 is the largest of all.

4️⃣ Check Leap Year
Problem: Check whether a year is a leap year.
Logic:

A year is a leap year if:

(year % 400 == 0) OR (year % 4 == 0 && year % 100 != 0)

Sample Input: 2020
Sample Output: 2020 is a leap year.

5️⃣ Print Numbers from 1 to N Divisible by 3
Problem: Print all numbers from 1 to N that are divisible by 3.
Logic:

Loop from 1 to N and print numbers where i % 3 == 0

Sample Input: 10
Sample Output: 3 6 9

