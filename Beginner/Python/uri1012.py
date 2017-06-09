#Area
#Made by Leonardo Goulart
values = input().split(" ")

A, B, C = values
pi = 3.14159

recTriangle = (float(A) * float(C))/2
circleArea = ((float(C)**2) * pi)
trapezeArea = ((float(A) + float(B)) * float(C))/2
squareArea = (float(B)**2)
rectangleArea = float(A) * float(B)

print("TRIANGULO: %0.3f" %recTriangle)
print("CIRCULO: %0.3f" %circleArea)
print("TRAPEZIO: %0.3f" %trapezeArea)
print("QUADRADO: %0.3f" %squareArea)
print("RETANGULO: %0.3f" %rectangleArea)