#Distance between two points
#Made by Leonardo Goulart
line1 = input().split(" ")
line2 = input().split(" ")
x1, y1 = line1
x2, y2 = line2

result = ((float(x2)-float(x1))**2 +(float(y2)-float(y1))**2)**(1/2)

print ("%.4f"%result)