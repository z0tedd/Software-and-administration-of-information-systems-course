x = int(input())
h = []
for i in range(x):
    h.append(str(input()))
ch = h[0]
h = h[1::]
fl = True
for i in h:
    k = 0
    for j in range(len(ch)):
        #if j>=len(i):break
        if i[j]!=ch[j]:
            k+=1
    if k<3:
        fl = False
        print('%%%%%',ch, " ",k)
        print('%%%%%',i)
        break

print(fl)
