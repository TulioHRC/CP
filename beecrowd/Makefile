CXX = g++
CXXFLAGS = -Wall -g

%: %.cpp
	${CXX} ${CXXFLAGS} $< -o test.exe && ./test.exe

%.cpp:
	cp ../template.cpp $@

copy:
	xclip -sel clip < ${f}

clean: 
	rm -f *.o *.out *.exe
