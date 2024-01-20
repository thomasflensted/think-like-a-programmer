## Pure Puzzles

### Problem 1: Output Shapes In The Console

Output below shape in the console: <br>
\#####<br>
\####<br>
\###<br>
\##<br>
\#<br>

### Problem 2: Output Shapes In The Console

Output below shape in the console: <br>
\#<br>
\##<br>
\###<br>
\####<br>
\###<br>
\##<br>
\#<br>

### Problem 3: Luhn Checksum Validation
Take an identification number. Double the value of every other digit (starting from the right). Sum the values of the individual digits (if a number has two digits add each digit to the sum and not the whole number, e.g. 16 != 16, but 16 == 7). If the final sum is divisible by 10, the id number is valid.

### Problem 4: Decode A Message
Take a series of comma-delmited integers and decode its message with the following keys.
There are three modes: uppercase, lowercase and punctuation.<br>
In uppercase mode, the integer modulo 27 indicates the letter, where A = 1, B = 2, etc.<br>
Lowercase mode is the same as uppercase mode, but with lowercase letters.<br>
In punctuation mode, the integer modulo 9 indicates the sign according to the mapping below. <br>
At the beginning of each message, the decoding mode is uppercase. Every time the module operation results in 0, the decoding mode changes. The mode changes in the following order: Uppercase -> lowercase -> punctuation -> uppercase.
1: ! <br>
2: ? <br>
3: , <br>
4: . <br>
5: space <br>
6: ; <br>
7: " <br>
8: ' <br>
