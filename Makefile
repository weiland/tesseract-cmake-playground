.PHONY: all test clean compile gen mkbuild clean

all: compile

run: compile
	cd build && ./src/text-comparator

test: compile
	cd build && ctest .

compile: gen
	cd build && cmake --build . --target all

gen: mkbuild
	cd build && cmake ..

mkbuild:
	mkdir -p build

clean:
	rm -rf build
