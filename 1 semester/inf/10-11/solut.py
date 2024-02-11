alph = "qwertyuiopasdfghjklmnbvcxz"
alph = sorted(alph)
for x in range(10,37):
    if int("4",x) + int("5",x) == int("9",x) and \
        int("4",x)*int("5",x) == int('22',x) and \
        int("13",x) + int("24",x) == int("37",x):
        print("Yes")
else:
    print("No")
for x in range(9,37):
    if int("25",x) - int("11",x) == int("7",x) and \
        int("22",x)*int("26",x) == int('583',x) and \
        int("27",x) + int("34",x) == int("62",x):
        print("Yes")
else:
    print("No")

#Результаты:
#No
#No







