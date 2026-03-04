class OrdenadorBurbuja:
    def ordenar(self, lista):
        n = len(lista)
        for i in range(n):
            for j in range(0, n - i - 1):
                if lista[j] > lista[j+1]:
                    lista[j], lista[j+1] = lista[j+1], lista[j]
        return lista


ob = OrdenadorBurbuja()
print(f"Enteros: {ob.ordenar([5, 2, 9, 1])}")
print(f"Caracteres: {ob.ordenar(['z', 'a', 'c', 'b'])}")