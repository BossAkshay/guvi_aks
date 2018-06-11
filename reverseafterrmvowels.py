s= input()
new = []
vowel = ['a','e','i','o','u']
for i in s:
    if i not in vowel:
        new.append(i)
    else:
        continue

def reverse(s):
    str=""
    for i in s:
        str= i+str
    return str    
rev=reverse(new)       
print(rev)        
