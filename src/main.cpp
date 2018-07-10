#include <cuda_runtime.h>
#include <QSettings>
#include <QString>
#include <QStringList>
#include <algorithm>
#include <boost/filesystem.hpp>
#include <cstdio>
#include <ctime>
#include <fstream>
#include <iostream>
#include <iostream>
#include <iterator>
#include <string>


int main(int argc, char **argv){
    std::string conf_fname(argv[1]);
    QSettings * settings = new QSettings(argv[1], QSettings::IniFormat);
    QString strKey("toto/");
    QString titi = settings->value(strKey + "titi", "").toString();
    std::cout << "ouvre fichier : " << conf_fname << std::endl;
    std::cout << "param toto::titi : " << titi.toStdString() << std::endl;
    return 0;
    boost::filesystem::create_directory("./tutu");
}
