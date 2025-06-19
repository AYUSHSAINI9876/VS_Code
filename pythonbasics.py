# a=complex(3,5)
# print(a)
# print("datatype of a is", type(a))
# list1=[8,2.3,[-4,5],["apple","banana"]]
# print(list1)
# tuple1=(("parrot","sparrow"),("lion","tiger"))
# print(tuple1)
# dict1={"name":"AYUSH","age":"18","can_vote":"false"}
# print(dict1)

# string="999"
# number=7
# string_number=int(string)
# sum=number+string_number
# print("the sum of the two numbers is: ",sum)
# x=int(input("enter the first name:"))
# y=int(input("enter the second name:"))
# print(x+y)

# name="ayush"
# print(len(name))
# print(name[0:4])
# #  line 22 ----->>>>>reads all elements of string from index 0 to index 4
# print(name[0:-3]) 
# #  line 24 ----->>>>>reads as [len(name)-3]
# print(name[:5]) 
# #  line 26 ----->>>>>reads all the elements before index 5

# age=int(input("enter your age:"))
# print("your age is: ",age)
# if(age<18):
#     print("y're not eligible to vote")
# else:
#     print("you are eligible to vote")
    
# num=float(input("enter the number:"))
# if(num<0):
#     print("it's a negative number.")
# elif(num==0):
#     print("it's neither negative nor positive.it's ZERO.")
# else:
#     if(num<=10):
#         print("the number lis=es between 1 to 10.")
#     elif(num>10 and num<20):
#         print("the number lies between 11 to 20.")
#     else:
#         print("the number is greater than 20.")

# import time
# timestamp=time.strftime('%H:%M:%S')
# print(timestamp)
# timestamp_hours=int(time.strftime('%H'))
# print("time in hours: ",timestamp_hours)
# timestamp_minutes=int(time.strftime('%M'))
# print("time in minutes: ",timestamp_minutes)
# timestamp_seconds=int(time.strftime('%S'))
# print("time in seconds: ",timestamp_seconds)
# if(timestamp_hours>=12 and timestamp_hours<18):
#     print("GOOD ERVENING...")
# elif(timestamp_hours>=18 and timestamp_hours<24):
#     print("GOOD NIGHT...")
# else:
#     print("GOOD MORNING...") 
   
# for i in range(20):
#     if(i==10):
#         break
#     print("5 X ",i+1, "=" ,5*(i+1))     


# def fibonacci(n):
#     if(n==0):
#         return 0
#     elif(n==1):
#         return 1
#     else:
#         return (fibonacci(n-1) + fibonacci(n-2))
# n=int(input("enter the value of n: "))
# print("number: ",n)
# print("fibonacci: ",fibonacci(n))

# def upper_triangular_matrix(size):
#     matrix = [[0] * size for _ in range(size)]

#     for i in range(size):
#         for j in range(i, size):
#             # You can set the values as per your requirements
#             matrix[i][j] = 1  # Set 1 or any desired value

#     return matrix

# # Example usage
# size = 5
# result_matrix = upper_triangular_matrix(size)

# for row in result_matrix:
#     print(row)

# import argparse

# parser=argparse.ArgumentParser()

# parser.add_argument("arg1",help="description of argument 1")
# parser.add_argument("arg2",help="description of argument 2")

# args=parser.parse_args()

# print(args.arg1)
# print(args.arg2)

# import re
# pattern = r"[a-z]+at"
# text = "The cat is in the hat."
# matches = re.findall(pattern, text)
# print(matches)
# # Output: ['cat', 'hat']
# new_text = re.sub(pattern, "dog", text)
# print(new_text)
# # Output: "The dog is in the dog."

# import threading
# def increment(counter, lock):
#     for i in range(10000):
#         lock.acquire()
#         counter += 1
#         lock.release()
# if __name__ == '__main__':
#     counter = 0
#     lock = threading.Lock()
#     threads = []
#     for i in range(2):
#         thread = threading.Thread(target=increment, args=(counter, lock))
#         threads.append(thread)
#         thread.start()
#     for thread in threads:
#         thread.join()
#     print("Counter value:", counter)

