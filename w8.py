n= int (input())
L= list()
bestvals=list()
best_stored=list()
for x in range (n):
    L.append(int(input()))
    best_stored.append(0)
best_stored[0]=1
for i in range (n):
    maxval=1
    for j in range (i):
        if L[i] %L[j]==0:
            maxval=max(maxval,(best_stored[j]+1))
    best_stored[i]=maxval
    
print (max(best_stored) )     