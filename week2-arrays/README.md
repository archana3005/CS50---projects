# Week 2 - Arrays project

## Projects
- [Caesar Cipher](#caesar-cipher)


------------------------------------------------------------------------------------------------------------------------------------------------------------
## Caesar Cipher

A program that implements the Caesar cipher for encryption and decryption based on the user-presented key between 1 and 25.
### How to run 
-  If you are using cs50.dev:
  make caesar --> ./caesar


### How it works
- The program asks the user if they want encryption or decryption, the key, and the message.
- a loop that, as long as the user wants to, will continue to do cipher.
  
### Concepts practiced
- Strings as character arrays
- strlen(), isalpha(), islower(), isupper()
- Character arithmetic and ASCII values
- Modular arithmetic for wrap-around
- Helper functions for encryption and decryption
- Do a while loop for play again
- Input validation
  
### What I'd add next
- characters also part of the cipher
- much simpler code
  
### Commit log

- Working Caesar cipher


------------------------------------------------------------------------------------------------------------------------------------------------------------

## Substitution Cipher

A program that implements encryption and decryption of a message based on whatever key the user gives.
### How to run 
-  If you are using cs50.dev:
  make subcipher --> ./subcipher


### How it works
- The program asks the user if they want encryption or decryption, the key, and the message.
  
  
### Concepts practiced
- Arrays as lookup tables
- Forward and reverse character mapping
- Nested loops for reverse lookup
- ASCII arithmetic for position finding
- toupper(), tolower(), isalpha()
- break statement
- input validation
  
### What I'd add next
- characters also part of the cipher
- much simpler code
- loop so user can do it as much time as they want
  
### Commit log

- Working substitution cipher


