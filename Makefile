CC = gcc
AR = ar 
OBJECTS_MAIN = main.o 
OBJECTS_LIB_LOOPS = basicClassification.o advancedClassificationLoop.o 
OBJECTS_LIB_REC = basicClassification.o advancedClassificationRecursion.o
FLAGS= -Wall -g

loops : libclassloops.a

recursives : libclassrec.a 

recursived : libclassrec.so 

loopd : libclassloops.so 

all : libclassrec.so libclassloops.so libclassloops.a libclassrec.a mains maindloop maindrec
mains : $(OBJECTS_MAIN) libclassrec.a 
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libclassrec.a 
maindloop : $(OBJECTS_MAIN) ./libclassloops.so 
	$(CC) $(FLAGS) -o maindloop $(OBJECTS_MAIN) ./libclassloops.so
maindrec : $(OBJECTS_MAIN) ./libclassrec.so 
	$(CC) $(FLAGS) -o maindrec $(OBJECTS_MAIN) ./libclassrec.so 
libclassloops.a : $(OBJECTS_LIB_LOOPS)
	$(AR) -rcs libclassloops.a $(OBJECTS_LIB_LOOPS)
libclassrec.a : $(OBJECTS_LIB_REC)
	$(AR) -rcs libclassrec.a $(OBJECTS_LIB_REC)
libclassrec.so : $(OBJECTS_LIB_REC)
	$(CC) -shared -o libclassrec.so $(OBJECTS_LIB_REC)
libclassloops.so : $(OBJECTS_LIB_LOOPS)
	$(CC) -shared -o libclassloops.so $(OBJECTS_LIB_LOOPS)
advancedClassificationLoop.o : advancedClassificationLoop.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationLoop.c 
advancedClassificationRecursion.o : advancedClassificationRecursion.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationRecursion.c 
basicClassification.o : basicClassification.c NumClass.h
	$(CC) $(FLAGS) -c basicClassification.c 
main.o : main.c NumClass.h
	$(CC) $(FLAGS) -c main.c 

.PHONY: clean all

clean:
	rm -f *.o *.a *.so mains maindloop maindrec 