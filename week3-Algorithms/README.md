# Week 3 - Algorithm projects

## Projects
- [Linear vs Binary](#linear-vs-binary)
- [Sortrace](#sortrace)
- [Recursive maze solver](#recursive-maze-solver)
  

------------------------------------------------------------------------------------------------------------------------------------------------------------
## Linear vs Binary

A program that finds out which search linear or binary finds a target value from an array faster with less number of steps. 
### How to run 

-  If you are using cs50.dev:
  make lvb --> ./lvb


### How it works
- The program asks the user for the number of values(100,1000, etc) for the array
- The array is completely randomized in the beginning
- We use a bubble sort to presort for binary
- The program then asks the user their target value(e.g., 74 )
- Both Linear and Binary search try to find the value if it exists

### Concepts practiced
- Linear search O(n)
- Binary search O(log n)
- Bubble sort for pre-sorting
- Big O notation in practice
- Functions with array parameters
- Random number generation
  
### What I'd add next
- use merge sort for pre-sorting
- also counting the time taken along with steps
  
### Commit log

- Working binary and linear search with bubble sort for pre-sorting for binary


------------------------------------------------------------------------------------------------------------------------------------------------------------

## Sortrace

A program that implements a race between selection, bubble, and merge sort to find which sorts a randomized array in fewer steps
### How to run 
-  If you are using cs50.dev:
  make sortrace --> ./sortrace


### How it works
- Asks the user for the total length of the array
- Implemented all 3 types of sorting for the same length and values of array but different copies so that all 3 algorithms sort the same value
- returns the number of steps by the array

### Results for 1000 values
- Selection sort: ~499,500 steps O(n²)
- Bubble sort:    ~260,000 steps O(n²)
- Merge sort:     ~8,718 steps O(n log n)

  
### Concepts practiced
- Bubble sort
- Selection sort
- Merge sort with recursion
- Step counters
- Big O notation in practice
- Array copying for fair comparison
  
### What I'd add next
- Also include the user target value, so searching is also involved
- find the time taken along with steps

### Commit log 
- I have added quicksort to the sort race. You can access it using the quicks file
- same process to compile it in cs50 dev { make quicks --> ./quicks}
- UPDATED RESULTS AFTER ADDING QUICKSORT
- Results for 1000 values
- Selection = 499,500 |  O(n²) 
- Bubble = 247,286 | O(n²) 
- Merge = 8,707 | O(n log n) 
- Quick = 10,418 | O(n log n) 

------------------------------------------------------------------------------------------------------------------------------------------------------------

## Recurisve maze solver

A program that solves a maze using pure recursion and backtracking — no data structures needed.
### How to run 
-  If you are using cs50.dev:
  make sortrace --> ./sortrace

### How it works
1. Start at the position after S
2. Try all four directions (up, down, left, right)
3. Mark visited cells with *
4. If dead end — backtrack and unmark cell
5. Stop when E is reached

### Concepts practiced
- 2D arrays for maze representation
- Pure recursion for pathfinding
- Backtracking — undo moves that fail
- Four-directional movement
- Recursive return values (true/false)
- Boundary checking

### What I'd add next
- User-defined maze input
- steps
- User's can also play a larger role in solving the maze
- Animation showing the solving process
- Multiple path comparison
- BFS shortest path 
  
### Commit log
- created recurive maze solver

- Working substitution cipher
