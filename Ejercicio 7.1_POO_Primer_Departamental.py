import sys

class Auto:
    def __init__(self, precio, anio):
        self.precio = precio
        self.anio = anio

class Persona:
    def __init__(self, nombre, ap, am, genero, edad):
        self.nombre = nombre
        self.ap = ap
        self.am = am
        self.genero = genero
        self.edad = edad

auto1 = Auto(300000, 2023)
persona1 = Persona("Francisco", "Lopez", "Martinez", "Masculino", 20)

print("Tamaño de objetos en POO en bytes")
print("Auto:", sys.getsizeof(auto1))
print("Persona:", sys.getsizeof(persona1))