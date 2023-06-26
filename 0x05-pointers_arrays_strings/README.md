According to the Oxford English Dictionary, the word dereference was first used in 1972 by Dennis Ritchie, the creator of C, in his paper "The Development of the C Language"1. He wrote:

The unary operator * is called the indirection or dereferencing operator; when applied to a pointer it accesses the object the pointer points to.

The word dereference comes from the prefix de-, meaning "away from", and the word reference, meaning "the action of referring to something or someone". Thus, dereference means "the action of referring away from something or someone", or in other words, "the action of accessing the value pointed by a pointer".

The word reference, in turn, comes from the Latin word referre, meaning "to bring back, report, relate". The word referre is composed of the prefix re-, meaning "back", and the word ferre, meaning "to bear, carry". Thus, reference means "to bring back or report something that is carried or borne by something else", or in other words, "to indicate the source or origin of something".

In C, a pointer is a variable that carries or bears the address of another variable, function, or memory location. A pointer can be used to indicate the source or origin of that data by using the & operator, which is called the address-of or referencing operator. For example:

int x = 10; int *p = &x; // p references x by storing its address

The opposite action of referencing is dereferencing, which is done by using the * operator, which is called the indirection or dereferencing operator. For example:

int x = 10; int *p = &x; int y = *p; // y dereferences p by accessing its value
