import csv
import xml.etree.ElementTree as ET

class Libro:
    def __init__(self, titulo, autor, precio):
        self.titulo = titulo
        self.autor = autor
        self.precio = float(precio)

    def __repr__(self):
        return f"Libro: {self.titulo} | Autor: {self.autor} | Precio: ${self.precio}"

biblioteca = [
    Libro("Cien años de soledad", "Gabriel Garcia Marquez", 25.50),
    Libro("Pedro Paramo", "Juan Rulfo", 15.00),
    Libro("Rayuela", "Julio Cortazar", 20.00)
]

def guardar_csv(nombre_archivo, lista_libros):
    with open(nombre_archivo, mode='w', newline='', encoding='utf-8') as file:
        writer = csv.writer(file)
        writer.writerow(["Titulo", "Autor", "Precio"])
        for l in lista_libros:
            writer.writerow([l.titulo, l.autor, l.precio])
    print(f"-> CSV '{nombre_archivo}' guardado.")

def cargar_csv(nombre_archivo):
    lista_nueva = []
    with open(nombre_archivo, mode='r', encoding='utf-8') as file:
        reader = csv.DictReader(file)
        for fila in reader:
            lista_nueva.append(Libro(fila['Titulo'], fila['Autor'], fila['Precio']))
    return lista_nueva


def guardar_xml(nombre_archivo, lista_libros):
    root = ET.Element("Biblioteca")
    for l in lista_libros:
        libro_node = ET.SubElement(root, "Libro")
        ET.SubElement(libro_node, "Titulo").text = l.titulo
        ET.SubElement(libro_node, "Autor").text = l.autor
        ET.SubElement(libro_node, "Precio").text = str(l.precio)
    
    tree = ET.ElementTree(root)
    tree.write(nombre_archivo, encoding='utf-8', xml_declaration=True)
    print(f"-> XML '{nombre_archivo}' guardado.")

def cargar_xml(nombre_archivo):
    lista_nueva = []
    tree = ET.parse(nombre_archivo)
    root = tree.getroot()
    for nodo in root.findall('Libro'):
        t = nodo.find('Titulo').text
        a = nodo.find('Autor').text
        p = nodo.find('Precio').text
        lista_nueva.append(Libro(t, a, p))
    return lista_nueva

print("--- TRABAJANDO CON ARCHIVOS ---")
guardar_csv("mis_libros.csv", biblioteca)
guardar_xml("mis_libros.xml", biblioteca)

print("\n--- DATOS CARGADOS DESDE CSV ---")
libros_csv = cargar_csv("mis_libros.csv")
for l in libros_csv: print(l)

print("\n--- DATOS CARGADOS DESDE XML ---")
libros_xml = cargar_xml("mis_libros.xml")
for l in libros_xml: print(l)