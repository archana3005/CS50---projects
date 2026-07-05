# Week 2 - Arrays project

## Projects
- [Caesar Cipher](#caesar-cipher)
- [Substitution Cipher](#substitution-cipher)
- [Enigma Machine](#enigma-machine)


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

------------------------------------------------------------------------------------------------------------------------------------------------------------

## Enigma Machine

A program that implements a version of the Enigma Machine used during WW2 by the Germans. The user input is restricted to just the message they want to encrypt or decrypt for now. Encrypting the encrypted output gives back the original message. Same as the real Enigma machine.

### How to run 
-  If you are using cs50.dev:
  make enigma --> ./enigma


### How it works
Each letter passes through 9 transformations:
1. Plugboard — swaps letter pairs
2. Rotor 1 — forward substitution with offset
3. Rotor 2 — forward substitution with offset
4. Rotor 3 — forward substitution with offset
5. Reflector — bounces the signal back
6. Rotor 3 backward — reverse substitution
7. Rotor 2 backward — reverse substitution
8. Rotor 1 backward — reverse substitution
9. Plugboard — swaps again

After every letter, Rotor 1 steps by 1.
After every 26 letters, Rotor 2 steps by 1.
After every 676 letters, Rotor 3 steps by 1.
  
  
### Concepts practiced
- Arrays as lookup tables
- Bidirectional array traversal
- Offset calculations with modulo
- Rotor stepping mechanism
- Signal flow architecture
- Self-reciprocal encryption
- Polyalphabetic cipher
- Chaining multiple functions
  
### What I'd add next
- characters also part of the cipher
- much simpler code
- loop so user can do it as many times as they want
- User-defined plugboard pairs
- User-defined rotor starting positions
- Multiple rotor choices (real Enigma had 5 rotors)
- Notch mechanism for authentic rotor stepping
- encrypt/decrypt mode selection
  
### Commit log

- Working enigma machine



  
### Commit log

- Working substitution cipher


