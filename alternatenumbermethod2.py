n=int(input("Enter a number:"))#accepted number
temp=0#checking variable
d=n#dummy variable
s1=0#sum of alternate digits
s2=0#sum of other alternate digits
if n/10==0:
  print('{} is not an alternate number'.format(n))
else:
  while n!=0:
    if temp==0:
      s1=s1+n%10
      temp=1
    else:
      s2=s2+n%10
      temp=0
    n=n//10
  if s1==s2:
    print("{}  is an alternate number".format(d))
  else:
   print("{}  is not an alternate number".format(d)) 
