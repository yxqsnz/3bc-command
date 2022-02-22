PWD=$(shell pwd)
build:
	mkdir build
	cmake -B build 
	cd build && make
final:
	mkdir build
	cmake -B build -DLOG_USE_COLOR=on -DCMAKE_BUILD_TYPE=Release
	cd build && make
	
clean:
		rm -rf build

