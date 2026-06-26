# Week 1 - C projects

## Projects
- [Mario Pyramid](#mario-pyramid)
- [Number Guessing Game](#number-guessing-game)
- [Credit Card Validator](#credit-card-validator)

------------------------------------------------------------------------------------------------------------------------------------------------------------
## Mario Pyramid

A C program that prints a left, right, or double pyramid of hashes based on user input, inspired by the steps in the Mario game

### How to run 
-  If you are using cs50.dev:
  make Mario --> ./mario


### How it works
- Program asks the user if they want a double pyramid(d), left pyramid(l), or right pyramid(r)
- The program then asks the user for the height of the pyramid from 1 to 8
- User chooses from the available options, and based on that, a hash pyramid(l|r|d) of height(1   8) is formed
  
### Concepts practiced
- Nested loops
- functions and forward declarations
- user input
- conditionals
- comments and code structure
  
### What I'd add next
- more height
- reject invalid characters
- m=better stylistic choices

### Commit log

- Added Mario Pyramid
- Updated Mario with input validation and uppercase support
- added mario(1) with updated code

------------------------------------------------------------------------------------------------------------------------------------------------------------
## Number Guessing Game

A C program where the computer chooses a random number between 1 and 100, and the user tries to guess, with the computer giving hints based on whether the number is above or below the chosen number. 

### Concepts practiced
- rand() and srand() for random numbers
- time(NULL) for seeding
- do while loop
- Counter variables

### What I'd add next
- Option for user to continue with the game or not
- counter for a round-wise game
- making a user interface later in the course

------------------------------------------------------------------------------------------------------------------------------------------------------------
## Credit Card Validator

A C program to validate whether a credit card is real or not using Luhn's algorithm.

### Concepts practiced 
- algorithms implications
- long data type
- digit extraction using various math functions and operations
- integration of conditionals and loops

### What I'd add next
- integrate functions into it for a cleaner look
  


