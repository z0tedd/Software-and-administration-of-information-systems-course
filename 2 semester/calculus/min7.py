from sympy import *

n = int(input("Введите n степень дифференцирования: "))
x, y = symbols("x y")
a = x**2 * sin(x / 3)
print(a)
for i in range(1, n + 1):
    a = diff(a)
    print(a, i)
