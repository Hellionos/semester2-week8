
student: student.o main.o
	gcc obj/student.o obj/main.o -o bin/student

main.o: src/main.c include/student.h include/structure.h
	gcc -c src/main.c

student.o: src/student.c include/student.h include/structure.h
	gcc -c src/student.c

clean:
	rm -f obj/student.o obj/main.o student
	