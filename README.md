# Push_swap 💡

Push_swap is a sorting algorithm that operates on two stacks named `a` and `b`. 

### Rules ✅

- The goal is to sort the stack with the lowest possible number of operations.
During the evaluation process, the number of instructions from the program was compared against a limit.
- If no parameters are specified, the program must not display anything and give the prompt back.
- In case of an error, it must display "Error" followed by a '\n' on the standard error.
Errors include, for example, arguments that aren't integers, arguments that are bigger than an integer, and/or duplicates.


You have 2 stacks named a and b. 📚

At the beginning:
- The stack a contains a random amount of negative and/or positive numbers which cannot be duplicated. 🎲
- The stack b is empty. 🈳

The goal is to sort numbers in ascending order into stack a. ⬆️

Operations at your disposal:

- **sa (swap a):** Swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements. ↔️
- **sb (swap b):** Swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements. ↔️
- **ss:** sa and sb at the same time. ↔️
- **pa (push a):** Take the first element at the top of b and put it at the top of a. Do nothing if b is empty. ➡️
- **pb (push b):** Take the first element at the top of a and put it at the top of b. Do nothing if a is empty. ⬅️
- **ra (rotate a):** Shift up all elements of stack a by 1. The first element becomes the last one. ⤴️
- **rb (rotate b):** Shift up all elements of stack b by 1. The first element becomes the last one. ⤴️
- **rr:** ra and rb at the same time. ⤴️
- **rra (reverse rotate a):** Shift down all elements of stack a by 1. The last element becomes the first one. ⤵️
- **rrb (reverse rotate b):** Shift down all elements of stack b by 1. The last element becomes the first one. ⤵️
- **rrr:** rra and rrb at the same time. ⤵️


### Usage ⚙️

```shell
$> ./push_swap 2 1 3 6 5 8
sa
pb
pb
pb
sa
pa
pa
pa
```


Implementation Details 💡
I used bitwise operators to implement Radix Sort to sort bigger sequences of numbers and came up with other solutions for sequences of 10 and below.

## Installation
1. Clone the repository or download the source code files.
2. Compile the program using the provided Makefile by simply running:

```$ make```


## Usage
Run the following command to execute:

```./push_swap [random numbers]```

got to e.g. https://www.calculatorsoup.com/calculators/statistics/random-number-generator.php to generate some random numbers to try it out!


