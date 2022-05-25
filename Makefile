mybin :main.c LoadingBar.c
	gcc main.c LoadingBar.c -o mybin

.PHONY :clean
clean:
	rm -f mybin
