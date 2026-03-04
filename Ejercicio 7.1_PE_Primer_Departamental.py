import sys

def crear_auto(precio, anio):
    return {
        "precio": precio,
        "anio": anio
    }

def crear_persona(nombre, ap, am, genero, edad):
    return {
        "nombre": nombre,
        "ap": ap,
        "am": am,
        "genero": genero,
        "edad": edad
    }

entero = 10
flotante = 10.5
cadena = "Hola"
lista = [1, 2, 3]

auto1 = crear_auto(250000, 2022)
persona1 = crear_persona("Francisco", "Lopez", "Martinez", "Masculino", 20)

print("Tamaño de tipos básicos en bytes")
print("Entero:", sys.getsizeof(entero))
print("Flotante:", sys.getsizeof(flotante))
print("Cadena:", sys.getsizeof(cadena))
print("Lista:", sys.getsizeof(lista))

print("\nTamaño de tipos creados en PE en bytes")
print("Auto:", sys.getsizeof(auto1))
print("Persona:", sys.getsizeof(persona1))