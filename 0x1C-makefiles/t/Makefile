# USAGE:
# make  			-: compile all binary
# make clean		-: remove all biary objects
# ------------------------


# .DEFAULT_GOAL := all

.PHONY = clean all # these are phny targets and so are merely names
CC := gcc
FLAGS := -Wall -Werror -Pedantic -Wextra
SOURCES := $(wildcard *.c) # *.c source files
BINS := $(SOURCES:%.c=%) # remove the .c extension on each file

all: ${BINS} # phony target all calls values in ${BINS} as individual targets.



%: %.o
	@echo "checking.."
	${CC} ${FLAGS} $< -o $@
# RULE
# Let's look at an example to understand this rule.
# Suppose foo is one of the values in ${BINS}
# Then % will match foo
# % can match any target name
# ------------------------------------------------
# Below is the rule in its expanded form:
# foo: foo.o
#   @echo "Checking.."
#   gcc -lm foo.o -o foo
# As shown, % is replaced by foo. $< is replaced by foo.o.
# $< is patterned to match prerequisites and $@ matches the target
# This rule will be called for every value in ${BINS}


%.o: %.c
	@echo "creating object.."
	${CC} -c $<
# Rule
# Every prerequisite in the previous rule is considered a target for this rule.
# Below is the rule in its expanded form
# foo.o: foo.c
#	@echo "Creating object.."
#	gcc -c foo.c



clean:
	@echo "cleaning up..."
	rm -rvf *.o ${BINS}



# simple and direct method
# CC = gcc
# SRC = main.c school.c
# all: $(SRC)
	# $(CC) $(SRC) -o school
#
