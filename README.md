# sfml-snake
 
A clone of the classic Snake arcade game.

## SFML Build and Setup

`cd sfml-snake`

`touch CMakeLists.txt`

We will build SFML from source and link it statically. If SFML has already been built from source and linked statically, skip this step. 

First download SFML 2.5.1 sources to the root directory of this project from [https://www.sfml-dev.org/]

Extract the zip file and rename the directory to `SFML-2.5.1-sources`

`cd SFML-2.5.1-sources`

`mkdir build`

`cd build`

try this option to build it in the install directory. 

`cmake .. -DCMAKE_INSTALL_PREFIX=../install`

This is a custom directory, if this causes issues, then try again with 

`cmake ..`

Then

`make`

`make install`

If you get an error like the following

```
-- Installing: /Library/Frameworks/freetype.framework
CMake Error at cmake_install.cmake:77 (file):
  file INSTALL cannot make directory
  "/Library/Frameworks/freetype.framework": Permission denied.
```

Then run `sudo make install`

Return to the base directory

`CMakeLists.txt` should have the following

```m
cmake_minimum_required(VERSION 3.10)
project(sfml_snake)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(SFML_DIR "SFML-2.5.1-sources/build")

find_package(SFML 2.5.1 COMPONENTS graphics window audio network system REQUIRED)

add_executable(sfml_snake main.cpp Game.cpp Draw.cpp Logic.cpp Update.cpp Snake.cpp Input.cpp Food.cpp)

target_link_libraries(sfml_snake PRIVATE sfml-graphics sfml-window sfml-audio sfml-network sfml-system)
```

`mkdir build`

`cd build`

`cmake ..`

`cmake --build .`

You should now find a file `sfml_snake` in the `build` directory, run it with `./sfml_snake`


![snake_image](snake_sfml.png "Image")
