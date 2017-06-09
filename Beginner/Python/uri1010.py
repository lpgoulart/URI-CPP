#Simple Calculate
#Made by Leonardo Goulart
valuesF = input().split(" ")
valuesS = input().split(" ")

key1, qtde1, price1 = valuesF
key2, qtde2, price2 = valuesS

total = (int(qtde1) * float(price1)) + (int(qtde2) * float(price2))

print("VALOR A PAGAR: R$ %0.2f" %total)