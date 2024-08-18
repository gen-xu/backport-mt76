#ifndef _BACKPORT_CACHE_H
#define _BACKPORT_CACHE_H

#include_next <linux/cache.h>

#ifndef __ro_after_init
#define __ro_after_init
#endif

#ifndef __cacheline_group_begin
#define __cacheline_group_begin(GROUP) \
	__u8 __cacheline_group_begin__##GROUP[0]
#endif

#ifndef __cacheline_group_end
#define __cacheline_group_end(GROUP) \
	__u8 __cacheline_group_end__##GROUP[0]
#endif


#endif /* _BACKPORT_CACHE_H */
