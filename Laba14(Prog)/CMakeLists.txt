cmake_minimum_required(VERSION 3.10)
project(CarManager C)
# Опция для выбора типа библиотеки
option(BUILD_SHARED_LIBS "Build shared library" OFF)
# Указываем, где лежат хедеры
include_directories(include)
# Собираем библиотеку из CAR_M.c
add_library(car_lib src/CAR_M.c)
# Собираем приложение из main.c
add_executable(car_app src/main.c)
# Линкуем (соединяем) их
target_link_libraries(car_app car_lib)
