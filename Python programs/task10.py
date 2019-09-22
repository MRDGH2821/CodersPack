"""Write a python class named rectangle constructed by a length and width and a method which will compute the area of a rectangle."""


class rectangle:
    """Computes area of rectangle."""

    def __init__(self, length=0, width=0):
        """Class variables."""
        self.ln = length
        self.w = width

    def area(self, ln, w):
        """Area Calculator."""
        self.ar = self.ln * self.w
        return self.ar


if __name__ == '__main__':
    rc = rectangle()
    rc.ln = int(input("Enter Length:"))
    rc.w = int(input("Enter Width:"))
    print(rc.area(rc.ln, rc.w))
