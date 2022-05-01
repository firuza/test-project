all:
	g++ hello.cpp -o hello
	g++ helloTest.cpp -o helloTest

test:
	chmod +x hello
	./helloTest

clean:
	$(RM) hello
