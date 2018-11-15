cmake_minimum_required(VERSION 3.12) # Проверка версии CMake. Если версия установленой программы старее указаной, произайдёт аварийный выход.

project(untitled1) # Название проекта

set(CMAKE_CXX_STANDARD 14) # Установка переменной CMAKE_CXX_STANDARD (Она теперь равна 14)


#########################
# ПОДКЛЮЧЕНИЕ GOOGLETEST
#########################
set(SOURCE_DIR_GTEST extlibs/googletest)			# Установка переменной с путём до библиотеки googletest
add_subdirectory(extlibs/googletest)				# Добавление подпроекта, указывается имя дирректории
enable_testing()
include_directories(${SOURCE_DIR_GTEST}/include)	# Расположение заголовочных файлов библиотеки googletest


#########################
# ПОДКЛЮЧЕНИЕ НАПИСАННЫХ НАМИ БИБЛИОТЕК
#########################
add_library(foo STATIC mylibs/foo.cpp)	# Создание статической библиотеки с именем foo

#########################
# Создание запускаемых файлов и линковка их с используемыми внешними и внутренними библиотеками
#########################
add_executable(main main.cpp)	# Создает исполняемый файл с именем main
target_link_libraries(main foo)		# Линковка программы с библиотекой

add_executable(test_main test_main.cpp)	# Создает исполняемый файл с именем test_main
target_link_libraries(test_main foo gtest gtest_main)		# Линковка программы с библиотекой и гугл-тестами



