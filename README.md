#ciao per compilare il tuo kernel custom con i miei moduli

cerca la cartella in cui lo hai clonato e fai
cd /linux
make clean #ho lasciato old tutto per vedere un istantanea dei file
make menuconfig #per scegliere moduli eventualmente voluti fra cui modulo bello 1 e 2
make -j$(nproc)
