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


lista_autos = []
lista_personas = []

for i in range(2):
    precio = float(input("Precio del auto: "))
    anio = int(input("Año del auto: "))
    auto = Auto(precio, anio)
    lista_autos.append(auto)

for i in range(2):
    nombre = input("Nombre: ")
    ap = input("Apellido paterno: ")
    am = input("Apellido materno: ")
    genero = input("Genero: ")
    edad = int(input("Edad: "))
    persona = Persona(nombre, ap, am, genero, edad)
    lista_personas.append(persona)

print("\nLista de Autos")
for auto in lista_autos:
    auto.mostrar()

print("\nLista de Personas")
for persona in lista_personas:
    persona.mostrar()