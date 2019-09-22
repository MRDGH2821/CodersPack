# Write a Python program to check a triangle is equilateral, isosceles or scalene.
print("Triangle type determiner")
s1 = int(input("Enter side1 length:"))
s2 = int(input("Enter side2 length:"))
s3 = int(input("Enter side3 length:"))

if(s1 == s2 and s2 == s3):
    print("Equilateral")
elif (s1 == s2 or s2 == s3 or s3 == s1):
    print("Isosceles")
else:
    print("Scalene")
