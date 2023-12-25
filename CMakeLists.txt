cmake_minimum_required(VERSION 3.5)
project(YourAllegroProject)

# 設置 Allegro 5 路徑
set(ALLEGRO_DIR "C:/AllegroLib_5.2.8")

# 包含 Allegro 5 和自己項目頭文件
include_directories(${ALLEGRO_DIR}/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)  # 指向新的 include 目录

# 查找 Allegro 5 庫文件
find_library(ALLEGRO_LIBRARY allegro PATHS ${ALLEGRO_DIR}/lib)
find_library(ALLEGRO_PRIMITIVES_LIBRARY allegro_primitives PATHS ${ALLEGRO_DIR}/lib)
find_library(ALLEGRO_IMAGE_LIBRARY allegro_image PATHS ${ALLEGRO_DIR}/lib)
find_library(ALLEGRO_AUDIO_LIBRARY allegro_audio PATHS ${ALLEGRO_DIR}/lib)
find_library(ALLEGRO_ACODEC_LIBRARY allegro_acodec PATHS ${ALLEGRO_DIR}/lib)
find_library(ALLEGRO_FONT_LIBRARY allegro_font PATHS ${ALLEGRO_DIR}/lib)
find_library(ALLEGRO_TTF_LIBRARY allegro_ttf PATHS ${ALLEGRO_DIR}/lib)
find_library(ALLEGRO_DIALOG_LIBRARY allegro_dialog PATHS ${ALLEGRO_DIR}/lib)
# 如果您還需要其他 Allegro 相關庫，請在這裡添加。

# 搜索所有源文件
file(GLOB SOURCE_FILES "src/*.c")  # 指向新的 src 目录

# 設置可執行文件輸出目錄
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR})  # 可以选择一个新的输出目录，例如 bin

# 添加你的源文件
add_executable(YourProgram ${SOURCE_FILES})

# 鏈結 Allegro 5 庫
target_link_libraries(YourProgram 
                      ${ALLEGRO_LIBRARY} 
                      ${ALLEGRO_PRIMITIVES_LIBRARY} 
                      ${ALLEGRO_IMAGE_LIBRARY} 
                      ${ALLEGRO_AUDIO_LIBRARY} 
                      ${ALLEGRO_ACODEC_LIBRARY} 
                      ${ALLEGRO_FONT_LIBRARY} 
                      ${ALLEGRO_TTF_LIBRARY} 
                      ${ALLEGRO_DIALOG_LIBRARY})

