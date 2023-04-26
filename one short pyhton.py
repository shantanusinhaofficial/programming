print("hello world")
name = "shantanu"
age = 22.0
is_adult = True
print(name)
print(age)

person = "tony stark"
tony_age = 51

# input
print("tony is a genius")
name = input("what is your name? ")
print("hello " + name)

# type conversion
old_age = input("enter your old age: ")
new_age = int(old_age) + 2
print(new_age)

# sum of 2 numbers
first = input("enter your first number: ")
second = input("enter your second number: ")
sum = int(first) + int(second)
print(sum)

# string
name = "shantanu sinha"
name1 = " hello "
print(name.find('h'))
print(name.capitalize())
print(name.replace("shantanu", "pinki"))
print(name.count("h"))
print(name1.strip())

# operators
# same as other languages
# when we add // sign then the decimal points will be removed
# when we apply ** between 2 numbers then it will change into its power
i = 5
i = i+2
i += 2

# comparison operator == < > <= >= !=
# logical operator or (||) and (&&) not (!)
# if else
input(age)
if age >= 90:
    print("A")
elif age > 70 and age < 80:
    print("B")

else:
    print("fail")

# built-in calculator
first = input("enter first number: ")
operator = input("enter operator (+, -, *, /, %): ")
second = input("enter second number: ")
first = int(first)
second = int(second)

if operator == "+":
    print(first + second)
elif operator == "-":
    print(first - second)
elif operator == "*":
    print(first * second)
elif operator == "/":
    print(first / second)
elif operator == "%":
    print(first % second)
else:
    print("invalid operation")

# loops pattern 1
i = 1
while i <= 5:
    print(i * "*")
    i = i + 1

i = 5
while i >= 0:
    print(i * "*")
    i = i - 1

# for loops
for item in range(5):
    print(item + 1)

marks = [96, 98, 99]
marks.append(99)
marks.insert(2, 100)
print(100 in marks)
print(marks)
print(marks[0])
print(marks[1])
print(marks[2])

# starting to end index but not including the end number
print(marks[0:2])

for score in marks:
    print(score)

print(len(marks))
i = 0
while i < len(marks):
    print(marks[i])
    i = i + 1

marks.clear()
print(marks)

# break and continue
students = ["shantanu", "sinha", "lal", "kumar", "singh"]
for student in students:
    if student == "lal":
        break
    print(student)

for student in students:
    if student == "lal":
        continue
    print(student)
