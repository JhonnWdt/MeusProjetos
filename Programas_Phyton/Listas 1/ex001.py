num = [1, 5, 10, 25, 50]
num [0] = 0
num.append (100)
num.insert (2, 200)
num.sort()
num.pop()
print(num)
if 4 in num:
    num.remove (4)
else:
    print('O número 4 não foi encontrado')

print(f'essa lista tem {len(num)} elementos')