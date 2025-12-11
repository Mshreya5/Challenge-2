# SOSC Challenge Solution

## Problem Solutions

### Problem 1 - Grid Transform
- Applied rotations: R L R L R to each row
- Middle row (index 2): OKLMN  
- ASCII sum: 385
- **Clue 1: 385**

### Problem 2 - String Processing
- Input: "soscchallenge"
- Reverse: "egnellahcsos"
- Remove every 3rd: "egellhcss"
- Shift ASCII +2: "gignnjeuu"
- Count vowels: 4 (i, i, e, u)
- **Clue 2: 4**

### Problem 3 - State Machine
- Numbers: [2, 7, 10, 11, 13, 4, 5]
- Even numbers advance: 2→1→2→3, 10→1→2→3, 4→1→2→3
- Primes go direct to state 3: 7→3, 11→3, 13→3
- Odd composite stay: 5 (stays at 0)
- Count reaching state 3: 7 elements
- **Clue 3: 7**

### Final Key
- Hex of 385 = 181
- Repeat "4" seven times = "4444444"
- **Final Key: 181-4444444**