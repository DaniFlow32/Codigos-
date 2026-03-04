import csv

class Videojuego:
    def __init__(self, titulo, genero, precio):
        self.titulo = titulo
        self.genero = genero
        self.precio = float(precio)

    def __repr__(self):
        return f"Videojuego(Titulo: {self.titulo}, Genero: {self.genero}, Precio: ${self.precio})"

inventario_creado = [
    Videojuego("Elden Ring", "RPG", 59.99),
    Videojuego("Minecraft", "Sandbox", 29.99),
    Videojuego("FIFA 24", "Deportes", 69.99)
]

nombre_archivo = "datos_juegos.csv"

def escribir_archivo(nombre, lista_datos):
    try:
        with open(nombre, mode='w', newline='', encoding='utf-8') as archivo:
            escritor = csv.writer(archivo)
        
            escritor.writerow(["Titulo", "Genero", "Precio"])
            
            for juego in lista_datos:
                escritor.writerow([juego.titulo, juego.genero, juego.precio])
        print(f"Archivo '{nombre}' creado con éxito.")
    except Exception as e:
        print(f"Error al escribir: {e}")

def leer_archivo(nombre):
    lista_recuperada = []
    try:
        with open(nombre, mode='r', encoding='utf-8') as archivo:
            lector = csv.DictReader(archivo)
            for fila in lector:
               
                nuevo_juego = Videojuego(fila['Titulo'], fila['Genero'], fila['Precio'])
                lista_recuperada.append(nuevo_juego)
        return lista_recuperada
    except FileNotFoundError:
        print("El archivo no existe todavía.")
        return []

print("--- Iniciando proceso de Datos ---")
escribir_archivo(nombre_archivo, inventario_creado)

print("\n--- Leyendo datos del CSV y convirtiendo a ADT ---")
datos_leidos = leer_archivo(nombre_archivo)

for j in datos_leidos:
    print(j)