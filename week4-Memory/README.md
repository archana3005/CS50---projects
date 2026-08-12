# Week 2 - Arrays project

## Projects
- [Memory Hotel](#memory_hotel)



------------------------------------------------------------------------------------------------------------------------------------------------------------
## Memory Hotel
A hotel booking system in C that is actually a memory allocator in disguise. Checking a guest in triggers a malloc call. Checking a guest out is a call to freedom. The hotel's rooms are slots in a struct array, and the front desk logic is the same as bookkeeping a real memory allocator does.

### How to run 
-  If you are using cs50.dev:
  make memory_hotel --> ./memory_hotel

### How it works
- The registrar asks the user for their name and room, and allocates if there is space, all using the check-in function and the room allocation function
- It uses malloc to assign the "rooms" to memory and later frees it using the checkout function
- There are several measures to make sure there is a choice for both the hotel users and the registrar to quit
- The program also makes sure that there is no memory leak

  
  
### Concepts practiced
- Dynamic memory allocation with malloc/free, including checking for allocation failure
- Structs and arrays of structs for tracking multiple pieces of state at once
- Pointers as return values, and the difference between freeing a pointer vs. the variable holding its address
- Correct free-then-null ordering to avoid leaking or double-freeing memory
- File I/O with fopen/fprintf/fclose, including checking for a failed file open
- Debugging scanf/fgets buffer issues (leftover newlines breaking the next input read)
- Verifying memory safety with Valgrind
  
### What I'd add next
- A full menu (check in / check out by name/list guests / quit) instead of pairing check-in and check-out in the same turn
- Checking out by guest name instead of by slot number, which needs a search function
- Dynamically-sized guest names instead of a fixed 20-byte buffer
- A from-scratch malloc/free implementation over a static byte array, replacing the standard library calls
### Commit log

- Working memory hotel
- v1: simple version where only room allocation  and room freeing are available
- v2: check-in, check-out system along with CSV output containing the hotel users' data


------------------------------------------------------------------------------------------------------------------------------------------------------------

