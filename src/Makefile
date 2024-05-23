ifeq ($(OS),Linux)
    CPPFLAGS += -fsanitize=address
endif

main: main.cpp
	g++ $(CPPFLAGS) -o main main.cpp

clean:
	@rm -f main *.o *.bdf

.PHONY: clean
