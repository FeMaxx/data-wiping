#!/bin/bash 
#####################################################
# Programa para aplicar a técnica RCMP TSSIT OPS II #
#####################################################
echo "Começo"
# Variável criada para executar o comando dd 
sanitization="dd"
# Variável para identificar o volume a ser utilizado para a sanitização de dados
volume="sdb10"
# Variável criada para ler o conteúdo que está armazenado no volume sanitizado
read="xxd"
# Execução da etapa de sanitização
# 1°passo
$sanitization if=/dev/zero of=/dev/$volume 
# 2°passo
$sanitization if=<(yes $'\xFF' | tr -d "\n") of=file of=/dev/$volume 
# 3°passo
$sanitization if=/dev/zero of=/dev/$volume 
# 4°passo
$sanitization if=<(yes $'\xFF' | tr -d "\n") of=file of=/dev/$volume 
# 5°passo
$sanitization if=/dev/zero of=/dev/$volume 
# 6°passo
$sanitization if=<(yes $'\xFF' | tr -d "\n") of=file of=/dev/$volume 
# 7°passo
$sanitization if=/dev/urandom of=/dev/$volume 
# Leitura dos bits que estão armazenados no volume sanitizado 
$read -b /dev/$volume >> rcmp-tssit-ops-II-rodada-1.bin
echo "Fim do programa"
