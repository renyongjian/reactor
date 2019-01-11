#ifndef LIST_H
#define LIST_H


// list define 
#define TAILQ_HEAD(name,type) \
	struct name {  \
		struct type *tqh_firt; \
		struct type **tqh_last; \
	}

#define TAILQ_ENTRY(name,type) \
	struct name { \
		struct type *tqe_next; \
		struct type **tqe_pre; \
	}


//list access 
#define TAILQ_FIRST(head) ((head)->tqh_firt)
#define TAILQ_END(head) NULL
#define 






#endif 
