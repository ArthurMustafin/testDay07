echo "\nex00";
gcc -Wall -Wextra -Werror ex00/test.c ../../day07/ex00/ft_strdup.c;
./a.out;

echo "\nex01";
gcc -Wall -Wextra -Werror ex01/test.c ../../day07/ex01/ft_range.c;
./a.out;

echo "\nex02";
gcc -Wall -Wextra -Werror ex02/test.c ../../day07/ex02/ft_ultimate_range.c;
./a.out;

echo "\nex03";
gcc -Wall -Wextra -Werror ex03/test.c ../../day07/ex03/ft_concat_params.c;
./a.out test1 test2 test3 abc;
./a.out one_bug_test;
./a.out;

echo "\nex04";
gcc -Wall -Wextra -Werror ex04/test.c ../../day07/ex04/ft_split_whitespaces.c;
./a.out;

echo "\nex05";
gcc -Wall -Wextra -Werror ex05/test.c ../../day07/ex04/ft_split_whitespaces.c ../../day07/ex05/ft_print_words_tables.c;
./a.out;
