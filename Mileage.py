
t=int(input()) 
for i in range(t): 
    n,x,y,a,b=map(int,input().split()) 
    if(int((x/a)>(y/b))): 
        print("DIESEL") 
    elif(int((x/a)<(y/b))): 
        print("PETROL") 
    else:
        print("ANY")