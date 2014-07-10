#!/usr/bin/env python

# Jeremy Thimmesch, github.com/JeremyThimmesch
# FizzBuzz
# Print the numbers 1 - 100
# Print Fizz if divisible by 3, Buzz for 5, and FizzBuzz if both


for number in range(1,101):
    if number % 3 == 0 and number % 5 == 0:
        print number, "FizzBuzz"
    elif number % 3 == 0:
        print number, "Fizz"
    elif number % 5 == 0:
        print number, "Buzz" 
    else:
        print number
