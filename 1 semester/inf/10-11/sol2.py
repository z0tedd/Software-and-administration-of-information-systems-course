def Step(x):
    return int(x,2) - int("7F",16)

def SixteenToTo(x):
    S = ""
    for i in x:
        S+= "0"* (4-len(bin(int(i,16))[2::])) + bin(int(i,16))[2::]
    return S
 
def FindPoint(x):
    #print(x)
    step = 1
    res = 0
    for i in x:
        if (i!="0"):
            res += 1/int(i+"0"*step,2)
        step+=1
    return res
def solution(Inp):
    #Inp = str(input())
    S = ""
    for i in Inp:
        S+="0"* (4-len(bin(int(i,16))[2::] \
    )) + bin(int(i,16))[2::]
    print("Число в двоичной записи: ", S)
    Sign = 1


    Charast=S[1:9:]
    Mantis = S[9::]
    print("Деление числа на знак, характеристику и мантису:",S[0] , Charast, Mantis)
    Signa = "+"
    if S[0] == "1":
        Sign = -1
        Signa = "-"
        print("Знак числа: - ")
    else: 
        print("Знак числа: + ")
    Por = Step(Charast) 
    print("Порядок в десятичной системе исчисления:", Por)
    if Por>=0:
        Mantis =  Mantis[:Mantis.rfind("1") + 1:]
        FloatPoint =FindPoint((Mantis[Por::]))
#print(("0" + Mantis[Por+1::])[::-1])

#print(Mantis)
#print(Mantis[Por::])


#print(FloatPoint)
        Ans =Sign *( (int("1" +Mantis[:Por:],2)) + FloatPoint)
        print(Signa+"1,"+Mantis,"->",Signa+"1" + Mantis[:Por:] + "," +Mantis[Por::], "->", Ans )
        print("Ответ:", Ans)
    else:
        print("BEBRA") 
        #Mantis =  Mantis[:Mantis.rfind("1") + 1:]
        FloatPoint =Sign* FindPoint("0"*(-1*Por-1)+"1" )
        print(Signa+"1,"+Mantis,"->",Signa+"0,"+"0"*(-1*Por-1)+"1" +Mantis, "->", FloatPoint)
        print("Ответ:", FloatPoint)

"""
data = ['BE000000','C1640000','42480000','BF800000','C2908000']
count = 8 
for i in data:
    print(count, i)
    solution(i)
    count+=1
    print()
"""
s
