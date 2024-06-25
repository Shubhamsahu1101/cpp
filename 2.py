# a={'name':'shubham','age':20,'marks':90}
# b={1,2,3,9,2,5,7,1}
# print(a)
# print(b)

# del a['name']

# print(a)

# print(list(zip((10,0))))

# n = [[5, 6], [4, 7, 10, 17]]
# l=[]
# for i in n:
#     for j in i:
#         k=tuple(j)
#         l.append(k)
# print(l)

# tuple3 = tuple((1,))

# print(tuple3)

# l=[i for i in range(1,11)]
# d={i:i**2 for i in range(1,5)}
# s=frozenset({i**2 for i in range(1,11)})

# print(l)
# print(d)
# print(s)

# a=tuple([1])
# b=(1,2,3)
# print(type(a))
# print(type(b))

# def vow(word):
#     vowels = 'aeiouAEIOU'
#     return set(word).intersection(set(vowels))

# print(vow("shubham"))

# def f():
#     global a
#     a+="a"

# a="b"
# f()
# print(a)


# class employee:
#     def __init__(self, fname, lname):
#         self.fname=fname
#         self.lname=lname
#     def getemp(self):
#         print(self.fname,self.lname)

# class student(employee):
#     def __init__(self, f, l, k):
#         super().__init__(f, l)
#         self.k2=k

# k1=student('or','we','po')
# print(k1.k2)


# import re
# a=re.search(r'cake$', "Cake! Let's eat cakee").group()
# print(type(a))
# print(a)



# x=re.findall("..t+[a-z]+o","this Year i am outoutoul")
# y=re.findall("a{2,3}?","aab baaaat")
# print(y)

# z=re.search(r"M[ae][iy]er", "Mayer")
# print(z)
import re

# z1=re.search(r"(\d{3})-(\d{3})-(\d{4})", "123-456-7890").group(1)
# print(z1)
# z2=re.search(r"(\d{3})-(\d{3})-(\d{4})", "123-456-7890").group(2)
# print(z2)
# z3=re.search(r"(\d{3})-(\d{3})-(\d{4})", "123-456-7890").group(3)
# print(z3)

# z0=re.search(r"(\d{3})-(\d{3})-(\d{4})", "123-456-7890").group()
# print(z0)
# print(type(z0))

# print()

# zz=re.search(r"(\d{3})-(\d{3})-(\d{4})", "123-456-7890")
# print(zz)
# print(type(zz))

# def g():
#     n=1
#     while(n<4):
#         n+=1
#         yield(n)
#     # raise(StopIteration)

# a=g()
# print(next(a))
# print(next(a))
# print(next(a))
# print(next(a))


# test_list = [(15, 6), (16, 7), (16, 8), (16, 10), (17, 13)]
# m={}
# for x in test_list:
#     if(m.__contains__(x[0])):
#         z=list(m[x[0]])
#         z.append(x[1])
#         m[x[0]]=tuple(z)
#     else:
#         m[x[0]]=x

# a=list(m.values())
# print(a)

# dic={3:4,5:6}
# dict2={3:9,7:8}
# dic3=dict2.update(dic)
# print(dict2)


# a="shubham"
# b=a[-1:-8:-1]
# print(b)


# print({x:y for x in {1,2,3} for y in {2,3,4} if(x!=y)})

# x="abcdef"
# i="a"
# for i in x:
#     print(x)
#     x=x[1:]
#     print(i,end=" ")

# print(set((1,2,3)))
# s={1,2,3}
# s.add([1,2,3])

# for x in dict(zip([2,3,4],[1,2])):
#     print(x)

# def foo(i,x=[]):
#     x.append(x.append(i))
#     return x
# for i in range(3):
#     y=foo(i)
# print(y)

# l=[23,"hello",4,'a',6,6,23]
# x=[]
# # y=[i for i in l if(i not in x)]
# for i in l:
#     if i not in x:
#         x.append(i)

# print(x)

from functools import reduce

z = reduce(lambda x, y, z: x * y * z, [2, 3, 4, 5])
print(z)