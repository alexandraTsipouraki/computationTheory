flex mylexer.l
bison -d --debug -v -r all myanalyzer.y
gcc lex.yy.c myanalyzer.tab.c cgen.c -lfl 
./a.out<test.th>test.c
rm lex.yy.c a.out

