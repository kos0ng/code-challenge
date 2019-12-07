class Person:
	def __init__(self, firstName, lastName, idNumber):
		self.firstName = firstName
		self.lastName = lastName
		self.idNumber = idNumber
	def printPerson(self):
		print "Name:", self.lastName + ",", self.firstName
		print "ID:", self.idNumber

class Student(Person):
    def __init__(self, firstName, lastName, idNumber,scores):
        self.firstName = firstName
        self.lastName = lastName
        self.idNumber = idNumber
        self.scores = scores
    def calculate(self):
        scores=self.scores
        sc=sum(scores)/len(scores)
        if(sc<=100 and sc>=90):
            return 'O'
        elif(sc<90 and sc>=80):
            return 'E'
        elif(sc<80 and sc>=70):
            return 'A'
        elif(sc<70 and sc>=55):
            return 'P'
        elif(sc<55 and sc>=40):
            return 'D'
        else:
            return 'T'
    

line = raw_input().split()
firstName=line[0]
lastName=line[1]
idNum=line[2]
n_scores=int(raw_input())
scores=list(map(int, raw_input().split()))
if(len(scores)!=n_scores):
    print 'Error'
s = Student(firstName, lastName, idNum, scores)
s.printPerson()
print "Grade:",s.calculate()