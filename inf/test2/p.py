from itertools import product
m = []
m2 = []
m3 = []
Nu = int(input("Введите Nu: "))
Nk = int(input("Введите Nk: "))
dmin = int(input("Введите dmin(u+D+1): "))
Wk = dmin-1
dsuper = dmin - 2
for i in list(product([0,1],repeat = Nk)):
    if sum(i)>=Wk:
        m += ["".join(map(str,i))]
n = len(m)


n3 = len(m[0])
m2 += [m[0]]
for i in range(1,n):
    k = 0
    for g in range(n3):
        if m[i][g]!=m[0][g]:
            k+=1
    if k>=dsuper:
        m2.append(m[i])

def f(x):
    for i in m2:
        if x == i: break
        k = 0
        for g in range(n3):
            if i[g]!=x[g]:
                k+=1
        if k<dsuper:
            m2.remove(i)
for x in m2:
    f(x)
for x in m2:
    f(x)
for x in m2:
    f(x)

k2= 0
mbf = []
print(''.join([f"p{x}" for x in range(1,Nk+1)]))
for x in (m2):
    if k2 == Nu:break
    mbf.append(x)
    print(''.join([i +' ' for i in x]))
    k2+=1

print("Проверочная матрица: ")
m2 = mbf
for y in range(n3):
    pm=[]
    for x in range(len(m2)):
        pm.append(m2[x][y])
    m3.append(pm)

print(''.join([f"a{x}" for x in range(1,Nu+1)]))
for x in (m3):
    #if k2 == Nu:break
    print(''.join([i + ' ' for i in x]))
    #k2+=1

print("че та там какой-то квадрат")

print(''.join([f"p{x}" for x in range(1,Nk+1)]))
msb = [['0' for x in range(Nk)] for x in range(Nk)]
for i in range(Nk):
    msb[i][i]='1'
for x in msb:
    print(''.join([i + ' ' for i in x]))

'''
m2.append(m[0])
print(m2)
for i in range(0, len(m2)):
    for g in range(1, len(m)):
        k = 0
        for j in range(8):
            print(m[g][j],m2[i][j])
            if m2[i][j]!=m[g][j]:
                k+=1
        if k>=3:
            m2.append(list(m[i]))
            m3.append(list(m[i]))
            print("bebra")
        print('#####')
    #print(m[i])
#print(m2)
'''
#m3 = [x for x in m2]