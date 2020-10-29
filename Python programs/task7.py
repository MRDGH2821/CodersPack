"""
Median Finder.

Write a python program to find the median of three values.
"""

print("Median value finder\n")
s1 = int(input("Enter value1 :"))
s2 = int(input("Enter value2 :"))
s3 = int(input("Enter value3 :"))

if (s1 < s2 < s3):
    print("Median is", s2)
elif (s2 < s1 < s3):
    print("Median is", s1)
else:
    print("Median is", s3)
