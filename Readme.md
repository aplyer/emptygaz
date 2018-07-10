## Test "simple"

test unitaire sur l'utilisation de Cuda / Qt4 / Cmake / Boost / C++11 dans
l'objectif d'avoir une chaine de compilation générique Windows/Linux


## Compile et test sous linux : 

git clone https://github.com/aplyer/emptygaz.git  
cd emptygaz  
mkdir build  
cmake ..  
make  
./src/emptygaz_exe ../conf.ini  
_ouvre fichier : ../conf.ini_  
_param toto::titi : hello_  
_test GPU_  
_on recupere le resultat_  
_resultat GPU (42?) : 0_  


## Pour tester la lib json :

Décommenter dans ./src/CMakeLists.txt les lignes 10 à 17
puis :  
make  
./src/emptygaz_json ../conf.json  
_test json_  
_open json : ../conf.json_  
_toto : 42_  
_titi : hello_  
