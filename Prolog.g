grammar Prolog;

options 
{
    language = Cpp;
}

@parser::includes
{
   #include "PrologLexer.hpp"
}

@lexer::includes
{
   #include <iostream>
}
    
@lexer::namespace {	User }
@parser::namespace{	User }


@lexer::traits
{
  class PrologLexer;
  class PrologParser;
  typedef antlr3::Traits< PrologLexer, PrologParser > PrologLexerTraits;
  typedef PrologLexerTraits PrologParserTraits;	
}

program : ATOM
        | VARIABLE
        | NUMBER
        | comp_term
        ;

comp_term   : functor '(' term (',' term)* ')' {std::cout << "matched comp_term!" << std::endl;};

term    : NUMBER
        | VARIABLE
        | ATOM
        | comp_term
        ;

functor : ATOM {std::cout << "matched functor!" << std::endl;};

ATOM    : (LOWERCASE)(LOWERCASE | UPPERCASE | DIGIT | UNDERSCORE)* {std::cout << "matched atom!" << std::endl;}
        | PRIME (.)* PRIME
        | (SPECIAL)+ {std::cout << "matched atom!" << std::endl;}
        ;

VARIABLE    : (UPPERCASE | UNDERSCORE)(LOWERCASE | UPPERCASE | DIGIT | UNDERSCORE)* {std::cout << "matched var!" << std::endl;};


NUMBER  : ('-')? (DIGIT)+ {std::cout << "matched NUMBER!" << std::endl;};

fragment
LOWERCASE   : 'a'..'z';

fragment
UPPERCASE   : 'A'..'Z';

fragment
DIGIT       : '0'..'9';

fragment
UNDERSCORE  : '_';

fragment
PRIME   : '\'';

fragment
SPECIAL : '+' | '-' | '*' | '=' | '>' | '<' | '#' | '&';      

WS : (' '| '\n' | '\r')+ {$channel=HIDDEN;}; 
