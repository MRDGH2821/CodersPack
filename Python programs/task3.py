"""
Longest Word Finder.

Write a Python function that takes a list of words and returns the length of the longest one.
"""

print("Longest word is:", max([str(i) for i in input(
    "Enter words seperated by comma:").split(',')], key=len))
