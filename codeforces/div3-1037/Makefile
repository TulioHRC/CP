CXX = g++
CXXFLAGS = -Wall -Wextra -Wshadow -Wconversion -Wfloat-equal -Wduplicated-cond -Wlogical-op -g 

%: %.cpp
	${CXX} ${CXXFLAGS} $< -o test.exe && ./test.exe

%.cpp:
	cp ../../template.cpp $@

copy:
	xclip -sel clip < ${f}

clean: 
	rm -f *.o *.out *.exe
