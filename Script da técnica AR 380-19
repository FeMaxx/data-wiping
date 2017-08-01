#!/bin/bash 
#############################################
# Programa para aplicar a técnica AR 380-19 #
#############################################
echo "Começo"
# Variável criada para executar o comando dd 
sanitization="dd"
# Variável para identificar o volume a ser utilizado para a sanitização de dados
volume="sdb12"
# Variável criada para ler o conteúdo que está armazenado no volume sanitizado
read="xxd"
# Execução da etapa de sanitização
# 1°passo
$sanitization if=/dev/urandom of=/dev/$volume
# 2°passo
$sanitization if=/dev/urandom of=/dev/$volume
# 3°passo
# "./inverte" é um programa escrito na linguagem C que realiza a operação de complemento necessária no 3°passo.
# Complemento neste caso é inverte o bit, se é 0 passa a ser 1 e se é 1 passa a ser 0.
$sanitization if=/dev/$volume| ./inverte | $sanitization of=arquivo-com-dados-sanitizados.txt conv=notrunc
$sanitization if=arquivo-com-dados-sanitizados.txt of=/dev/sdb7
# Leitura dos bits que estão armazenados no volume sanitizado 
$read -b /dev/$volume >> ar-380-19-rodada-1.bin
echo "Fim do programa"
