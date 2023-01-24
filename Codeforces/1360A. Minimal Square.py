t = int(input())
for i in range(t):
    a, b = map(int, input().split())
    x=min(a,b)
    y=max(a,b)
    x*=2
    c = max(x,y)
    c *= c;
    print(c)




