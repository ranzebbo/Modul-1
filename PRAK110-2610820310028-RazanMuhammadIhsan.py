import math

alas = 5
tinggi = 12
sisiMiring = math.sqrt(alas ** 2 + tinggi ** 2)
keliling = alas + tinggi + sisiMiring
luas = 0.5 * alas * tinggi

print("Diketahui :")
print(f"Alas = {alas} cm")
print(f"Tinggi = {tinggi} cm")
print("Jawab :")
print(f"Sisi A = {alas} cm")
print(f"Sisi B = {tinggi} cm")
print(f"Sisi C = {sisiMiring:.0f} cm")
print(f"Keliling = {keliling:.0f} cm")
print(f"Luas = {luas:.0f} cm persegi")