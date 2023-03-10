cmake_minimum_required(VERSION 3.5)#узнать версию командой cmake --version
project(First_task)#Название проекта
set(SOURCE_LIB dma.cpp dma.h)#Установка переменной со списком исходников для библиотеки
set(SOURCE_EXE accDMA.cpp)#Установка переменной со списком исходников для исполняемого файла
add_library(dma SHARED ${SOURCE_LIB})# Создание динамической библиотеки с именем Cd
add_executable(accDMA ${SOURCE_EXE} ${SOURCE_LIB})# Создает исполняемый файл с именем First
target_link_libraries(accDMA dma)# Линковка программы с библиотекой