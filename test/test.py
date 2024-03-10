import matplotlib.pyplot as plt
import csv

from numpy import double

X = [10**i for i in range(1, 10)]
Y = []

with open("QWERT.csv", "r") as datafile:
    plotting = csv.reader(datafile, delimiter=",")
    mas = [x for x in plotting]
    # for x in mas:
    #   print(*x)
    N = len(mas)

    for i in range(len(mas[0])):
        av = 0
        for j in range(N):
            av += double(mas[j][i])
        Y.append((round(av / N, 5)))
    """
    for columns in plotting:
        print(*columns)
        Y.append(float(columns[0]))
    """
print(Y)
# """
plt.plot(X, Y)
plt.title("Line Graph using CSV")
plt.xlabel("X")
plt.ylabel("Y")
plt.show()  # """
