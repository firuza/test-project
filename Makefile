all:
	~/simplecpp/s++ hello.cpp -o hello
	g++ helloTest.cpp -o helloTest

test:
	chmod +x hello
	./helloTest

clean:
	$(RM) hello helloTest