# a="1234"
# b=int(a)
# print(b+5)

# a=input("enter the name please: ")
# print("GOOD AFTERNOON, "+a)

# name=(input("enter the name: "))
# date=input(("enter the date: "))
# print("LETTER: \nDEAR, ",name)
# print("you are selected!\nDATE:",date)

# fruits=['mango','banana','guawa','pineappale','grapes','orange','apple']
# print(fruits)

# m1=input("enter the marks of student1: ")
# m2=input("enter the marks of student2: ")
# m3=input("enter the marks of student3: ")
# m4=input("enter the marks of student4: ")
# m5=input("enter the marks of student5: ")
# m6=input("enter the marks of student6: ")
# m7=input("enter the marks of student7: ")
# marks=[m1,m2,m3,m4,m5,m6,m7]
# marks.sort()
# print(marks)

# list=[23,44,54,65]
# print(sum(list))
# a=(7,0,0,8,0,9)
# print(a.count(0))

# a=int(input("enter tha value of a: "))
# b=int(input("enter tha value of a: "))
# c=int(input("enter tha value of a: "))
# d=int(input("enter tha value of a: "))
# if(a>b and a>c and a>d):
#     print("graetest of all is: ",a)
# elif(b>a and b>c and b>d):
#     print("greatest of all is: ",b)
# elif(c>a and c>b and c>d):
#     print("greatest of all is: ",c)
# else:
#     print("greatest of all is: ",d)

# p=float(input("enter the marks obtained by student in physics: "))
# c=float(input("enter the marks obtained by student in chemistry: "))
# m=float(input("enter the marks obtained by student in maths: "))

# percentage=float((p+c+m)/3)
# if(percentage<=33):
#     print("student is failed.")
# else:
#     print("student is passed.")
    
# name=input("enter the username: ")
# if(len(name)<10):
#     print("the username contains atleat 10 charecters.")
# else:
#     print("the username contains beyond 10 charecters.")    

# list=["ayush","yashraj","avi"]
# name=input("enter the name :")
# if name in list:
#     print("the name is present in the list ")
# else:
#     print("the name is not present in the list ")

# marks=float(input("enter the marks obtained by the students: "))
# if(marks>90 and marks<=100):
#     print('THE GRADE IS EX.')
# elif(marks>80 and marks<=90):
#     print('THE GRADE IS A.')
# elif(marks>70 and marks<=80):
#     print('THE GRADE IS B.')      
# elif(marks>60 and marks<=70):
#     print('THE GRADE IS C.')
# elif(marks>50 and marks<=60):
#     print('THE GRADE IS D.')
# else:
#     print('sorry! you are failed.')

# post=input("write the post: ")
# if harry in post:
#     print("this post is talking about harry.....")
    
# i=0
# while i<=50:
#     print(i)
#     i=i+1  

# num=int(input("enter the value of num: "))
# for i in range (1,11):
#     print(str(num) + "x" + str(i) + "=" + str(i*num))

# num=int(input("enter the number:"))
# prime=True
# for i in range(2,num):
#     if(num % i==0):
#         prime=False
#         break
# if (prime):
#     print("the number is prime.")
# else:
#     print("this number is not  prime.") 

# def factorial(n):
#     if(n==0 or n==1):
#         return 1
#     else:
#         return (n*factorial(n-1))
# n=int(input("enter the value of n: "))
# print("number: ",n)
# print("factorial: ",factorial(n))

# def sum(n):
#     if(n==1):
#         return 1
#     else:
#         return (n+sum(n-1))
# n=int(input("enter the value of n: "))
# print("number: ",n)
# print("sum: ",sum(n))

a=float(input("enter the first number: "))
b=float(input("enter the second number: "))
c=float(input("enter the third number: "))
avg=float((a+b+c)/3)
print("the avg of three numbers is: ",avg)
