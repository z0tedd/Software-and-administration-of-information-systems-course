for i in "0123456789":
    for j in "0123456789":
        for h in "0123456789":
            for k in "0123456789":
                abc = int(i)+int(j)+int(h) + int(k)
                abc1 = int(i+j+h+k)
                if abc==24 and abc1%22==0:
                    print(i+j+h+k)

