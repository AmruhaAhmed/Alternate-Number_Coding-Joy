n=int(input("Enter a number:"))#accepted number 
t=n#dummy variable 1
r=n#dummy variable 2
ctr=0#counter for digits in the number
a=[]#array to store digits of n
i=0#loop counter
sumeven=0#sum of digits in even position
sumodd=0#sum of digits in odd position
while n!=0:
  n=n//10
  ctr=ctr+1
if(ctr==1):
  print('{} is not an alternate number'.format(r))
else:
  
  for i in range(0,ctr,1):
    x=int(t%10)
    a.append(x);
    t=t/10
  for i in range(0,ctr,1):
    if i%2==0:
      sumeven+=a[i]
    else:
      sumodd+=a[i]
  if sumeven==sumodd:
    print("{}  is an alternate number".format(r))
  else:
   print("{}  is not an alternate number".format(r)) 