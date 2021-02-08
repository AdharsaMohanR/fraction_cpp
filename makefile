src = fraction.cpp fraction_test.cpp
project = fraction
fraction: $(src)
	g++ $^ -lgtest -lgtest_main -lpthread -o $@
run: fraction
	./$^
clean:
	rm *.out
