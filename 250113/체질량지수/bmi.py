h,w = map(int, input().split())

b = (10000*w)/(h*h)

if b >= 25:
    print(int(b),'\nObesity')

else:
    print(int(b))