%{
#undef ECHO
#define ECHO if(1) printf("%s", yytext);
%}
%option yylineno

%option noinput
%option nounput

%x COMMENT
%%
"var"       { ECHO;  return VAR; }
"const"     { ECHO;  return CONST; }
"int"       { ECHO;  return INT; }
"main"      { ECHO;  return MAIN; }
"("         { ECHO;  return LPAR; }
")"         { ECHO;  return RPAR; }
","         { ECHO;  return COMMA; }
"{"         { ECHO;  return LBRA; }
"}"         { ECHO;  return RBRA; }
"["         { ECHO;  return LSQR; }
"]"         { ECHO;  return RSQR; }
"write"     { ECHO;  return WRITE; }
"writeln"   { ECHO;  return WRITELN; }
"putc"      { ECHO;  return PUTC; }
"getc"      { ECHO;  return GETC; }
";"         { ECHO;  return SEMI; }
":"         { ECHO;  return COLON; }
"+"         { ECHO;  return PLUS; }
"++"        { ECHO;  return INC; }
"--"        { ECHO;  return DEC; }
"-"         { ECHO;  return MINUS; }
"*"         { ECHO;  return MULT; }
"/"         { ECHO;  return DIV; }
"%"         { ECHO;  return MOD; }
"^"         { ECHO;  return POW; }
"@"         { ECHO;  return ADDR; }
"if"        { ECHO;  return IF; }
"else"      { ECHO;  return ELSE; }
"while"     { ECHO;  return WHILE; }
"do"        { ECHO;  return DO; }
"break"     { ECHO;  return BREAK; }
"continue"  { ECHO;  return CONTINUE; }
"for"       { ECHO;  return FOR; }
"read"      { ECHO;  return READ; }
"return"    { ECHO;  return RETURN; }
"goto"      { ECHO;  return GOTO; }
"switch"    { ECHO;  return SWITCH; }
"case"      { ECHO;  return CASE; }
"default"   { ECHO;  return DEFAULT; }
"true"      { ECHO;  return LIT_TRUE; }
"false"     { ECHO;  return LIT_FALSE; }
":="        { ECHO;  return COLEQ; }
"="         { ECHO;  return ASSIGN; }
">="        { ECHO;  return GE; }
">"         { ECHO;  return GT; }
"<="        { ECHO;  return LE; }
"<"         { ECHO;  return LT; }
"!="        { ECHO;  return NE; }
"=="        { ECHO;  return EQ; }
"&&"        { ECHO;  return AND; }
"||"        { ECHO;  return OR; }
"!"         { ECHO;  return NOT; }
"+="        { ECHO;  return ADD_ASSIGN; }
"*="        { ECHO;  return MUL_ASSIGN; }
"-="        { ECHO;  return SUB_ASSIGN; }
"/="        { ECHO;  return DIV_ASSIGN; }
"^="        { ECHO;  return POW_ASSIGN; }
"%="        { ECHO;  return MOD_ASSIGN; }
"&&="       { ECHO;  return AND_ASSIGN; }
"||="       { ECHO;  return OR_ASSIGN; }

[0-9]+ {
	ECHO;
	yylval.val = atoi(yytext);
	return NUMBER;
}
([0-9]+\.[0-9]*|[0-9]*\.[0-9]+) {
	ECHO;
	yylval.fval = atof(yytext);
	return FLOAT;
}
_?[a-z][a-z0-9_]* {
	ECHO;
	yylval.name = (char*)malloc(strlen(yytext)+1);
	strcpy(yylval.name, yytext);
	return ID;
}
"'"."'" {
	ECHO;
	yylval.name = (char *)malloc(1);
	yytext[2] = 0;
	strcpy(yylval.name, yytext+1);
	return CHAR;
}
[ \t\n]+ {
	ECHO;
}
. {
	ECHO;
	return yytext[0];
}
"/*"            { BEGIN(COMMENT); }
<COMMENT>"*/"   { BEGIN(INITIAL); }
<COMMENT>\n     { yylineno++; }
<COMMENT>.      {}
"//".*          {}
