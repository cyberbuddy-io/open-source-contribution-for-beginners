# class Student:
#     def __init__(self, name, marks):
#         self.name = name
#         self.marks = marks
#         pass
#         print(id(self))
#
#     def talk(self, marks):
#         self.marks = marks
#
#         print('my name: ', self.name)
#         print('mere number: ', self.marks)
#
#
# s1 = Student('doraemon', 420)
# s1.talk(1732)
# print(id(s1))

# =============================================================================================

# class test:
#     '''this class is demo   '''
#
#     def __init__(self):
#         print('hello')
#
#     def __init__(self, x):
#         print('hi', x)
#
#
# t1 = test(10)
# t1 = test(20)
# ===============================================================================================

'''mini application to understand class concept in more depth'''


class Movie:

    def __init__(self, title, hero, heroine):
        self.title = title
        self.hero = hero
        self.heroine = heroine

    def info(self):
        print('movie name: ', self.title)
        print('hero name : ', self.hero)
        print('heroine name: ', self.heroine)

list_of_movies = []
while True:
        title = input('enter movie name:--> ')
        hero = input('enter hero name--> ')
        heroine = input('enter heroine name-->  ')
        m = Movie (title, hero, heroine)
        list_of_movies.append(m)
        print('movie added successfully!!!!')
        print()
        option = input('do you like to enter more movie related stuff [yes/no]?')
        print()
        if option.lower() == 'no':
            break
        elif option.lower()=='yes':
            continue
        else:
            break
#main
print('all movies information............')
for movie in list_of_movies:
        movie.info()
        print()
# ==========================================================================================================

# class test:
#     m='hello'
#     def test(self):
#         print('method')
#     @classmethod
#     def school_info(cls):
#          print('school  name ',cls.m)
#     @staticmethod
#
#     def hello():
#         x=10
#         for i in range(x+1):
#             print(i)
#
# m=test()
# m.hello()
# m.test()
# m.school_info()
# m.hello()



