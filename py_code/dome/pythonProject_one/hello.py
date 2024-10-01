# class Mammal:
#     def __init__(self,name,sex):
#         self.name = name
#         self.sex = sex
#         self.num_eyes = 2
#
#     def breathe(self):
#         print(self.name + "在呼吸")
#
#     def poop(self):
#         print(self.name + "在拉屎")
#
# class Human(Mammal):
#     def read(self):
#         print(self.name + "在阅读...")
#
# class Cat(Mammal):
#     def scratch_sofa(self):
#         print(self.name + "在抓沙发...")
#
# cat1 = Cat("Bob","man")


class Animal:
    def eat(self):
        print("这个动物正在吃食物。")

class Dog(Animal):
    def bark(self):
        print("狗在汪汪叫。")

class Puppy(Dog):
    # Puppy没有重写eat或者bark方法，所以会沿着继承链向上查找。
    pass  # 当语法上需要一个语句，但程序逻辑上不需要执行任何操作时，使用pass

puppy = Puppy()
puppy.eat()   # 这里会调用从Animal继承来的eat方法。(Puppy→Dog→Animal)
puppy.bark()  # 这里会调用从Dog继承来的bark方法。(Puppy→Dog)
puppy.fly()   # 解释器将会抛出AttributeError，找不到该方法


