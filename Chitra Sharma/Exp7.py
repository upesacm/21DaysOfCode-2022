def add(n1,n2):
  return n1+n2
def subtract(n1,n2):
  return n1-n2
def multiply(n1,n2):
  return n1*n2
def divide(n1,n2):
  return n1/n2

operations = {
  "+": add,
  "-": subtract,
  "*": multiply,
  "/":divide
}

num1 = int(input("Enter the first number: "))
num2 = int(input("Enter the second number: "))
for key in operations:
  print(key)
function = input("Enter the symbol from the given ones: ")
calculation = operations[function]
result = calculation(num1, num2)

print(f"{num1} {function} {num2} = {result}")





