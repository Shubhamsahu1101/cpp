# t=int(input())
# for j in range(t):
    
#     pro = 1
#     x=int(input())
#     maxi = 100000;
#     c=input()
#     k=c.split(' ')
#     m={}
  
#     for i in k:
#        m[int(i)]=0 
#     maxi=int(min(k)) 

#     for i in range (x):
    
#         if (int(k[i]) == maxi and m[maxi] == 0):
#             m[maxi]+=1
        
#         else:
#             pro = pro * int(k[i]);
    
#     pro = pro * (maxi + 1);7
#     print(pro)

# import os
# ts=0
# for path,dirs,files in os.walk("C:\\Users\\conta\\Desktop\\docs"):
#     for file in files:
#         if file[-4::]==".pdf":
#             ts+=os.path.getsize(os.path.join(path,file))
# print(str(ts)+"B")


# print(os.listdir("C:\\Users\\conta\\Desktop\\docs"))
# print(list(os.walk("C:\\Users\\conta\\Desktop\\docs")))

print(3**340%341)