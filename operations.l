%{
int a,b;
%}
%%
a+b{printf("enter the number :"a+b \n);}
a-b{printf("enter the number :"a-b \n);}
a*b{printf("enter the number :"a*b \n);}
a/b{printf("enter the number :"a/b \n);}
%%
int main(void){
yyin=fopen(argv[1],"r");
yylex();
return 0;
}
