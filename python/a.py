class Employee:
    def __init__(self,first,last) :
        self.first=first
        self.last=last
        
    @property
    def fullname(self):
        return self.first+" "+self.last
    
    @fullname.setter
    def fullname(self,name):
        self.first,self.last=name.split(" ")
    
    @fullname.deleter
    def fullname(self):
        self.first=None
        self.last=None
        
    @property
    def email(self):
        return self.first+"."+self.last+"@company.com"
    
class Developer(Employee):
    def __init__(self, first, last,langs):
        super().__init__(first, last)
    



print(issubclass(Developer,Employee))
        















emp1=Employee("Srikhar","Shashi")
print(emp1.fullname)
print(emp1.email)

emp1.fullname="Rahul Aditya"
print(emp1.email)
print(emp1.fullname)

dev=Developer("Nanda","Kishore",["python","JavaScript","C"])
print(isinstance(dev,Employee))
        
    
        