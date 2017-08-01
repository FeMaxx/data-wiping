#!/bin/bash 
###########################################
# Programa para aplicar a técnica GUTMANN #
###########################################
echo "Começo"
# Variável criada para executar o comando dd 
sanitization="dd"
# Variável para identificar o volume a ser utilizado para a sanitização de dados
volume="sdb7"
# Variável criada para ler o conteúdo que está armazenado no volume sanitizado
read="xxd"
# Execução da etapa de sanitização
# 1°passo
echo "passo 1"
$sanitization if=/dev/urandom of=/dev/$volume
# 2°passo
echo "passo 2"
$sanitization if=/dev/urandom of=/dev/$volume
# 3°passo
echo "passo 3"
$sanitization if=/dev/urandom of=/dev/$volume
# 4°passo
echo "passo 4"
$sanitization if=/dev/urandom of=/dev/$volume
# 5°passo
echo "passo 5"
$sanitization if=<(yes $'\55 \55 \55' | tr -d "\n") of=/dev/$volume
# 6°passo
echo "passo 6"
$sanitization if=<(yes $'\AA \AA \AA' | tr -d "\n") of=/dev/$volume
# 7°passo
echo "passo 7"
$sanitization if=<(yes $'\92 \49 \24' | tr -d "\n") of=/dev/$volume
# 8°passo
echo "passo 8"
$sanitization if=<(yes $'\49 \24 \92' | tr -d "\n") of=/dev/$volume
# 9°passo
echo "passo 9"
$sanitization if=<(yes $'\24 \92 \49' | tr -d "\n") of=/dev/$volume
# 10°passo
echo "passo 10"
$sanitization if=/dev/zero of=/dev/$volume
# 11°passo
echo "passo 11"
$sanitization if=<(yes $'\11 \11 \11' | tr -d "\n") of=/dev/$volume
# 12°passo
echo "passo 12"
$sanitization if=<(yes $'\22 \22 \22' | tr -d "\n") of=/dev/$volume
# 13°passo
echo "passo 13"
$sanitization if=<(yes $'\33 \33 \33' | tr -d "\n") of=/dev/$volume
# 14°passo
echo "passo 14"
$sanitization if=<(yes $'\44 \44 \44' | tr -d "\n") of=/dev/$volume
# 15°passo
echo "passo 15"
$sanitization if=<(yes $'\55 \55 \55' | tr -d "\n") of=/dev/$volume
# 16°passo
echo "passo 16"
$sanitization if=<(yes $'\66 \66 \66' | tr -d "\n") of=/dev/$volume
# 17°passo
echo "passo 17"
$sanitization if=<(yes $'\77 \77 \77' | tr -d "\n") of=/dev/$volume
# 18°passo
echo "passo 18"
$sanitization if=<(yes $'\88 \88 \88' | tr -d "\n") of=/dev/$volume
# 19°passo
echo "passo 19"
$sanitization if=<(yes $'\99 \99 \99' | tr -d "\n") of=/dev/$volume
# 20°passo
echo "passo 20"
$sanitization if=<(yes $'\AA \AA \AA' | tr -d "\n") of=/dev/$volume
# 21°passo
echo "passo 21"
$sanitization if=<(yes $'\BB \BB \BB' | tr -d "\n") of=/dev/$volume
# 22°passo
echo "passo 22"
$sanitization if=<(yes $'\CC \CC \CC' | tr -d "\n") of=/dev/$volume
# 23°passo
echo "passo 23"
$sanitization if=<(yes $'\DD \DD \DD' | tr -d "\n") of=/dev/$volume
# 24°passo
echo "passo 24"
$sanitization if=<(yes $'\EE \EE \EE' | tr -d "\n") of=/dev/$volume
# 25°passo
echo "passo 25"
$sanitization if=<(yes $'\FF \FF \FF' | tr -d "\n") of=/dev/$volume
# 26°passo
echo "passo 26"
$sanitization if=<(yes $'\92 \49 \24' | tr -d "\n") of=/dev/$volume
# 27°passo
echo "passo 27"
$sanitization if=<(yes $'\49 \24 \92' | tr -d "\n") of=/dev/$volume
# 28°passo
echo "passo 28"
$sanitization if=<(yes $'\24 \92 \49' | tr -d "\n") of=/dev/$volume
# 29°passo
echo "passo 29"
$sanitization if=<(yes $'\6D \B6 \DB' | tr -d "\n") of=/dev/$volume
# 30°passo
echo "passo 30"
$sanitization if=<(yes $'\B6 \DB \6D' | tr -d "\n") of=/dev/$volume
# 31°passo
echo "passo 31"
$sanitization if=<(yes $'\DB \6D \B6' | tr -d "\n") of=/dev/$volume
# 32°passo
echo "passo 32"
$sanitization if=/dev/urandom of=/dev/$volume
# 33°passo
echo "passo 33"
$sanitization if=/dev/urandom of=/dev/$volume
# 34°passo
echo "passo 34"
$sanitization if=/dev/urandom of=/dev/$volume
# 35°passo
echo "passo 35"
$sanitization if=/dev/urandom of=/dev/$volume
# Leitura dos bits que estão armazenados no volume sanitizado 
$read -b /dev/$volume >> gutmman-rodada-1.bin
echo "Fim do programa"
