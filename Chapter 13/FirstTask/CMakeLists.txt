cmake_minimum_required(VERSION 3.5)#узнать версию командой cmake --version
project(First_task)#Название проекта
set(SOURCE_LIB Cd.cpp Classic.cpp)#Установка переменной со списком исходников для библиотеки
set(SOURCE_EXE FirstTack.cpp )#Установка переменной со списком исходников для исполняемого файла
add_library(Cd SHARED ${SOURCE_LIB})# Создание динамической библиотеки с именем Cd
add_executable(First ${SOURCE_EXE})# Создает исполняемый файл с именем First
target_link_libraries(First Cd)# Линковка программы с библиотекой
