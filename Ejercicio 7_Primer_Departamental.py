class Auto:

    def __init__(self, precio, anio):
        self.precio = precio
        self.anio = anio

    def mostrar_datos(self):
        print("Precio:", self.precio)
        print("Año:", self.anio)

class Persona:

    def __init__(self, nombre, ap, am, genero, edad):
        self.nombre = nombre
        self.apellido_paterno = ap
        self.apellido_materno = am
        self.genero = genero
        self.edad = edad

    def mostrar_datos(self):
        print("Nombre completo:", self.nombre, self.apellido_paterno, self.apellido_materno)
        print("Genero:", self.genero)
        print("Edad:", self.edad)

auto1 = Auto(300000, 2023)
persona1 = Persona("Francisco", "Lopez", "Martinez", "Masculino", 20)

print("Datos del Auto:")
auto1.mostrar_datos()

print("\nDatos de la Persona:")
persona1.mostrar_datos()