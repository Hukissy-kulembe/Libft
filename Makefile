GCC = gcc
FLAGS = -Wall -Wextra -Werror
ARQUIVOS = ft_strlen.c ft_strlcpy.c ft_memset.c ft_calloc.c ft_strchr.c ft_strnstr.c ft_strrchr.c structdata.c
ARQUIVOS_O = *.o

main.o: $(ARQUIVOS)
	$(GCC) -c $(FLAGS) $(ARQUIVOS)

main: $(ARQUIVOS_O)
	$(GCC) $(FLAGS) $(ARQUIVOS_O) -o libft.a

clean:
	rm -f *.o
