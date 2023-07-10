"""
Odd Even Counter.

Write a python program to count the number of even and odd numbers from a series of numbers.
"""

odd = 0
even = 0
num = [int(i) for i in input("Enter series of numbers separated by spaces:").split()]
for j in num:
    if j % 2 == 0:
        even = even + 1
    else:
        odd = odd + 1

print("Odd numbers:", odd, "\nEven numbers:", even)
