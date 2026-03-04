class Auto:

    def __init__(self, precio, anio):
        self.precio = precio
        self.anio = anio

    def mostrar(self):
        print("Precio:", self.precio, "Año:", self.anio)


class Persona:

    def __init__(self, nombre, ap, am, genero, edad):
        self.nombre = nombre
        self.ap = ap
        self.am = am
        self.genero = genero
        self.edad = edad

    def mostrar(self):
        print("Nombre:", self.nombre, self.ap, self.am)
        print("Genero:", self.genero)
        print("Edad:", self.edad)


lista_personas = []

for i in range(3):
    nombre = input("Nombre: ")
    ap = input("Apellido paterno: ")
    am = input("Apellido materno: ")
    genero = input("Genero: ")
    edad = int(input("Edad: "))
    persona = Persona(nombre, ap, am, genero, edad)
    lista_personas.append(persona)

print("\nAcceso indirecto por indice")
for i in range(len(lista_personas)):
    lista_personas[i].mostrar()

pos = int(input("\nIngresa la posicion que quieres consultar: "))
if pos >= 0 and pos < len(lista_personas):
    print("Persona en esa posicion:")
    lista_personas[pos].mostrar()
else:
    print("Posicion no valida")