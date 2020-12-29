/**
 
Scope summary

An identifier’s scope determines where the identifier can be accessed within the source code.

-   Variables with block scope / local scope can only be accessed within the block in which they are declared (including nested blocks). This includes:
    -   Local variables
    -   Function parameters
    -   User-defined type definitions (such as enums and classes) declared inside a block
-   Variables and functions with global scope / file scope can be accessed anywhere in the file. This includes:
    -   Global variables
    -   Functions
    -   User-defined type definitions (such as enums and classes) declared inside a namespace or in the global scope

Duration summary

A variable’s duration determines when it is created and destroyed.
-   Variables with automatic duration are created at the point of definition, and destroyed when the block they are part of is exited. This includes:
    -   Local variables
    -   Function parameters
-   Variables with static duration are created when the program begins and destroyed when the program ends. This includes:
    -   Global variables
    -   Static local variables
-   Variables with dynamic duration are created and destroyed by programmer request. This includes:
    -   Dynamically allocated variables

Linkage summary

An identifier’s linkage determines whether multiple declarations of an identifier refer to the same identifier or not.

-   An identifier with no linkage means the identifier only refers to itself. This includes:
    -   Local variables
    -   User-defined type definitions (such as enums and classes) declared inside a block
-   An identifier with internal linkage can be accessed anywhere within the file it is declared. This includes:
    -   Static global variables (initialized or uninitialized)
    -   Static functions
    -   Const global variables
    -   Functions declared inside an unnamed namespace
    -   User-defined type definitions (such as enums and classes) declared inside an unnamed namespace
-   An identifier with external linkage can be accessed anywhere within the file it is declared, or other files (via a forward declaration). This includes:
    -   Functions
    -   Non-const global variables (initialized or uninitialized)
    -   Extern const global variables
    -   Inline const global variables
    -   User-defined type definitions (such as enums and classes) declared inside a namespace or in the global scope

Type	                                   Example	                           Scope Duration	Linkage	Notes
Local variable	                        | int x;	                        | Block	|Automatic	None	
Static local variable	                | static int s_x;	                | Block	|Static	    None	
Dynamic variable	                    | int *x { new int{} };	            | Block	|Dynamic	None	
Function parameter	                    | void foo(int x)	                | Block	|Automatic	None	
External non-constant global variable	| int g_x;	                        | File	|Static	    External	Initialized or uninitialized
Internal non-constant global variable	| static int g_x;	                | File	|Static	    Internal	Initialized or uninitialized
Internal constant global variable	    | constexpr int g_x { 1 };	        | File	|Static	    Internal	Must be initialized
External constant global variable	    | extern constexpr int g_x { 1 };	| File	|Static	    External	Must be initialized
Inline constant global variable	        | inline constexpr int g_x { 1 };	| File	|Static	    External	Must be initialized
Internal constant global variable	    | const int g_x { 1 };	            | File	|Static	    Internal	Must be initialized
External constant global variable	    | extern const int g_x { 1 };	    | File	|Static	    External	Must be initialized at definition
Inline constant global variable	        | inline const int g_x { 1 };	    | File	|Static	    External	Must be initialized


Type	Example	Notes
Function forward declaration	                    | void foo(int x);	        |Prototype only, no function body
Non-constant global variable forward declaration	| extern int g_x;	        |Must be uninitialized
Const global variable forward declaration	        | extern const int g_x;	    |Must be uninitialized
Constexpr global variable forward declaration	    | extern constexpr int g_x;	|Not allowed, constexpr cannot be forward declared

Specifier	    Meaning	Note
extern	        |static (or thread_local) storage duration and external linkage	
static	        |static (or thread_local) storage duration and internal linkage	
thread_local	|thread storage duration	Introduced in C++11
mutable	        |object allowed to be modified even if containing class is const
**/