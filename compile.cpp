#include "PrologLexer.hpp"
#include "PrologParser.hpp"
#include "opcodes.hpp"         
#include "mem_params.hpp"

using namespace User;

std::pair<std::string, int>   STORE[MAX_STORE_SIZE];
std::pair<std::string, int>    HEAP[MAX_HEAP_SIZE];
InstructionTuple               CODE[MAX_CODE_SIZE];                       

int C_CNT = 1;
int H_CNT = 1;
int S_CNT = 1;
 
void compile_query(AtomRegisterMap& tm, int& reg_cnt, string atom, int arity)
{        
    InstructionTuple tmp_tuple;
        
    if (arity < 0)
    {
        AtomRegisterMap::iterator found_atom;         

        if ((found_atom = tm.find(atom)) == tm.end())
        {
            tm[atom] = ++reg_cnt;
            tmp_tuple = {SVAR, atom, arity, reg_cnt};                
        }
        else
        {
            tmp_tuple = {SVAL, atom, arity, found_atom->second};          
        }
    }
    else
    {
        tm[atom] = ++reg_cnt;
        tmp_tuple = {PS, atom, arity, reg_cnt};            
    }
        
    CODE[C_CNT++] = tmp_tuple;
}

