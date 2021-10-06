'''
# Sample code to perform I/O:

name = raw_input()          # Reading input from STDIN
print 'Hi, %s.' % name      # Writing output to STDOUT

# Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
'''

# Write your code here

t=int(input())
out=[]
while(t>0):
    n=int(input())
    l=0

    lst=[]
    maximum=-236589
    ele=raw_input()
    lst=ele.split()
    ver=[]
    j=0
    k=n-1
    flag=0
    while(j<=k):
        if(lst[j]>lst[k]):
            ver.append(lst[j])
            j=j+1
        elif(lst[j]==lst[k]):
            ver.append(lst[j])
            j=j+1

            ver.append(lst[k])
            k=k-1
        else:
            ver.append(lst[k])
            k=k-1
        l=l+1
    for i in range(0,len(ver)-1):
        if(ver[i]<ver[i+1]):
            flag=1
            break


    if(flag==0):
        out.append("Pilling is possible")
    else:
        out.append("Pilling is not possible")
    t=t-1
out

