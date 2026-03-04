import csv
import json
import xml.etree.ElementTree as ET

class Producto:
    def __init__(self, id_producto, nombre, precio):
        self.id_producto = int(id_producto) 
        self.nombre = str(nombre)            
        self.precio = float(precio)          

    def __repr__(self):
        return f"ID: {self.id_producto} | {self.nombre} | ${self.precio}"

def merge_sort(lista, atributo):
    if len(lista) <= 1:
        return lista
    
    medio = len(lista) // 2
    izq = merge_sort(lista[:medio], atributo)
    der = merge_sort(lista[medio:], atributo)
    
    return merge(izq, der, atributo)

def merge(izq, der, atributo):
    resultado = []
    i = j = 0
    while i < len(izq) and j < len(der):
        
        if getattr(izq[i], atributo) < getattr(der[j], atributo):
            resultado.append(izq[i])
            i += 1
        else:
            resultado.append(der[j])
            j += 1
    resultado.extend(izq[i:])
    resultado.extend(der[j:])
    return resultado



def guardar_leer_csv(archivo, datos):
    
    with open(archivo, 'w', newline='', encoding='utf-8') as f:
        writer = csv.writer(f)
        writer.writerow(["ID", "Nombre", "Precio"])
        for p in datos:
            writer.writerow([p.id_producto, p.nombre, p.precio])

    reconstruidos = []
    with open(archivo, 'r', encoding='utf-8') as f:
        reader = csv.DictReader(f)
        for fila in reader:
            reconstruidos.append(Producto(fila['ID'], fila['Nombre'], fila['Precio']))
    return reconstruidos

def guardar_leer_xml(archivo, datos):
    
    root = ET.Element("Inventario")
    for p in datos:
        prod = ET.SubElement(root, "Producto")
        ET.SubElement(prod, "ID").text = str(p.id_producto)
        ET.SubElement(prod, "Nombre").text = p.nombre
        ET.SubElement(prod, "Precio").text = str(p.precio)
    tree = ET.ElementTree(root)
    tree.write(archivo)
    return "XML Guardado correctamente"

def guardar_leer_json(archivo, datos):
    
    dict_list = [p.__dict__ for p in datos]
    with open(archivo, 'w') as f:
        json.dump(dict_list, f, indent=4)
    
    with open(archivo, 'r') as f:
        return json.load(f)

def guardar_leer_txt(archivo, datos):

    with open(archivo, 'w') as f:
        for p in datos:
            f.write(f"{p.id_producto},{p.nombre},{p.precio}\n")
    return "TXT Guardado correctamente"


if __name__ == "__main__":
    
    inventario = [
        Producto(105, "Monitor", 250.0),
        Producto(101, "Teclado", 45.5),
        Producto(110, "Mouse", 25.0),
        Producto(102, "Laptop", 1200.0)
    ]

    print("--- ORDENAMIENTO POR PRECIO (Merge Sort) ---")
    inventario_ordenado = merge_sort(inventario, 'precio')
    for p in inventario_ordenado: print(p)

    print("\n--- PROCESANDO ARCHIVOS ---")
    guardar_leer_csv("datos.csv", inventario_ordenado)
    guardar_leer_xml("datos.xml", inventario_ordenado)
    guardar_leer_txt("datos.txt", inventario_ordenado)
    data_json = guardar_leer_json("datos.json", inventario_ordenado)
    
    print("Operación completada. Archivos CSV, XML, TXT y JSON generados.")