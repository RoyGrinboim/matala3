all:prog1 prog2
prog1:main1.c
	gcc -Wall main1.c -o prog1
prog2:main2.c
	gcc -Wall main2.c -o prog2

.PHONEY:clean all

clean:
	rm -f prog1 prog2
