CXX = g++
CXXFLAGS = -Wall -Wextra -Wshadow -Wconversion -Wfloat-equal -Wduplicated-cond -Wlogical-op -g 

%: %.cpp
	@echo "Compiling $< ..."
	${CXX} ${CXXFLAGS} $< -o test.exe
	@echo "Running test.exe ..."
	./test.exe

%.cpp:
	cp template.cpp $@

copy:
	xclip -sel clip < ${f}

clean: 
	rm -f *.o *.out *.exe
