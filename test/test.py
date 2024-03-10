import matplotlib.pyplot as plt
import csv

X = []
Y = []

with open("LiLog.csv", "r") as datafile:
    plotting = csv.reader(datafile, delimiter=",")

    for ROWS in plotting:
        X.append(float(ROWS[5]))
        Y.append(float(ROWS[1]))

plt.plot(X, Y)
plt.title("Line Graph using CSV")
plt.xlabel("X")
plt.ylabel("Y")
plt.show()
