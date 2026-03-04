class Matriz:

    def __init__(self, filas, columnas):
        self.filas = filas
        self.columnas = columnas
        self.datos = []

    def ingresar_datos(self, nombre):
        print("Ingresa los valores de la matriz", nombre)
        for i in range(self.filas):
            fila = []
            for j in range(self.columnas):
                valor = float(input(f"Elemento [{i}][{j}]: "))
                fila.append(valor)
            self.datos.append(fila)

    def mostrar(self):
        for fila in self.datos:
            print(fila)

    def multiplicar_constante(self, c):
        resultado = []
        for i in range(self.filas):
            fila = []
            for j in range(self.columnas):
                fila.append(self.datos[i][j] * c)
            resultado.append(fila)
        return resultado

    def multiplicar_matriz(self, otra):
        if self.columnas != otra.filas:
            print("No se pueden multiplicar las matrices")
            return None

        resultado = []
        for i in range(self.filas):
            fila = []
            for j in range(otra.columnas):
                suma = 0
                for k in range(self.columnas):
                    suma += self.datos[i][k] * otra.datos[k][j]
                fila.append(suma)
            resultado.append(fila)
        return resultado


A = Matriz(2, 2)
B = Matriz(2, 2)

A.ingresar_datos("A")
B.ingresar_datos("B")

print("\nMatriz A:")
A.mostrar()

print("\nMatriz B:")
B.mostrar()

constante = float(input("\nIngresa una constante: "))
resultado_constante = A.multiplicar_constante(constante)

print("\nA * constante:")
for fila in resultado_constante:
    print(fila)

resultado_AB = A.multiplicar_matriz(B)

print("\nA * B:")
if resultado_AB:
    for fila in resultado_AB:
        print(fila)