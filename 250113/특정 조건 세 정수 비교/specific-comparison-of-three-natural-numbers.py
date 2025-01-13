a,b,c = map(int, input().split())

if a<=b and a<=c:
    c=1
else:
    c=0

if a==b==c:
    d=1
else:
    d=0

print(c,d)