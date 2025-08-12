#naive string Algorithm
def search(P,T):  
    m = len(P)
    n = len(T)
    count= 0

    #Outer Loop
    for s in range(n-m+1):
        j = 0
        #Inner Loop
        while (j<m):
            if(T[s+j] != P[j]):
                break
            j+=1

        if (j == m):
            print("Pattern found at Index",s+1)
            count+=1

    print("Count of Pattern", count)
    if(count == 0):
        print("Pattern not found")
        

if __name__ == '__main__':
    txt=input("\nEnter the Text String\n")
    txt = [str(x) for x in txt]

    Pat = input("\nEnter the Pattern String\n")
    Pat = [str(y) for y in Pat ]
    search(Pat,txt)
    
    while True:
        ans = input("\nDo you want to continue?(y/n):")
        ans = ans.lower()
        if ans =='y':
            Pat_new = input("\nEnter the Pattern String\n")
            Pat_new = [str(z) for z in Pat_new ]
            search(Pat_new,txt)
        
        else:
            print("\n Exiting.....")
            break


   
       

