#!/bin/bash 
##############################################
# Programa para aplicar a técnica ISM.6.9.92 #
##############################################
echo "Começo"
# Variável criada para executar o comando dd 
sanitization="dd"
# Variável para identificar o volume a ser utilizado para a sanitização de dados
volume="sdb9"
# Variável criada para ler o conteúdo que está armazenado no volume sanitizado
read="xxd"
# Execução da etapa de sanitização
$sanitization if=/dev/urandom of=/dev/$volume 
# Leitura dos bits que estão armazenados no volume sanitizado 
$read -b /dev/$volume >> ISM-6-9-92-rodada-1.bin
echo "Fim do programa"
