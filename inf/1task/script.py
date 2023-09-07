import string
import math
f = open("input.txt",encoding="utf-8").read()
d = string.punctuation+ "\""+"“”"

for p in d:
    if p in f:
        f = f.replace(p, '')


f = f.strip().lower()
Sum = len(f)
check =[i for i in ' ёйцукенгшщзхъфывапролджэячсмитьбю']
check.sort()
res = dict.fromkeys(check, 0)

for CurSym in f:
    for DicSym in res:
        if DicSym == CurSym:
            res[DicSym]+=1
            break
H = 0
for i in res:
    p = res[i]/Sum
    H-= p*math.log2(p)
    print(f'Cимвол"{i}":{res[i]}, вероятность` - {p}')
print("Всего символов - ", Sum)
print("Энтропия - ", H, " Бит на символ")
print("Количество информации(Формула Шеннона) - ", Sum*H, "Бит")


