t = int(raw_input())
while t!=0:
    n,k = map(int, raw_input().split())
    a = map(int, raw_input().split())
    index = n - (k%n) 
    
    for i in range(index,n):
     print a[i],
    for i in range(index):
     print a[i],
    print("")
    t = t-1
