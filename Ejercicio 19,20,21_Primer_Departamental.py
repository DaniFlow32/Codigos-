class OrdenamientoIndirecto:
    def burbuja_indices(self, datos):
        indices = list(range(len(datos)))
        for i in range(len(indices)):
            for j in range(0, len(indices) - i - 1):
                if datos[indices[j]] > datos[indices[j+1]]:
                    indices[j], indices[j+1] = indices[j+1], indices[j]
        return indices

data = [100, 20, 50, 10]
oi = OrdenamientoIndirecto()
idx = oi.burbuja_indices(data)
print(f"Datos originales: {data}")
print(f"Índices ordenados: {idx}")
print(f"Acceso indirecto: {[data[i] for i in idx]}")