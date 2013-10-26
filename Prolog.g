grammar Prolog;

options 
{
    language = Cpp;
    backtrack = true;
}

scope TmpScope
{
    // Temporarily maps atoms and vars
    // against register numbers
    std::map<std::string, int> temp_map;
    int cnt;
}

@parser::includes
{
   #include "PrologLexer.hpp"           
}

@lexer::includes
{
   #include <iostream>
   #include <vector>
   #include <map>         
   #include <string>
   #include <utility>         
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

@parser::traits
{
  //Moved to parser::traits
  using std::string;
  using std::map;
  using std::pair;

  typedef  map<string, int> AtomRegisterMap;
  typedef pair<string, int> AtomRegisterPair;

  struct InstructionTuple
  {
      int    opcode;
      string functor;
      int    arity;
      int    _register;
  };
}        

program           
        : (fact | rule | query)+
        ;

comp_term   : functor '(' term (',' term)* ')';

term    : n=NUMBER      //{$ArgsScope::args.push_back($n.text);}
        | v=VARIABLE    //{$ArgsScope::args.push_back($v.text);}
        | a=ATOM        //{$ArgsScope::args.push_back($a.text);}
        | comp_term        
        ;

functor : a=ATOM        //{$ArgsScope::args.push_back($a.text);}
        ;


fact    : (a=ATOM      // {$ArgsScope::args.push_back($a.text);}
        | comp_term) '.' 

{std::cout << "matched a fact!" << std::endl;}
        ;

rule    : (ATOM | comp_term) ':-' (ATOM | comp_term) (',' (ATOM | comp_term))* '.' 

{std::cout << "matched a rule!" << std::endl;}
        ;

query
scope TmpScope;   
        : '?-' (a=ATOM  {$TmpScope::temp_map[$a.text];} 
        | comp_term)'.' 

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
