class Fila(object):
    def __init__(self):
        self.dados = []
 
    def insere(self, elemento):
        self.dados.append(elemento)
 
    def retira(self):
        return self.dados.pop(0)
 
    def vazia(self):
        return len(self.dados) == 0

    def listar(self):
	return self.dados

def main():
	f = Fila()

	f.insere(12)
	f.insere(13)
	f.insere(14)

	print f.listar()

	f.retira()

	print f.listar()


if __name__ == '__main__':
	main()
