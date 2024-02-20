#CRIPTOGRAFIA DE CÉSAR
#a variavel senha_criptografada vai armazenar as letras e criar a nova senha

lista = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
senha = 'SAMA'
senha_criptografada = ''
k = 22

for letra in senha.lower():
    # pego o valor do index na lista e somo + k (deslocamento)
    valor_index = lista.index(letra) + k
    
    # use o operador % para manter o valor dentro do intervalo da lista
    valor_index = valor_index % len(lista)
    
    # incremento a variável senha_criptografada com o caractere da lista no novo index
    senha_criptografada += lista[valor_index]

print(senha_criptografada)