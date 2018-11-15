cmake_minimum_required(VERSION 3.12) # Проверка версии CMake. Если версия установленой программы старее указаной, произайдёт аварийный выход.

project(untitled1) # Название проекта

set(CMAKE_CXX_STANDARD 14)
set(SOURCE_EXE main.cpp)		# Установка переменной со списком исходников для исполняемого файла
set(SOURCE_TEST_EXE test_main.cpp)		# Установка переменной со списком исходников для исполняемого файла
set(SOURCE_LIB mylibs/foo.cpp)			# Тоже самое, но для библиотеки

#set(SOURCE_GTEST C:/googletest-master/googletest)			# Тоже самое, но для библиотеки
set(SOURCE_DIR_GTEST extlibs/googletest)			# Тоже самое, но для библиотеки
set(HEADERS_GTEST extlibs/googletest/include)			# Тоже самое, но для библиотеки

add_subdirectory(extlibs/googletest)				# Добавление подпроекта, указывается имя дирректории
enable_testing()
include_directories(HEADERS_GTEST SOURCE_DIR_GTEST)			# Расположение заголовочных файлов


add_library(foo STATIC ${SOURCE_LIB})	# Создание статической библиотеки с именем foo

add_executable(main ${SOURCE_EXE})	# Создает исполняемый файл с именем main
add_executable(test_main ${SOURCE_TEST_EXE})	# Создает исполняемый файл с именем test_main

target_link_libraries(main foo gtest gtest_main)		# Линковка программы с библиотекой и гугл-тестами
target_link_libraries(test_main foo gtest gtest_main)		# Линковка программы с библиотекой и гугл-тестами

# add_executable(untitled1 main.cpp mylibs/foo.cpp mylibs/foo.h)

