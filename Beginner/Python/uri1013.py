#The greatest
#Made by Leonardo Goulart
values = input().split(" ")

A, B, C = values

AB = int((int(A) + int(B) + abs(int(A) - int(B)))/2)
greatest = int((int(AB) + int(C) + abs(int(AB) - int(C)))/2)

print ("%d eh o maior" %greatest)