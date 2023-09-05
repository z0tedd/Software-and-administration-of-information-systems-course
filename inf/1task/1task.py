import string
f = open("input.txt",encoding="utf-8").read()
d = string.punctuation+ "\""+"“”"
print(d)
for p in d:
    if p in f:
        f = f.replace(p, '')
        print(p)

print(f)
print('#'*10000)
print(f.strip())
