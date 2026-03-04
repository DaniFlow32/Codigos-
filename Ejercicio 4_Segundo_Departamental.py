import csv
import json
import xml.etree.ElementTree as ET

class Libro:
    def __init__(self, titulo, anio, precio):
        self.titulo = str(titulo)   
        self.anio = int(anio)       
        self.precio = float(precio) 

    def __repr__(self):
        return f"[{self.anio}] {self.titulo} - ${self.precio}"

biblioteca = [
    Libro("El Quijote", 1605, 450.00),
    Libro("1984", 1949, 320.50),
    Libro("Fahrenheit 451", 1953, 280.00)
]

def manejar_txt(archivo, datos):
 
    with open(archivo, 'w', encoding='utf-8') as f:
        for obj in datos:
            f.write(f"{obj.titulo}|{obj.anio}|{obj.precio}\n")
    print(" TXT guardado.")

def manejar_csv(archivo, datos):
    
    with open(archivo, 'w', newline='', encoding='utf-8') as f:
        writer = csv.writer(f)
        writer.writerow(["Titulo", "Anio", "Precio"])
        for obj in datos:
            writer.writerow([obj.titulo, obj.anio, obj.precio])
    
    lista_nueva = []
    with open(archivo, 'r', encoding='utf-8') as f:
        reader = csv.DictReader(f)
        for fila in reader:
            lista_nueva.append(Libro(fila['Titulo'], fila['Anio'], fila['Precio']))
    print("✅ CSV procesado y ADTs reconstruidos.")
    return lista_nueva

def manejar_xml(archivo, datos):

    root = ET.Element("Biblioteca")
    for obj in datos:
        libro_node = ET.SubElement(root, "Libro")
        ET.SubElement(libro_node, "Titulo").text = obj.titulo
        ET.SubElement(libro_node, "Anio").text = str(obj.anio)
        ET.SubElement(libro_node, "Precio").text = str(obj.precio)
    
    tree = ET.ElementTree(root)
    tree.write(archivo, encoding='utf-8', xml_declaration=True)
    print(" XML guardado.")

if __name__ == "__main__":
    print("--- PROCESANDO ARCHIVOS UNIVERSITARIOS ---")
    
    manejar_txt("datos.txt", biblioteca)
    libros_desde_csv = manejar_csv("datos.csv", biblioteca)
    manejar_xml("datos.xml", biblioteca)

    print("\nResultados del arreglo recuperado:")
    for l in libros_desde_csv:
        print(l)