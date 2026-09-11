#1 
n = int(input())
hours = (n // 60) % 24
minutes = n % 60
print(hours, minutes)
#2

n = int(input("kids: "))
k = int(input("apples: "))
print((n-k%n)*(k%n>0))
3
n = int(input("n: "))
print(n + 2 - n % 2)
//4
m = int(input("m: "))
n = int(input("n: "))
print((m + n - 1) // n)
//5
a = int(input("a = "))
b = int(input("b = "))
print((a + b + (a - b) * (1 - 2 * ((a - b) < 0))) // 2)

//1
n = int(input("N = "))
if n%2==0:
    print(n//2)
else:
    print(n)
  //2

N = int(input("N : "))
M = int(input("M : "))
x = int(input("x : "))
y = int(input("y : "))

L = max(N, M)
l = min(N, M)

d_long = min(x, l - x)

d_court = min(y, L - y)

print(min(d_long, d_court))
//1
# 1
"""
a = int(input("A = "))
b = int(input("B = "))
for c in range(a+a%2, b+1, 2):
    print(c)
"""
# 2
"""
a = int(input())
b = int(input())
c = int(input())
d = int(input())

start = a + (c - a % d) % d
for i in range(start, b + 1, d):
    print(i)
"""
# 3
"""
n = int(input("n = "))
fact = 1
s = 0
for i in range(1, n + 1):
    fact = fact * i
    s += fact
print(sum)
"""
