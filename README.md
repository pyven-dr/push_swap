# Push_swap

## This project will make you sort data on a stack, with a limited set of instructions, using the lowest possible number of actions. To succeed you’ll have to manipulate various types of algorithms and choose the most appropriate solution (out of many) for an optimized data sorting.

## How to use

### Sort a stack

Clone 
```bash
git clone https://github.com/pyven-dr/push_swap.git
```

Compile
```bash
make
```

Run it
```bash
./push_swap <numbers>
./push_swap 5 4 8 6 2 1 -5 654645
```

Numbers can be positive or negative integers. There must not be any duplicates numbers.
The program will output the list of instruction needed to sort the stack.

### Use the checker

Compile
```bash
make bonus
```

The checker can be used to check if a list of instruction sort the stack.

The checker can be used that way
```bash
ARG="5 4 3 8 7 2 1"; ./push_swap $ARG | ./checker $ARG
```
You can also use the checker only and manually enter the instructions to see if they sort the stack
```bash
./checker <numbers>
```

## Instruction list

| Instruction | Description                                                                                                |
| :--------   | :-------                                                                                                   |
| `sa`        | (swap a): Swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements. |
| `sb`        | (swap b): Swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements. |
| `ss`        | `sa` and `sb` at the same time.                                                                            |
| `pa`        | (push a): Take the first element at the top of b and put it at the top of a. Do nothing if b is empty.     |
| `pb`        | (push b): Take the first element at the top of a and put it at the top of b. Do nothing if a is empty.     |
| `ra`        | (rotate a): Shift up all elements of stack a by 1. The first element becomes the last one.                 |
| `rb`        | (rotate b): Shift up all elements of stack b by 1. The first element becomes the last one.                 |
| `rr`        | `ra` and `rb` at the same time.                                                                            |
| `rra`       | (reverse rotate a): Shift down all elements of stack a by 1. The last element becomes the first one.       |
| `rrb`       | (reverse rotate b): Shift down all elements of stack b by 1. The last element becomes the first one.       |
| `rrr`       | `rra` and `rrb` at the same time.                                                                          |
