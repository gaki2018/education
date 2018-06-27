#!/usr/local/bin/python3

print('~Welcome to FizzBuzz~')
for x in range(100):
    if x % 3 != 0 and x % 5 != 0:
        print(str(x), end = '')
    if x % 3 == 0:
        print('Fizz', end = '')
    if x % 5 == 0:
        print('Buzz', end = '')
    print('')

