"""
List Product.

Write a python function to multiply all the numbers in a list.
"""


def multiply(li):
    """Multiplies all the elements in the list or tuple."""
    prod = 1
    for i in li:
        prod = prod * i
    return prod


print("Product is:", multiply([int(i) for i in input(
    "Enter numbers seperated by space:").split(' ')]))
