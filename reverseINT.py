x=int(input()) 

if x<0:
    x=-(x)
    cx = str(x)+"-"
    print(cx[::-1])
else:
    cx = str(x)
    print(cx[::-1])