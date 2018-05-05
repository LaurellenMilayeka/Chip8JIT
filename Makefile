SRCDIR=		./src/
INCDIR=		./include/

SRC=		$(SRCDIR)CHIP-8/Chip8CPU.cpp \
			$(SRCDIR)CHIP-8/OpCodes/ADD.cpp \
			$(SRCDIR)CHIP-8/OpCodes/AND.cpp \
			$(SRCDIR)CHIP-8/OpCodes/CALL.cpp \
			$(SRCDIR)CHIP-8/OpCodes/CLS.cpp \
			$(SRCDIR)CHIP-8/OpCodes/DRW.cpp \
			$(SRCDIR)CHIP-8/OpCodes/EXIT.cpp \
			$(SRCDIR)CHIP-8/OpCodes/HIGH.cpp \
			$(SRCDIR)CHIP-8/OpCodes/JP.cpp \
			$(SRCDIR)CHIP-8/OpCodes/LD.cpp \
			$(SRCDIR)CHIP-8/OpCodes/LOW.cpp \
			$(SRCDIR)CHIP-8/OpCodes/OR.cpp \
			$(SRCDIR)CHIP-8/OpCodes/RET.cpp \
			$(SRCDIR)CHIP-8/OpCodes/RND.cpp \
			$(SRCDIR)CHIP-8/OpCodes/SCD.cpp \
			$(SRCDIR)CHIP-8/OpCodes/SCL.cpp \
			$(SRCDIR)CHIP-8/OpCodes/SCR.cpp \
			$(SRCDIR)CHIP-8/OpCodes/SE.cpp \
			$(SRCDIR)CHIP-8/OpCodes/SHL.cpp \
			$(SRCDIR)CHIP-8/OpCodes/SHR.cpp \
			$(SRCDIR)CHIP-8/OpCodes/SKNP.cpp \
			$(SRCDIR)CHIP-8/OpCodes/SKP.cpp \
			$(SRCDIR)CHIP-8/OpCodes/SNE.cpp \
			$(SRCDIR)CHIP-8/OpCodes/SUB.cpp \
			$(SRCDIR)CHIP-8/OpCodes/SUBN.cpp \
			$(SRCDIR)CHIP-8/OpCodes/SYS.cpp \
			$(SRCDIR)CHIP-8/OpCodes/XOR.cpp \
			\
			$(SRCDIR)JIT/Cache.cpp \
			$(SRCDIR)JIT/JIT.cpp \
			\
			$(SRCDIR)ROM/ROM.cpp \
			\
			$(SRCDIR)Z80/Z80CPU.cpp \
			$(SRCDIR)Z80/OpCodes/ADC.cpp \
			$(SRCDIR)Z80/OpCodes/ADD.cpp \
			$(SRCDIR)Z80/OpCodes/AND.cpp \
			$(SRCDIR)Z80/OpCodes/CALL.cpp \
			$(SRCDIR)Z80/OpCodes/CCF.cpp \
			$(SRCDIR)Z80/OpCodes/CP.cpp \
			$(SRCDIR)Z80/OpCodes/CPL.cpp \
			$(SRCDIR)Z80/OpCodes/DAA.cpp \
			$(SRCDIR)Z80/OpCodes/DEC.cpp \
			$(SRCDIR)Z80/OpCodes/DI.cpp \
			$(SRCDIR)Z80/OpCodes/EI.cpp \
			$(SRCDIR)Z80/OpCodes/HALT.cpp \
			$(SRCDIR)Z80/OpCodes/INC.cpp \
			$(SRCDIR)Z80/OpCodes/JP.cpp \
			$(SRCDIR)Z80/OpCodes/JR.cpp \
			$(SRCDIR)Z80/OpCodes/LD.cpp \
			$(SRCDIR)Z80/OpCodes/NOP.cpp \
			$(SRCDIR)Z80/OpCodes/OR.cpp \
			$(SRCDIR)Z80/OpCodes/POP.cpp \
			$(SRCDIR)Z80/OpCodes/PREFIX.cpp \
			$(SRCDIR)Z80/OpCodes/PUSH.cpp \
			$(SRCDIR)Z80/OpCodes/RET.cpp \
			$(SRCDIR)Z80/OpCodes/RLA.cpp \
			$(SRCDIR)Z80/OpCodes/RLCA.cpp \
			$(SRCDIR)Z80/OpCodes/RRA.cpp \
			$(SRCDIR)Z80/OpCodes/RRCA.cpp \
			$(SRCDIR)Z80/OpCodes/RST.cpp \
			$(SRCDIR)Z80/OpCodes/SBC.cpp \
			$(SRCDIR)Z80/OpCodes/SCF.cpp \
			$(SRCDIR)Z80/OpCodes/STOP.cpp \
			$(SRCDIR)Z80/OpCodes/SUB.cpp \
			$(SRCDIR)Z80/OpCodes/XOR.cpp \
			\
			$(SRCDIR)Main.cpp

OBJS=		$(SRC:.cpp=.o)

CXX=		g++
CXXFLAGS=	-Wall -Wextra -Werror
CXXFLAGS+=	-I $(INCDIR)

LDFLAGS=	

NAME=		JIT

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CXX) -o $(NAME) $(OBJS) $(LDFLAGS)

clean:
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all
