class Difference:
    def __init__(self, a):
        self.__elements = a
        self.maximumDifference = 0

    # Add your code here
    def computeDifference(self):
		a=sorted(self.__elements)
		self.maximumDifference=a[-1]-a[0]		

# End of Difference class

_ = raw_input()
a = [int(e) for e in raw_input().split(' ')]
d = Difference(a)
d.computeDifference()

print d.maximumDifference