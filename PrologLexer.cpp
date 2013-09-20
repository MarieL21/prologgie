/** \file
 *  This C++ source file was generated by $ANTLR version 3.5
 *
 *     -  From the grammar source file : Prolog.g
 *     -                            On : 2013-09-20 05:10:21
 *     -                 for the lexer : PrologLexerLexer
 *
 * Editing it, at least manually, is not wise.
 *
 * C++ language generator and runtime by Gokulakannan Somasundaram ( heavy lifting from C Run-time by Jim Idle )
 *
 *
*/
// [The "BSD license"]
// Copyright (c) 2005-2009 Gokulakannan Somasundaram, ElectronDB
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
// 3. The name of the author may not be used to endorse or promote products
//    derived from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
// OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
// NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
// THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

/* -----------------------------------------
 * Include the ANTLR3 generated header file.
 */
#include    "PrologLexer.hpp"
/* ----------------------------------------- */


/* ============================================================================= */

/* =============================================================================
 * Start of recognizer
 */

using namespace antlr3;

	namespace 	User  {


/* =========================================================================
 * Lexer matching rules end.
 * =========================================================================
 */



PrologLexer::~PrologLexer()
{
}

void
PrologLexer::reset()
{
    this->get_rec()->reset();
}

/** \brief Name of the grammar file that generated this code
 */
static const char fileName[] = "Prolog.g";

/** \brief Return the name of the grammar file that generated this code.
 */
const char* PrologLexer::getGrammarFileName()
{
	return fileName;
}

/** \brief Create a new lexer called PrologLexer
 *
 * \param[in]    instream Pointer to an initialized input stream
 * \return
 *     - Success pPrologLexer initialized for the lex start
 *     - Fail NULL
 */
PrologLexer::PrologLexer(StreamType* instream)
:PrologLexerImplTraits::BaseLexerType(ANTLR_SIZE_HINT, instream, NULL)
{
	// See if we can create a new lexer with the standard constructor
	//
	this->init(instream );
}

/** \brief Create a new lexer called PrologLexer
 *
 * \param[in]    instream Pointer to an initialized input stream
 * \param[state] state Previously created shared recognizer stat
 * \return
 *     - Success pPrologLexer initialized for the lex start
 *     - Fail NULL
 */
PrologLexer::PrologLexer(StreamType* instream, RecognizerSharedStateType* state)
:PrologLexerImplTraits::BaseLexerType(ANTLR_SIZE_HINT, instream, state)
{
	this->init(instream );
}

void PrologLexer::init(StreamType* instream)
{
    /* -------------------------------------------------------------------
     * Memory for basic structure is allocated, now to fill in
     * in base ANTLR3 structures. We initialize the function pointers
     * for the standard ANTLR3 lexer function set, but upon return
     * from here, the programmer may set the pointers to provide custom
     * implementations of each function.
     *
     * We don't use the macros defined in PrologLexer.h here so you can get a sense
     * of what goes where.
     */

}

/* =========================================================================
 * Functions to match the lexer grammar defined tokens from the input stream
 */

//   Comes from: 18:7: ( '(' )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start T__14
 *
 * Looks to match the characters the constitute the token T__14
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == true if an exception was thrown.
 */
void PrologLexer::mT__14()
{
    ANTLR_UINT32	_type;
      


    _type	    = T__14;


    // Prolog.g:18:7: ( '(' )
    // Prolog.g:18:9: '('
    {
         this->matchc('(');
        if  (this->hasException())
        {
            goto ruleT__14Ex;
        }


    }

	this->get_lexstate()->set_type(_type);
    // This is where rules clean up and exit
    //
    goto ruleT__14Ex; /* Prevent compiler warnings */
    ruleT__14Ex: ;

}
// $ANTLR end T__14

//   Comes from: 19:7: ( ')' )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start T__15
 *
 * Looks to match the characters the constitute the token T__15
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == true if an exception was thrown.
 */
void PrologLexer::mT__15()
{
    ANTLR_UINT32	_type;
      


    _type	    = T__15;


    // Prolog.g:19:7: ( ')' )
    // Prolog.g:19:9: ')'
    {
         this->matchc(')');
        if  (this->hasException())
        {
            goto ruleT__15Ex;
        }


    }

	this->get_lexstate()->set_type(_type);
    // This is where rules clean up and exit
    //
    goto ruleT__15Ex; /* Prevent compiler warnings */
    ruleT__15Ex: ;

}
// $ANTLR end T__15

//   Comes from: 20:7: ( ',' )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start T__16
 *
 * Looks to match the characters the constitute the token T__16
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == true if an exception was thrown.
 */
void PrologLexer::mT__16()
{
    ANTLR_UINT32	_type;
      


    _type	    = T__16;


    // Prolog.g:20:7: ( ',' )
    // Prolog.g:20:9: ','
    {
         this->matchc(',');
        if  (this->hasException())
        {
            goto ruleT__16Ex;
        }


    }

	this->get_lexstate()->set_type(_type);
    // This is where rules clean up and exit
    //
    goto ruleT__16Ex; /* Prevent compiler warnings */
    ruleT__16Ex: ;

}
// $ANTLR end T__16

//   Comes from: 46:9: ( ( LOWERCASE ) ( LOWERCASE | UPPERCASE | DIGIT | UNDERSCORE )* | PRIME ( . )* PRIME | ( SPECIAL )+ )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start ATOM
 *
 * Looks to match the characters the constitute the token ATOM
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == true if an exception was thrown.
 */
void PrologLexer::mATOM()
{
    ANTLR_UINT32	_type;
      


    _type	    = ATOM;


    {
        //  Prolog.g:46:9: ( ( LOWERCASE ) ( LOWERCASE | UPPERCASE | DIGIT | UNDERSCORE )* | PRIME ( . )* PRIME | ( SPECIAL )+ )

        ANTLR_UINT32 alt4;

        alt4=3;

        switch ( this->LA(1) )
        {
        case 'a':
        case 'b':
        case 'c':
        case 'd':
        case 'e':
        case 'f':
        case 'g':
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
        case 'n':
        case 'o':
        case 'p':
        case 'q':
        case 'r':
        case 's':
        case 't':
        case 'u':
        case 'v':
        case 'w':
        case 'x':
        case 'y':
        case 'z':
        	{
        		alt4=1;
        	}
            break;
        case '\'':
        	{
        		alt4=2;
        	}
            break;
        case '#':
        case '&':
        case '*':
        case '+':
        case '-':
        case '<':
        case '=':
        case '>':
        	{
        		alt4=3;
        	}
            break;

        default:
            ExceptionBaseType* ex = new ANTLR_Exception< PrologLexerImplTraits, NO_VIABLE_ALT_EXCEPTION, StreamType>( this->get_rec(), "" );
            ex->set_decisionNum( 4 );
            ex->set_state( 0 );


            goto ruleATOMEx;

        }

        switch (alt4)
        {
    	case 1:
    	    // Prolog.g:46:11: ( LOWERCASE ) ( LOWERCASE | UPPERCASE | DIGIT | UNDERSCORE )*
    	    {
    	        if ( ((this->LA(1) >= 'a') && (this->LA(1) <= 'z')) )
    	        {
    	            this->consume();
    	        }
    	        else
    	        {
    	            new ANTLR_Exception< PrologLexerImplTraits, MISMATCHED_SET_EXCEPTION, StreamType>( this->get_rec(), "" );

    	            this->recover();
    	            goto ruleATOMEx;
    	        }


    	        // Prolog.g:46:22: ( LOWERCASE | UPPERCASE | DIGIT | UNDERSCORE )*

    	        for (;;)
    	        {
    	            int alt1=2;
    	            switch ( this->LA(1) )
    	            {
    	            case '0':
    	            case '1':
    	            case '2':
    	            case '3':
    	            case '4':
    	            case '5':
    	            case '6':
    	            case '7':
    	            case '8':
    	            case '9':
    	            case 'A':
    	            case 'B':
    	            case 'C':
    	            case 'D':
    	            case 'E':
    	            case 'F':
    	            case 'G':
    	            case 'H':
    	            case 'I':
    	            case 'J':
    	            case 'K':
    	            case 'L':
    	            case 'M':
    	            case 'N':
    	            case 'O':
    	            case 'P':
    	            case 'Q':
    	            case 'R':
    	            case 'S':
    	            case 'T':
    	            case 'U':
    	            case 'V':
    	            case 'W':
    	            case 'X':
    	            case 'Y':
    	            case 'Z':
    	            case '_':
    	            case 'a':
    	            case 'b':
    	            case 'c':
    	            case 'd':
    	            case 'e':
    	            case 'f':
    	            case 'g':
    	            case 'h':
    	            case 'i':
    	            case 'j':
    	            case 'k':
    	            case 'l':
    	            case 'm':
    	            case 'n':
    	            case 'o':
    	            case 'p':
    	            case 'q':
    	            case 'r':
    	            case 's':
    	            case 't':
    	            case 'u':
    	            case 'v':
    	            case 'w':
    	            case 'x':
    	            case 'y':
    	            case 'z':
    	            	{
    	            		alt1=1;
    	            	}
    	                break;

    	            }

    	            switch (alt1)
    	            {
    	        	case 1:
    	        	    // Prolog.g:
    	        	    {
    	        	        if ( ((this->LA(1) >= '0') && (this->LA(1) <= '9')) || ((this->LA(1) >= 'A') && (this->LA(1) <= 'Z')) || this->LA(1) == '_' || ((this->LA(1) >= 'a') && (this->LA(1) <= 'z')) )
    	        	        {
    	        	            this->consume();
    	        	        }
    	        	        else
    	        	        {
    	        	            new ANTLR_Exception< PrologLexerImplTraits, MISMATCHED_SET_EXCEPTION, StreamType>( this->get_rec(), "" );

    	        	            this->recover();
    	        	            goto ruleATOMEx;
    	        	        }


    	        	    }
    	        	    break;

    	        	default:
    	        	    goto loop1;	/* break out of the loop */
    	        	    break;
    	            }
    	        }
    	        loop1: ; /* Jump out to here if this rule does not match */


    	        {
    	            std::cout << "matched atom!" << std::endl;
    	        }


    	    }
    	    break;
    	case 2:
    	    // Prolog.g:47:11: PRIME ( . )* PRIME
    	    {
    	        /* 47:11: PRIME ( . )* PRIME */
    	        mPRIME();
    	        if  (this->hasException())
    	        {
    	            goto ruleATOMEx;
    	        }



    	        // Prolog.g:47:17: ( . )*

    	        for (;;)
    	        {
    	            int alt2=2;
    	            {
    	               /* dfaLoopbackState(k,edges,eotPredictsAlt,description,stateNumber,semPredState)
    	                */
    	                int LA2_0 = this->LA(1);
    	                if ( (LA2_0 == '\''))
    	                {
    	                    alt2=2;
    	                }
    	                else if ( (((LA2_0 >= 0x0000) && (LA2_0 <= '&')) || ((LA2_0 >= '(') && (LA2_0 <= 0xFFFF))))
    	                {
    	                    alt2=1;
    	                }

    	            }
    	            switch (alt2)
    	            {
    	        	case 1:
    	        	    // Prolog.g:47:18: .
    	        	    {
    	        	        this->matchAny();
    	        	        if  (this->hasException())
    	        	        {
    	        	            goto ruleATOMEx;
    	        	        }


    	        	    }
    	        	    break;

    	        	default:
    	        	    goto loop2;	/* break out of the loop */
    	        	    break;
    	            }
    	        }
    	        loop2: ; /* Jump out to here if this rule does not match */


    	        /* 47:11: PRIME ( . )* PRIME */
    	        mPRIME();
    	        if  (this->hasException())
    	        {
    	            goto ruleATOMEx;
    	        }



    	    }
    	    break;
    	case 3:
    	    // Prolog.g:48:11: ( SPECIAL )+
    	    {
    	        // Prolog.g:48:11: ( SPECIAL )+
    	        {
    	            int cnt3=0;

    	            for (;;)
    	            {
    	                int alt3=2;
    	        	switch ( this->LA(1) )
    	        	{
    	        	case '#':
    	        	case '&':
    	        	case '*':
    	        	case '+':
    	        	case '-':
    	        	case '<':
    	        	case '=':
    	        	case '>':
    	        		{
    	        			alt3=1;
    	        		}
    	        	    break;

    	        	}

    	        	switch (alt3)
    	        	{
    	        	    case 1:
    	        	        // Prolog.g:
    	        	        {
    	        	            if ( this->LA(1) == '#' || this->LA(1) == '&' || ((this->LA(1) >= '*') && (this->LA(1) <= '+')) || this->LA(1) == '-' || ((this->LA(1) >= '<') && (this->LA(1) <= '>')) )
    	        	            {
    	        	                this->consume();
    	        	            }
    	        	            else
    	        	            {
    	        	                new ANTLR_Exception< PrologLexerImplTraits, MISMATCHED_SET_EXCEPTION, StreamType>( this->get_rec(), "" );

    	        	                this->recover();
    	        	                goto ruleATOMEx;
    	        	            }


    	        	        }
    	        	        break;

    	        	    default:

    	        		if ( cnt3 >= 1 )
    	        		{
    	        		    goto loop3;
    	        		}
    	        		/* mismatchedSetEx()
    	        		 */
    	        		new ANTLR_Exception< PrologLexerImplTraits, EARLY_EXIT_EXCEPTION, StreamType>( this->get_rec(), "" );


    	        		goto ruleATOMEx;
    	        	}
    	        	cnt3++;
    	            }
    	            loop3: ;	/* Jump to here if this rule does not match */
    	        }

    	        {
    	            std::cout << "matched atom!" << std::endl;
    	        }


    	    }
    	    break;

        }
    }
	this->get_lexstate()->set_type(_type);
    // This is where rules clean up and exit
    //
    goto ruleATOMEx; /* Prevent compiler warnings */
    ruleATOMEx: ;

}
// $ANTLR end ATOM

//   Comes from: 51:13: ( ( UPPERCASE | UNDERSCORE ) ( LOWERCASE | UPPERCASE | DIGIT | UNDERSCORE )* )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start VARIABLE
 *
 * Looks to match the characters the constitute the token VARIABLE
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == true if an exception was thrown.
 */
void PrologLexer::mVARIABLE()
{
    ANTLR_UINT32	_type;
      


    _type	    = VARIABLE;


    // Prolog.g:51:13: ( ( UPPERCASE | UNDERSCORE ) ( LOWERCASE | UPPERCASE | DIGIT | UNDERSCORE )* )
    // Prolog.g:51:15: ( UPPERCASE | UNDERSCORE ) ( LOWERCASE | UPPERCASE | DIGIT | UNDERSCORE )*
    {
        if ( ((this->LA(1) >= 'A') && (this->LA(1) <= 'Z')) || this->LA(1) == '_' )
        {
            this->consume();
        }
        else
        {
            new ANTLR_Exception< PrologLexerImplTraits, MISMATCHED_SET_EXCEPTION, StreamType>( this->get_rec(), "" );

            this->recover();
            goto ruleVARIABLEEx;
        }


        // Prolog.g:51:39: ( LOWERCASE | UPPERCASE | DIGIT | UNDERSCORE )*

        for (;;)
        {
            int alt5=2;
            switch ( this->LA(1) )
            {
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
            case 'A':
            case 'B':
            case 'C':
            case 'D':
            case 'E':
            case 'F':
            case 'G':
            case 'H':
            case 'I':
            case 'J':
            case 'K':
            case 'L':
            case 'M':
            case 'N':
            case 'O':
            case 'P':
            case 'Q':
            case 'R':
            case 'S':
            case 'T':
            case 'U':
            case 'V':
            case 'W':
            case 'X':
            case 'Y':
            case 'Z':
            case '_':
            case 'a':
            case 'b':
            case 'c':
            case 'd':
            case 'e':
            case 'f':
            case 'g':
            case 'h':
            case 'i':
            case 'j':
            case 'k':
            case 'l':
            case 'm':
            case 'n':
            case 'o':
            case 'p':
            case 'q':
            case 'r':
            case 's':
            case 't':
            case 'u':
            case 'v':
            case 'w':
            case 'x':
            case 'y':
            case 'z':
            	{
            		alt5=1;
            	}
                break;

            }

            switch (alt5)
            {
        	case 1:
        	    // Prolog.g:
        	    {
        	        if ( ((this->LA(1) >= '0') && (this->LA(1) <= '9')) || ((this->LA(1) >= 'A') && (this->LA(1) <= 'Z')) || this->LA(1) == '_' || ((this->LA(1) >= 'a') && (this->LA(1) <= 'z')) )
        	        {
        	            this->consume();
        	        }
        	        else
        	        {
        	            new ANTLR_Exception< PrologLexerImplTraits, MISMATCHED_SET_EXCEPTION, StreamType>( this->get_rec(), "" );

        	            this->recover();
        	            goto ruleVARIABLEEx;
        	        }


        	    }
        	    break;

        	default:
        	    goto loop5;	/* break out of the loop */
        	    break;
            }
        }
        loop5: ; /* Jump out to here if this rule does not match */


        {
            std::cout << "matched var!" << std::endl;
        }


    }

	this->get_lexstate()->set_type(_type);
    // This is where rules clean up and exit
    //
    goto ruleVARIABLEEx; /* Prevent compiler warnings */
    ruleVARIABLEEx: ;

}
// $ANTLR end VARIABLE

//   Comes from: 54:9: ( ( '-' )? ( DIGIT )+ )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start NUMBER
 *
 * Looks to match the characters the constitute the token NUMBER
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == true if an exception was thrown.
 */
void PrologLexer::mNUMBER()
{
    ANTLR_UINT32	_type;
      


    _type	    = NUMBER;


    // Prolog.g:54:9: ( ( '-' )? ( DIGIT )+ )
    // Prolog.g:54:11: ( '-' )? ( DIGIT )+
    {
        // Prolog.g:54:11: ( '-' )?
        {
            int alt6=2;
            switch ( this->LA(1) )
            {
                case '-':
                	{
                		alt6=1;
                	}
                    break;
            }

            switch (alt6)
            {
        	case 1:
        	    // Prolog.g:54:12: '-'
        	    {
        	         this->matchc('-');
        	        if  (this->hasException())
        	        {
        	            goto ruleNUMBEREx;
        	        }


        	    }
        	    break;

            }
        }

        // Prolog.g:54:18: ( DIGIT )+
        {
            int cnt7=0;

            for (;;)
            {
                int alt7=2;
        	switch ( this->LA(1) )
        	{
        	case '0':
        	case '1':
        	case '2':
        	case '3':
        	case '4':
        	case '5':
        	case '6':
        	case '7':
        	case '8':
        	case '9':
        		{
        			alt7=1;
        		}
        	    break;

        	}

        	switch (alt7)
        	{
        	    case 1:
        	        // Prolog.g:
        	        {
        	            if ( ((this->LA(1) >= '0') && (this->LA(1) <= '9')) )
        	            {
        	                this->consume();
        	            }
        	            else
        	            {
        	                new ANTLR_Exception< PrologLexerImplTraits, MISMATCHED_SET_EXCEPTION, StreamType>( this->get_rec(), "" );

        	                this->recover();
        	                goto ruleNUMBEREx;
        	            }


        	        }
        	        break;

        	    default:

        		if ( cnt7 >= 1 )
        		{
        		    goto loop7;
        		}
        		/* mismatchedSetEx()
        		 */
        		new ANTLR_Exception< PrologLexerImplTraits, EARLY_EXIT_EXCEPTION, StreamType>( this->get_rec(), "" );


        		goto ruleNUMBEREx;
        	}
        	cnt7++;
            }
            loop7: ;	/* Jump to here if this rule does not match */
        }

        {
            std::cout << "matched NUMBER!" << std::endl;
        }


    }

	this->get_lexstate()->set_type(_type);
    // This is where rules clean up and exit
    //
    goto ruleNUMBEREx; /* Prevent compiler warnings */
    ruleNUMBEREx: ;

}
// $ANTLR end NUMBER

//   Comes from: 58:13: ( 'a' .. 'z' )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start LOWERCASE
 *
 * Looks to match the characters the constitute the token LOWERCASE
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == true if an exception was thrown.
 */
void PrologLexer::mLOWERCASE()
{
    ANTLR_UINT32	_type;
      



    // Prolog.g:58:13: ( 'a' .. 'z' )
    // Prolog.g:
    {
        if ( ((this->LA(1) >= 'a') && (this->LA(1) <= 'z')) )
        {
            this->consume();
        }
        else
        {
            new ANTLR_Exception< PrologLexerImplTraits, MISMATCHED_SET_EXCEPTION, StreamType>( this->get_rec(), "" );

            this->recover();
            goto ruleLOWERCASEEx;
        }


    }


    // This is where rules clean up and exit
    //
    goto ruleLOWERCASEEx; /* Prevent compiler warnings */
    ruleLOWERCASEEx: ;

}
// $ANTLR end LOWERCASE

//   Comes from: 61:13: ( 'A' .. 'Z' )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start UPPERCASE
 *
 * Looks to match the characters the constitute the token UPPERCASE
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == true if an exception was thrown.
 */
void PrologLexer::mUPPERCASE()
{
    ANTLR_UINT32	_type;
      



    // Prolog.g:61:13: ( 'A' .. 'Z' )
    // Prolog.g:
    {
        if ( ((this->LA(1) >= 'A') && (this->LA(1) <= 'Z')) )
        {
            this->consume();
        }
        else
        {
            new ANTLR_Exception< PrologLexerImplTraits, MISMATCHED_SET_EXCEPTION, StreamType>( this->get_rec(), "" );

            this->recover();
            goto ruleUPPERCASEEx;
        }


    }


    // This is where rules clean up and exit
    //
    goto ruleUPPERCASEEx; /* Prevent compiler warnings */
    ruleUPPERCASEEx: ;

}
// $ANTLR end UPPERCASE

//   Comes from: 64:13: ( '0' .. '9' )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start DIGIT
 *
 * Looks to match the characters the constitute the token DIGIT
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == true if an exception was thrown.
 */
void PrologLexer::mDIGIT()
{
    ANTLR_UINT32	_type;
      



    // Prolog.g:64:13: ( '0' .. '9' )
    // Prolog.g:
    {
        if ( ((this->LA(1) >= '0') && (this->LA(1) <= '9')) )
        {
            this->consume();
        }
        else
        {
            new ANTLR_Exception< PrologLexerImplTraits, MISMATCHED_SET_EXCEPTION, StreamType>( this->get_rec(), "" );

            this->recover();
            goto ruleDIGITEx;
        }


    }


    // This is where rules clean up and exit
    //
    goto ruleDIGITEx; /* Prevent compiler warnings */
    ruleDIGITEx: ;

}
// $ANTLR end DIGIT

//   Comes from: 67:13: ( '_' )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start UNDERSCORE
 *
 * Looks to match the characters the constitute the token UNDERSCORE
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == true if an exception was thrown.
 */
void PrologLexer::mUNDERSCORE()
{
    ANTLR_UINT32	_type;
      



    // Prolog.g:67:13: ( '_' )
    // Prolog.g:67:15: '_'
    {
         this->matchc('_');
        if  (this->hasException())
        {
            goto ruleUNDERSCOREEx;
        }


    }


    // This is where rules clean up and exit
    //
    goto ruleUNDERSCOREEx; /* Prevent compiler warnings */
    ruleUNDERSCOREEx: ;

}
// $ANTLR end UNDERSCORE

//   Comes from: 70:9: ( '\\'' )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start PRIME
 *
 * Looks to match the characters the constitute the token PRIME
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == true if an exception was thrown.
 */
void PrologLexer::mPRIME()
{
    ANTLR_UINT32	_type;
      



    // Prolog.g:70:9: ( '\\'' )
    // Prolog.g:70:11: '\\''
    {
         this->matchc('\'');
        if  (this->hasException())
        {
            goto rulePRIMEEx;
        }


    }


    // This is where rules clean up and exit
    //
    goto rulePRIMEEx; /* Prevent compiler warnings */
    rulePRIMEEx: ;

}
// $ANTLR end PRIME

//   Comes from: 73:9: ( '+' | '-' | '*' | '=' | '>' | '<' | '#' | '&' )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start SPECIAL
 *
 * Looks to match the characters the constitute the token SPECIAL
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == true if an exception was thrown.
 */
void PrologLexer::mSPECIAL()
{
    ANTLR_UINT32	_type;
      



    // Prolog.g:73:9: ( '+' | '-' | '*' | '=' | '>' | '<' | '#' | '&' )
    // Prolog.g:
    {
        if ( this->LA(1) == '#' || this->LA(1) == '&' || ((this->LA(1) >= '*') && (this->LA(1) <= '+')) || this->LA(1) == '-' || ((this->LA(1) >= '<') && (this->LA(1) <= '>')) )
        {
            this->consume();
        }
        else
        {
            new ANTLR_Exception< PrologLexerImplTraits, MISMATCHED_SET_EXCEPTION, StreamType>( this->get_rec(), "" );

            this->recover();
            goto ruleSPECIALEx;
        }


    }


    // This is where rules clean up and exit
    //
    goto ruleSPECIALEx; /* Prevent compiler warnings */
    ruleSPECIALEx: ;

}
// $ANTLR end SPECIAL

//   Comes from: 74:4: ( ( ' ' | '\\n' | '\\r' )+ )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start WS
 *
 * Looks to match the characters the constitute the token WS
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == true if an exception was thrown.
 */
void PrologLexer::mWS()
{
    ANTLR_UINT32	_type;
      


    _type	    = WS;


    // Prolog.g:74:4: ( ( ' ' | '\\n' | '\\r' )+ )
    // Prolog.g:74:6: ( ' ' | '\\n' | '\\r' )+
    {
        // Prolog.g:74:6: ( ' ' | '\\n' | '\\r' )+
        {
            int cnt8=0;

            for (;;)
            {
                int alt8=2;
        	switch ( this->LA(1) )
        	{
        	case '\n':
        	case '\r':
        	case ' ':
        		{
        			alt8=1;
        		}
        	    break;

        	}

        	switch (alt8)
        	{
        	    case 1:
        	        // Prolog.g:
        	        {
        	            if ( this->LA(1) == '\n' || this->LA(1) == '\r' || this->LA(1) == ' ' )
        	            {
        	                this->consume();
        	            }
        	            else
        	            {
        	                new ANTLR_Exception< PrologLexerImplTraits, MISMATCHED_SET_EXCEPTION, StreamType>( this->get_rec(), "" );

        	                this->recover();
        	                goto ruleWSEx;
        	            }


        	        }
        	        break;

        	    default:

        		if ( cnt8 >= 1 )
        		{
        		    goto loop8;
        		}
        		/* mismatchedSetEx()
        		 */
        		new ANTLR_Exception< PrologLexerImplTraits, EARLY_EXIT_EXCEPTION, StreamType>( this->get_rec(), "" );


        		goto ruleWSEx;
        	}
        	cnt8++;
            }
            loop8: ;	/* Jump to here if this rule does not match */
        }

        {
            this->get_state()->get_channel()=HIDDEN;
        }


    }

	this->get_lexstate()->set_type(_type);
    // This is where rules clean up and exit
    //
    goto ruleWSEx; /* Prevent compiler warnings */
    ruleWSEx: ;

}
// $ANTLR end WS

/** This is the entry point in to the lexer from an object that
 *  wants to generate the next token, such as a pCOMMON_TOKEN_STREAM
 */
void
PrologLexer::mTokens()
{
    {
        //  Prolog.g:1:8: ( T__14 | T__15 | T__16 | ATOM | VARIABLE | NUMBER | WS )

        ANTLR_UINT32 alt9;

        alt9=7;

        switch ( this->LA(1) )
        {
        case '(':
        	{
        		alt9=1;
        	}
            break;
        case ')':
        	{
        		alt9=2;
        	}
            break;
        case ',':
        	{
        		alt9=3;
        	}
            break;
        case '#':
        case '&':
        case '\'':
        case '*':
        case '+':
        case '<':
        case '=':
        case '>':
        case 'a':
        case 'b':
        case 'c':
        case 'd':
        case 'e':
        case 'f':
        case 'g':
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
        case 'n':
        case 'o':
        case 'p':
        case 'q':
        case 'r':
        case 's':
        case 't':
        case 'u':
        case 'v':
        case 'w':
        case 'x':
        case 'y':
        case 'z':
        	{
        		alt9=4;
        	}
            break;
        case '-':
        	{
        		switch ( this->LA(2) )
        		{
        		case '0':
        		case '1':
        		case '2':
        		case '3':
        		case '4':
        		case '5':
        		case '6':
        		case '7':
        		case '8':
        		case '9':
        			{
        				alt9=6;
        			}
        		    break;

        		default:
        		    alt9=4;
        		}

        	}
            break;
        case 'A':
        case 'B':
        case 'C':
        case 'D':
        case 'E':
        case 'F':
        case 'G':
        case 'H':
        case 'I':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
        case 'O':
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
        case 'T':
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
        case '_':
        	{
        		alt9=5;
        	}
            break;
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        	{
        		alt9=6;
        	}
            break;
        case '\n':
        case '\r':
        case ' ':
        	{
        		alt9=7;
        	}
            break;

        default:
            ExceptionBaseType* ex = new ANTLR_Exception< PrologLexerImplTraits, NO_VIABLE_ALT_EXCEPTION, StreamType>( this->get_rec(), "" );
            ex->set_decisionNum( 9 );
            ex->set_state( 0 );


            goto ruleTokensEx;

        }

        switch (alt9)
        {
    	case 1:
    	    // Prolog.g:1:10: T__14
    	    {
    	        /* 1:10: T__14 */
    	        mT__14();
    	        if  (this->hasException())
    	        {
    	            goto ruleTokensEx;
    	        }



    	    }
    	    break;
    	case 2:
    	    // Prolog.g:1:16: T__15
    	    {
    	        /* 1:16: T__15 */
    	        mT__15();
    	        if  (this->hasException())
    	        {
    	            goto ruleTokensEx;
    	        }



    	    }
    	    break;
    	case 3:
    	    // Prolog.g:1:22: T__16
    	    {
    	        /* 1:22: T__16 */
    	        mT__16();
    	        if  (this->hasException())
    	        {
    	            goto ruleTokensEx;
    	        }



    	    }
    	    break;
    	case 4:
    	    // Prolog.g:1:28: ATOM
    	    {
    	        /* 1:28: ATOM */
    	        mATOM();
    	        if  (this->hasException())
    	        {
    	            goto ruleTokensEx;
    	        }



    	    }
    	    break;
    	case 5:
    	    // Prolog.g:1:33: VARIABLE
    	    {
    	        /* 1:33: VARIABLE */
    	        mVARIABLE();
    	        if  (this->hasException())
    	        {
    	            goto ruleTokensEx;
    	        }



    	    }
    	    break;
    	case 6:
    	    // Prolog.g:1:42: NUMBER
    	    {
    	        /* 1:42: NUMBER */
    	        mNUMBER();
    	        if  (this->hasException())
    	        {
    	            goto ruleTokensEx;
    	        }



    	    }
    	    break;
    	case 7:
    	    // Prolog.g:1:49: WS
    	    {
    	        /* 1:49: WS */
    	        mWS();
    	        if  (this->hasException())
    	        {
    	            goto ruleTokensEx;
    	        }



    	    }
    	    break;

        }
    }


    goto ruleTokensEx; /* Prevent compiler warnings */
ruleTokensEx: ;
}

/* =========================================================================
 * Lexer matching rules end.
 * =========================================================================
 */
/* End of Lexer code
 * ================================================
 * ================================================
 */

	}



/* End of code
 * =============================================================================
 */
