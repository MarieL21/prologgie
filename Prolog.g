grammar Prolog;

options 
{
    language = Cpp;
    backtrack = true;
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

program : (fact | rule | query)+
        ;

comp_term   : functor '(' term (',' term)* ')';

term    : NUMBER
        | VARIABLE
        | ATOM {$rule::NumAtoms += 1;}
        | comp_term
        ;

functor : ATOM {$rule::NumAtoms += 1;} ;


fact    : (ATOM | comp_term)'.' {std::cout << "matched a fact!" << std::endl;}
        ;

rule   
scope 
{
    int NumAtoms;
}
@init
{
    $rule::NumAtoms = 0;
}
        : (ATOM | comp_term) ':-' (ATOM | comp_term) (',' (ATOM | comp_term))* '.' 
{std::cout << "matched a rule!" << $rule::NumAtoms <<  std::endl;}
        ;

query   : (ATOM | comp_term) (',' (ATOM | comp_term))* '.' 
{std::cout << "matched a query! " << std::endl;}
        ;

ATOM    : (LOWERCASE)(LOWERCASE | UPPERCASE | DIGIT | UNDERSCORE)* 
        | PRIME (.)* PRIME
        | (SPECIAL)+      
        ;

VARIABLE    : (UPPERCASE | UNDERSCORE)(LOWERCASE | UPPERCASE | DIGIT | UNDERSCORE)*;


NUMBER  : ('-')? (DIGIT)+ ;

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
