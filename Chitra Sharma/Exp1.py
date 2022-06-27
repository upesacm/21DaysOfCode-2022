
n= int(input("Enter the number of students: "))
student_marks = {}
for i in range(n):
    name, *marks = input("Enter the name and marks: ").strip().split()
    marks = list(map(int,marks))
    student_marks[name] = marks
print(student_marks)
student = input("Enter the name of the student from the dictionary whose average you want to find: ")
print(student)
print("{0:.2f}".format(sum(student_marks[student])/len(student_marks[student])))



























