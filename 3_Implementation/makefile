PROJECT_NAME = Numerical
TEST_PROJECT_NAME = test
SRC = src/Euler_Method.c\
src/LU_Decomposition.c\
src/RK_Method.c\
src/Displayformat.c\
src/NRM_derivfun.c\
src/NRM_function.c\
src/cofactor.c\
src/determinant.c\
src/function.c\
src/gauss_jordan_elimination.c\
src/matrix_add.c\
src/matrix_subt.c\
src/power_method.c\
src/simpson.c\
src/sym.c\
src/transpose.c\
src/trapezoidal.c\
src/bisection.c\
src/matricmulti.c\
src/newtonforward.c\
src/NRM_convergence.c\
src/regula.c\
src/readchoice.c



TEST_SRC = test/test.c \
unity/unity.c

COV_SRC = test.c
CPP_SRC = Main.c
INC_TEST = unity
INC_HEADER = inc

ifdef OS
   RM = del 
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

run:
	gcc -I $(INC_HEADER) $(SRC) Main.c -lm -o $(call FixPath,$(PROJECT_NAME).$(EXEC))

run_test:
	gcc -I $(INC_HEADER) -I $(INC_TEST) $(TEST_SRC) $(SRC) -lm -o $(call FixPath,$(TEST_PROJECT_NAME).$(EXEC))

cppcheck:
	cppcheck --enable=all $(SRC) Main.c

coverage:
	gcc -fprofile-arcs -ftest-coverage -I $(INC_HEADER) -I $(INC_TEST) $(TEST_SRC) $(SRC) -lm -o $(call FixPath, $(TEST_PROJECT_NAME).$(EXEC))
	$(call FixPath, ./$(TEST_PROJECT_NAME).$(EXEC))
	gcov -a $(COV_SRC)
	
valgrind:
	chmod a+x ./test.out
	valgrind --leak-check=full ./test.out

clean:
	$(RM) *.$(EXEC)
	$(RM) *.gcda
	$(RM) *.gcno
	$(RM) *.c.gcov
