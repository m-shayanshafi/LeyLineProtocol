#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 147 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 3
typedef long int ptrdiff_t;
#line 212
typedef long unsigned int size_t;
#line 324
typedef int wchar_t;
# 8 "/usr/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_nonnull {
#line 8
  int dummy;
}  ;
#line 9
struct __nesc_attr_bnd {
#line 9
  void *lo, *hi;
}  ;
#line 10
struct __nesc_attr_bnd_nok {
#line 10
  void *lo, *hi;
}  ;
#line 11
struct __nesc_attr_count {
#line 11
  int n;
}  ;
#line 12
struct __nesc_attr_count_nok {
#line 12
  int n;
}  ;
#line 13
struct __nesc_attr_one {
#line 13
  int dummy;
}  ;
#line 14
struct __nesc_attr_one_nok {
#line 14
  int dummy;
}  ;
#line 15
struct __nesc_attr_dmemset {
#line 15
  int a1, a2, a3;
}  ;
#line 16
struct __nesc_attr_dmemcpy {
#line 16
  int a1, a2, a3;
}  ;
#line 17
struct __nesc_attr_nts {
#line 17
  int dummy;
}  ;
# 36 "/usr/include/stdint.h" 3
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;

typedef long int int64_t;







typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;



typedef unsigned long int uint64_t;









typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;

typedef long int int_least64_t;






typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;

typedef unsigned long int uint_least64_t;









typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;








typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
#line 119
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
#line 134
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
# 34 "/usr/include/inttypes.h" 3
typedef int __gwchar_t;
#line 275
#line 271
typedef struct __nesc_unnamed4242 {

  long int quot;
  long int rem;
} imaxdiv_t;
# 281 "/usr/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void * source)  ;




static __inline uint8_t __nesc_hton_uint8(void * target, uint8_t value)  ;
#line 303
static __inline int8_t __nesc_hton_int8(void * target, int8_t value)  ;






static __inline uint16_t __nesc_ntoh_uint16(const void * source)  ;




static __inline uint16_t __nesc_hton_uint16(void * target, uint16_t value)  ;
#line 347
static __inline uint32_t __nesc_hton_uint32(void * target, uint32_t value)  ;
#line 431
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 42 "/usr/include/string.h" 3
extern void *memcpy(void *__restrict __dest, const void *__restrict __src, 
size_t __n) __attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__nonnull__(1, 2))) ;
#line 62
extern void *memset(void *__s, int __c, size_t __n) __attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__nonnull__(1))) ;


extern int memcmp(const void *__s1, const void *__s2, size_t __n) 
__attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1, 2))) ;
#line 125
extern char *strcpy(char *__restrict __dest, const char *__restrict __src) 
__attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__nonnull__(1, 2))) ;
#line 140
extern int strcmp(const char *__s1, const char *__s2) 
__attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1, 2))) ;
# 39 "/usr/include/xlocale.h" 3
#line 27
typedef struct __locale_struct {


  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 258 "/usr/include/string.h"
extern char *strrchr(const char *__s, int __c) 
__attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1))) ;
#line 394
extern size_t strlen(const char *__s) 
__attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1))) ;
# 55 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3
#line 50
typedef enum __nesc_unnamed4243 {

  P_ALL, 
  P_PID, 
  P_PGID
} idtype_t;
# 30 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
#line 124
typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct __nesc_unnamed4244 {
#line 134
  int __val[2];
} 
#line 134
__fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void *__timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
# 66 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
union wait {

  int w_status;
  struct __nesc_unnamed4245 {


    unsigned int __w_termsig : 7;
    unsigned int __w_coredump : 1;
    unsigned int __w_retcode : 8;
    unsigned int  : 16;
  } 






  __wait_terminated;
  struct __nesc_unnamed4246 {


    unsigned int __w_stopval : 8;
    unsigned int __w_stopsig : 8;
    unsigned int  : 16;
  } 





  __wait_stopped;
};
# 71 "/usr/include/stdlib.h" 3
#line 67
typedef union __nesc_unnamed4247 {

  union wait *__uptr;
  int *__iptr;
} __WAIT_STATUS __attribute((__transparent_union__)) ;
#line 101
#line 97
typedef struct __nesc_unnamed4248 {

  int quot;
  int rem;
} div_t;







#line 105
typedef struct __nesc_unnamed4249 {

  long int quot;
  long int rem;
} ldiv_t;







__extension__ 



#line 117
typedef struct __nesc_unnamed4250 {

  long long int quot;
  long long int rem;
} lldiv_t;
#line 157
__extension__ 
#line 194
__extension__ 




__extension__ 








__extension__ 




__extension__ 
# 33 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
#line 60
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
#line 98
typedef __pid_t pid_t;





typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 59 "/usr/include/time.h" 3
typedef __clock_t clock_t;
#line 75
typedef __time_t time_t;
#line 91
typedef __clockid_t clockid_t;
#line 103
typedef __timer_t timer_t;
# 150 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
#line 200
typedef unsigned int u_int8_t __attribute((__mode__(__QI__))) ;
typedef unsigned int u_int16_t __attribute((__mode__(__HI__))) ;
typedef unsigned int u_int32_t __attribute((__mode__(__SI__))) ;
typedef unsigned int u_int64_t __attribute((__mode__(__DI__))) ;

typedef int register_t __attribute((__mode__(__word__))) ;
# 22 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3
typedef int __sig_atomic_t;







#line 27
typedef struct __nesc_unnamed4251 {

  unsigned long int __val[1024 / (8 * sizeof(unsigned long int ))];
} __sigset_t;
# 37 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
typedef __sigset_t sigset_t;
# 120 "/usr/include/time.h" 3
struct timespec {

  __time_t tv_sec;
  __syscall_slong_t tv_nsec;
};
# 30 "/usr/include/x86_64-linux-gnu/bits/time.h" 3
struct timeval {

  __time_t tv_sec;
  __suseconds_t tv_usec;
};
# 48 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
#line 75
#line 64
typedef struct __nesc_unnamed4252 {







  __fd_mask __fds_bits[1024 / (8 * (int )sizeof(__fd_mask ))];
} 

fd_set;






typedef __fd_mask fd_mask;
# 26 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3
__extension__ 


__extension__ 


__extension__ 
# 228 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 60 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
typedef unsigned long int pthread_t;


union pthread_attr_t {

  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;









#line 75
typedef struct __pthread_internal_list {

  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
#line 128
#line 90
typedef union __nesc_unnamed4253 {

  struct __pthread_mutex_s {

    int __lock;
    unsigned int __count;
    int __owner;

    unsigned int __nusers;



    int __kind;

    short __spins;
    short __elision;
    __pthread_list_t __list;
  } 
#line 125
  __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;





#line 130
typedef union __nesc_unnamed4254 {

  char __size[4];
  int __align;
} pthread_mutexattr_t;
#line 154
#line 139
typedef union __nesc_unnamed4255 {

  struct __nesc_unnamed4256 {

    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;





#line 156
typedef union __nesc_unnamed4257 {

  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;
#line 222
#line 174
typedef union __nesc_unnamed4258 {


  struct __nesc_unnamed4259 {

    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __shared;
    signed char __rwelision;




    unsigned char __pad1[7];


    unsigned long int __pad2;


    unsigned int __flags;
  } 
  __data;
#line 220
  char __size[56];
  long int __align;
} pthread_rwlock_t;





#line 224
typedef union __nesc_unnamed4260 {

  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;








#line 239
typedef union __nesc_unnamed4261 {

  char __size[32];
  long int __align;
} pthread_barrier_t;





#line 245
typedef union __nesc_unnamed4262 {

  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 343 "/usr/include/stdlib.h" 3
struct random_data {

  int32_t *fptr;
  int32_t *rptr;
  int32_t *state;
  int rand_type;
  int rand_deg;
  int rand_sep;
  int32_t *end_ptr;
};
#line 412
struct drand48_data {

  unsigned short int __x[3];
  unsigned short int __old_x[3];
  unsigned short int __c;
  unsigned short int __init;
  __extension__ unsigned long long int __a;
};
#line 466
extern void *malloc(size_t __size) __attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__malloc__)) ;
#line 483
extern void free(void *__ptr) __attribute((__leaf__)) __attribute((__nothrow__)) ;
#line 741
typedef int (*__compar_fn_t)(const void *arg_0x7fb1b090bcf8, const void *arg_0x7fb1b090a020);
#line 779
__extension__ 
#line 796
__extension__ 
# 28 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 3
typedef float float_t;
typedef double double_t;
# 109 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern double log(double __x) __attribute((__leaf__)) __attribute((__nothrow__)) ;
#line 153
extern double pow(double __x, double __y) __attribute((__leaf__)) __attribute((__nothrow__)) ;


extern double sqrt(double __x) __attribute((__leaf__)) __attribute((__nothrow__)) ;
#line 184
extern double floor(double __x) __attribute((__leaf__)) __attribute((__nothrow__)) __attribute((const)) ;
#line 260
extern double erfc(double arg_0x7fb1b088a618) __attribute((__leaf__)) __attribute((__nothrow__)) ;
#line 336
__extension__ 





__extension__ 
#line 336
__extension__ 





__extension__ 
#line 336
__extension__ 





__extension__ 
# 209 "/usr/include/math.h" 3
enum __nesc_unnamed4263 {

  FP_NAN = 

  0, 
  FP_INFINITE = 

  1, 
  FP_ZERO = 

  2, 
  FP_SUBNORMAL = 

  3, 
  FP_NORMAL = 

  4
};
#line 354
#line 347
typedef enum __nesc_unnamed4264 {

  _IEEE_ = -1, 
  _SVID_, 
  _XOPEN_, 
  _POSIX_, 
  _ISOC_
} _LIB_VERSION_TYPE;
#line 372
struct exception {


  int type;
  char *name;
  double arg1;
  double arg2;
  double retval;
};
# 46 "/usr/include/ctype.h" 3
enum __nesc_unnamed4265 {

  _ISupper = 0 < 8 ? (1 << 0) << 8 : (1 << 0) >> 8, 
  _ISlower = 1 < 8 ? (1 << 1) << 8 : (1 << 1) >> 8, 
  _ISalpha = 2 < 8 ? (1 << 2) << 8 : (1 << 2) >> 8, 
  _ISdigit = 3 < 8 ? (1 << 3) << 8 : (1 << 3) >> 8, 
  _ISxdigit = 4 < 8 ? (1 << 4) << 8 : (1 << 4) >> 8, 
  _ISspace = 5 < 8 ? (1 << 5) << 8 : (1 << 5) >> 8, 
  _ISprint = 6 < 8 ? (1 << 6) << 8 : (1 << 6) >> 8, 
  _ISgraph = 7 < 8 ? (1 << 7) << 8 : (1 << 7) >> 8, 
  _ISblank = 8 < 8 ? (1 << 8) << 8 : (1 << 8) >> 8, 
  _IScntrl = 9 < 8 ? (1 << 9) << 8 : (1 << 9) >> 8, 
  _ISpunct = 10 < 8 ? (1 << 10) << 8 : (1 << 10) >> 8, 
  _ISalnum = 11 < 8 ? (1 << 11) << 8 : (1 << 11) >> 8
};
# 44 "/usr/include/stdio.h" 3
struct _IO_FILE;



typedef struct _IO_FILE FILE;
#line 64
typedef struct _IO_FILE __FILE;
# 94 "/usr/include/wchar.h" 3
#line 82
typedef struct __nesc_unnamed4266 {

  int __count;
  union __nesc_unnamed4267 {


    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 25 "/usr/include/_G_config.h" 3
#line 21
typedef struct __nesc_unnamed4268 {

  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;




#line 26
typedef struct __nesc_unnamed4269 {

  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 40 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdarg.h" 3
typedef __builtin_va_list __gnuc_va_list;
# 144 "/usr/include/libio.h" 3
struct _IO_jump_t;
#line 144
struct _IO_FILE;





typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
};
#line 176
enum __codecvt_result {

  __codecvt_ok, 
  __codecvt_partial, 
  __codecvt_error, 
  __codecvt_noconv
};
#line 241
struct _IO_FILE {
  int _flags;




  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;








  __off64_t _offset;







  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;

  size_t __pad5;
  int _mode;

  char _unused2[15 * sizeof(int ) - 4 * sizeof(void *) - sizeof(size_t )];
};



typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

struct _IO_FILE_plus;
struct _IO_FILE_plus;
struct _IO_FILE_plus;
#line 333
typedef __ssize_t __io_read_fn(void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn(void *__cookie, const char *__buf, 
size_t __n);







typedef int __io_seek_fn(void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn(void *__cookie);
# 79 "/usr/include/stdio.h" 3
typedef __gnuc_va_list va_list;
#line 110
typedef _G_fpos_t fpos_t;
#line 168
struct _IO_FILE;
struct _IO_FILE;
struct _IO_FILE;
#line 242
extern int fflush(FILE *__stream);
#line 306
extern FILE *fdopen(int __fd, const char *__modes) __attribute((__leaf__)) __attribute((__nothrow__)) ;
#line 356
extern int fprintf(FILE *__restrict __stream, 
const char *__restrict __format, ...);




extern int printf(const char *__restrict __format, ...);








extern int vfprintf(FILE *__restrict __s, const char *__restrict __format, 
__gnuc_va_list __arg);
#line 386
extern int snprintf(char *__restrict __s, size_t __maxlen, 
const char *__restrict __format, ...) 
__attribute((__nothrow__)) __attribute((__format__(__printf__, 3, 4))) ;
#line 858
extern int fileno(FILE *__stream) __attribute((__leaf__)) __attribute((__nothrow__)) ;
# 65 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/tos.h"
typedef uint8_t bool;










enum __nesc_unnamed4270 {
#line 76
  FALSE = 0, TRUE = 1
};
extern uint16_t TOS_NODE_ID;
# 51 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/sim_tossim.h"
typedef long long int sim_time_t;

void sim_init();

void sim_end();

void sim_random_seed(int seed);
int sim_random();

sim_time_t sim_time();
void sim_set_time(sim_time_t time);
sim_time_t sim_ticks_per_sec();

unsigned long sim_node();
void sim_set_node(unsigned long node);

int sim_print_time(char *buf, int bufLen, sim_time_t time);
int sim_print_now(char *buf, int bufLen);
char *sim_time_string();

void sim_add_channel(char *channel, FILE *file);
bool sim_remove_channel(char *channel, FILE *file);

bool sim_run_next_event();
# 50 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/sim_event_queue.h"
struct sim_event;
typedef struct sim_event sim_event_t;

struct sim_event {
  sim_time_t time;
  unsigned long mote;
  bool force;

  bool cancelled;
  void *data;

  void (*handle)(sim_event_t *e);
  void (*cleanup)(sim_event_t *e);
};

static sim_event_t *sim_queue_allocate_event();

void sim_queue_init();
void sim_queue_insert(sim_event_t *event);
bool sim_queue_is_empty();
long long int sim_queue_peek_time();
sim_event_t *sim_queue_pop();

void sim_queue_cleanup_none(sim_event_t *e);
void sim_queue_cleanup_event(sim_event_t *e);
void sim_queue_cleanup_data(sim_event_t *e);
void sim_queue_cleanup_total(sim_event_t *e);
# 53 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/sim_mote.h"
long long int sim_mote_euid(int mote);
void sim_mote_set_euid(int mote, long long int euid);

long long int sim_mote_start_time(int mote);
void sim_mote_set_start_time(int mote, long long int t);

bool sim_mote_is_on(int mote);
void sim_mote_turn_on(int mote);
void sim_mote_turn_off(int mote);
int sim_mote_get_variable_info(int mote, char *name, void **addr, size_t *len);
void sim_mote_enqueue_boot_event(int mote);
# 65 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/sim_log.h"
static inline void sim_log_init();
static inline void sim_log_add_channel(char *output, FILE *file);
static inline bool sim_log_remove_channel(char *output, FILE *file);
static void sim_log_commit_change();

static void sim_log_debug(uint16_t id, char *string, const char *format, ...);
static void sim_log_error(uint16_t id, char *string, const char *format, ...);
static void sim_log_debug_clear(uint16_t id, char *string, const char *format, ...);
# 97 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/tos.h"
struct __nesc_attr_atmostonce {
};
#line 98
struct __nesc_attr_atleastonce {
};
#line 99
struct __nesc_attr_exactlyonce {
};
# 9 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/hashtable.h"
struct hashtable;
typedef struct hashtable hashtable_t;
#line 78
struct hashtable *
create_hashtable(unsigned int minsize, 
unsigned int (*hashfunction)(void *arg_0x7fb1b06438e8), 
int (*key_eq_fn)(void *arg_0x7fb1b06420c8, void *arg_0x7fb1b0642368));
#line 103
#line 102
int 
hashtable_insert(struct hashtable *h, void *k, void *v);
#line 120
void *
hashtable_search(struct hashtable *h, void *k);
# 47 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/sim_log.c"
enum __nesc_unnamed4271 {
  DEFAULT_CHANNEL_SIZE = 8
};




#line 51
typedef struct sim_log_output {
  int num;
  FILE **files;
} sim_log_output_t;






#line 56
typedef struct sim_log_channel {
  const char *name;
  int numOutputs;
  int size;
  FILE **outputs;
} sim_log_channel_t;

enum __nesc_unnamed4272 {
  SIM_LOG_OUTPUT_COUNT = 510U
};

sim_log_output_t outputs[SIM_LOG_OUTPUT_COUNT];
struct hashtable *channelTable = (void *)0;


inline static unsigned int sim_log_hash(void *key);
inline static int sim_log_eq(void *key1, void *key2);
#line 84
static void fillInOutput(int id, char *name);
#line 159
static inline void sim_log_init();
#line 172
static inline void sim_log_add_channel(char *name, FILE *file);
#line 212
static inline bool sim_log_remove_channel(char *output, FILE *file);
#line 234
static void sim_log_commit_change();
#line 246
static void sim_log_debug(uint16_t id, char *string, const char *format, ...);
#line 261
static void sim_log_error(uint16_t id, char *string, const char *format, ...);
#line 276
static void sim_log_debug_clear(uint16_t id, char *string, const char *format, ...);
#line 306
inline static unsigned int sim_log_hash(void *key);










inline static int sim_log_eq(void *key1, void *key2);
# 65 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/heap.h"
#line 61
typedef struct heap {
  int size;
  void *data;
  int private_size;
} heap_t;

static inline void init_heap(heap_t *heap);

static inline int heap_is_empty(heap_t *heap);

static inline long long int heap_get_min_key(heap_t *heap);

static void *heap_pop_min_data(heap_t *heap, long long int *key);
static inline void heap_insert(heap_t *heap, void *data, long long int key);
# 58 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/heap.c"
const int STARTING_SIZE = 511;






#line 62
typedef struct node {
  void *data;
  long long int key;
} node_t;

static void down_heap(heap_t *heap, int findex);
static void up_heap(heap_t *heap, int findex);
static void swap(node_t *first, node_t *second);








static inline void init_heap(heap_t *heap);









static inline int is_empty(heap_t *heap);



static inline int heap_is_empty(heap_t *heap);



static inline long long int heap_get_min_key(heap_t *heap);
#line 114
static void *heap_pop_min_data(heap_t *heap, long long int *key);
#line 130
static inline void expand_heap(heap_t *heap);
#line 144
static inline void heap_insert(heap_t *heap, void *data, long long int key);
#line 158
static void swap(node_t *first, node_t *second);
#line 171
static void down_heap(heap_t *heap, int findex);
#line 197
static void up_heap(heap_t *heap, int findex);
# 44 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/sim_event_queue.c"
static heap_t eventHeap;

void sim_queue_init()   ;



void sim_queue_insert(sim_event_t *event)   ;




sim_event_t *sim_queue_pop()   ;




bool sim_queue_is_empty()   ;



long long int sim_queue_peek_time()   ;









void sim_queue_cleanup_none(sim_event_t *event)   ;




void sim_queue_cleanup_event(sim_event_t *event)   ;




void sim_queue_cleanup_data(sim_event_t *event)   ;





void sim_queue_cleanup_total(sim_event_t *event)   ;






static sim_event_t *sim_queue_allocate_event();
# 55 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
struct timezone {

  int tz_minuteswest;
  int tz_dsttime;
};

typedef struct timezone *__restrict __timezone_ptr_t;









extern int gettimeofday(struct timeval *__restrict __tv, 
__timezone_ptr_t __tz) __attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__nonnull__(1))) ;
#line 91
enum __itimer_which {


  ITIMER_REAL = 0, 


  ITIMER_VIRTUAL = 1, 



  ITIMER_PROF = 2
};




struct itimerval {


  struct timeval it_interval;

  struct timeval it_value;
};






typedef int __itimer_which_t;
# 51 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/sim_noise.h"
enum __nesc_unnamed4273 {
  NOISE_MIN = -115, 
  NOISE_MAX = -5, 
  NOISE_MIN_QUANTIZE = -115, 
  NOISE_QUANTIZE_INTERVAL = 5, 
  NOISE_BIN_SIZE = (NOISE_MAX - NOISE_MIN) / NOISE_QUANTIZE_INTERVAL + 1, 
  NOISE_HISTORY = 20, 
  NOISE_DEFAULT_ELEMENT_SIZE = 8, 
  NOISE_HASHTABLE_SIZE = 128, 
  NOISE_MIN_TRACE = 128, 
  NOISE_NUM_VALUES = NOISE_MAX - NOISE_MIN + 1
};








#line 64
typedef struct sim_noise_hash_t {
  char key[NOISE_HISTORY];
  int numElements;
  int size;
  char *elements;
  char flag;
  float dist[NOISE_NUM_VALUES];
} sim_noise_hash_t;
#line 83
#line 73
typedef struct sim_noise_node_t {
  char key[NOISE_HISTORY];
  char freqKey[NOISE_HISTORY];
  char lastNoiseVal;
  uint32_t noiseGenTime;
  struct hashtable *noiseTable;
  char *noiseTrace;
  uint32_t noiseTraceLen;
  uint32_t noiseTraceIndex;
  bool generated;
} sim_noise_node_t;

void sim_noise_init();

char sim_noise_generate(uint16_t node_id, uint32_t cur_t);
void sim_noise_trace_add(uint16_t node_id, char val);
void sim_noise_create_model(uint16_t node_id);
# 51 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/sim_tossim.c"
static sim_time_t sim_ticks;
static unsigned long current_node;
static int sim_seed;

static int __nesc_nido_resolve(int mote, char *varname, uintptr_t *addr, size_t *size);

void sim_init()   ;
#line 80
void sim_end()   ;





int sim_random()   ;
#line 102
void sim_random_seed(int seed)   ;







sim_time_t sim_time()   ;


void sim_set_time(sim_time_t t)   ;



sim_time_t sim_ticks_per_sec()   ;



unsigned long sim_node()   ;


void sim_set_node(unsigned long node)   ;




bool sim_run_next_event()   ;
#line 156
int sim_print_time(char *buf, int len, sim_time_t ftime)   ;
#line 179
int sim_print_now(char *buf, int len)   ;



char simTimeBuf[128];
char *sim_time_string()   ;




void sim_add_channel(char *channel, FILE *file)   ;



bool sim_remove_channel(char *channel, FILE *file)   ;
# 99 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/sim_csma.h"
int sim_csma_init_high();
int sim_csma_init_low();
int sim_csma_high();
int sim_csma_low();
int sim_csma_symbols_per_sec();
int sim_csma_bits_per_symbol();
int sim_csma_preamble_length();
int sim_csma_exponent_base();
int sim_csma_max_iterations();
int sim_csma_min_free_samples();
int sim_csma_rxtx_delay();
int sim_csma_ack_time();

void sim_csma_set_init_high(int val);
void sim_csma_set_init_low(int val);
void sim_csma_set_high(int val);
void sim_csma_set_low(int val);
void sim_csma_set_symbols_per_sec(int val);
void sim_csma_set_bits_per_symbol(int val);
void sim_csma_set_preamble_length(int val);
void sim_csma_set_exponent_base(int val);
void sim_csma_set_max_iterations(int val);
void sim_csma_set_min_free_samples(int val);
void sim_csma_set_rxtx_delay(int val);
void sim_csma_set_ack_time(int val);
# 44 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/sim_csma.c"
int csmaInitHigh = 640;
int csmaInitLow = 20;
int csmaHigh = 160;
int csmaLow = 20;
int csmaSymbolsPerSec = 65536;
int csmaBitsPerSymbol = 4;
int csmaPreambleLength = 12;
int csmaExponentBase = 1;
int csmaMaxIterations = 0;
int csmaMinFreeSamples = 1;
int csmaRxTxDelay = 11;
int csmaAckTime = 34;

int sim_csma_init_high()   ;


int sim_csma_init_low()   ;


int sim_csma_high()   ;


int sim_csma_low()   ;


int sim_csma_symbols_per_sec()   ;


int sim_csma_bits_per_symbol()   ;


int sim_csma_preamble_length()   ;


int sim_csma_exponent_base()   ;


int sim_csma_max_iterations()   ;


int sim_csma_min_free_samples()   ;


int sim_csma_rxtx_delay()   ;


int sim_csma_ack_time()   ;





void sim_csma_set_init_high(int val)   ;


void sim_csma_set_init_low(int val)   ;


void sim_csma_set_high(int val)   ;


void sim_csma_set_low(int val)   ;


void sim_csma_set_symbols_per_sec(int val)   ;


void sim_csma_set_bits_per_symbol(int val)   ;


void sim_csma_set_preamble_length(int val)   ;


void sim_csma_set_exponent_base(int val)   ;


void sim_csma_set_max_iterations(int val)   ;


void sim_csma_set_min_free_samples(int val)   ;


void sim_csma_set_rxtx_delay(int val)   ;


void sim_csma_set_ack_time(int val)   ;
# 57 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/sim_gain.h"
#line 53
typedef struct gain_entry {
  int mote;
  double gain;
  struct gain_entry *next;
} gain_entry_t;

void sim_gain_add(int src, int dest, double gain);
double sim_gain_value(int src, int dest);
bool sim_gain_connected(int src, int dest);
void sim_gain_remove(int src, int dest);
void sim_gain_set_noise_floor(int node, double mean, double range);
double sim_gain_sample_noise(int node);



void sim_gain_set_sensitivity(double value);
double sim_gain_sensitivity();

gain_entry_t *sim_gain_first(int src);
gain_entry_t *sim_gain_next(gain_entry_t *e);
# 6 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/sim_gain.c"
#line 3
typedef struct sim_gain_noise {
  double mean;
  double range;
} sim_gain_noise_t;


gain_entry_t *connectivity[1000 + 1];
sim_gain_noise_t localNoise[1000 + 1];
double sensitivity = 4.0;

static inline gain_entry_t *sim_gain_allocate_link(int mote);
void sim_gain_deallocate_link(gain_entry_t *linkToDelete);

gain_entry_t *sim_gain_first(int src)   ;






gain_entry_t *sim_gain_next(gain_entry_t *currentLink)   ;



void sim_gain_add(int src, int dest, double gain)   ;
#line 55
double sim_gain_value(int src, int dest)   ;
#line 73
bool sim_gain_connected(int src, int dest)   ;
#line 89
void sim_gain_remove(int src, int dest)   ;
#line 124
void sim_gain_set_noise_floor(int node, double mean, double range)   ;
#line 148
double sim_gain_sample_noise(int node)   ;
#line 161
static inline gain_entry_t *sim_gain_allocate_link(int mote);







void sim_gain_deallocate_link(gain_entry_t *linkToDelete)   ;



void sim_gain_set_sensitivity(double s)   ;



double sim_gain_sensitivity()   ;
# 39 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/randomlib.c"
static double randU[97];
#line 39
static double randC;
#line 39
static double randCD;
#line 39
static double randCM;
static int i97;
#line 40
static int j97;
static int test = FALSE;
#line 55
static inline void RandomInitialise(int ij, int kl);
#line 103
static double RandomUniform(void );
# 133 "/usr/include/time.h" 3
struct tm {

  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  const char *tm_zone;
};
#line 161
struct itimerspec {

  struct timespec it_interval;
  struct timespec it_value;
};


struct sigevent;
# 239 "/usr/include/time.h"
struct tm;



struct tm;





struct tm;




struct tm;
# 46 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/randomlib.h"
static inline void RandomInitialise(int arg_0x7fb1b0440610, int arg_0x7fb1b0440878);
static double RandomUniform(void );
# 51 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/sim_noise.c"
int numCase1 = 0;
int numCase2 = 0;
int numTotal = 0;


uint32_t FreqKeyNum = 0;

sim_noise_node_t noiseData[1000];

inline static unsigned int sim_noise_hash(void *key);
inline static int sim_noise_eq(void *key1, void *key2);

void makeNoiseModel(uint16_t node_id);
void makePmfDistr(uint16_t node_id);
uint8_t search_bin_num(char noise);

void sim_noise_init()   ;
#line 84
void sim_noise_create_model(uint16_t node_id)   ;
#line 97
void sim_noise_trace_add(uint16_t node_id, char noiseVal)   ;
#line 113
uint8_t search_bin_num(char noise)   ;









char search_noise_from_bin_num(int i)   ;






inline static unsigned int sim_noise_hash(void *key);









inline static int sim_noise_eq(void *key1, void *key2);



void sim_noise_add(uint16_t node_id, char noise)   ;
#line 192
void sim_noise_dist(uint16_t node_id)   ;
#line 245
void arrangeKey(uint16_t node_id)   ;









void makePmfDistr(uint16_t node_id)   ;
#line 283
int dummy;
static inline void sim_noise_alarm();



char sim_noise_gen(uint16_t node_id)   ;
#line 364
char sim_noise_generate(uint16_t node_id, uint32_t cur_t)   ;
#line 419
void makeNoiseModel(uint16_t node_id)   ;
# 59 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/sim_packet.h"
typedef struct sim_packet {
} 
#line 59
sim_packet_t;

void sim_packet_set_source(sim_packet_t *msg, uint16_t src);
uint16_t sim_packet_source(sim_packet_t *msg);

void sim_packet_set_destination(sim_packet_t *msg, uint16_t dest);
uint16_t sim_packet_destination(sim_packet_t *msg);

void sim_packet_set_length(sim_packet_t *msg, uint8_t len);
uint16_t sim_packet_length(sim_packet_t *msg);

void sim_packet_set_type(sim_packet_t *msg, uint8_t type);
uint8_t sim_packet_type(sim_packet_t *msg);

uint8_t *sim_packet_data(sim_packet_t *msg);
void sim_packet_set_strength(sim_packet_t *msg, uint16_t str);

void sim_packet_deliver(int node, sim_packet_t *msg, sim_time_t t);
uint8_t sim_packet_max_length(sim_packet_t *msg);

sim_packet_t *sim_packet_allocate();
void sim_packet_free(sim_packet_t *m);
# 6 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4274 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4275 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 12 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/TossimRadioMsg.h"
#line 6
typedef nx_struct tossim_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) tossim_header_t;



#line 14
typedef nx_struct tossim_footer {
  nxle_uint16_t crc;
} __attribute__((packed)) tossim_footer_t;





#line 18
typedef nx_struct tossim_metadata {
  nx_int8_t strength;
  nx_uint8_t ack;
  nx_uint16_t time;
} __attribute__((packed)) tossim_metadata_t;
# 83 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4276 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4277 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4278 {
  SERIAL_PROTO_ACK = 67, 
  SERIAL_PROTO_PACKET_ACK = 68, 
  SERIAL_PROTO_PACKET_NOACK = 69, 
  SERIAL_PROTO_PACKET_UNKNOWN = 255
};
#line 121
#line 109
typedef struct radio_stats {
  uint8_t version;
  uint8_t flags;
  uint8_t reserved;
  uint8_t platform;
  uint16_t MTU;
  uint16_t radio_crc_fail;
  uint16_t radio_queue_drops;
  uint16_t serial_crc_fail;
  uint16_t serial_tx_fail;
  uint16_t serial_short_packets;
  uint16_t serial_proto_drops;
} radio_stats_t;







#line 123
typedef nx_struct serial_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) serial_header_t;




#line 131
typedef nx_struct serial_packet {
  serial_header_t header;
  nx_uint8_t data[];
} __attribute__((packed)) serial_packet_t;



#line 136
typedef nx_struct serial_metadata {
  nx_uint8_t ack;
} __attribute__((packed)) serial_metadata_t;
# 53 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/platform_message.h"
#line 50
typedef union message_header {
  tossim_header_t tossim;
  serial_header_t serial;
} message_header_t;



#line 55
typedef union message_footer {
  tossim_footer_t tossim;
} message_footer_t;



#line 59
typedef union message_metadata {
  tossim_metadata_t tossim;
} message_metadata_t;
# 19 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[50];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 48 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/sim_packet.c"
void active_message_deliver(int node, message_t *m, sim_time_t t);

inline static tossim_header_t *getHeader(message_t *msg);



void sim_packet_set_source(sim_packet_t *msg, uint16_t src)   ;




uint16_t sim_packet_source(sim_packet_t *msg)   ;




void sim_packet_set_destination(sim_packet_t *msg, uint16_t dest)   ;




uint16_t sim_packet_destination(sim_packet_t *msg)   ;




void sim_packet_set_length(sim_packet_t *msg, uint8_t length)   ;



uint16_t sim_packet_length(sim_packet_t *msg)   ;




void sim_packet_set_type(sim_packet_t *msg, uint8_t type)   ;




uint8_t sim_packet_type(sim_packet_t *msg)   ;




uint8_t *sim_packet_data(sim_packet_t *p)   ;



void sim_packet_set_strength(sim_packet_t *p, uint16_t str)   ;




void sim_packet_deliver(int node, sim_packet_t *msg, sim_time_t t)   ;







uint8_t sim_packet_max_length(sim_packet_t *msg)   ;



sim_packet_t *sim_packet_allocate()   ;



void sim_packet_free(sim_packet_t *p)   ;
# 51 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/types/TinyError.h"
enum __nesc_unnamed4279 {
  SUCCESS = 0, 
  FAIL = 1, 
  ESIZE = 2, 
  ECANCEL = 3, 
  EOFF = 4, 
  EBUSY = 5, 
  EINVAL = 6, 
  ERETRY = 7, 
  ERESERVE = 8, 
  EALREADY = 9, 
  ENOMEM = 10, 
  ENOACK = 11, 
  ELAST = 11
};

typedef uint8_t error_t  ;

static inline error_t ecombine(error_t r1, error_t r2)  ;
# 10 "../../tos//lib/bvr/topology.h"
enum __nesc_unnamed4280 {
  N_NODES = 225, 
  N_ROOT_BEACONS = 8, 
  DIAMETER = 15, 
  INVALID_BEACON_ID = 0xff
};




uint8_t hc_root_beacon_id[N_NODES] = { 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
5, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 7, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 1, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
2, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 3, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 4, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 6, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff };
# 42 "../../tos//lib/linkestimator/LinkEstimator.h"
enum __nesc_unnamed4281 {
  AM_LE_REVERSE_LINK_ESTIMATION_MSG = 59
};


enum __nesc_unnamed4282 {
  I_UPDATE_LINK_INTERVAL = 30000u, 
  I_REVERSE_LINK_PERIOD = 17500u, 
  I_REVERSE_LINK_JITTER = 17500u
};

enum __nesc_unnamed4283 {

  N_CACHE_SIZE = 18, 



  MAX_QUALITY = 255, 
  AGE_THRESHOLD = 5, 

  LINK_ESTIMATOR_FILTER_BY_STRENGTH = 0, 



  SIGNAL_STRENGTH_FILTER_THRESHOLD = 350, 



  EWMA_HIST = 3, 
  EWMA_NEW = 1, 
  EWMA_SUM = 4, 
  LINK_ESTIMATOR_MIN_PACKETS = 3, 


  LINK_ESTIMATOR_PROBATION = 4, 







  LINK_ESTIMATOR_REPLACE_THRESH = 50, 
  LINK_ESTIMATOR_RECEIVE_WINDOW = 3, 
  LINK_ESTIMATOR_MAX_PACKETS = 254, 
  LINK_ESTIMATOR_INVALID_PACKETS = 255, 



  LINK_QUALITY_THRESHOLD = 80
};







enum __nesc_unnamed4284 {
  ACTIVE_MASK = 1, 
  VALID_ADDR_MASK = 2, 
  VALID_QUALITY_MASK = 4, 
  VALID_SEQNO_MASK = 8, 
  VALID_STRENGTH_MASK = 16, 
  VALID_REVERSE_MASK = 32, 
  REMOVE_MASK = 64
};
#line 124
#line 112
typedef nx_struct LinkNeighbor {
  nx_uint8_t state;
  nx_uint16_t addr;
  nx_uint8_t reverse_quality;
  nx_uint8_t reverse_expiration;
  nx_uint8_t quality;
  nx_uint16_t strength;
  nx_uint16_t last_seqno;
  nx_uint8_t missed[LINK_ESTIMATOR_RECEIVE_WINDOW];
  nx_uint8_t received[LINK_ESTIMATOR_RECEIVE_WINDOW];
  nx_uint8_t age;
  nx_uint8_t chances;
} __attribute__((packed)) LinkNeighbor;
#line 124
#line 112
typedef nx_struct LinkNeighbor *
#line 124
LinkNeighbor_ptr;










#line 128
typedef nx_struct __nesc_unnamed4285 {
  nx_uint16_t last_hop;
  nx_uint16_t seqno;
} __attribute__((packed)) 



LEHeader;
# 52 "../../tos//lib/bvr/coordinates.h"
uint8_t *copy_hc_root_beacon_id[N_NODES];
#line 74
enum __nesc_unnamed4286 {
  INVALID_DISTANCE = 65535u, 
  MAX_COORD_DISTANCE = 16384u, 
  MAX_COMPONENT_VALUE = 254, 
  INVALID_COMPONENT = 255
};
#line 91
#line 89
typedef nx_struct Coordinates {
  nx_uint8_t comps[8];
} __attribute__((packed)) Coordinates;
#line 91
#line 89
typedef nx_struct Coordinates *

Coordinates_ptr;




static void coordinates_print(Coordinates *c);





static error_t coordinates_init(Coordinates *c);







static bool coordinates_is_valid_component(Coordinates *c, uint8_t pos);







static inline uint8_t coordinates_count_valid_components(Coordinates *c);
#line 130
static error_t coordinates_copy(Coordinates *source, Coordinates *dest);
#line 194
static error_t coordinates_set_component(Coordinates *c, uint8_t pos, uint8_t hopcount);
#line 313
enum __nesc_unnamed4287 {
  COORDS_WEIGHT = 10
};
#line 348
enum __nesc_unnamed4288 {
  COORDS_DIST_NORMAL = 0, 
  COORDS_DIST_L = 1, 
  COORDS_DIST_U = 2, 
  COORDS_DIST_UL = 3, 
  COORDS_DIST_WEIGHTED = 5, 
  COORDS_DIST_BEACON = 6
};
#line 377
static uint8_t coordinates_get_closest_beacon(Coordinates *c);
#line 415
static void coordinates_print(Coordinates *c);
# 58 "../../tos//lib/bvr/S4.h"
enum __nesc_unnamed4289 {
  AM_S4_APP_MSG = 55, 
  AM_S4_APP_P_MSG = 54, 
  AM_S4_BEACON_MSG = 56, 





  AM_DV_MSG = 201, 



  AM_S4_RAW_MSG = 202
};
#line 208
enum __nesc_unnamed4290 {
  I_DELAY_TIMER = 250, 
  I_DELAY_CMD_TIMER = 25, 
  I_RADIO_SETTING = 64, 
  I_BEACON_INTERVAL = 10000u, 
  I_RADIO_CMD = 255, 

  INTERVAL_MUL = 1, 







  I_BEACON_JITTER = 10000u, 
  I_BEACON_START = 10000u, 

  I_BEACON_UPDATE_INTERVAL = 10000u
};
#line 243
enum __nesc_unnamed4291 {
  PARENT_SWITCH_THRESHOLD = 15
};

enum __nesc_unnamed4292 {



  NOT_ROOT_BEACON = 255
};
#line 289
#line 255
typedef struct __nesc_unnamed4293 {
  bool valid;
  uint16_t parent;
  uint8_t last_seqno;
  uint8_t hops;
  uint8_t combined_quality;

  uint16_t nodeid;

  uint8_t tolerance;
#line 280
  bool updated;
} 







S4RootBeacon;




#line 291
typedef nx_struct __nesc_unnamed4294 {
  nx_uint16_t parent[8];
} __attribute__((packed)) 
CoordsParents;
# 41 "../../tos//lib/bvr/coordinate_table_entry.h"
enum __nesc_unnamed4295 {
  MAX_AGE = 255, 
  EXPIRATION_AGE_THRESHOLD = 5
};










#line 46
typedef nx_struct __nesc_unnamed4296 {
  nx_uint8_t valid;
  nx_uint16_t first_hop;
  nx_uint8_t last_seqno;
  nx_uint16_t addr;
  Coordinates coords;
  nx_uint8_t quality;
  nx_uint8_t age;
  nx_uint8_t pos;
} __attribute__((packed)) CoordinateTableEntry;




static __inline error_t CTEntryInit(CoordinateTableEntry *e);
#line 74
static __inline error_t CTEntryTouch(CoordinateTableEntry *e);
#line 100
static __inline error_t CTEntryUpdateCoordinates(CoordinateTableEntry *e, Coordinates *c);





static __inline error_t CTEntryUpdateSeqno(CoordinateTableEntry *e, uint16_t seqno);






static __inline error_t CTEntryUpdateQuality(CoordinateTableEntry *e, uint8_t quality);
# 306 "../../tos//lib/bvr/S4.h"
enum __nesc_unnamed4297 {
  MSG_VALID_RANGE8 = 128
};


enum __nesc_unnamed4298 {
  METRIC_CLOSEST_BEACON = 6
};



#line 315
typedef nx_struct __nesc_unnamed4299 {
  nx_uint8_t data[1];
} __attribute__((packed)) S4Data;
#line 340
#line 324
typedef nx_struct __nesc_unnamed4300 {
  nx_uint8_t hopcount;

  nx_uint8_t closest_beacon;

  nx_uint16_t dest_id;
  nx_uint16_t origin;


  nx_uint16_t msg_id;


  nx_uint8_t rexmit_count;
  nx_uint8_t tried_hopcount;

  S4Data data;
} __attribute__((packed)) S4AppData;
#line 362
#line 344
typedef nx_struct __nesc_unnamed4301 {
  nx_uint8_t hopcount;

  nx_uint8_t closest_beacon;


  nx_uint16_t dest_id;
  nx_uint16_t origin;


  nx_uint8_t slot;
  nx_uint16_t msg_id;
  S4Data data;


  nx_uint8_t rexmit_count;
  nx_uint8_t tried_hopcount;
} __attribute__((packed)) 
S4AppPData;
#line 385
#line 371
typedef nx_struct BeaconInfo {





  nx_uint8_t beacon_id;

  nx_uint16_t nodeid;


  nx_uint8_t hopcount;
  nx_uint8_t seqno;
  nx_uint8_t quality;
} __attribute__((packed)) BeaconInfo;










#line 388
typedef nx_struct __nesc_unnamed4302 {
  nx_uint16_t seqno;




  BeaconInfo beacons[8];
} __attribute__((packed)) 
S4BeaconMsgData;






#line 400
typedef nx_struct S4_Beacon_Msg {
  LEHeader header;
  S4BeaconMsgData type_data;
} __attribute__((packed)) S4BeaconMsg;




#line 406
typedef nx_struct S4_Raw_Msg {
  LEHeader header;
} __attribute__((packed)) S4RawMsg;





#line 411
typedef nx_struct S4_App_Msg {
  LEHeader header;
  S4AppData type_data;
} __attribute__((packed)) S4AppMsg;




#line 416
typedef nx_struct S4_App_P_Msg {
  LEHeader header;
  S4AppPData type_data;
} __attribute__((packed)) S4AppPMsg;
#line 473
#line 438
typedef struct __nesc_unnamed4303 {
  bool valid;

  uint16_t dest;
  uint16_t parent;




  uint8_t last_seqno;
  uint8_t hops;
  uint8_t scope;


  uint8_t tolerance;
#line 468
  bool updated;
} 



ClusterMember;
#line 496
#line 478
typedef nx_struct __nesc_unnamed4304 {








  nx_uint8_t indx;
  nx_uint16_t source;
  nx_uint8_t hopcount;
  nx_uint8_t scope;
  nx_uint8_t seqno;
} __attribute__((packed)) 



DVInfo;







#line 499
typedef nx_struct __nesc_unnamed4305 {



  DVInfo dv_adv[4];
} __attribute__((packed)) DVMsgData;





#line 507
typedef struct DV_Msg {
  LEHeader header;
  DVMsgData type_data;
} __attribute((packed))  DVMsg;
#line 559
#line 555
typedef struct __nesc_unnamed4306 {
  uint16_t addr;
  uint16_t nextHop;
  uint8_t quality;
} NextHopTableEntry;
# 56 "../../tos//lib/bvr/BVR.h"
enum __nesc_unnamed4307 {
  AM_BVR_APP_MSG = 55, 
  AM_BVR_APP_P_MSG = 54, 
  AM_BVR_BEACON_MSG = 56, 
  BVR_UART_ADDR = 57
};
#line 81
#line 72
typedef nx_struct __nesc_unnamed4308 {
  nx_uint8_t valid;
  nx_uint16_t parent;
  nx_uint8_t last_seqno;
  nx_uint8_t hops;
  nx_uint8_t combined_quality;

  nx_uint8_t tolerance;
} __attribute__((packed)) 
BVRRootBeacon;




enum __nesc_unnamed4309 {
  BVR_APP_MODE_FALLBACK_MASK = 0x80
};





#line 92
typedef nx_struct __nesc_unnamed4310 {
  nx_uint8_t data[10];
} __attribute__((packed)) BVRData;
#line 110
#line 101
typedef nx_struct __nesc_unnamed4311 {
  nx_uint8_t hopcount;
  Coordinates dest;
  nx_uint16_t dest_id;
  nx_uint16_t origin;
  nx_uint8_t mode;
  nx_uint16_t fallback_thresh;
  nx_uint16_t msg_id;
  BVRData data;
} __attribute__((packed)) BVRAppData;
#line 124
#line 114
typedef nx_struct __nesc_unnamed4312 {
  nx_uint8_t hopcount;
  Coordinates dest;
  nx_uint16_t dest_id;
  nx_uint16_t origin;
  nx_uint8_t mode;
  nx_uint16_t fallback_thresh;
  nx_uint8_t slot;
  nx_uint16_t msg_id;
  BVRData data;
} __attribute__((packed)) BVRAppPData;









#line 131
typedef nx_struct __nesc_unnamed4313 {
  nx_uint16_t seqno;
  BeaconInfo beacons[8];
} __attribute__((packed)) BVRBeaconMsgData;






#line 138
typedef nx_struct BVR_Beacon_Msg {
  LEHeader header;
  BVRBeaconMsgData type_data;
} __attribute__((packed)) BVRBeaconMsg;




#line 144
typedef nx_struct BVR_Raw_Msg {
  LEHeader header;
} __attribute__((packed)) BVRRawMsg;





#line 149
typedef nx_struct BVR_App_Msg {
  LEHeader header;
  BVRAppData type_data;
} __attribute__((packed)) BVRAppMsg;




#line 154
typedef nx_struct BVR_App_P_Msg {
  LEHeader header;
  BVRAppPData type_data;
} __attribute__((packed)) BVRAppPMsg;
# 41 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4314 {
#line 41
  int notUsed;
} 
#line 41
TSecond;
typedef struct __nesc_unnamed4315 {
#line 42
  int notUsed;
} 
#line 42
TMilli;
typedef struct __nesc_unnamed4316 {
#line 43
  int notUsed;
} 
#line 43
T32khz;
typedef struct __nesc_unnamed4317 {
#line 44
  int notUsed;
} 
#line 44
TMicro;
# 25 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/sim/atm128_sim.h"
enum __nesc_unnamed4318 {

  ATM128_PINF = 0x00, 


  ATM128_PINE = 0x01, 


  ATM128_DDRE = 0x02, 


  ATM128_PORTE = 0x03, 


  ATM128_ADCW = 0x04, 

  ATM128_ADC = 0x04, 

  ATM128_ADCL = 0x04, 
  ATM128_ADCH = 0x05, 


  ATM128_ADCSR = 0x06, 
  ATM128_ADCSRA = 0x06, 


  ATM128_ADMUX = 0x07, 


  ATM128_ACSR = 0x08, 


  ATM128_UBRR0L = 0x09, 


  ATM128_UCSR0B = 0x0A, 


  ATM128_UCSR0A = 0x0B, 


  ATM128_UDR0 = 0x0C, 


  ATM128_SPCR = 0x0D, 


  ATM128_SPSR = 0x0E, 


  ATM128_SPDR = 0x0F, 


  ATM128_PIND = 0x10, 


  ATM128_DDRD = 0x11, 


  ATM128_PORTD = 0x12, 


  ATM128_PINC = 0x13, 


  ATM128_DDRC = 0x14, 


  ATM128_PORTC = 0x15, 


  ATM128_PINB = 0x16, 


  ATM128_DDRB = 0x17, 


  ATM128_PORTB = 0x18, 


  ATM128_PINA = 0x19, 


  ATM128_DDRA = 0x1A, 


  ATM128_PORTA = 0x1B, 




  ATM128_SFIOR = 0x20, 


  ATM128_WDTCR = 0x21, 


  ATM128_OCDR = 0x22, 


  ATM128_OCR2 = 0x23, 


  ATM128_TCNT2 = 0x24, 


  ATM128_TCCR2 = 0x25, 


  ATM128_ICR1 = 0x26, 
  ATM128_ICR1L = 0x26, 
  ATM128_ICR1H = 0x27, 


  ATM128_OCR1B = 0x28, 
  ATM128_OCR1BL = 0x28, 
  ATM128_OCR1BH = 0x29, 


  ATM128_OCR1A = 0x2A, 
  ATM128_OCR1AL = 0x2A, 
  ATM128_OCR1AH = 0x2B, 


  ATM128_TCNT1 = 0x2C, 
  ATM128_TCNT1L = 0x2C, 
  ATM128_TCNT1H = 0x2D, 


  ATM128_TCCR1B = 0x2E, 


  ATM128_TCCR1A = 0x2F, 


  ATM128_ASSR = 0x30, 


  ATM128_OCR0 = 0x31, 


  ATM128_TCNT0 = 0x32, 


  ATM128_TCCR0 = 0x33, 


  ATM128_MCUSR = 0x34, 
  ATM128_MCUCSR = 0x34, 


  ATM128_MCUCR = 0x35, 


  ATM128_TIFR = 0x36, 


  ATM128_TIMSK = 0x37, 


  ATM128_EIFR = 0x38, 


  ATM128_EIMSK = 0x39, 


  ATM128_EICRB = 0x3A, 


  ATM128_RAMPZ = 0x3B, 


  ATM128_XDIV = 0x3C, 




  ATM128_SREG = 0x3F, 




  ATM128_DDRF = 0x61, 


  ATM128_PORTF = 0x62, 


  ATM128_PING = 0x63, 


  ATM128_DDRG = 0x64, 


  ATM128_PORTG = 0x65, 


  ATM128_SPMCR = 0x68, 
  ATM128_SPMCSR = 0x68, 


  ATM128_EICRA = 0x6A, 


  ATM128_XMCRB = 0x6C, 


  ATM128_XMCRA = 0x6D, 


  ATM128_OSCCAL = 0x6F, 


  ATM128_TWBR = 0x70, 


  ATM128_TWSR = 0x71, 


  ATM128_TWAR = 0x72, 


  ATM128_TWDR = 0x73, 


  ATM128_TWCR = 0x74, 


  ATM128_OCR1C = 0x78, 
  ATM128_OCR1CL = 0x78, 
  ATM128_OCR1CH = 0x79, 


  ATM128_TCCR1C = 0x7A, 


  ATM128_ETIFR = 0x7C, 


  ATM128_ETIMSK = 0x7D, 


  ATM128_ICR3 = 0x80, 
  ATM128_ICR3L = 0x80, 
  ATM128_ICR3H = 0x81, 


  ATM128_OCR3C = 0x82, 
  ATM128_OCR3CL = 0x82, 
  ATM128_OCR3CH = 0x83, 


  ATM128_OCR3B = 0x84, 
  ATM128_OCR3BL = 0x84, 
  ATM128_OCR3BH = 0x85, 


  ATM128_OCR3A = 0x86, 
  ATM128_OCR3AL = 0x86, 
  ATM128_OCR3AH = 0x87, 


  ATM128_TCNT3 = 0x88, 
  ATM128_TCNT3L = 0x88, 
  ATM128_TCNT3H = 0x89, 


  ATM128_TCCR3B = 0x8A, 


  ATM128_TCCR3A = 0x8B, 


  ATM128_TCCR3C = 0x8C, 


  ATM128_UBRR0H = 0x90, 


  ATM128_UCSR0C = 0x95, 


  ATM128_UBRR1H = 0x98, 


  ATM128_UBRR1L = 0x99, 


  ATM128_UCSR1B = 0x9A, 


  ATM128_UCSR1A = 0x9B, 


  ATM128_UDR1 = 0x9C, 


  ATM128_UCSR1C = 0x9D
};
#line 673
enum __nesc_unnamed4319 {

  TWINT = 7, 
  TWEA = 6, 
  TWSTA = 5, 
  TWSTO = 4, 
  TWWC = 3, 
  TWEN = 2, 
  TWIE = 0, 


  TWA6 = 7, 
  TWA5 = 6, 
  TWA4 = 5, 
  TWA3 = 4, 
  TWA2 = 3, 
  TWA1 = 2, 
  TWA0 = 1, 
  TWGCE = 0, 


  TWS7 = 7, 
  TWS6 = 6, 
  TWS5 = 5, 
  TWS4 = 4, 
  TWS3 = 3, 
  TWPS1 = 1, 
  TWPS0 = 0, 


  SRL2 = 6, 
  SRL1 = 5, 
  SRL0 = 4, 
  SRW01 = 3, 
  SRW00 = 2, 
  SRW11 = 1, 


  XMBK = 7, 
  XMM2 = 2, 
  XMM1 = 1, 
  XMM0 = 0, 


  XDIVEN = 7, 
  XDIV6 = 6, 
  XDIV5 = 5, 
  XDIV4 = 4, 
  XDIV3 = 3, 
  XDIV2 = 2, 
  XDIV1 = 1, 
  XDIV0 = 0, 


  RAMPZ0 = 0, 


  ISC31 = 7, 
  ISC30 = 6, 
  ISC21 = 5, 
  ISC20 = 4, 
  ISC11 = 3, 
  ISC10 = 2, 
  ISC01 = 1, 
  ISC00 = 0, 


  ISC71 = 7, 
  ISC70 = 6, 
  ISC61 = 5, 
  ISC60 = 4, 
  ISC51 = 3, 
  ISC50 = 2, 
  ISC41 = 1, 
  ISC40 = 0, 


  SPMIE = 7, 
  RWWSB = 6, 
  RWWSRE = 4, 
  BLBSET = 3, 
  PGWRT = 2, 
  PGERS = 1, 
  SPMEN = 0, 


  INT7 = 7, 
  INT6 = 6, 
  INT5 = 5, 
  INT4 = 4, 
  INT3 = 3, 
  INT2 = 2, 
  INT1 = 1, 
  INT0 = 0, 


  INTF7 = 7, 
  INTF6 = 6, 
  INTF5 = 5, 
  INTF4 = 4, 
  INTF3 = 3, 
  INTF2 = 2, 
  INTF1 = 1, 
  INTF0 = 0, 


  OCIE2 = 7, 
  TOIE2 = 6, 
  TICIE1 = 5, 
  OCIE1A = 4, 
  OCIE1B = 3, 
  TOIE1 = 2, 
  OCIE0 = 1, 
  TOIE0 = 0, 


  OCF2 = 7, 
  TOV2 = 6, 
  ICF1 = 5, 
  OCF1A = 4, 
  OCF1B = 3, 
  TOV1 = 2, 
  OCF0 = 1, 
  TOV0 = 0, 


  TICIE3 = 5, 
  OCIE3A = 4, 
  OCIE3B = 3, 
  TOIE3 = 2, 
  OCIE3C = 1, 
  OCIE1C = 0, 


  ICF3 = 5, 
  OCF3A = 4, 
  OCF3B = 3, 
  TOV3 = 2, 
  OCF3C = 1, 
  OCF1C = 0, 


  SRE = 7, 
  SRW = 6, 
  SRW10 = 6, 
  SE = 5, 
  SM1 = 4, 
  SM0 = 3, 
  SM2 = 2, 
  IVSEL = 1, 
  IVCE = 0, 


  JTD = 7, 
  JTRF = 4, 
  WDRF = 3, 
  BORF = 2, 
  EXTRF = 1, 
  PORF = 0, 


  FOC = 7, 
  WGM0 = 6, 
  COM1 = 5, 
  COM0 = 4, 
  WGM1 = 3, 
  CS2 = 2, 
  CS1 = 1, 
  CS0 = 0, 


  FOC0 = 7, 
  WGM00 = 6, 
  COM01 = 5, 
  COM00 = 4, 
  WGM01 = 3, 
  CS02 = 2, 
  CS01 = 1, 
  CS00 = 0, 


  FOC2 = 7, 
  WGM20 = 6, 
  COM21 = 5, 
  COM20 = 4, 
  WGM21 = 3, 
  CS22 = 2, 
  CS21 = 1, 
  CS20 = 0, 


  AS0 = 3, 
  TCN0UB = 2, 
  OCR0UB = 1, 
  TCR0UB = 0, 


  COMA1 = 7, 
  COMA0 = 6, 
  COMB1 = 5, 
  COMB0 = 4, 
  COMC1 = 3, 
  COMC0 = 2, 
  WGMA1 = 1, 
  WGMA0 = 0, 


  COM1A1 = 7, 
  COM1A0 = 6, 
  COM1B1 = 5, 
  COM1B0 = 4, 
  COM1C1 = 3, 
  COM1C0 = 2, 
  WGM11 = 1, 
  WGM10 = 0, 


  COM3A1 = 7, 
  COM3A0 = 6, 
  COM3B1 = 5, 
  COM3B0 = 4, 
  COM3C1 = 3, 
  COM3C0 = 2, 
  WGM31 = 1, 
  WGM30 = 0, 


  ICNC = 7, 
  ICES = 6, 
  WGMB3 = 4, 
  WGMB2 = 3, 
  CSB2 = 2, 
  CSB1 = 1, 
  CSB0 = 0, 


  ICNC1 = 7, 
  ICES1 = 6, 
  WGM13 = 4, 
  WGM12 = 3, 
  CS12 = 2, 
  CS11 = 1, 
  CS10 = 0, 


  ICNC3 = 7, 
  ICES3 = 6, 
  WGM33 = 4, 
  WGM32 = 3, 
  CS32 = 2, 
  CS31 = 1, 
  CS30 = 0, 


  FOCA = 7, 
  FOCB = 6, 
  FOCC = 5, 


  FOC3A = 7, 
  FOC3B = 6, 
  FOC3C = 5, 


  FOC1A = 7, 
  FOC1B = 6, 
  FOC1C = 5, 


  IDRD = 7, 
  OCDR7 = 7, 
  OCDR6 = 6, 
  OCDR5 = 5, 
  OCDR4 = 4, 
  OCDR3 = 3, 
  OCDR2 = 2, 
  OCDR1 = 1, 
  OCDR0 = 0, 


  WDCE = 4, 
  WDE = 3, 
  WDP2 = 2, 
  WDP1 = 1, 
  WDP0 = 0, 


  TSM = 7, 
  ADHSM = 4, 
  ACME = 3, 
  PUD = 2, 
  PSR0 = 1, 
  PSR321 = 0, 


  SPIF = 7, 
  WCOL = 6, 
  SPI2X = 0, 


  SPIE = 7, 
  SPE = 6, 
  DORD = 5, 
  MSTR = 4, 
  CPOL = 3, 
  CPHA = 2, 
  SPR1 = 1, 
  SPR0 = 0, 


  UMSEL = 6, 
  UPM1 = 5, 
  UPM0 = 4, 
  USBS = 3, 
  UCSZ1 = 2, 
  UCSZ0 = 1, 
  UCPOL = 0, 


  UMSEL1 = 6, 
  UPM11 = 5, 
  UPM10 = 4, 
  USBS1 = 3, 
  UCSZ11 = 2, 
  UCSZ10 = 1, 
  UCPOL1 = 0, 


  UMSEL0 = 6, 
  UPM01 = 5, 
  UPM00 = 4, 
  USBS0 = 3, 
  UCSZ01 = 2, 
  UCSZ00 = 1, 
  UCPOL0 = 0, 


  RXC = 7, 
  TXC = 6, 
  UDRE = 5, 
  FE = 4, 
  DOR = 3, 
  UPE = 2, 
  U2X = 1, 
  MPCM = 0, 


  RXC1 = 7, 
  TXC1 = 6, 
  UDRE1 = 5, 
  FE1 = 4, 
  DOR1 = 3, 
  UPE1 = 2, 
  U2X1 = 1, 
  MPCM1 = 0, 


  RXC0 = 7, 
  TXC0 = 6, 
  UDRE0 = 5, 
  FE0 = 4, 
  DOR0 = 3, 
  UPE0 = 2, 
  U2X0 = 1, 
  MPCM0 = 0, 


  RXCIE = 7, 
  TXCIE = 6, 
  UDRIE = 5, 
  RXEN = 4, 
  TXEN = 3, 
  UCSZ = 2, 
  UCSZ2 = 2, 
  RXB8 = 1, 
  TXB8 = 0, 


  RXCIE1 = 7, 
  TXCIE1 = 6, 
  UDRIE1 = 5, 
  RXEN1 = 4, 
  TXEN1 = 3, 
  UCSZ12 = 2, 
  RXB81 = 1, 
  TXB81 = 0, 


  RXCIE0 = 7, 
  TXCIE0 = 6, 
  UDRIE0 = 5, 
  RXEN0 = 4, 
  TXEN0 = 3, 
  UCSZ02 = 2, 
  RXB80 = 1, 
  TXB80 = 0, 


  ACD = 7, 
  ACBG = 6, 
  ACO = 5, 
  ACI = 4, 
  ACIE = 3, 
  ACIC = 2, 
  ACIS1 = 1, 
  ACIS0 = 0, 


  ADEN = 7, 
  ADSC = 6, 
  ADFR = 5, 
  ADIF = 4, 
  ADIE = 3, 
  ADPS2 = 2, 
  ADPS1 = 1, 
  ADPS0 = 0, 


  REFS1 = 7, 
  REFS0 = 6, 
  ADLAR = 5, 
  MUX4 = 4, 
  MUX3 = 3, 
  MUX2 = 2, 
  MUX1 = 1, 
  MUX0 = 0, 


  PA7 = 7, 
  PA6 = 6, 
  PA5 = 5, 
  PA4 = 4, 
  PA3 = 3, 
  PA2 = 2, 
  PA1 = 1, 
  PA0 = 0, 


  DDA7 = 7, 
  DDA6 = 6, 
  DDA5 = 5, 
  DDA4 = 4, 
  DDA3 = 3, 
  DDA2 = 2, 
  DDA1 = 1, 
  DDA0 = 0, 


  PINA7 = 7, 
  PINA6 = 6, 
  PINA5 = 5, 
  PINA4 = 4, 
  PINA3 = 3, 
  PINA2 = 2, 
  PINA1 = 1, 
  PINA0 = 0, 


  PB7 = 7, 
  PB6 = 6, 
  PB5 = 5, 
  PB4 = 4, 
  PB3 = 3, 
  PB2 = 2, 
  PB1 = 1, 
  PB0 = 0, 


  DDB7 = 7, 
  DDB6 = 6, 
  DDB5 = 5, 
  DDB4 = 4, 
  DDB3 = 3, 
  DDB2 = 2, 
  DDB1 = 1, 
  DDB0 = 0, 


  PINB7 = 7, 
  PINB6 = 6, 
  PINB5 = 5, 
  PINB4 = 4, 
  PINB3 = 3, 
  PINB2 = 2, 
  PINB1 = 1, 
  PINB0 = 0, 


  PC7 = 7, 
  PC6 = 6, 
  PC5 = 5, 
  PC4 = 4, 
  PC3 = 3, 
  PC2 = 2, 
  PC1 = 1, 
  PC0 = 0, 


  DDC7 = 7, 
  DDC6 = 6, 
  DDC5 = 5, 
  DDC4 = 4, 
  DDC3 = 3, 
  DDC2 = 2, 
  DDC1 = 1, 
  DDC0 = 0, 


  PINC7 = 7, 
  PINC6 = 6, 
  PINC5 = 5, 
  PINC4 = 4, 
  PINC3 = 3, 
  PINC2 = 2, 
  PINC1 = 1, 
  PINC0 = 0, 


  PD7 = 7, 
  PD6 = 6, 
  PD5 = 5, 
  PD4 = 4, 
  PD3 = 3, 
  PD2 = 2, 
  PD1 = 1, 
  PD0 = 0, 


  DDD7 = 7, 
  DDD6 = 6, 
  DDD5 = 5, 
  DDD4 = 4, 
  DDD3 = 3, 
  DDD2 = 2, 
  DDD1 = 1, 
  DDD0 = 0, 


  PIND7 = 7, 
  PIND6 = 6, 
  PIND5 = 5, 
  PIND4 = 4, 
  PIND3 = 3, 
  PIND2 = 2, 
  PIND1 = 1, 
  PIND0 = 0, 


  PE7 = 7, 
  PE6 = 6, 
  PE5 = 5, 
  PE4 = 4, 
  PE3 = 3, 
  PE2 = 2, 
  PE1 = 1, 
  PE0 = 0, 


  DDE7 = 7, 
  DDE6 = 6, 
  DDE5 = 5, 
  DDE4 = 4, 
  DDE3 = 3, 
  DDE2 = 2, 
  DDE1 = 1, 
  DDE0 = 0, 


  PINE7 = 7, 
  PINE6 = 6, 
  PINE5 = 5, 
  PINE4 = 4, 
  PINE3 = 3, 
  PINE2 = 2, 
  PINE1 = 1, 
  PINE0 = 0, 


  PF7 = 7, 
  PF6 = 6, 
  PF5 = 5, 
  PF4 = 4, 
  PF3 = 3, 
  PF2 = 2, 
  PF1 = 1, 
  PF0 = 0, 


  DDF7 = 7, 
  DDF6 = 6, 
  DDF5 = 5, 
  DDF4 = 4, 
  DDF3 = 3, 
  DDF2 = 2, 
  DDF1 = 1, 
  DDF0 = 0, 


  PINF7 = 7, 
  PINF6 = 6, 
  PINF5 = 5, 
  PINF4 = 4, 
  PINF3 = 3, 
  PINF2 = 2, 
  PINF1 = 1, 
  PINF0 = 0, 


  PG4 = 4, 
  PG3 = 3, 
  PG2 = 2, 
  PG1 = 1, 
  PG0 = 0, 


  DDG4 = 4, 
  DDG3 = 3, 
  DDG2 = 2, 
  DDG1 = 1, 
  DDG0 = 0, 


  PING4 = 4, 
  PING3 = 3, 
  PING2 = 2, 
  PING1 = 1, 
  PING0 = 0
};
# 51 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/sim/atm128hardware.h"
uint8_t atm128RegFile[1000][0xa0];
#line 85
static __inline void __nesc_enable_interrupt();



static __inline void __nesc_disable_interrupt();




typedef uint8_t __nesc_atomic_t;



#line 97
__inline __nesc_atomic_t 
__nesc_atomic_start(void )  ;








#line 106
__inline void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)  ;
#line 120
typedef uint8_t mcu_power_t  ;





enum __nesc_unnamed4320 {
  ATM128_POWER_IDLE = 0, 
  ATM128_POWER_ADC_NR = 1, 
  ATM128_POWER_EXT_STANDBY = 2, 
  ATM128_POWER_SAVE = 3, 
  ATM128_POWER_STANDBY = 4, 
  ATM128_POWER_DOWN = 5
};
# 43 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/adc/Atm128Adc.h"
enum __nesc_unnamed4321 {
  ATM128_ADC_VREF_OFF = 0, 
  ATM128_ADC_VREF_AVCC = 1, 
  ATM128_ADC_VREF_RSVD, 
  ATM128_ADC_VREF_2_56 = 3
};


enum __nesc_unnamed4322 {
  ATM128_ADC_RIGHT_ADJUST = 0, 
  ATM128_ADC_LEFT_ADJUST = 1
};



enum __nesc_unnamed4323 {
  ATM128_ADC_SNGL_ADC0 = 0, 
  ATM128_ADC_SNGL_ADC1, 
  ATM128_ADC_SNGL_ADC2, 
  ATM128_ADC_SNGL_ADC3, 
  ATM128_ADC_SNGL_ADC4, 
  ATM128_ADC_SNGL_ADC5, 
  ATM128_ADC_SNGL_ADC6, 
  ATM128_ADC_SNGL_ADC7, 
  ATM128_ADC_DIFF_ADC00_10x, 
  ATM128_ADC_DIFF_ADC10_10x, 
  ATM128_ADC_DIFF_ADC00_200x, 
  ATM128_ADC_DIFF_ADC10_200x, 
  ATM128_ADC_DIFF_ADC22_10x, 
  ATM128_ADC_DIFF_ADC32_10x, 
  ATM128_ADC_DIFF_ADC22_200x, 
  ATM128_ADC_DIFF_ADC32_200x, 
  ATM128_ADC_DIFF_ADC01_1x, 
  ATM128_ADC_DIFF_ADC11_1x, 
  ATM128_ADC_DIFF_ADC21_1x, 
  ATM128_ADC_DIFF_ADC31_1x, 
  ATM128_ADC_DIFF_ADC41_1x, 
  ATM128_ADC_DIFF_ADC51_1x, 
  ATM128_ADC_DIFF_ADC61_1x, 
  ATM128_ADC_DIFF_ADC71_1x, 
  ATM128_ADC_DIFF_ADC02_1x, 
  ATM128_ADC_DIFF_ADC12_1x, 
  ATM128_ADC_DIFF_ADC22_1x, 
  ATM128_ADC_DIFF_ADC32_1x, 
  ATM128_ADC_DIFF_ADC42_1x, 
  ATM128_ADC_DIFF_ADC52_1x, 
  ATM128_ADC_SNGL_1_23, 
  ATM128_ADC_SNGL_GND
};







#line 94
typedef struct __nesc_unnamed4324 {

  uint8_t mux : 5;
  uint8_t adlar : 1;
  uint8_t refs : 2;
} Atm128Admux_t;




enum __nesc_unnamed4325 {
  ATM128_ADC_PRESCALE_2 = 0, 
  ATM128_ADC_PRESCALE_2b, 
  ATM128_ADC_PRESCALE_4, 
  ATM128_ADC_PRESCALE_8, 
  ATM128_ADC_PRESCALE_16, 
  ATM128_ADC_PRESCALE_32, 
  ATM128_ADC_PRESCALE_64, 
  ATM128_ADC_PRESCALE_128, 



  ATM128_ADC_PRESCALE
};


enum __nesc_unnamed4326 {
  ATM128_ADC_ENABLE_OFF = 0, 
  ATM128_ADC_ENABLE_ON
};


enum __nesc_unnamed4327 {
  ATM128_ADC_START_CONVERSION_OFF = 0, 
  ATM128_ADC_START_CONVERSION_ON
};


enum __nesc_unnamed4328 {
  ATM128_ADC_FREE_RUNNING_OFF = 0, 
  ATM128_ADC_FREE_RUNNING_ON
};


enum __nesc_unnamed4329 {
  ATM128_ADC_INT_FLAG_OFF = 0, 
  ATM128_ADC_INT_FLAG_ON
};


enum __nesc_unnamed4330 {
  ATM128_ADC_INT_ENABLE_OFF = 0, 
  ATM128_ADC_INT_ENABLE_ON
};










#line 150
typedef struct __nesc_unnamed4331 {

  uint8_t adps : 3;
  uint8_t adie : 1;
  uint8_t adif : 1;
  uint8_t adfr : 1;
  uint8_t adsc : 1;
  uint8_t aden : 1;
} Atm128Adcsra_t;

typedef uint8_t Atm128_ADCH_t;
typedef uint8_t Atm128_ADCL_t;
# 54 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/platforms/micaz/sim/platform_hardware.h"
enum __nesc_unnamed4332 {
  CHANNEL_RSSI = ATM128_ADC_SNGL_ADC0, 
  CHANNEL_THERMISTOR = ATM128_ADC_SNGL_ADC1, 
  CHANNEL_BATTERY = ATM128_ADC_SNGL_ADC7, 
  CHANNEL_BANDGAP = 30, 
  CHANNEL_GND = 31, 

  ATM128_TIMER0_TICKSPPS = 32768
};
# 41 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/SimMainP.nc"
static void __nesc_nido_initialise(int node);
# 43 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/types/Leds.h"
enum __nesc_unnamed4333 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 40 "../../tos//lib/bvr/nexthopinfo.h"
enum __nesc_unnamed4334 {
  BVR_MAX_NEXT_HOPS = 6, 
  BVR_MAX_FALLBACK_NEXT_HOPS = 1
};








#line 46
typedef nx_struct __nesc_unnamed4335 {
  nx_uint16_t next_hops[BVR_MAX_NEXT_HOPS + BVR_MAX_FALLBACK_NEXT_HOPS];
  nx_uint16_t distances[BVR_MAX_NEXT_HOPS];
  nx_uint8_t n;
  nx_uint8_t f;
  nx_uint8_t index;
} __attribute__((packed)) nextHopInfo;

static __inline void nextHopInfoInit(nextHopInfo *this);
#line 85
#line 76
typedef struct __nesc_unnamed4336 {
  bool busy;
  message_t *msg;
  uint16_t min_dist;
  nextHopInfo next_hops;


  uint16_t next_hop;
} 
forwardRoutingBuffer;

static __inline void forwardRoutingBufferFree(forwardRoutingBuffer *this);




static __inline void forwardRoutingBufferInit(forwardRoutingBuffer *this, message_t *msg);
# 47 "../../tos//lib/util/Logging.h"
enum __nesc_unnamed4337 {

  AM_S4_LOG_MSG = 60, 
  AM_BVR_LOG_MSG = 61, 

  SELF_LOG_INTERVAL = 60000u, 
  UART_LOG_INTERVAL = 60000u
};

enum __nesc_unnamed4338 {

  LOG_SEND_BEACON = 1, 
  LOG_RECEIVE_BEACON = 3, 
  LOG_SEND_ROOT_BEACON = 2, 
  LOG_RECEIVE_ROOT_BEACON = 4, 
  LOG_SEND_LINK_INFO = 5, 
  LOG_RECEIVE_LINK_INFO = 6, 
  LOG_SEND_APP_MSG = 7, 
  LOG_RECEIVE_APP_MSG = 8, 

  LOG_ADD_LINK = 10, 
  LOG_CHANGE_LINK = 11, 
  LOG_DROP_LINK = 12, 

  LOG_ADD_NEIGHBOR = 20, 
  LOG_CHANGE_NEIGHBOR = 21, 
  LOG_DROP_NEIGHBOR = 22, 

  LOG_CHANGE_COORDS = 30, 
  LOG_CHANGE_COORD = 31, 

  LOG_ROUTE_START = 39, 
  LOG_ROUTE_FAIL_STUCK_0 = 40, 
  LOG_ROUTE_FAIL_STUCK = 42, 
  LOG_ROUTE_FAIL_BEACON = 41, 

  LOG_ROUTE_SUCCESS = 43, 
  LOG_ROUTE_FAIL_NO_LOCAL_BUFFER = 44, 
  LOG_ROUTE_FAIL_NO_QUEUE_BUFFER = 45, 
  LOG_ROUTE_INVALID_STATUS = 46, 
  LOG_ROUTE_TO_SELF = 47, 
  LOG_ROUTE_STATUS_NEXT_ROUTE = 38, 
  LOG_ROUTE_BUFFER_ERROR = 37, 
  LOG_ROUTE_SENT_NORMAL_OK = 32, 
  LOG_ROUTE_SENT_FALLBACK_OK = 33, 
  LOG_ROUTE_RECEIVED_OK = 34, 
  LOG_ROUTE_RECEIVED_DUPLICATE = 35, 

  LOG_ROUTE_BCAST_START = 64, 
  LOG_ROUTE_STATUS_BCAST_RETRY = 65, 
  LOG_ROUTE_STATUS_BCAST_FAIL = 66, 
  LOG_ROUTE_SENT_BCAST_OK = 67, 
  LOG_ROUTE_RECEIVED_BCAST_OK = 68, 
  LOG_ROUTE_BCAST_END_SCOPE = 69, 
  LOG_ROUTE_BCAST_ERROR_TIMER_FAILED = 70, 
  LOG_ROUTE_BCAST_ERROR_TIMER_PENDING = 71, 

  LOG_LOGGER_STATS = 50, 
  LOG_UART_COMM_STATS = 51, 


  LOG_LRX_SEND = 101, 
  LOG_LRX_RECEIVE = 102, 
  LOG_LRX_SXFER_START = 103, 
  LOG_LRX_SXFER_FINISH = 104, 
  LOG_LRX_RXFER_START = 105, 
  LOG_LRX_RXFER_FINISH = 106, 


  LOG_DBG1 = 129, 
  LOG_DBG2 = 130, 
  LOG_DBG3 = 131, 

  LOG_ROUTE_RETRANSMIT_SUCCESS = 132, 
  LOG_ROUTE_RETRANSMIT_FAIL = 133
};





#line 125
typedef nx_struct __nesc_unnamed4339 {
  nx_uint8_t type;
  nx_uint16_t total;
} __attribute__((packed)) LogEntrySentDV;




#line 130
typedef nx_struct __nesc_unnamed4340 {
  nx_uint8_t type;
  nx_uint16_t total;
} __attribute__((packed)) LogEntrySentBV;




#line 135
typedef nx_struct __nesc_unnamed4341 {
  nx_uint8_t type;
  nx_uint16_t total;
} __attribute__((packed)) LogEntrySentData;




#line 140
typedef nx_struct __nesc_unnamed4342 {
  nx_uint8_t type;
  nx_uint16_t total;
} __attribute__((packed)) LogEntryRTState;
#line 155
#line 152
typedef nx_struct __nesc_unnamed4343 {
  nx_uint8_t type;
  nx_uint8_t seqno;
} __attribute__((packed)) LogEntrySendBeacon;





#line 157
typedef nx_struct __nesc_unnamed4344 {
  nx_uint8_t type;
  nx_uint8_t seqno;
  nx_uint16_t from;
} __attribute__((packed)) LogEntryReceiveBeacon;





#line 163
typedef nx_struct __nesc_unnamed4345 {
  nx_uint8_t type;
  nx_uint8_t seqno;
  nx_uint8_t hopcount;
} __attribute__((packed)) LogEntrySendRootBeacon;








#line 169
typedef nx_struct __nesc_unnamed4346 {
  nx_uint8_t type;
  nx_uint8_t id;
  nx_uint8_t seqno;
  nx_uint8_t hopcount;
  nx_uint16_t last_hop;
  nx_uint8_t quality;
} __attribute__((packed)) LogEntryReceiveRootBeacon;








#line 178
typedef nx_struct __nesc_unnamed4347 {
  nx_uint8_t type;
  nx_uint8_t id;
  nx_uint16_t to;
  nx_uint8_t mode;
  nx_uint8_t fallback_thresh;
  Coordinates dest;
} __attribute__((packed)) LogEntrySendAppMsg;





#line 187
typedef nx_struct __nesc_unnamed4348 {
  nx_uint8_t type;
  nx_uint8_t id;
  nx_uint8_t result;
} __attribute__((packed)) LogEntryReceiveAppMsg;





#line 194
typedef nx_struct __nesc_unnamed4349 {
  nx_uint8_t type;
  LinkNeighbor link;
} __attribute__((packed)) LogEntryChangeLink;




#line 199
typedef nx_struct __nesc_unnamed4350 {
  nx_uint8_t type;
  nx_uint16_t addr;
} __attribute__((packed)) LogEntryDropLink;





#line 205
typedef nx_struct __nesc_unnamed4351 {
  nx_uint8_t type;
  CoordinateTableEntry neighbor;
} __attribute__((packed)) LogEntryChangeNeighbor;




#line 210
typedef nx_struct __nesc_unnamed4352 {
  nx_uint8_t type;
  nx_uint16_t addr;
} __attribute__((packed)) LogEntryDropNeighbor;






#line 216
typedef nx_struct __nesc_unnamed4353 {
  nx_uint8_t type;
  Coordinates Coords;
  CoordsParents parents;
} __attribute__((packed)) LogEntryUpdateCoordinates;








#line 223
typedef nx_struct __nesc_unnamed4354 {
  nx_uint8_t type;
  nx_uint8_t beacon;
  nx_uint8_t hopcount;
  nx_uint16_t parent;
  nx_uint8_t combined_quality;
} __attribute__((packed)) LogEntryUpdateCoordinate;









#line 231
typedef nx_struct __nesc_unnamed4355 {
  nx_uint8_t type;
  nx_uint16_t id;
  nx_uint16_t origin_addr;
  nx_uint16_t dest_addr;
  nx_uint8_t hopcount;
  Coordinates dest_coords;
  Coordinates my_coords;
} __attribute__((packed)) LogEntryRouteReport;










#line 242
typedef nx_struct __nesc_unnamed4356 {
  nx_uint8_t type;
  nx_uint16_t id;
  nx_uint16_t origin_addr;
  nx_uint16_t dest_addr;
  nx_uint8_t hopcount;
  nx_uint16_t next_hop;
  nx_uint8_t retransmit_count;
} __attribute__((packed)) LogEntryRetransmitReport;
#line 262
#line 252
typedef nx_struct __nesc_unnamed4357 {
  nx_uint8_t type;
  nx_uint8_t free_pos;
  nx_uint8_t max_queue;
  nx_uint32_t stat_received;
  nx_uint32_t stat_written;
  nx_uint32_t stat_no_buffer;
  nx_uint32_t stat_send_failed;
  nx_uint32_t stat_send_done_failed;
} __attribute__((packed)) 
LogEntryLoggerStats;
#line 278
#line 264
typedef nx_struct __nesc_unnamed4358 {
  nx_uint8_t type;
  nx_uint16_t stat_receive_duplicate_no_buffer;
  nx_uint16_t stat_receive_duplicate_send_failed;
  nx_uint16_t stat_receive_total;
  nx_uint16_t stat_send_duplicate_no_buffer;
  nx_uint16_t stat_send_duplicate_send_fail;
  nx_uint16_t stat_send_duplicate_send_done_fail;
  nx_uint16_t stat_send_duplicate_success;
  nx_uint16_t stat_send_duplicate_total;
  nx_uint16_t stat_send_original_send_done_fail;
  nx_uint16_t stat_send_original_send_failed;
  nx_uint16_t stat_send_original_success;
  nx_uint16_t stat_send_original_total;
} __attribute__((packed)) LogEntryUARTCommStats;
#line 292
#line 280
typedef nx_struct __nesc_unnamed4359 {
  nx_uint8_t type;
  nx_uint16_t sender;
  nx_uint16_t sender_session_id;
  nx_uint8_t sender_msg_id;
  nx_uint16_t receiver;
  nx_uint16_t receiver_session_id;
  nx_uint8_t receiver_msg_id;
  nx_uint8_t ctrl;
  nx_uint8_t blockNum;
  nx_uint8_t subCtrl;
  nx_uint8_t state;
} __attribute__((packed)) LogEntryLRXPkt;










#line 294
typedef nx_struct __nesc_unnamed4360 {
  nx_uint8_t type;
  nx_uint16_t sender;
  nx_uint16_t receiver;
  nx_uint16_t session_id;
  nx_uint8_t msg_id;
  nx_uint8_t numofBlock;
  nx_uint8_t success;
  nx_uint8_t state;
} __attribute__((packed)) LogEntryLRXXfer;






#line 305
typedef nx_struct __nesc_unnamed4361 {
  nx_uint8_t type;
  nx_uint16_t arg1;
  nx_uint16_t arg2;
  nx_uint16_t arg3;
} __attribute__((packed)) LogEntryDebug;
#line 335
#line 317
typedef nx_union __nesc_unnamed4362 {
  nx_uint8_t type;
  LogEntryReceiveRootBeacon receive_root_beacon;
  LogEntryDropLink drop_link;
  LogEntryChangeLink add_link;
  LogEntryChangeLink change_link;
  LogEntryChangeNeighbor add_neighbor;
  LogEntryChangeNeighbor change_neighbor;
  LogEntryDropNeighbor drop_neighbor;
  LogEntryUpdateCoordinates update_coordinates;
  LogEntryUpdateCoordinate update_coordinate;
  LogEntryRouteReport route_report;
  LogEntryLoggerStats logger_stats;
  LogEntryUARTCommStats UART_comm_stats;
  LogEntryLRXPkt lrx_pkt;
  LogEntryLRXXfer lrx_xfer;
  LogEntryDebug debug;
  LogEntryRetransmitReport retransmit_report;
  unsigned char __nesc_filler0[14];
} __attribute__((packed)) 
#line 335
BVRLogMsg;




#line 337
typedef nx_struct BVR_Log_Msg {
  LEHeader header;
  BVRLogMsg log_msg;
} __attribute__((packed)) BVRLogMsgWrapper;
#line 372
#line 345
typedef nx_union __nesc_unnamed4363 {
  nx_uint8_t type;

  LogEntryReceiveBeacon receive_beacon;
  LogEntryReceiveRootBeacon receive_root_beacon;
  LogEntryDropLink drop_link;
  LogEntryChangeLink add_link;
  LogEntryChangeLink change_link;
  LogEntryChangeNeighbor add_neighbor;
  LogEntryChangeNeighbor change_neighbor;
  LogEntryDropNeighbor drop_neighbor;
  LogEntryUpdateCoordinates update_coordinates;
  LogEntryUpdateCoordinate update_coordinate;
  LogEntryRouteReport route_report;
  LogEntryLoggerStats logger_stats;
  LogEntryUARTCommStats UART_comm_stats;
  LogEntryLRXPkt lrx_pkt;
  LogEntryLRXXfer lrx_xfer;
  LogEntryDebug debug;
  LogEntryRetransmitReport retransmit_report;


  LogEntrySentDV sent_dv;
  LogEntrySentBV sent_bv;
  LogEntrySentData sent_data;
  LogEntryRTState rt_state;
  unsigned char __nesc_filler1[22];
} __attribute__((packed)) S4LogMsg;






#line 376
typedef nx_struct S4_Log_Msg {
  LEHeader header;
  S4LogMsg log_msg;
} __attribute__((packed)) S4LogMsgWrapper;
# 43 "../../tos//lib/command/BVRCommand.h"
enum __nesc_unnamed4364 {
  AM_BVR_COMMAND_MSG = 57, 
  AM_BVR_COMMAND_RESPONSE_MSG = 58
};







enum __nesc_unnamed4365 {
  BVR_CMD_HELLO = 0, 
  BVR_CMD_LED_ON = 1, 
  BVR_CMD_LED_OFF = 2, 
  BVR_CMD_SET_ROOT_BEACON = 3, 
  BVR_CMD_IS_ROOT_BEACON = 4, 
  BVR_CMD_ROOT_BEACON_START = 21, 
  BVR_CMD_ROOT_BEACON_STOP = 22, 
  BVR_CMD_SET_COORDS = 5, 
  BVR_CMD_GET_COORDS = 6, 
  BVR_CMD_SET_RADIO_PWR = 7, 
  BVR_CMD_GET_RADIO_PWR = 8, 
  BVR_CMD_GET_INFO = 9, 
  BVR_CMD_GET_NEIGHBOR = 10, 
  BVR_CMD_GET_NEIGHBORS = 11, 
  BVR_CMD_GET_LINK_INFO = 12, 
  BVR_CMD_GET_LINKS = 13, 
  BVR_CMD_GET_ID = 14, 
  BVR_CMD_GET_ROOT_INFO = 15, 
  BVR_CMD_FREEZE = 16, 
  BVR_CMD_RESUME = 17, 
  BVR_CMD_REBOOT = 18, 
  BVR_CMD_RESET = 19, 
  BVR_CMD_READ_LOG = 20, 
  BVR_CMD_SET_RETRANSMIT = 23, 
  BVR_CMD_GET_RETRANSMIT = 24, 
  BVR_CMD_APP_ROUTE_TO = 30
};

enum __nesc_unnamed4366 {
  CMD_MASK_MORE_FRAGS = 1, 
  CMD_MASK_ACK = 2
};
#line 117
#line 90
typedef nx_struct BVRCommandArgs {
  nx_uint8_t seqno;
  nx_uint8_t flags;
  nx_union __nesc_unnamed4367 {
    nx_uint8_t byte_arg;
    nx_uint16_t short_arg;
    Coordinates coords;
    nx_struct __nesc_unnamed4368 {
      Coordinates coords;
      nx_uint8_t neighbors;
      nx_uint8_t links;
      nx_uint8_t is_root_beacon;
      nx_uint8_t power;
    } __attribute__((packed)) info;
    nx_struct __nesc_unnamed4369 {
      Coordinates coords;
      nx_uint16_t addr;
      nx_uint8_t mode;
    } __attribute__((packed)) dest;
    nx_struct __nesc_unnamed4370 {
      nx_uint16_t install_id;
      nx_uint32_t compile_time;
    } __attribute__((packed)) ident;
    CoordinateTableEntry neighbor_info;
    BVRRootBeacon root_info;
    LinkNeighbor link_info;
  } __attribute__((packed)) args;
} __attribute__((packed)) BVRCommandArgs;
#line 117
#line 90
typedef nx_struct BVRCommandArgs *
#line 117
BVRCommandArgs_ptr;









#line 122
typedef nx_struct __nesc_unnamed4371 {
  nx_uint8_t hopcount;
  nx_uint16_t origin;
  nx_uint8_t type;
  BVRCommandArgs data;
} __attribute__((packed)) BVRCommandData;




#line 129
typedef nx_struct BVR_Command_Msg {
  LEHeader header;
  BVRCommandData type_data;
} __attribute__((packed)) BVRCommandMsg;




#line 134
typedef nx_struct BVR_Command_Response_Msg {
  LEHeader header;
  BVRCommandData type_data;
} __attribute__((packed)) BVRCommandResponseMsg;



enum __nesc_unnamed4372 {
  AM_S4_COMMAND_MSG = 57, 
  AM_S4_COMMAND_RESPONSE_MSG = 58
};







enum __nesc_unnamed4373 {
  S4_CMD_HELLO = 0, 
  S4_CMD_LED_ON = 1, 
  S4_CMD_LED_OFF = 2, 
  S4_CMD_SET_ROOT_BEACON = 3, 
  S4_CMD_IS_ROOT_BEACON = 4, 
  S4_CMD_ROOT_BEACON_START = 21, 
  S4_CMD_ROOT_BEACON_STOP = 22, 
  S4_CMD_SET_COORDS = 5, 
  S4_CMD_GET_COORDS = 6, 
  S4_CMD_SET_RADIO_PWR = 7, 
  S4_CMD_GET_RADIO_PWR = 8, 
  S4_CMD_GET_INFO = 9, 
  S4_CMD_GET_NEIGHBOR = 10, 
  S4_CMD_GET_NEIGHBORS = 11, 
  S4_CMD_GET_LINK_INFO = 12, 
  S4_CMD_GET_LINKS = 13, 
  S4_CMD_GET_ID = 14, 
  S4_CMD_GET_ROOT_INFO = 15, 
  S4_CMD_FREEZE = 16, 
  S4_CMD_RESUME = 17, 
  S4_CMD_REBOOT = 18, 
  S4_CMD_RESET = 19, 
  S4_CMD_READ_LOG = 20, 
  S4_CMD_SET_RETRANSMIT = 23, 
  S4_CMD_GET_RETRANSMIT = 24, 
  S4_CMD_APP_ROUTE_TO = 30, 
  S4_CMD_APP_ADV_ROUTE_TO = 31, 
  S4_CMD_GET_ROUTING_TABLE = 32, 
  S4_CMD_SHUTDOWN_RADIO = 33, 
  S4_CMD_SET_FR_TIMER = 34, 
  S4_CMD_GET_FR_TIMER = 35, 
  S4_CMD_GET_STATS = 36
};
#line 237
#line 187
typedef struct S4CommandArgs {
  uint8_t seqno;
  uint8_t flags;
  union __nesc_unnamed4374 {
    uint8_t byte_arg;
    uint16_t short_arg;
    Coordinates coords;
    struct __nesc_unnamed4375 {
      Coordinates coords;
      uint8_t neighbors;
      uint8_t links;
      uint8_t is_root_beacon;
      uint8_t power;
      uint16_t routing_table_size;
    } __attribute((packed))  info;
    struct __nesc_unnamed4376 {

      uint8_t closest_beacon;

      uint16_t addr;

      uint8_t init_delay;
      uint16_t n_packets;
      uint16_t interval;
    } 

    __attribute((packed))  dest;
    struct __nesc_unnamed4377 {
      uint16_t install_id;
      uint32_t compile_time;
    } __attribute((packed))  ident;

    CoordinateTableEntry neighbor_info;

    S4RootBeacon root_info;
    LinkNeighbor link_info;


    struct __nesc_unnamed4378 {
      ClusterMember entry;
    } routing_table;

    struct __nesc_unnamed4379 {
      uint16_t sent_bv;
      uint16_t sent_dv;
      uint16_t sent_data;
      uint16_t routing_state;
    } stats;
  } 
  __attribute((packed))  args;
} __attribute((packed))  S4CommandArgs;
#line 237
#line 187
typedef struct S4CommandArgs 
#line 237
__attribute((packed))  *S4CommandArgs_ptr;
#line 252
#line 242
typedef struct __nesc_unnamed4380 {
  uint8_t hopcount;



  uint16_t gateway_addr;
  uint16_t cmd_addr;

  uint8_t type;
  S4CommandArgs data;
} __attribute((packed))  S4CommandData;




#line 254
typedef struct S4_Command_Msg {
  LEHeader header;
  S4CommandData type_data;
} __attribute((packed))  S4CommandMsg;




#line 259
typedef struct S4_Command_Response_Msg {
  LEHeader header;
  S4CommandData type_data;
} __attribute((packed))  S4CommandResponseMsg;
# 42 "../../tos//lib/linkestimator/ReverseLinkInfo.h"
enum __nesc_unnamed4381 {
  NUM_REVERSE_LINK_ENTRIES = 7, 
  REVERSE_LINK_INVALID_ADDR = 65535u
};




#line 47
typedef nx_struct __nesc_unnamed4382 {
  nx_uint16_t addr;
  nx_uint8_t quality;
} __attribute__((packed)) ReverseLinkEntry;





#line 52
typedef nx_struct __nesc_unnamed4383 {
  nx_uint8_t num_elements;
  nx_uint8_t total_links;
  ReverseLinkEntry entries[NUM_REVERSE_LINK_ENTRIES];
} __attribute__((packed)) ReverseLinkInfo;




#line 58
typedef nx_struct LE_Reverse_Link_Estimation_Msg {
  LEHeader header;
  ReverseLinkInfo info;
} __attribute__((packed)) ReverseLinkMsg;

static inline error_t reverseLinkInfoInit(ReverseLinkInfo *ptr);
#line 75
static inline error_t reverseLinkInfoGetQuality(ReverseLinkInfo *rliPtr, uint16_t addr, uint8_t *quality);
#line 90
static inline error_t reverseLinkInfoReset(ReverseLinkInfo *rliPtr);
#line 107
static inline error_t reverseLinkInfoAppend(ReverseLinkInfo *rliPtr, uint16_t addr, uint8_t quality);










static inline error_t reverseLinkInfoFromMsg(ReverseLinkInfo *rliPtr, ReverseLinkMsg *msg);







static inline error_t reverseLinkInfoToMsg(ReverseLinkInfo *rliPtr, ReverseLinkMsg *msg);
# 52 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/timer/Atm128Timer.h"
enum __nesc_unnamed4384 {
  ATM128_CLK8_OFF = 0x0, 
  ATM128_CLK8_NORMAL = 0x1, 
  ATM128_CLK8_DIVIDE_8 = 0x2, 
  ATM128_CLK8_DIVIDE_32 = 0x3, 
  ATM128_CLK8_DIVIDE_64 = 0x4, 
  ATM128_CLK8_DIVIDE_128 = 0x5, 
  ATM128_CLK8_DIVIDE_256 = 0x6, 
  ATM128_CLK8_DIVIDE_1024 = 0x7
};

enum __nesc_unnamed4385 {
  ATM128_CLK16_OFF = 0x0, 
  ATM128_CLK16_NORMAL = 0x1, 
  ATM128_CLK16_DIVIDE_8 = 0x2, 
  ATM128_CLK16_DIVIDE_64 = 0x3, 
  ATM128_CLK16_DIVIDE_256 = 0x4, 
  ATM128_CLK16_DIVIDE_1024 = 0x5, 
  ATM128_CLK16_EXTERNAL_FALL = 0x6, 
  ATM128_CLK16_EXTERNAL_RISE = 0x7
};


enum __nesc_unnamed4386 {
  AVR_CLOCK_OFF = 0, 
  AVR_CLOCK_ON = 1, 
  AVR_CLOCK_DIVIDE_8 = 2
};


enum __nesc_unnamed4387 {
  ATM128_WAVE8_NORMAL = 0, 
  ATM128_WAVE8_PWM, 
  ATM128_WAVE8_CTC, 
  ATM128_WAVE8_PWM_FAST
};


enum __nesc_unnamed4388 {
  ATM128_COMPARE_OFF = 0, 
  ATM128_COMPARE_TOGGLE, 
  ATM128_COMPARE_CLEAR, 
  ATM128_COMPARE_SET
};
#line 108
#line 98
typedef union __nesc_unnamed4389 {

  uint8_t flat;
  struct __nesc_unnamed4390 {
    uint8_t cs : 3;
    uint8_t wgm1 : 1;
    uint8_t com : 2;
    uint8_t wgm0 : 1;
    uint8_t foc : 1;
  } bits;
} Atm128TimerControl_t;

typedef Atm128TimerControl_t Atm128_TCCR0_t;
typedef uint8_t Atm128_TCNT0_t;
typedef uint8_t Atm128_OCR0_t;

typedef Atm128TimerControl_t Atm128_TCCR2_t;
typedef uint8_t Atm128_TCNT2_t;
typedef uint8_t Atm128_OCR2_t;
#line 130
#line 120
typedef union __nesc_unnamed4391 {

  uint8_t flat;
  struct __nesc_unnamed4392 {
    uint8_t tcr0ub : 1;
    uint8_t ocr0ub : 1;
    uint8_t tcn0ub : 1;
    uint8_t as0 : 1;
    uint8_t rsvd : 4;
  } bits;
} Atm128Assr_t;
#line 146
#line 133
typedef union __nesc_unnamed4393 {

  uint8_t flat;
  struct __nesc_unnamed4394 {
    uint8_t toie0 : 1;
    uint8_t ocie0 : 1;
    uint8_t toie1 : 1;
    uint8_t ocie1b : 1;
    uint8_t ocie1a : 1;
    uint8_t ticie1 : 1;
    uint8_t toie2 : 1;
    uint8_t ocie2 : 1;
  } bits;
} Atm128_TIMSK_t;
#line 163
#line 150
typedef union __nesc_unnamed4395 {

  uint8_t flat;
  struct __nesc_unnamed4396 {
    uint8_t tov0 : 1;
    uint8_t ocf0 : 1;
    uint8_t tov1 : 1;
    uint8_t ocf1b : 1;
    uint8_t ocf1a : 1;
    uint8_t icf1 : 1;
    uint8_t tov2 : 1;
    uint8_t ocf2 : 1;
  } bits;
} Atm128_TIFR_t;
#line 178
#line 167
typedef union __nesc_unnamed4397 {

  uint8_t flat;
  struct __nesc_unnamed4398 {
    uint8_t psr321 : 1;
    uint8_t psr0 : 1;
    uint8_t pud : 1;
    uint8_t acme : 1;
    uint8_t rsvd : 3;
    uint8_t tsm : 1;
  } bits;
} Atm128_SFIOR_t;






enum __nesc_unnamed4399 {
  ATM128_TIMER_COMPARE_NORMAL = 0, 
  ATM128_TIMER_COMPARE_TOGGLE, 
  ATM128_TIMER_COMPARE_CLEAR, 
  ATM128_TIMER_COMPARE_SET
};
#line 202
#line 193
typedef union __nesc_unnamed4400 {

  uint8_t flat;
  struct __nesc_unnamed4401 {
    uint8_t wgm10 : 2;
    uint8_t comC : 2;
    uint8_t comB : 2;
    uint8_t comA : 2;
  } bits;
} Atm128TimerCtrlCompare_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR1A_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR3A_t;


enum __nesc_unnamed4402 {
  ATM128_WAVE16_NORMAL = 0, 
  ATM128_WAVE16_PWM_8BIT, 
  ATM128_WAVE16_PWM_9BIT, 
  ATM128_WAVE16_PWM_10BIT, 
  ATM128_WAVE16_CTC_COMPARE, 
  ATM128_WAVE16_PWM_FAST_8BIT, 
  ATM128_WAVE16_PWM_FAST_9BIT, 
  ATM128_WAVE16_PWM_FAST_10BIT, 
  ATM128_WAVE16_PWM_CAPTURE_LOW, 
  ATM128_WAVE16_PWM_COMPARE_LOW, 
  ATM128_WAVE16_PWM_CAPTURE_HIGH, 
  ATM128_WAVE16_PWM_COMPARE_HIGH, 
  ATM128_WAVE16_CTC_CAPTURE, 
  ATM128_WAVE16_RESERVED, 
  ATM128_WAVE16_PWM_FAST_CAPTURE, 
  ATM128_WAVE16_PWM_FAST_COMPARE
};
#line 241
#line 231
typedef union __nesc_unnamed4403 {

  uint8_t flat;
  struct __nesc_unnamed4404 {
    uint8_t cs : 3;
    uint8_t wgm32 : 2;
    uint8_t rsvd : 1;
    uint8_t ices1 : 1;
    uint8_t icnc1 : 1;
  } bits;
} Atm128TimerCtrlCapture_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR1B_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR3B_t;
#line 259
#line 250
typedef union __nesc_unnamed4405 {

  uint8_t flat;
  struct __nesc_unnamed4406 {
    uint8_t rsvd : 5;
    uint8_t focC : 1;
    uint8_t focB : 1;
    uint8_t focA : 1;
  } bits;
} Atm128TimerCtrlClock_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR1C_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR3C_t;



typedef uint8_t Atm128_TCNT1H_t;
typedef uint8_t Atm128_TCNT1L_t;
typedef uint8_t Atm128_TCNT3H_t;
typedef uint8_t Atm128_TCNT3L_t;


typedef uint8_t Atm128_OCR1AH_t;
typedef uint8_t Atm128_OCR1AL_t;
typedef uint8_t Atm128_OCR1BH_t;
typedef uint8_t Atm128_OCR1BL_t;
typedef uint8_t Atm128_OCR1CH_t;
typedef uint8_t Atm128_OCR1CL_t;


typedef uint8_t Atm128_OCR3AH_t;
typedef uint8_t Atm128_OCR3AL_t;
typedef uint8_t Atm128_OCR3BH_t;
typedef uint8_t Atm128_OCR3BL_t;
typedef uint8_t Atm128_OCR3CH_t;
typedef uint8_t Atm128_OCR3CL_t;


typedef uint8_t Atm128_ICR1H_t;
typedef uint8_t Atm128_ICR1L_t;
typedef uint8_t Atm128_ICR3H_t;
typedef uint8_t Atm128_ICR3L_t;
#line 309
#line 297
typedef union __nesc_unnamed4407 {

  uint8_t flat;
  struct __nesc_unnamed4408 {
    uint8_t ocie1c : 1;
    uint8_t ocie3c : 1;
    uint8_t toie3 : 1;
    uint8_t ocie3b : 1;
    uint8_t ocie3a : 1;
    uint8_t ticie3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIMSK_t;
#line 324
#line 312
typedef union __nesc_unnamed4409 {

  uint8_t flat;
  struct __nesc_unnamed4410 {
    uint8_t ocf1c : 1;
    uint8_t ocf3c : 1;
    uint8_t tov3 : 1;
    uint8_t ocf3b : 1;
    uint8_t ocf3a : 1;
    uint8_t icf3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIFR_t;
# 42 "../../tos//lib/bvr/CoordinateTable.h"
enum __nesc_unnamed4411 {
  COORD_TABLE_SIZE = N_CACHE_SIZE
};
typedef TMilli TestS4SimpleM$Timer1$precision_tag;
typedef TMilli S4RouterM$PeriodicTimer$precision_tag;
typedef TMilli S4RouterM$ForwardDelayTimer$precision_tag;
typedef TMilli S4StateM$BeaconUpdateTimer$precision_tag;
typedef TMilli S4StateM$BeaconDisplayTimer$precision_tag;
typedef TMilli S4StateM$BeaconTimer$precision_tag;
typedef TMilli S4StateM$ClusterTimer$precision_tag;
typedef TMilli S4StateM$BeaconRetransmitTimer$precision_tag;
typedef TMilli S4StateM$ClusterRetransmitTimer$precision_tag;
typedef TMilli S4StateM$ClusterUpdateTimer$precision_tag;
typedef TMilli LinkEstimatorCommM$MinRateTimer$precision_tag;
typedef TMilli /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC$0$precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC$0$precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$timer_size;
typedef uint8_t HplAtm128Timer0AsyncP$Timer0$timer_size;
typedef uint8_t HplAtm128Timer0AsyncP$Compare$size_type;
typedef TMilli /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$precision_tag;
typedef TMilli /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$precision_tag;
typedef TMilli /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$LocalTime$precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$precision_tag;
typedef uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$size_type;
typedef TMilli LinkEstimatorM$UpdateLinkTimer$precision_tag;
typedef TMilli UARTLoggerM$SelfTimer$precision_tag;
typedef TMilli S4QueuedSendM$QueueRetransmitTimer$precision_tag;
enum AMQueueP$__nesc_unnamed4412 {
  AMQueueP$NUM_CLIENTS = 4U
};
typedef TMilli LBlinkM$Timer$precision_tag;
typedef uint16_t RandomMlcgC$SeedInit$parameter;
# 62 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Init.nc"
static error_t PlatformP$Init$init(void );
#line 62
static error_t MotePlatformP$SubInit$default$init(void );
#line 62
static error_t MotePlatformP$PlatformInit$init(void );
# 42 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/GeneralIO.nc"
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$toggle(void );
static bool /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$get(void );


static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set(void );

static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$toggle(void );
static bool /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$get(void );


static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set(void );

static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$toggle(void );
static bool /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$get(void );


static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set(void );



static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void );
#line 41
static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void );
# 62 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Init.nc"
static error_t MeasureClockC$Init$init(void );
# 67 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/TaskBasic.nc"
static error_t SimSchedulerBasicP$TaskBasic$postTask(
# 49 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/SimSchedulerBasicP.nc"
uint8_t arg_0x7fb1b032f108);
# 75 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/TaskBasic.nc"
static void SimSchedulerBasicP$TaskBasic$default$runTask(
# 49 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/SimSchedulerBasicP.nc"
uint8_t arg_0x7fb1b032f108);
# 57 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Scheduler.nc"
static void SimSchedulerBasicP$Scheduler$init(void );







static bool SimSchedulerBasicP$Scheduler$runNextTask(void );
# 44 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/SimMote.nc"
static void SimMoteP$SimMote$setEuid(long long int euid);


static int SimMoteP$SimMote$getVariableInfo(char *name, void **ptr, size_t *len);

static void SimMoteP$SimMote$turnOff(void );
#line 48
static void SimMoteP$SimMote$turnOn(void );
#line 43
static long long int SimMoteP$SimMote$getEuid(void );


static bool SimMoteP$SimMote$isOn(void );
#line 45
static long long int SimMoteP$SimMote$getStartTime(void );
# 80 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
static error_t TossimActiveMessageC$AMSend$send(
# 47 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x7fb1afec4220, 
# 80 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 78 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



TossimActiveMessageC$Snoop$default$receive(
# 49 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x7fb1afec1020, 
# 71 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 78 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Packet.nc"
static uint8_t TossimActiveMessageC$Packet$payloadLength(
#line 74
message_t * msg);
#line 126
static 
#line 123
void * 


TossimActiveMessageC$Packet$getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t TossimActiveMessageC$Packet$maxPayloadLength(void );
#line 94
static void TossimActiveMessageC$Packet$setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 78 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



TossimActiveMessageC$Receive$default$receive(
# 48 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x7fb1afec2340, 
# 71 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 85 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/TossimPacketModel.nc"
static void TossimActiveMessageC$Model$receive(message_t *msg);
#line 76
static void TossimActiveMessageC$Model$sendDone(message_t *msg, error_t error);










static bool TossimActiveMessageC$Model$shouldAck(message_t *msg);
# 68 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMPacket.nc"
static am_addr_t TossimActiveMessageC$AMPacket$address(void );









static am_addr_t TossimActiveMessageC$AMPacket$destination(
#line 74
message_t * amsg);
#line 103
static void TossimActiveMessageC$AMPacket$setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 147
static am_id_t TossimActiveMessageC$AMPacket$type(
#line 143
message_t * amsg);
#line 162
static void TossimActiveMessageC$AMPacket$setType(
#line 158
message_t * amsg, 



am_id_t t);
#line 136
static bool TossimActiveMessageC$AMPacket$isForMe(
#line 133
message_t * amsg);
# 75 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/TaskBasic.nc"
static void TossimPacketModelC$stopDoneTask$runTask(void );
# 57 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/TossimPacketModel.nc"
static error_t TossimPacketModelC$Packet$send(int node, message_t *msg, uint8_t len);
# 75 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/TaskBasic.nc"
static void TossimPacketModelC$sendDoneTask$runTask(void );
# 62 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Init.nc"
static error_t TossimPacketModelC$Init$init(void );
# 75 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/TaskBasic.nc"
static void TossimPacketModelC$startDoneTask$runTask(void );
# 104 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/SplitControl.nc"
static error_t TossimPacketModelC$Control$start(void );
# 59 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/PacketAcknowledgements.nc"
static error_t TossimPacketModelC$PacketAcknowledgements$requestAck(
#line 53
message_t * msg);
#line 85
static bool TossimPacketModelC$PacketAcknowledgements$wasAcked(
#line 80
message_t * msg);
# 60 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/GainRadioModel.nc"
static void TossimPacketModelC$GainRadioModel$receive(message_t *msg);
#line 59
static void TossimPacketModelC$GainRadioModel$acked(message_t *msg);

static bool TossimPacketModelC$GainRadioModel$shouldAck(message_t *msg);
#line 48
static void CpmModelC$Model$putOnAirTo(int dest, 
message_t *msg, 
bool ack, 
sim_time_t endTime, 
double gain, 
double reverseGain);


static bool CpmModelC$Model$clearChannel(void );
static void CpmModelC$Model$setPendingTransmission(void );
# 60 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC$amAddress(void );
# 50 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t ActiveMessageAddressC$ActiveMessageAddress$amAddress(void );
# 113 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/SplitControl.nc"
static void TestS4SimpleM$AMControl$startDone(error_t error);
#line 138
static void TestS4SimpleM$AMControl$stopDone(error_t error);
# 60 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Boot.nc"
static void TestS4SimpleM$Boot$booted(void );
# 59 "../../tos//lib/interfaces/S4Send.nc"
static error_t TestS4SimpleM$Send$sendDone(message_t *msg, error_t success);
# 83 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Timer.nc"
static void TestS4SimpleM$Timer1$fired(void );
# 60 "../../tos//lib/interfaces/S4Receive.nc"
static message_t *TestS4SimpleM$Receive$receive(message_t *msg, void *payload, uint16_t payloadLen);
# 75 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/TaskBasic.nc"
static void TestS4SimpleM$sendAnother$runTask(void );
# 83 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Timer.nc"
static void S4RouterM$PeriodicTimer$fired(void );
# 110 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
static void S4RouterM$AMSend$sendDone(
#line 103
message_t * msg, 






error_t error);
# 49 "../../tos//lib/interfaces/S4Send.nc"
static error_t S4RouterM$S4Send$send(message_t *msg, uint16_t length, 
uint16_t dest_id, uint8_t beacon);






static void *S4RouterM$S4Send$getBuffer(message_t *msg, uint16_t *length);
# 78 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



S4RouterM$Receive$receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 83 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Timer.nc"
static void S4RouterM$ForwardDelayTimer$fired(void );
# 26 "../../tos//lib/bvr/S4Locator.nc"
static error_t S4RouterM$Locator$statusChanged(void );
# 95 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/StdControl.nc"
static error_t S4RouterM$StdControl$start(void );
# 18 "../../tos//lib/bvr/S4Locator.nc"
static error_t S4StateM$S4Locator$getCoordinates(Coordinates *coords);
# 78 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



S4StateM$ClusterReceive$receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 77 "../../tos//lib/linkestimator/LinkEstimator.nc"
static error_t S4StateM$LinkEstimator$canEvict(uint16_t addr);
# 110 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
static void S4StateM$ClusterAMSend$sendDone(
#line 103
message_t * msg, 






error_t error);
#line 110
static void S4StateM$S4StateAMSend$sendDone(
#line 103
message_t * msg, 






error_t error);
# 25 "../../tos//lib/bvr/S4Neighborhood.nc"
static error_t S4StateM$S4Neighborhood$getNextHops(uint16_t dest_addr, uint8_t closest_beacon, uint16_t *next_hop);
# 78 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



S4StateM$S4StateReceive$receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 75 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/TaskBasic.nc"
static void S4StateM$sendBeaconTask$runTask(void );
# 83 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Timer.nc"
static void S4StateM$BeaconUpdateTimer$fired(void );
#line 83
static void S4StateM$BeaconDisplayTimer$fired(void );
# 75 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/TaskBasic.nc"
static void S4StateM$sendClusterTask$runTask(void );
#line 75
static void S4StateM$processDVMessage$runTask(void );
# 83 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Timer.nc"
static void S4StateM$BeaconTimer$fired(void );
#line 83
static void S4StateM$ClusterTimer$fired(void );
#line 83
static void S4StateM$BeaconRetransmitTimer$fired(void );
# 75 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/TaskBasic.nc"
static void S4StateM$processMessage$runTask(void );
# 83 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Timer.nc"
static void S4StateM$ClusterRetransmitTimer$fired(void );
# 95 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/StdControl.nc"
static error_t S4StateM$StdControl$start(void );
# 83 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Timer.nc"
static void S4StateM$ClusterUpdateTimer$fired(void );
# 43 "../../tos//lib/linkestimator/LinkEstimatorSynch.nc"
static error_t S4StateM$LinkEstimatorSynch$linkRemoved(uint16_t addr);

static error_t S4StateM$LinkEstimatorSynch$reverseQualityChanged(uint16_t addr, uint8_t reverseQuality);

static error_t S4StateM$LinkEstimatorSynch$bidirectionalQualityChanged(uint16_t addr, uint8_t quality);
# 110 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
static void FilterLocalCommM$BottomSendMsg$sendDone(
# 54 "../../tos//lib/commstack/FilterLocalCommM.nc"
uint8_t arg_0x7fb1af8460c8, 
# 103 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



FilterLocalCommM$BottomReceiveMsg$receive(
# 55 "../../tos//lib/commstack/FilterLocalCommM.nc"
uint8_t arg_0x7fb1af8442f0, 
# 71 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 80 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
static error_t FilterLocalCommM$AMSend$send(
# 46 "../../tos//lib/commstack/FilterLocalCommM.nc"
uint8_t arg_0x7fb1af849368, 
# 80 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 110
static void FilterLocalCommM$AMSend$default$sendDone(
# 46 "../../tos//lib/commstack/FilterLocalCommM.nc"
uint8_t arg_0x7fb1af849368, 
# 103 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 62 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Init.nc"
static error_t FilterLocalCommM$Init$init(void );
# 78 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



FilterLocalCommM$Receive$default$receive(
# 47 "../../tos//lib/commstack/FilterLocalCommM.nc"
uint8_t arg_0x7fb1af848480, 
# 71 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 95 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/StdControl.nc"
static error_t FilterLocalCommM$StdControl$start(void );
# 78 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



LinkEstimatorCommM$BottomReceiveMsg$receive(
# 57 "../../tos//lib/commstack/LinkEstimatorCommM.nc"
uint8_t arg_0x7fb1af80c6e0, 
# 71 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 110 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
static void LinkEstimatorCommM$BottomSendMsg$sendDone(
# 56 "../../tos//lib/commstack/LinkEstimatorCommM.nc"
uint8_t arg_0x7fb1af80d4d0, 
# 103 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 77 "../../tos//lib/linkestimator/LinkEstimator.nc"
static error_t LinkEstimatorCommM$LinkEstimator$canEvict(uint16_t addr);
# 80 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
static error_t LinkEstimatorCommM$AMSend$send(
# 50 "../../tos//lib/commstack/LinkEstimatorCommM.nc"
uint8_t arg_0x7fb1af810778, 
# 80 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 62 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Init.nc"
static error_t LinkEstimatorCommM$Init$init(void );
# 83 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Timer.nc"
static void LinkEstimatorCommM$MinRateTimer$fired(void );
# 95 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/StdControl.nc"
static error_t LinkEstimatorCommM$StdControl$start(void );
# 109 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Alarm.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow(void );
#line 103
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type t0, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type dt);
#line 116
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm(void );
#line 73
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop(void );
# 62 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Init.nc"
static error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init(void );
# 64 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Counter.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get(void );
# 58 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired(void );
# 70 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow(void );
#line 61
static HplAtm128Timer0AsyncP$Timer0$timer_size HplAtm128Timer0AsyncP$Timer0$get(void );
#line 110
static uint8_t HplAtm128Timer0AsyncP$Timer0$getScale(void );
#line 67
static void HplAtm128Timer0AsyncP$Timer0$set(HplAtm128Timer0AsyncP$Timer0$timer_size t);
# 44 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static int HplAtm128Timer0AsyncP$TimerAsync$compareBusy(void );
#line 32
static void HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous(void );
# 53 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t HplAtm128Timer0AsyncP$Timer0Ctrl$getInterruptFlag(void );
#line 46
static void HplAtm128Timer0AsyncP$Timer0Ctrl$setControl(Atm128TimerControl_t control);
# 48 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/timer/HplAtm128Compare.nc"
static HplAtm128Timer0AsyncP$Compare$size_type HplAtm128Timer0AsyncP$Compare$get(void );





static void HplAtm128Timer0AsyncP$Compare$set(HplAtm128Timer0AsyncP$Compare$size_type t);










static void HplAtm128Timer0AsyncP$Compare$start(void );
# 75 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void );
# 78 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void );
# 136 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void );
#line 129
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void );
# 75 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void );
# 83 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void );
#line 83
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(
# 48 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7fb1af57cda0);
# 64 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(
# 48 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7fb1af57cda0, 
# 64 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Timer.nc"
uint32_t dt);








static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(
# 48 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7fb1af57cda0, 
# 73 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Timer.nc"
uint32_t dt);




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(
# 48 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7fb1af57cda0);
# 82 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void );
# 45 "../../tos//lib/linkestimator/LinkEstimator.nc"
static error_t LinkEstimatorM$LinkEstimator$store(uint16_t addr, uint16_t seqno, 
uint16_t strength, uint8_t *idx);
#line 65
static error_t LinkEstimatorM$LinkEstimator$setReverseLinkInfo(ReverseLinkInfo *rli, uint8_t *start);
#line 56
static error_t LinkEstimatorM$LinkEstimator$getBidirectionalQuality(uint8_t idx, uint8_t *quality);
#line 48
static error_t LinkEstimatorM$LinkEstimator$updateSeqno(uint8_t idx, uint16_t seqno);
static error_t LinkEstimatorM$LinkEstimator$updateReverse(uint8_t idx, uint8_t reverse, uint8_t expiration);
#line 44
static error_t LinkEstimatorM$LinkEstimator$find(uint16_t addr, uint8_t *idx);
#line 59
static error_t LinkEstimatorM$LinkEstimator$goodBidirectionalQuality(uint8_t idx, bool *good);
#line 53
static error_t LinkEstimatorM$LinkEstimator$updateStrength(uint8_t idx, uint16_t strength);
#line 52
static error_t LinkEstimatorM$LinkEstimator$ageReverse(uint8_t idx);
# 62 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Init.nc"
static error_t LinkEstimatorM$Init$init(void );
# 83 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Timer.nc"
static void LinkEstimatorM$UpdateLinkTimer$fired(void );
# 75 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/TaskBasic.nc"
static void LinkEstimatorM$updateLinkTask$runTask(void );
# 95 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/StdControl.nc"
static error_t LinkEstimatorM$StdControl$start(void );
# 83 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Timer.nc"
static void UARTLoggerM$SelfTimer$fired(void );
# 110 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
static void UARTLoggerM$LogSend$sendDone(
#line 103
message_t * msg, 






error_t error);
# 60 "../../tos//lib/util/Logger.nc"
static error_t UARTLoggerM$Logger$LogChangeLink(LinkNeighbor *n);
static error_t UARTLoggerM$Logger$LogDropLink(uint16_t addr);
#line 59
static error_t UARTLoggerM$Logger$LogAddLink(LinkNeighbor *n);
# 75 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/TaskBasic.nc"
static void UARTLoggerM$LogLoggerStats$runTask(void );
# 67 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Leds.nc"
static void NoLedsC$Leds$led0Toggle(void );
#line 83
static void NoLedsC$Leds$led1Toggle(void );
#line 100
static void NoLedsC$Leds$led2Toggle(void );
#line 56
static void NoLedsC$Leds$led0On(void );
# 80 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
static error_t S4QueuedSendM$QueueSendMsg$send(
# 85 "../../tos//lib/commstack/S4QueuedSendM.nc"
uint8_t arg_0x7fb1af1ee6b0, 
# 80 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 75 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/TaskBasic.nc"
static void S4QueuedSendM$QueueServiceTask$runTask(void );
# 62 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Init.nc"
static error_t S4QueuedSendM$Init$init(void );
# 83 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Timer.nc"
static void S4QueuedSendM$QueueRetransmitTimer$fired(void );
# 110 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
static void S4QueuedSendM$AirSendMsg$sendDone(
# 91 "../../tos//lib/commstack/S4QueuedSendM.nc"
uint8_t arg_0x7fb1af1eb020, 
# 103 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 95 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/StdControl.nc"
static error_t S4QueuedSendM$StdControl$start(void );
# 52 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Random.nc"
static uint16_t RandomLfsrC$Random$rand16(void );
#line 46
static uint32_t RandomLfsrC$Random$rand32(void );
# 113 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/SplitControl.nc"
static void S4ActiveMessageC$SplitControl$startDone(error_t error);
#line 138
static void S4ActiveMessageC$SplitControl$stopDone(error_t error);
# 59 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/PacketAcknowledgements.nc"
static error_t S4ActiveMessageC$PacketAcknowledgements$requestAck(
#line 53
message_t * msg);
#line 85
static bool S4ActiveMessageC$PacketAcknowledgements$wasAcked(
#line 80
message_t * msg);
# 68 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMPacket.nc"
static am_addr_t S4ActiveMessageC$AMPacket$address(void );









static am_addr_t S4ActiveMessageC$AMPacket$destination(
#line 74
message_t * amsg);
# 62 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Init.nc"
static error_t LedsP$Init$init(void );
# 67 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Leds.nc"
static void LedsP$Leds$led0Toggle(void );
#line 83
static void LedsP$Leds$led1Toggle(void );
#line 100
static void LedsP$Leds$led2Toggle(void );
# 110 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
static void LinkEstimatorTaggerCommM$BottomSendMsg$sendDone(
# 18 "../../tos//lib/commstack/LinkEstimatorTaggerCommM.nc"
uint8_t arg_0x7fb1af0c22f0, 
# 103 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



LinkEstimatorTaggerCommM$BottomReceiveMsg$receive(
# 19 "../../tos//lib/commstack/LinkEstimatorTaggerCommM.nc"
uint8_t arg_0x7fb1af0c04f0, 
# 71 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 80 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
static error_t LinkEstimatorTaggerCommM$AMSend$send(
# 9 "../../tos//lib/commstack/LinkEstimatorTaggerCommM.nc"
uint8_t arg_0x7fb1af0c7258, 
# 80 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 62 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Init.nc"
static error_t LinkEstimatorTaggerCommM$Init$init(void );
# 95 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/StdControl.nc"
static error_t LinkEstimatorTaggerCommM$StdControl$start(void );
# 80 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
static error_t GenericCommReallyPromiscuousM$BottomSendMsg$default$send(
# 12 "../../tos//lib/commstack/GenericCommReallyPromiscuousM.nc"
uint8_t arg_0x7fb1af08f020, 
# 80 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 110
static void GenericCommReallyPromiscuousM$BottomSendMsg$sendDone(
# 12 "../../tos//lib/commstack/GenericCommReallyPromiscuousM.nc"
uint8_t arg_0x7fb1af08f020, 
# 103 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



GenericCommReallyPromiscuousM$BottomReceiveMsg$receive(
# 13 "../../tos//lib/commstack/GenericCommReallyPromiscuousM.nc"
uint8_t arg_0x7fb1af08e220, 
# 71 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 80 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
static error_t GenericCommReallyPromiscuousM$AMSend$send(
# 6 "../../tos//lib/commstack/GenericCommReallyPromiscuousM.nc"
uint8_t arg_0x7fb1af094bd0, 
# 80 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 62 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Init.nc"
static error_t GenericCommReallyPromiscuousM$Init$init(void );
# 95 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/StdControl.nc"
static error_t GenericCommReallyPromiscuousM$StdControl$start(void );
# 80 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
static error_t /*GenericCommReallyPromiscuous.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 100 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Send.nc"
static void /*GenericCommReallyPromiscuous.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(
#line 96
message_t * msg, 



error_t error);
# 110 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(
# 48 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/system/AMQueueImplP.nc"
am_id_t arg_0x7fb1af033020, 
# 103 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 75 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Send.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(
# 46 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/system/AMQueueImplP.nc"
uint8_t arg_0x7fb1af036e18, 
# 67 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 100
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(
# 46 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/system/AMQueueImplP.nc"
uint8_t arg_0x7fb1af036e18, 
# 96 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 75 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/TaskBasic.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void );
#line 75
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask(void );
# 80 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
static error_t /*GenericCommReallyPromiscuous.AMBeaconSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 100 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Send.nc"
static void /*GenericCommReallyPromiscuous.AMBeaconSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$sendDone(
#line 96
message_t * msg, 



error_t error);
# 80 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
static error_t /*GenericCommReallyPromiscuous.AMLESenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 100 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Send.nc"
static void /*GenericCommReallyPromiscuous.AMLESenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$2$Send$sendDone(
#line 96
message_t * msg, 



error_t error);
# 80 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
static error_t /*GenericCommReallyPromiscuous.AMDVSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$3$AMSend$send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 100 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Send.nc"
static void /*GenericCommReallyPromiscuous.AMDVSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$3$Send$sendDone(
#line 96
message_t * msg, 



error_t error);
# 61 "../../tos//lib/bvr/CoordinateTable.nc"
static error_t CoordinateTableM$CoordinateTable$updateQuality(uint16_t addr, uint16_t quality);
#line 59
static error_t CoordinateTableM$CoordinateTable$removeEntry(uint16_t addr);
#line 50
static CoordinateTableEntry *CoordinateTableM$CoordinateTable$getEntry(uint16_t addr);
#line 69
static CoordinateTableEntry *CoordinateTableM$CoordinateTable$storeEntry(uint16_t addr, uint16_t first_hop, 
uint8_t seqno, uint8_t quality, 
Coordinates *coords);
# 62 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Init.nc"
static error_t CoordinateTableM$Init$init(void );
# 95 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/StdControl.nc"
static error_t CoordinateTableM$StdControl$start(void );
# 62 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Init.nc"
static error_t S4TopologyM$Init$init(void );
# 2 "../../tos//lib/bvr/S4Topology.nc"
static error_t S4TopologyM$S4Topology$getRootBeaconIDs(uint8_t *array);



static uint16_t S4TopologyM$S4Topology$getRootNodesCount(void );
#line 4
static error_t S4TopologyM$S4Topology$setRootBeaconID(uint16_t pos, uint8_t val);



static void S4TopologyM$S4Topology$setRootNodesCount(uint16_t nodesCount);
# 95 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/StdControl.nc"
static error_t LBlinkM$StdControl$start(void );
# 83 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Timer.nc"
static void LBlinkM$Timer$fired(void );
# 62 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Init.nc"
static error_t RandomMlcgC$Init$init(void );
#line 62
static error_t PlatformP$MoteInit$init(void );
#line 62
static error_t PlatformP$MeasureClock$init(void );
# 51 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/platforms/mica/PlatformP.nc"
static inline error_t PlatformP$Init$init(void );
# 62 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Init.nc"
static error_t MotePlatformP$SubInit$init(void );
# 44 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/GeneralIO.nc"
static void MotePlatformP$SerialIdPin$makeInput(void );
#line 41
static void MotePlatformP$SerialIdPin$clr(void );
# 49 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP$PlatformInit$init(void );
#line 61
static inline error_t MotePlatformP$SubInit$default$init(void );
# 54 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$get(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set(void );




static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$toggle(void );


static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput(void );
#line 54
static __inline bool /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$get(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set(void );




static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$toggle(void );


static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput(void );
#line 54
static __inline bool /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$get(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set(void );




static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$toggle(void );


static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput(void );
#line 59
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void );


static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void );
# 21 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/platforms/mica/sim/MeasureClockC.nc"
static inline error_t MeasureClockC$Init$init(void );
# 62 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Init.nc"
static error_t SimMainP$SoftwareInit$init(void );
# 60 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Boot.nc"
static void SimMainP$Boot$booted(void );
# 62 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Init.nc"
static error_t SimMainP$PlatformInit$init(void );
# 57 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Scheduler.nc"
static void SimMainP$Scheduler$init(void );







static bool SimMainP$Scheduler$runNextTask(void );
# 51 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/SimMainP.nc"
int sim_main_start_mote(void )   ;
# 75 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/TaskBasic.nc"
static void SimSchedulerBasicP$TaskBasic$runTask(
# 49 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/SimSchedulerBasicP.nc"
uint8_t arg_0x7fb1b032f108);



enum SimSchedulerBasicP$__nesc_unnamed4413 {

  SimSchedulerBasicP$NUM_TASKS = 15U, 
  SimSchedulerBasicP$NO_TASK = 255
};

uint8_t SimSchedulerBasicP$m_head[1000];
uint8_t SimSchedulerBasicP$m_tail[1000];
uint8_t SimSchedulerBasicP$m_next[1000][SimSchedulerBasicP$NUM_TASKS];




bool SimSchedulerBasicP$sim_scheduler_event_pending[1000];
sim_event_t SimSchedulerBasicP$sim_scheduler_event[1000];

static inline int SimSchedulerBasicP$sim_config_task_latency(void );







static void SimSchedulerBasicP$sim_scheduler_submit_event(void );







static inline void SimSchedulerBasicP$sim_scheduler_event_handle(sim_event_t *e);
#line 103
static inline void SimSchedulerBasicP$sim_scheduler_event_init(sim_event_t *e);
#line 120
static inline uint8_t SimSchedulerBasicP$popTask(void );
#line 139
static inline bool SimSchedulerBasicP$isWaiting(uint8_t id);




static inline bool SimSchedulerBasicP$pushTask(uint8_t id);
#line 166
static inline void SimSchedulerBasicP$Scheduler$init(void );
#line 180
static bool SimSchedulerBasicP$Scheduler$runNextTask(void );
#line 205
static error_t SimSchedulerBasicP$TaskBasic$postTask(uint8_t id);
#line 221
static inline void SimSchedulerBasicP$TaskBasic$default$runTask(uint8_t id);
# 50 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/SimMoteP.nc"
long long int SimMoteP$euid[1000];
long long int SimMoteP$startTime[1000];
bool SimMoteP$isOn[1000];
sim_event_t *SimMoteP$bootEvent[1000];

static inline long long int SimMoteP$SimMote$getEuid(void );


static inline void SimMoteP$SimMote$setEuid(long long int e);


static inline long long int SimMoteP$SimMote$getStartTime(void );


static inline bool SimMoteP$SimMote$isOn(void );



static inline int SimMoteP$SimMote$getVariableInfo(char *name, void **addr, size_t *size);



static void SimMoteP$SimMote$turnOn(void );
#line 85
static inline void SimMoteP$SimMote$turnOff(void );




long long int sim_mote_euid(int mote)   ;








void sim_mote_set_euid(int mote, long long int id)   ;






long long int sim_mote_start_time(int mote)   ;








int sim_mote_get_variable_info(int mote, char *name, void **ptr, size_t *len)   ;









void sim_mote_set_start_time(int mote, long long int t)   ;








bool sim_mote_is_on(int mote)   ;








void sim_mote_turn_on(int mote)   ;






void sim_mote_turn_off(int mote)   ;






static inline void SimMoteP$sim_mote_boot_handle(sim_event_t *e);








void sim_mote_enqueue_boot_event(int mote)   ;
# 57 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/TossimActiveMessageC.nc"
static am_addr_t TossimActiveMessageC$amAddress(void );
# 110 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
static void TossimActiveMessageC$AMSend$sendDone(
# 47 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x7fb1afec4220, 
# 103 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



TossimActiveMessageC$Snoop$receive(
# 49 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x7fb1afec1020, 
# 71 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
#line 78
static 
#line 74
message_t * 



TossimActiveMessageC$Receive$receive(
# 48 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x7fb1afec2340, 
# 71 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 57 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/TossimPacketModel.nc"
static error_t TossimActiveMessageC$Model$send(int node, message_t *msg, uint8_t len);
# 62 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/TossimActiveMessageC.nc"
message_t TossimActiveMessageC$buffer[1000];
message_t *TossimActiveMessageC$bufferPointer[1000];

static inline tossim_header_t *TossimActiveMessageC$getHeader(message_t *amsg);







static error_t TossimActiveMessageC$AMSend$send(am_id_t id, am_addr_t addr, 
message_t *amsg, 
uint8_t len);
#line 103
static inline void TossimActiveMessageC$Model$sendDone(message_t *msg, error_t result);





static void TossimActiveMessageC$Model$receive(message_t *msg);
#line 127
static inline bool TossimActiveMessageC$Model$shouldAck(message_t *msg);








static inline am_addr_t TossimActiveMessageC$AMPacket$address(void );



static am_addr_t TossimActiveMessageC$AMPacket$destination(message_t *amsg);




static void TossimActiveMessageC$AMPacket$setDestination(message_t *amsg, am_addr_t addr);
#line 160
static inline bool TossimActiveMessageC$AMPacket$isForMe(message_t *amsg);




static am_id_t TossimActiveMessageC$AMPacket$type(message_t *amsg);




static void TossimActiveMessageC$AMPacket$setType(message_t *amsg, am_id_t t);






static inline uint8_t TossimActiveMessageC$Packet$payloadLength(message_t *msg);



static inline void TossimActiveMessageC$Packet$setPayloadLength(message_t *msg, uint8_t len);



static inline uint8_t TossimActiveMessageC$Packet$maxPayloadLength(void );



static inline void *TossimActiveMessageC$Packet$getPayload(message_t *msg, uint8_t len);
#line 212
static inline message_t *TossimActiveMessageC$Receive$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len);



static inline message_t *TossimActiveMessageC$Snoop$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len);
#line 236
static inline void TossimActiveMessageC$active_message_deliver_handle(sim_event_t *evt);





static inline sim_event_t *TossimActiveMessageC$allocate_deliver_event(int node, message_t *msg, sim_time_t t);
#line 254
void active_message_deliver(int node, message_t *msg, sim_time_t t)   ;
# 85 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/TossimPacketModel.nc"
static void TossimPacketModelC$Packet$receive(message_t *msg);
#line 76
static void TossimPacketModelC$Packet$sendDone(message_t *msg, error_t error);










static bool TossimPacketModelC$Packet$shouldAck(message_t *msg);
# 67 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/TaskBasic.nc"
static error_t TossimPacketModelC$startDoneTask$postTask(void );
# 113 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/SplitControl.nc"
static void TossimPacketModelC$Control$startDone(error_t error);
#line 138
static void TossimPacketModelC$Control$stopDone(error_t error);
# 48 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/GainRadioModel.nc"
static void TossimPacketModelC$GainRadioModel$putOnAirTo(int dest, 
message_t *msg, 
bool ack, 
sim_time_t endTime, 
double gain, 
double reverseGain);


static bool TossimPacketModelC$GainRadioModel$clearChannel(void );
static void TossimPacketModelC$GainRadioModel$setPendingTransmission(void );
# 96 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/TossimPacketModelC.nc"
enum TossimPacketModelC$__nesc_unnamed4414 {
#line 96
  TossimPacketModelC$startDoneTask = 0U
};
#line 96
typedef int TossimPacketModelC$__nesc_sillytask_startDoneTask[TossimPacketModelC$startDoneTask];




enum TossimPacketModelC$__nesc_unnamed4415 {
#line 101
  TossimPacketModelC$stopDoneTask = 1U
};
#line 101
typedef int TossimPacketModelC$__nesc_sillytask_stopDoneTask[TossimPacketModelC$stopDoneTask];
#line 145
enum TossimPacketModelC$__nesc_unnamed4416 {
#line 145
  TossimPacketModelC$sendDoneTask = 2U
};
#line 145
typedef int TossimPacketModelC$__nesc_sillytask_sendDoneTask[TossimPacketModelC$sendDoneTask];
#line 70
bool TossimPacketModelC$initialized[1000];
bool TossimPacketModelC$running[1000];
uint8_t TossimPacketModelC$backoffCount[1000];
uint8_t TossimPacketModelC$neededFreeSamples[1000];
message_t *TossimPacketModelC$sending[1000];
bool TossimPacketModelC$transmitting[1000];
uint8_t TossimPacketModelC$sendingLength[1000];
int TossimPacketModelC$destNode[1000];
sim_event_t TossimPacketModelC$sendEvent[1000];



static inline tossim_metadata_t *TossimPacketModelC$getMetadata(message_t *msg);



static inline error_t TossimPacketModelC$Init$init(void );









static inline void TossimPacketModelC$startDoneTask$runTask(void );




static inline void TossimPacketModelC$stopDoneTask$runTask(void );




static inline error_t TossimPacketModelC$Control$start(void );
#line 128
static error_t TossimPacketModelC$PacketAcknowledgements$requestAck(message_t *msg);
#line 140
static inline error_t TossimPacketModelC$PacketAcknowledgements$wasAcked(message_t *ack);




static inline void TossimPacketModelC$sendDoneTask$runTask(void );
#line 159
static inline void TossimPacketModelC$start_csma(void );

static inline error_t TossimPacketModelC$Packet$send(int dest, message_t *msg, uint8_t len);
#line 183
static inline void TossimPacketModelC$send_backoff(sim_event_t *evt);
static inline void TossimPacketModelC$send_transmit(sim_event_t *evt);
static inline void TossimPacketModelC$send_transmit_done(sim_event_t *evt);

static inline void TossimPacketModelC$start_csma(void );
#line 211
static inline void TossimPacketModelC$send_backoff(sim_event_t *evt);
#line 253
static inline void TossimPacketModelC$send_transmit(sim_event_t *evt);
#line 280
static inline void TossimPacketModelC$send_transmit_done(sim_event_t *evt);







static inline void TossimPacketModelC$GainRadioModel$receive(message_t *msg);





uint8_t TossimPacketModelC$error[1000];

static inline void TossimPacketModelC$GainRadioModel$acked(message_t *msg);










static bool TossimPacketModelC$GainRadioModel$shouldAck(message_t *msg);
# 60 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/GainRadioModel.nc"
static void CpmModelC$Model$receive(message_t *msg);
#line 59
static void CpmModelC$Model$acked(message_t *msg);

static bool CpmModelC$Model$shouldAck(message_t *msg);
# 58 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/CpmModelC.nc"
message_t *CpmModelC$outgoing[1000];
bool CpmModelC$requestAck[1000];
bool CpmModelC$receiving[1000];
bool CpmModelC$transmitting[1000];
sim_time_t CpmModelC$transmissionEndTime[1000];
struct CpmModelC$receive_message;
typedef struct CpmModelC$receive_message CpmModelC$receive_message_t;

struct CpmModelC$receive_message {
  int source;
  sim_time_t start;
  sim_time_t end;
  double power;
  double reversePower;
  int8_t strength;
  bool lost;
  bool ack;
  message_t *msg;
  CpmModelC$receive_message_t *next;
};

CpmModelC$receive_message_t *CpmModelC$outstandingReceptionHead[1000];

static inline CpmModelC$receive_message_t *CpmModelC$allocate_receive_message(void );
static inline void CpmModelC$free_receive_message(CpmModelC$receive_message_t *msg);
static inline sim_event_t *CpmModelC$allocate_receive_event(sim_time_t t, CpmModelC$receive_message_t *m);

static bool CpmModelC$shouldReceive(double SNR);
static inline bool CpmModelC$checkReceive(CpmModelC$receive_message_t *msg);
static double CpmModelC$packetNoise(CpmModelC$receive_message_t *msg);


static inline double CpmModelC$timeInMs(void );
#line 126
static double CpmModelC$noise_hash_generation(void );
#line 151
static inline double CpmModelC$arr_estimate_from_snr(double SNR);
#line 166
static inline int CpmModelC$shouldAckReceive(double snr);
#line 178
static inline void CpmModelC$sim_gain_ack_handle(sim_event_t *evt);
#line 200
double CpmModelC$clearThreshold[1000];










static inline bool CpmModelC$Model$clearChannel(void );




static void CpmModelC$sim_gain_schedule_ack(int source, sim_time_t t, CpmModelC$receive_message_t *r);
#line 230
static inline double CpmModelC$prr_estimate_from_snr(double SNR);
#line 248
static bool CpmModelC$shouldReceive(double SNR);
#line 260
static inline bool CpmModelC$checkReceive(CpmModelC$receive_message_t *msg);
#line 274
static double CpmModelC$packetNoise(CpmModelC$receive_message_t *msg);
#line 296
static inline void CpmModelC$sim_gain_receive_handle(sim_event_t *evt);
#line 369
static inline void CpmModelC$enqueue_receive_event(int source, sim_time_t endTime, message_t *msg, bool receive, double power, double reversePower);
#line 428
static inline void CpmModelC$sim_gain_put(int dest, message_t *msg, sim_time_t endTime, bool receive, double power, double reversePower);







static inline void CpmModelC$Model$putOnAirTo(int dest, message_t *msg, bool ack, sim_time_t endTime, double power, double reversePower);
#line 459
static inline void CpmModelC$Model$setPendingTransmission(void );







static inline sim_event_t *CpmModelC$allocate_receive_event(sim_time_t endTime, CpmModelC$receive_message_t *msg);
#line 479
static inline CpmModelC$receive_message_t *CpmModelC$allocate_receive_message(void );



static inline void CpmModelC$free_receive_message(CpmModelC$receive_message_t *msg);
# 65 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/ActiveMessageAddressC.nc"
bool ActiveMessageAddressC$set[1000];
am_addr_t ActiveMessageAddressC$addr[1000];









static am_addr_t ActiveMessageAddressC$ActiveMessageAddress$amAddress(void );
#line 88
static inline am_addr_t ActiveMessageAddressC$amAddress(void );
# 104 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/SplitControl.nc"
static error_t TestS4SimpleM$AMControl$start(void );
# 95 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/StdControl.nc"
static error_t TestS4SimpleM$LBlinkControl$start(void );
# 50 "../../tos//lib/bvr/CoordinateTable.nc"
static CoordinateTableEntry *TestS4SimpleM$CoordinateTable$getEntry(uint16_t addr);
# 49 "../../tos//lib/interfaces/S4Send.nc"
static error_t TestS4SimpleM$Send$send(message_t *msg, uint16_t length, 
uint16_t dest_id, uint8_t beacon);






static void *TestS4SimpleM$Send$getBuffer(message_t *msg, uint16_t *length);
# 95 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/StdControl.nc"
static error_t TestS4SimpleM$RouterControl$start(void );
# 73 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Timer.nc"
static void TestS4SimpleM$Timer1$startOneShot(uint32_t dt);
# 68 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMPacket.nc"
static am_addr_t TestS4SimpleM$AMPacket$address(void );
# 67 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/TaskBasic.nc"
static error_t TestS4SimpleM$sendAnother$postTask(void );
# 85 "TestS4SimpleM.nc"
enum TestS4SimpleM$__nesc_unnamed4417 {
#line 85
  TestS4SimpleM$sendAnother = 3U
};
#line 85
typedef int TestS4SimpleM$__nesc_sillytask_sendAnother[TestS4SimpleM$sendAnother];
#line 71
message_t TestS4SimpleM$send_buffer[1000];
uint8_t *TestS4SimpleM$pAppMsg[1000];
uint16_t TestS4SimpleM$payloadLength[1000];
Coordinates TestS4SimpleM$dest[1000];
bool TestS4SimpleM$busy_sending[1000];

uint16_t TestS4SimpleM$d[1000];

uint16_t TestS4SimpleM$mode[1000];
uint16_t TestS4SimpleM$dest_id[1000];

uint16_t TestS4SimpleM$msg_id[1000];
uint16_t TestS4SimpleM$src[1000];



static void TestS4SimpleM$Boot$booted(void );
#line 102
static inline void TestS4SimpleM$Timer1$fired(void );
#line 176
static inline void TestS4SimpleM$sendAnother$runTask(void );
#line 191
static error_t TestS4SimpleM$Send$sendDone(message_t *msg, error_t success);









static inline message_t *TestS4SimpleM$Receive$receive(message_t *msg, void *payload, uint16_t payloadLen);









static inline void TestS4SimpleM$AMControl$stopDone(error_t err);



static inline void TestS4SimpleM$AMControl$startDone(error_t err);
# 80 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
static error_t S4RouterM$AMSend$send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 25 "../../tos//lib/bvr/S4Neighborhood.nc"
static error_t S4RouterM$Neighborhood$getNextHops(uint16_t dest_addr, uint8_t closest_beacon, uint16_t *next_hop);
# 46 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Random.nc"
static uint32_t S4RouterM$Random$rand32(void );
# 59 "../../tos//lib/interfaces/S4Send.nc"
static error_t S4RouterM$S4Send$sendDone(message_t *msg, error_t success);
# 73 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Timer.nc"
static void S4RouterM$ForwardDelayTimer$startOneShot(uint32_t dt);
# 60 "../../tos//lib/interfaces/S4Receive.nc"
static message_t *S4RouterM$S4Receive$receive(message_t *msg, void *payload, uint16_t payloadLen);
# 18 "../../tos//lib/bvr/S4Locator.nc"
static error_t S4RouterM$Locator$getCoordinates(Coordinates *coords);
# 68 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMPacket.nc"
static am_addr_t S4RouterM$AMPacket$address(void );









static am_addr_t S4RouterM$AMPacket$destination(
#line 74
message_t * amsg);
# 2 "../../tos//lib/bvr/S4Topology.nc"
static error_t S4RouterM$S4Topology$getRootBeaconIDs(uint8_t *array);
# 124 "../../tos//lib/bvr/S4RouterM.nc"
enum S4RouterM$__nesc_unnamed4418 {
  S4RouterM$DUP_CACHE_SIZE = 4, 
  S4RouterM$DUP_CACHE_ENABLED = 1
};





#line 129
typedef struct S4RouterM$__nesc_unnamed4419 {
  bool valid;
  uint16_t min_dist;
  uint32_t key;
} S4RouterM$duplicateCacheEntry;








uint16_t S4RouterM$local_message_counter[1000];

uint8_t S4RouterM$dup_cache_index[1000];
S4RouterM$duplicateCacheEntry S4RouterM$dup_cache[1000][S4RouterM$DUP_CACHE_SIZE];


Coordinates S4RouterM$my_coords[1000];
bool S4RouterM$coords_valid[1000];

forwardRoutingBuffer S4RouterM$forward_buffer[1000];
forwardRoutingBuffer S4RouterM$send_buffer[1000];

message_t S4RouterM$fwd_buf[1000];

enum S4RouterM$__nesc_unnamed4420 {
  S4RouterM$BCAST_MEAN_DELAY = 2
};

bool S4RouterM$forward_delay_timer_pending[1000];
uint32_t S4RouterM$forward_delay[1000];
uint32_t S4RouterM$delay_timer_jit[1000];
bool S4RouterM$initialized[1000];








static inline void S4RouterM$duplicateCacheInit(void );


static inline bool S4RouterM$duplicateCacheFind(uint32_t key);
static inline void S4RouterM$duplicateCacheUpdate(uint32_t key);
static void S4RouterM$duplicateCacheRemove(uint32_t key);
static inline uint32_t S4RouterM$getMsgUid(uint16_t arg_0x7fb1afc0bbc8, uint16_t arg_0x7fb1afc0a020);
#line 278
static inline error_t S4RouterM$StdControl$start(void );
#line 315
static error_t S4RouterM$forwardMessage(forwardRoutingBuffer *fb);
#line 353
static inline void S4RouterM$AMSend$sendDone(message_t *msg, error_t result);
#line 462
static inline error_t S4RouterM$S4Send$send(message_t *msg, uint16_t mhLength, 
uint16_t dest_id, uint8_t closest_beacon);
#line 564
static inline message_t *S4RouterM$Receive$receive(message_t *pMsg, void *msgPayload, uint8_t len);
#line 721
static inline void S4RouterM$ForwardDelayTimer$fired(void );








static void *S4RouterM$S4Send$getBuffer(message_t *msg, uint16_t *length);









static inline error_t S4RouterM$Locator$statusChanged(void );









static inline uint32_t S4RouterM$getMsgUid(uint16_t origin, uint16_t id);





static inline void S4RouterM$duplicateCacheInit(void );








static uint8_t S4RouterM$duplicateCacheGetIndex(uint32_t key);
#line 777
static void S4RouterM$duplicateCacheRemove(uint32_t key);
#line 796
static inline bool S4RouterM$duplicateCacheFind(uint32_t key);
#line 812
static inline void S4RouterM$duplicateCacheUpdate(uint32_t key);
#line 1135
static inline void S4RouterM$PeriodicTimer$fired(void );
# 26 "../../tos//lib/bvr/S4Locator.nc"
static error_t S4StateM$S4Locator$statusChanged(void );
# 56 "../../tos//lib/linkestimator/LinkEstimator.nc"
static error_t S4StateM$LinkEstimator$getBidirectionalQuality(uint8_t idx, uint8_t *quality);
#line 44
static error_t S4StateM$LinkEstimator$find(uint16_t addr, uint8_t *idx);
#line 59
static error_t S4StateM$LinkEstimator$goodBidirectionalQuality(uint8_t idx, bool *good);
# 80 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
static error_t S4StateM$ClusterAMSend$send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 61 "../../tos//lib/bvr/CoordinateTable.nc"
static error_t S4StateM$CoordinateTable$updateQuality(uint16_t addr, uint16_t quality);
#line 59
static error_t S4StateM$CoordinateTable$removeEntry(uint16_t addr);
#line 50
static CoordinateTableEntry *S4StateM$CoordinateTable$getEntry(uint16_t addr);
#line 69
static CoordinateTableEntry *S4StateM$CoordinateTable$storeEntry(uint16_t addr, uint16_t first_hop, 
uint8_t seqno, uint8_t quality, 
Coordinates *coords);
# 80 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
static error_t S4StateM$S4StateAMSend$send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 46 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Random.nc"
static uint32_t S4StateM$Random$rand32(void );
# 67 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/TaskBasic.nc"
static error_t S4StateM$sendBeaconTask$postTask(void );
# 62 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Init.nc"
static error_t S4StateM$S4TopologyInit$init(void );
# 73 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Timer.nc"
static void S4StateM$BeaconUpdateTimer$startOneShot(uint32_t dt);




static void S4StateM$BeaconUpdateTimer$stop(void );
# 67 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/TaskBasic.nc"
static error_t S4StateM$sendClusterTask$postTask(void );
#line 67
static error_t S4StateM$processDVMessage$postTask(void );
# 73 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Timer.nc"
static void S4StateM$BeaconTimer$startOneShot(uint32_t dt);
#line 73
static void S4StateM$ClusterTimer$startOneShot(uint32_t dt);




static void S4StateM$ClusterTimer$stop(void );
# 83 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Leds.nc"
static void S4StateM$Leds$led1Toggle(void );
#line 100
static void S4StateM$Leds$led2Toggle(void );
# 73 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Timer.nc"
static void S4StateM$BeaconRetransmitTimer$startOneShot(uint32_t dt);
# 67 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/TaskBasic.nc"
static error_t S4StateM$processMessage$postTask(void );
# 62 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Init.nc"
static error_t S4StateM$CoordinateTableControlInit$init(void );
# 73 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Timer.nc"
static void S4StateM$ClusterRetransmitTimer$startOneShot(uint32_t dt);
# 68 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMPacket.nc"
static am_addr_t S4StateM$AMPacket$address(void );









static am_addr_t S4StateM$AMPacket$destination(
#line 74
message_t * amsg);
# 2 "../../tos//lib/bvr/S4Topology.nc"
static error_t S4StateM$S4Topology$getRootBeaconIDs(uint8_t *array);



static uint16_t S4StateM$S4Topology$getRootNodesCount(void );
#line 4
static error_t S4StateM$S4Topology$setRootBeaconID(uint16_t pos, uint8_t val);



static void S4StateM$S4Topology$setRootNodesCount(uint16_t nodesCount);
# 73 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Timer.nc"
static void S4StateM$ClusterUpdateTimer$startOneShot(uint32_t dt);




static void S4StateM$ClusterUpdateTimer$stop(void );
# 95 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/StdControl.nc"
static error_t S4StateM$CoordinateTableControl$start(void );
# 273 "../../tos//lib/bvr/S4StateM.nc"
enum S4StateM$__nesc_unnamed4421 {
#line 273
  S4StateM$sendBeaconTask = 4U
};
#line 273
typedef int S4StateM$__nesc_sillytask_sendBeaconTask[S4StateM$sendBeaconTask];





enum S4StateM$__nesc_unnamed4422 {
#line 279
  S4StateM$sendClusterTask = 5U
};
#line 279
typedef int S4StateM$__nesc_sillytask_sendClusterTask[S4StateM$sendClusterTask];
#line 1312
enum S4StateM$__nesc_unnamed4423 {
#line 1312
  S4StateM$processMessage = 6U
};
#line 1312
typedef int S4StateM$__nesc_sillytask_processMessage[S4StateM$processMessage];
#line 2465
enum S4StateM$__nesc_unnamed4424 {
#line 2465
  S4StateM$processDVMessage = 7U
};
#line 2465
typedef int S4StateM$__nesc_sillytask_processDVMessage[S4StateM$processDVMessage];
#line 130
enum S4StateM$__nesc_unnamed4425 {
  S4StateM$MAX_ETX = 255, 
  S4StateM$ETX_SCALE = 10
};


enum S4StateM$__nesc_unnamed4426 {
  S4StateM$RESET_TOLERANCE = 128
};



uint32_t S4StateM$b_timer_int[1000];
uint32_t S4StateM$b_timer_jit[1000];

uint16_t S4StateM$delay_timer_jit[1000];

bool S4StateM$state_is_active[1000];
bool S4StateM$state_beaconing_coords[1000];

bool S4StateM$beacons_to_send[1000];

Coordinates S4StateM$my_coords[1000];

message_t S4StateM$beacon_buf[1000];

message_t S4StateM$rcv_beacon_buf[1000];

message_t *S4StateM$rcv_beacon_ptr[1000];
bool S4StateM$rcv_buffer_busy[1000];

S4BeaconMsg *S4StateM$beacon_msg_ptr[1000];
S4BeaconMsgData *S4StateM$beacon_data_ptr[1000];

uint8_t S4StateM$beacon_msg_length[1000];
bool S4StateM$beacon_send_busy[1000];

uint16_t S4StateM$beacon_seqno[1000];




S4RootBeacon S4StateM$rootBeacons[1000][N_ROOT_BEACONS];
CoordsParents S4StateM$my_coords_parents[1000];

bool S4StateM$state_is_root_beacon[1000];
uint8_t S4StateM$root_beacon_id[1000];
uint8_t S4StateM$root_beacon_seqno[1000];

bool S4StateM$initialized[1000];




uint8_t S4StateM$beacon_send_retries[1000];
#line 199
uint8_t S4StateM$next_beacon[1000];


uint8_t S4StateM$curr_bv_size[1000];

uint32_t S4StateM$update_int[1000];






bool S4StateM$first_global_beacon[1000];






uint8_t S4StateM$dv_send_retries[1000];


ClusterMember S4StateM$ClusterTable[1000][100];
uint16_t S4StateM$cluster_size[1000];

message_t S4StateM$cluster_buf[1000];
message_t S4StateM$rcv_cluster_buf[1000];
message_t *S4StateM$rcv_cluster_ptr[1000];
bool S4StateM$rcv_clusterbuffer_busy[1000];

uint8_t S4StateM$cluster_msg_length[1000];
bool S4StateM$cluster_send_busy[1000];
uint8_t S4StateM$cluster_seqno[1000];



DVMsg *S4StateM$cluster_msg_ptr[1000];
DVMsgData *S4StateM$cluster_data_ptr[1000];



uint8_t S4StateM$next_dv[1000];
uint8_t S4StateM$curr_dv_size[1000];







uint8_t S4StateM$current_scope[1000];
uint8_t S4StateM$scope_age[1000];


uint8_t S4StateM$largest_scope[1000];

uint8_t S4StateM$beacon_round[1000];

uint8_t S4StateM$dv_round[1000];


uint16_t S4StateM$sent_bv[1000];
uint16_t S4StateM$sent_dv[1000];




inline static void S4StateM$init_beacon_msg(void );
static void S4StateM$set_beacon_msg(void );

inline static void S4StateM$init_my_coords(void );

static void S4StateM$rootBeaconInit(S4RootBeacon *b);






inline static void S4StateM$init_cluster_msg(void );



inline static void S4StateM$set_beacon_update_msg(void );
inline static void S4StateM$set_dv_update_msg(void );



inline static void S4StateM$initialize(void );
#line 443
static __inline bool S4StateM$hasLowerHash(uint16_t val1, uint16_t val2);










static inline void S4StateM$displayRootBeacons(void );
#line 468
static inline void S4StateM$BeaconDisplayTimer$fired(void );
#line 493
static inline error_t S4StateM$StdControl$start(void );
#line 569
static __inline uint8_t S4StateM$scaledEtxFromQuality(uint8_t quality);
#line 581
inline static bool S4StateM$is_within_range(uint8_t _new, uint8_t old);
#line 593
static bool S4StateM$is_greater_by_2(uint8_t _new, uint8_t old);








static bool S4StateM$is_within_2(uint8_t _new, uint8_t old);
#line 664
inline static void S4StateM$init_beacon_msg(void );










static void S4StateM$set_beacon_msg(void );
#line 832
static void S4StateM$rootBeaconInit(S4RootBeacon *b);
#line 849
inline static void S4StateM$rootBeaconSetMyself(S4RootBeacon *b);
#line 897
inline static void S4StateM$init_my_coords(void );
#line 924
inline static void S4StateM$dropParent(uint8_t addr);
#line 951
static inline void S4StateM$updateRootBeacon(uint8_t root_id, uint16_t nodeid, uint16_t from, uint8_t quality, 
uint8_t seqno, uint8_t hopcount);
#line 1312
static inline void S4StateM$processMessage$runTask(void );
#line 1551
static error_t S4StateM$LinkEstimatorSynch$linkRemoved(uint16_t addr);
#line 1563
static inline error_t S4StateM$LinkEstimatorSynch$bidirectionalQualityChanged(uint16_t addr, uint8_t quality);









static inline error_t S4StateM$LinkEstimatorSynch$reverseQualityChanged(uint16_t addr, uint8_t reverseQuality);








static error_t S4StateM$S4Locator$getCoordinates(Coordinates *coords);
#line 1597
static error_t S4StateM$LinkEstimator$canEvict(uint16_t addr);
#line 1691
static inline void S4StateM$BeaconTimer$fired(void );
#line 1820
static inline void S4StateM$BeaconRetransmitTimer$fired(void );




static inline void S4StateM$sendBeaconTask$runTask(void );
#line 1968
static inline void S4StateM$S4StateAMSend$sendDone(message_t *msg, error_t success);
#line 2050
static inline message_t *S4StateM$S4StateReceive$receive(message_t *rcvMsg, void *msgPayload, uint8_t payloadLength);
#line 2119
static inline void S4StateM$BeaconUpdateTimer$fired(void );
#line 2249
inline static void S4StateM$set_beacon_update_msg(void );
#line 2293
static error_t S4StateM$S4Neighborhood$getNextHops(uint16_t dest_addr, uint8_t closest_beacon, 
uint16_t *next_hop);
#line 2421
inline static void S4StateM$init_cluster_msg(void );








static void S4StateM$set_cluster_msg(void );
#line 2465
static inline void S4StateM$processDVMessage$runTask(void );
#line 2664
static inline void S4StateM$ClusterTimer$fired(void );
#line 2755
static inline void S4StateM$ClusterRetransmitTimer$fired(void );






static inline void S4StateM$sendClusterTask$runTask(void );
#line 2876
static inline void S4StateM$ClusterAMSend$sendDone(message_t *msg, error_t success);
#line 2928
static inline message_t *S4StateM$ClusterReceive$receive(message_t *rcvMsg, void *msgPayload, uint8_t len);
#line 2983
static inline void S4StateM$ClusterUpdateTimer$fired(void );
#line 3072
inline static void S4StateM$set_dv_update_msg(void );
# 80 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
static error_t FilterLocalCommM$BottomSendMsg$send(
# 54 "../../tos//lib/commstack/FilterLocalCommM.nc"
uint8_t arg_0x7fb1af8460c8, 
# 80 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 110
static void FilterLocalCommM$AMSend$sendDone(
# 46 "../../tos//lib/commstack/FilterLocalCommM.nc"
uint8_t arg_0x7fb1af849368, 
# 103 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 95 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/StdControl.nc"
static error_t FilterLocalCommM$BottomStdControl$start(void );
# 62 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Init.nc"
static error_t FilterLocalCommM$BottomStdControlInit$init(void );
# 78 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



FilterLocalCommM$Receive$receive(
# 47 "../../tos//lib/commstack/FilterLocalCommM.nc"
uint8_t arg_0x7fb1af848480, 
# 71 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 68 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMPacket.nc"
static am_addr_t FilterLocalCommM$AMPacket$address(void );









static am_addr_t FilterLocalCommM$AMPacket$destination(
#line 74
message_t * amsg);
# 61 "../../tos//lib/commstack/FilterLocalCommM.nc"
bool FilterLocalCommM$initialized[1000];

static inline error_t FilterLocalCommM$Init$init(void );






static inline error_t FilterLocalCommM$StdControl$start(void );










static inline error_t FilterLocalCommM$AMSend$send(uint8_t am, uint16_t addr, message_t *msg, uint8_t length);
#line 99
static inline void FilterLocalCommM$BottomSendMsg$sendDone(uint8_t am, message_t *msg, error_t success);








static inline message_t *FilterLocalCommM$BottomReceiveMsg$receive(uint8_t am, message_t *msg, void *payload, uint8_t len);









static inline void FilterLocalCommM$AMSend$default$sendDone(uint8_t am, message_t *msg, error_t success);



static inline message_t *FilterLocalCommM$Receive$default$receive(uint8_t am, message_t *msg, void *payload, uint8_t len);
# 80 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
static error_t LinkEstimatorCommM$BottomSendMsg$send(
# 56 "../../tos//lib/commstack/LinkEstimatorCommM.nc"
uint8_t arg_0x7fb1af80d4d0, 
# 80 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 45 "../../tos//lib/linkestimator/LinkEstimator.nc"
static error_t LinkEstimatorCommM$LinkEstimator$store(uint16_t addr, uint16_t seqno, 
uint16_t strength, uint8_t *idx);
#line 65
static error_t LinkEstimatorCommM$LinkEstimator$setReverseLinkInfo(ReverseLinkInfo *rli, uint8_t *start);
#line 48
static error_t LinkEstimatorCommM$LinkEstimator$updateSeqno(uint8_t idx, uint16_t seqno);
static error_t LinkEstimatorCommM$LinkEstimator$updateReverse(uint8_t idx, uint8_t reverse, uint8_t expiration);
#line 44
static error_t LinkEstimatorCommM$LinkEstimator$find(uint16_t addr, uint8_t *idx);








static error_t LinkEstimatorCommM$LinkEstimator$updateStrength(uint8_t idx, uint16_t strength);
#line 52
static error_t LinkEstimatorCommM$LinkEstimator$ageReverse(uint8_t idx);
# 110 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
static void LinkEstimatorCommM$AMSend$sendDone(
# 50 "../../tos//lib/commstack/LinkEstimatorCommM.nc"
uint8_t arg_0x7fb1af810778, 
# 103 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 95 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/StdControl.nc"
static error_t LinkEstimatorCommM$BottomStdControl$start(void );
# 46 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Random.nc"
static uint32_t LinkEstimatorCommM$Random$rand32(void );
# 62 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Init.nc"
static error_t LinkEstimatorCommM$BottomStdControlInit$init(void );
#line 62
static error_t LinkEstimatorCommM$LinkEstimatorControlInit$init(void );
# 78 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



LinkEstimatorCommM$Receive$receive(
# 51 "../../tos//lib/commstack/LinkEstimatorCommM.nc"
uint8_t arg_0x7fb1af80f908, 
# 71 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 73 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Timer.nc"
static void LinkEstimatorCommM$MinRateTimer$startOneShot(uint32_t dt);
# 95 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/StdControl.nc"
static error_t LinkEstimatorCommM$LinkEstimatorControl$start(void );
# 68 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMPacket.nc"
static am_addr_t LinkEstimatorCommM$AMPacket$address(void );
# 80 "../../tos//lib/commstack/LinkEstimatorCommM.nc"
bool LinkEstimatorCommM$filter_by_strength[1000];

uint32_t LinkEstimatorCommM$reverse_period[1000];
uint32_t LinkEstimatorCommM$reverse_jitter[1000];
uint8_t LinkEstimatorCommM$reverse_info_index[1000];


bool LinkEstimatorCommM$state_is_active[1000];

message_t LinkEstimatorCommM$send_buffer[1000];
ReverseLinkMsg *LinkEstimatorCommM$link_msg_ptr[1000];
ReverseLinkInfo LinkEstimatorCommM$link_info_buf[1000];
bool LinkEstimatorCommM$send_buffer_busy[1000];

uint8_t LinkEstimatorCommM$reverse_msg_length[1000];

bool LinkEstimatorCommM$initialized[1000];


static __inline uint8_t LinkEstimatorCommM$getRssi(message_t *m);








static error_t LinkEstimatorCommM$Init$init(void );
#line 128
static inline error_t LinkEstimatorCommM$StdControl$start(void );
#line 159
static inline error_t LinkEstimatorCommM$AMSend$send(uint8_t am, uint16_t addr, message_t *msg, uint8_t length);
#line 177
static void LinkEstimatorCommM$BottomSendMsg$sendDone(uint8_t am, message_t *msg, error_t success);









static inline message_t *LinkEstimatorCommM$BottomReceiveMsg$receive(uint8_t am, message_t *msg, void *payload, uint8_t len);
#line 249
static inline void LinkEstimatorCommM$MinRateTimer$fired(void );
#line 288
static inline error_t LinkEstimatorCommM$LinkEstimator$canEvict(uint16_t addr);
# 53 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag(void );
#line 46
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$setControl(Atm128TimerControl_t control);
# 78 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Alarm.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$fired(void );
# 82 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Counter.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$overflow(void );
# 44 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$compareBusy(void );
#line 32
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$setTimer0Asynchronous(void );
# 48 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/timer/HplAtm128Compare.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get(void );





static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type t);










static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$start(void );
# 61 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/timer/HplAtm128Timer.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get(void );
# 38 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[1000];
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[1000];
#line 39
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[1000];
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[1000];



enum /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$__nesc_unnamed4427 {
  Atm128AlarmAsyncP$0$MINDT = 2, 
  Atm128AlarmAsyncP$0$MAXT = 230
};



static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt(void );


static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init(void );
#line 74
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setOcr0(uint8_t n);
#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt(void );
#line 149
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired(void );
#line 161
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get(void );
#line 204
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop(void );







static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(uint32_t nt0, uint32_t ndt);









static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow(void );



static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm(void );



static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow(void );
# 70 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm128Timer0AsyncP$Timer0$overflow(void );
# 58 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer0AsyncP$Compare$fired(void );
# 57 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
bool HplAtm128Timer0AsyncP$inOverflow[1000];




static inline void HplAtm128Timer0AsyncP$cancel_overflow(void );
static inline sim_event_t *HplAtm128Timer0AsyncP$allocate_overflow(void );
static void HplAtm128Timer0AsyncP$configure_overflow(sim_event_t *e);
static inline void HplAtm128Timer0AsyncP$schedule_new_overflow(void );

static inline sim_time_t HplAtm128Timer0AsyncP$clock_to_sim(sim_time_t t);
static inline sim_time_t HplAtm128Timer0AsyncP$sim_to_clock(sim_time_t t);
static uint16_t HplAtm128Timer0AsyncP$shiftFromScale(void );




sim_time_t HplAtm128Timer0AsyncP$lastZero[1000];





uint8_t HplAtm128Timer0AsyncP$oldScale[1000];



static inline void HplAtm128Timer0AsyncP$cancel_compare(void );
static inline sim_event_t *HplAtm128Timer0AsyncP$allocate_compare(void );
static void HplAtm128Timer0AsyncP$configure_compare(sim_event_t *e);
static void HplAtm128Timer0AsyncP$schedule_new_compare(void );

static inline sim_time_t HplAtm128Timer0AsyncP$clock_to_sim(sim_time_t t);
static inline sim_time_t HplAtm128Timer0AsyncP$sim_to_clock(sim_time_t t);
static uint16_t HplAtm128Timer0AsyncP$shiftFromScale(void );


void INTERRUPT_15(void )   ;





void INTERRUPT_16(void )   ;







static sim_time_t HplAtm128Timer0AsyncP$last_zero(void );







static inline void HplAtm128Timer0AsyncP$notify_changed(void );










static inline sim_time_t HplAtm128Timer0AsyncP$notify_clockTicksPerSec(void );
#line 148
static inline sim_time_t HplAtm128Timer0AsyncP$clock_to_sim(sim_time_t t);





static inline sim_time_t HplAtm128Timer0AsyncP$sim_to_clock(sim_time_t t);





static uint16_t HplAtm128Timer0AsyncP$shiftFromScale(void );
#line 185
sim_event_t *HplAtm128Timer0AsyncP$compare[1000];

static inline void HplAtm128Timer0AsyncP$timer0_compare_handle(sim_event_t *evt);
#line 223
static inline sim_event_t *HplAtm128Timer0AsyncP$allocate_compare(void );







static void HplAtm128Timer0AsyncP$configure_compare(sim_event_t *evt);
#line 267
static void HplAtm128Timer0AsyncP$schedule_new_compare(void );
#line 282
static uint8_t HplAtm128Timer0AsyncP$Timer0$get(void );
#line 297
static inline void HplAtm128Timer0AsyncP$Timer0$set(uint8_t newVal);
#line 321
static uint8_t HplAtm128Timer0AsyncP$Timer0$getScale(void );
#line 364
static inline void HplAtm128Timer0AsyncP$Timer0Ctrl$setControl(Atm128TimerControl_t x);
#line 383
static Atm128_TIFR_t HplAtm128Timer0AsyncP$Timer0Ctrl$getInterruptFlag(void );
#line 447
static inline void HplAtm128Timer0AsyncP$Compare$start(void );









static uint8_t HplAtm128Timer0AsyncP$Compare$get(void );





static void HplAtm128Timer0AsyncP$Compare$set(uint8_t t);
#line 480
sim_event_t *HplAtm128Timer0AsyncP$overflow[1000];
static inline void HplAtm128Timer0AsyncP$timer0_overflow_handle(sim_event_t *evt);
#line 500
static inline sim_event_t *HplAtm128Timer0AsyncP$allocate_overflow(void );







static void HplAtm128Timer0AsyncP$configure_overflow(sim_event_t *evt);
#line 534
static inline void HplAtm128Timer0AsyncP$schedule_new_overflow(void );










static inline void HplAtm128Timer0AsyncP$cancel_overflow(void );
#line 561
static inline void HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous(void );







static inline int HplAtm128Timer0AsyncP$TimerAsync$compareBusy(void );







static inline void HplAtm128Timer0AsyncP$cancel_compare(void );
# 67 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask(void );
# 109 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow(void );
#line 103
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type dt);
#line 116
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(void );
#line 73
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop(void );
# 83 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired(void );
# 74 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$__nesc_unnamed4428 {
#line 74
  AlarmToTimerC$0$fired = 8U
};
#line 74
typedef int /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$__nesc_sillytask_fired[/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired];
#line 55
uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[1000];
bool /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[1000];

static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(uint32_t t0, uint32_t dt, bool oneshot);
#line 71
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void );


static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void );






static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void );
#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt);


static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void );
# 67 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask(void );
# 136 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(void );
#line 129
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(
# 48 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7fb1af57cda0);
#line 71
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4429 {
#line 71
  VirtualizeTimerC$0$updateFromTimer = 9U
};
#line 71
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer];
#line 53
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4430 {

  VirtualizeTimerC$0$NUM_TIMERS = 19U, 
  VirtualizeTimerC$0$END_OF_LIST = 255
};








#line 59
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4431 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t;

/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[1000][/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS];




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(uint32_t now);
#line 100
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void );
#line 139
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);









static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(uint8_t num, uint32_t dt);




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(uint8_t num, uint32_t dt);




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(uint8_t num);
#line 204
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num);
# 58 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void );
# 77 "../../tos//lib/linkestimator/LinkEstimator.nc"
static error_t LinkEstimatorM$LinkEstimator$canEvict(uint16_t addr);
# 60 "../../tos//lib/util/Logger.nc"
static error_t LinkEstimatorM$Logger$LogChangeLink(LinkNeighbor *n);
static error_t LinkEstimatorM$Logger$LogDropLink(uint16_t addr);
#line 59
static error_t LinkEstimatorM$Logger$LogAddLink(LinkNeighbor *n);
# 64 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Timer.nc"
static void LinkEstimatorM$UpdateLinkTimer$startPeriodic(uint32_t dt);
# 67 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/TaskBasic.nc"
static error_t LinkEstimatorM$updateLinkTask$postTask(void );
# 43 "../../tos//lib/linkestimator/LinkEstimatorSynch.nc"
static error_t LinkEstimatorM$LinkEstimatorSynch$linkRemoved(uint16_t addr);

static error_t LinkEstimatorM$LinkEstimatorSynch$reverseQualityChanged(uint16_t addr, uint8_t reverseQuality);

static error_t LinkEstimatorM$LinkEstimatorSynch$bidirectionalQualityChanged(uint16_t addr, uint8_t quality);
# 251 "../../tos//lib/linkestimator/LinkEstimatorM.nc"
enum LinkEstimatorM$__nesc_unnamed4432 {
#line 251
  LinkEstimatorM$updateLinkTask = 10U
};
#line 251
typedef int LinkEstimatorM$__nesc_sillytask_updateLinkTask[LinkEstimatorM$updateLinkTask];
#line 87
uint8_t LinkEstimatorM$active_neighbors[1000];
LinkNeighbor LinkEstimatorM$neighborCache[1000][N_CACHE_SIZE];
LinkNeighbor *LinkEstimatorM$neighborCachePtrs[1000][N_CACHE_SIZE];









bool LinkEstimatorM$state_is_active[1000];

uint8_t LinkEstimatorM$current_window[1000];
uint8_t LinkEstimatorM$min_packets[1000];

uint32_t LinkEstimatorM$link_upd_timer_int[1000];


static void LinkEstimatorM$neighborInit(LinkNeighbor *n);
static error_t LinkEstimatorM$updateSeqno(uint8_t idx, uint16_t seqno);
static error_t LinkEstimatorM$updateStrength(uint8_t idx, uint16_t seqno);
static uint8_t LinkEstimatorM$getQuality(uint8_t idx);
static uint8_t LinkEstimatorM$getBidirectionalQuality(LinkNeighbor *n);










static inline error_t LinkEstimatorM$Init$init(void );
#line 138
static inline error_t LinkEstimatorM$StdControl$start(void );
#line 166
static void LinkEstimatorM$neighborInit(LinkNeighbor *n);
#line 187
inline static LinkNeighbor *LinkEstimatorM$getFreeNeighbor(void );
#line 200
inline static void LinkEstimatorM$neighborSetActive(LinkNeighbor *n);



inline static void LinkEstimatorM$neighborSetAddress(LinkNeighbor *n, uint16_t addr);





static error_t LinkEstimatorM$find(uint16_t addr, uint8_t *idx);
#line 251
static inline void LinkEstimatorM$updateLinkTask$runTask(void );
#line 395
static inline error_t LinkEstimatorM$LinkEstimator$find(uint16_t addr, uint8_t *idx);
#line 410
static inline error_t LinkEstimatorM$LinkEstimator$store(uint16_t addr, uint16_t seqno, 
uint16_t strength, uint8_t *idx);
#line 510
static error_t LinkEstimatorM$updateSeqno(uint8_t idx, uint16_t seqno);
#line 534
static inline error_t LinkEstimatorM$LinkEstimator$updateSeqno(uint8_t idx, uint16_t seqno);







static inline error_t LinkEstimatorM$LinkEstimator$updateReverse(uint8_t idx, uint8_t reverse, uint8_t expiration);
#line 569
static inline error_t LinkEstimatorM$LinkEstimator$ageReverse(uint8_t idx);
#line 587
static error_t LinkEstimatorM$updateStrength(uint8_t idx, uint16_t strength);
#line 607
static inline error_t LinkEstimatorM$LinkEstimator$updateStrength(uint8_t idx, uint16_t strength);







static uint8_t LinkEstimatorM$getQuality(uint8_t idx);






__inline static uint8_t LinkEstimatorM$getBidirectionalQuality(LinkNeighbor *n);
#line 640
static error_t LinkEstimatorM$LinkEstimator$getBidirectionalQuality(uint8_t idx, uint8_t *quality);
#line 670
static inline error_t LinkEstimatorM$LinkEstimator$setReverseLinkInfo(ReverseLinkInfo *rli, uint8_t *start);
#line 712
static error_t LinkEstimatorM$LinkEstimator$goodBidirectionalQuality(uint8_t idx, bool *good);
#line 731
static inline void LinkEstimatorM$UpdateLinkTimer$fired(void );
# 80 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
static error_t UARTLoggerM$LogSend$send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 56 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Leds.nc"
static void UARTLoggerM$Leds$led0On(void );
# 67 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/TaskBasic.nc"
static error_t UARTLoggerM$LogLoggerStats$postTask(void );
# 68 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMPacket.nc"
static am_addr_t UARTLoggerM$AMPacket$address(void );
# 948 "../../tos//lib/util/UARTLoggerM.nc"
enum UARTLoggerM$__nesc_unnamed4433 {
#line 948
  UARTLoggerM$LogLoggerStats = 11U
};
#line 948
typedef int UARTLoggerM$__nesc_sillytask_LogLoggerStats[UARTLoggerM$LogLoggerStats];
#line 75
enum UARTLoggerM$__nesc_unnamed4434 {
  UARTLoggerM$LOG_ROOT_BEACON = 0, 
  UARTLoggerM$LOG_COORDS = 1, 
  UARTLoggerM$LOG_COORD = 0, 
  UARTLoggerM$LOG_ROUTE = 1, 
  UARTLoggerM$LOG_RETRANSMIT = 1, 
  UARTLoggerM$LOG_SELF = 0, 
  UARTLoggerM$LOG_LINK = 0, 
  UARTLoggerM$LOG_NEIGHBOR = 0, 
  UARTLoggerM$LOG_LOGGER = 0, 
  UARTLoggerM$LOG_LRX = 0, 
  UARTLoggerM$LOG_DEBUG = 0
};
# 66 "../../tos//lib/util/BufferPool.nc"
enum UARTLoggerM$__nesc_unnamed4435 {
  UARTLoggerM$BUFFER_POOL_SIZE = 24
};










#line 71
typedef struct UARTLoggerM$__nesc_unnamed4436 {
  bool busy[UARTLoggerM$BUFFER_POOL_SIZE];
  uint8_t num_elements;
  message_t buffers[UARTLoggerM$BUFFER_POOL_SIZE];
  message_t *bufferPtrs[UARTLoggerM$BUFFER_POOL_SIZE];
  uint8_t processQueue[UARTLoggerM$BUFFER_POOL_SIZE];
  uint8_t q_first;
  uint8_t q_num_elements;
} UARTLoggerM$BufferPool;


static __inline void UARTLoggerM$bufferPoolDbg(UARTLoggerM$BufferPool *this);
#line 130
static __inline uint8_t UARTLoggerM$bufferPoolGetNumberFree(UARTLoggerM$BufferPool *this);
#line 156
static __inline error_t UARTLoggerM$bufferPoolGetFreePos(UARTLoggerM$BufferPool *this, uint8_t *pos);
#line 224
static __inline error_t UARTLoggerM$bufferPoolGetFree(UARTLoggerM$BufferPool *this, message_t **buffer, uint8_t *status);
#line 249
static __inline error_t UARTLoggerM$bufferPoolSetFree(UARTLoggerM$BufferPool *this, message_t *ptr);
# 92 "../../tos//lib/util/UARTLoggerM.nc"
UARTLoggerM$BufferPool UARTLoggerM$buffers[1000];


uint32_t UARTLoggerM$stat_received[1000];
uint32_t UARTLoggerM$stat_self_log[1000];
uint32_t UARTLoggerM$stat_self_log_no_buffer[1000];
uint32_t UARTLoggerM$stat_written[1000];
uint32_t UARTLoggerM$stat_bad_buffer[1000];
uint32_t UARTLoggerM$stat_no_buffer[1000];
uint32_t UARTLoggerM$stat_send_failed[1000];
uint32_t UARTLoggerM$stat_send_done_failed[1000];

uint8_t UARTLoggerM$min_available_buffers[1000];
uint8_t UARTLoggerM$max_queued_send[1000];

uint16_t UARTLoggerM$msg_size[1000];

static void UARTLoggerM$update_max_queued_send(void );
#line 219
static inline error_t UARTLoggerM$Logger$LogAddLink(LinkNeighbor *n);
#line 262
static error_t UARTLoggerM$Logger$LogChangeLink(LinkNeighbor *n);
#line 305
static error_t UARTLoggerM$Logger$LogDropLink(uint16_t addr);
#line 937
static void UARTLoggerM$LogSend$sendDone(message_t *msg, error_t result);










static inline void UARTLoggerM$LogLoggerStats$runTask(void );
#line 998
static inline void UARTLoggerM$SelfTimer$fired(void );
# 53 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/system/NoLedsC.nc"
static inline void NoLedsC$Leds$led0On(void );

static inline void NoLedsC$Leds$led0Toggle(void );



static inline void NoLedsC$Leds$led1Toggle(void );



static inline void NoLedsC$Leds$led2Toggle(void );
# 110 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
static void S4QueuedSendM$QueueSendMsg$sendDone(
# 85 "../../tos//lib/commstack/S4QueuedSendM.nc"
uint8_t arg_0x7fb1af1ee6b0, 
# 103 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 67 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/TaskBasic.nc"
static error_t S4QueuedSendM$QueueServiceTask$postTask(void );
# 46 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Random.nc"
static uint32_t S4QueuedSendM$Random$rand32(void );
# 73 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Timer.nc"
static void S4QueuedSendM$QueueRetransmitTimer$startOneShot(uint32_t dt);
# 67 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Leds.nc"
static void S4QueuedSendM$Leds$led0Toggle(void );
#line 83
static void S4QueuedSendM$Leds$led1Toggle(void );
# 80 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
static error_t S4QueuedSendM$AirSendMsg$send(
# 91 "../../tos//lib/commstack/S4QueuedSendM.nc"
uint8_t arg_0x7fb1af1eb020, 
# 80 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 59 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/PacketAcknowledgements.nc"
static error_t S4QueuedSendM$Acks$requestAck(
#line 53
message_t * msg);
#line 85
static bool S4QueuedSendM$Acks$wasAcked(
#line 80
message_t * msg);
# 248 "../../tos//lib/commstack/S4QueuedSendM.nc"
enum S4QueuedSendM$__nesc_unnamed4437 {
#line 248
  S4QueuedSendM$QueueServiceTask = 12U
};
#line 248
typedef int S4QueuedSendM$__nesc_sillytask_QueueServiceTask[S4QueuedSendM$QueueServiceTask];
#line 118
enum S4QueuedSendM$__nesc_unnamed4438 {
  S4QueuedSendM$MESSAGE_QUEUE_SIZE = 32, 
  S4QueuedSendM$MAX_RETRANSMIT_COUNT = 5
};

uint8_t S4QueuedSendM$max_retransmit_count[1000];

bool S4QueuedSendM$initialized[1000];







#line 127
struct S4QueuedSendM$_msgq_entry {
  uint16_t address;
  uint8_t length;
  uint8_t id;
  uint8_t xmit_count;
  message_t *pMsg;
} S4QueuedSendM$msgqueue[1000][S4QueuedSendM$MESSAGE_QUEUE_SIZE];

uint16_t S4QueuedSendM$enqueue_next[1000];
#line 135
uint16_t S4QueuedSendM$dequeue_next[1000];
bool S4QueuedSendM$retransmit[1000];
bool S4QueuedSendM$fQueueIdle[1000];
#line 157
static error_t S4QueuedSendM$Init$init(void );
#line 182
static inline error_t S4QueuedSendM$StdControl$start(void );
#line 248
static inline void S4QueuedSendM$QueueServiceTask$runTask(void );
#line 286
static inline void S4QueuedSendM$QueueRetransmitTimer$fired(void );
#line 309
static error_t S4QueuedSendM$QueueSendMsg$send(uint8_t id, uint16_t address, message_t *msg, uint8_t length);
#line 356
static void S4QueuedSendM$AirSendMsg$sendDone(uint8_t id, message_t *msg, error_t success);
# 68 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/system/RandomLfsrC.nc"
uint16_t RandomLfsrC$shiftReg[1000];

uint16_t RandomLfsrC$mask[1000];
#line 83
static uint16_t RandomLfsrC$Random$rand16(void );
#line 99
static uint32_t RandomLfsrC$Random$rand32(void );
# 68 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMPacket.nc"
static am_addr_t S4ActiveMessageC$S4AMPacket$address(void );









static am_addr_t S4ActiveMessageC$S4AMPacket$destination(
#line 74
message_t * amsg);
# 59 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/PacketAcknowledgements.nc"
static error_t S4ActiveMessageC$S4Acks$requestAck(
#line 53
message_t * msg);
#line 85
static bool S4ActiveMessageC$S4Acks$wasAcked(
#line 80
message_t * msg);
# 18 "../../tos//lib/commstack/S4ActiveMessageC.nc"
static inline void S4ActiveMessageC$SplitControl$startDone(error_t err);



static inline void S4ActiveMessageC$SplitControl$stopDone(error_t err);



static inline am_addr_t S4ActiveMessageC$AMPacket$address(void );
#line 45
static inline am_addr_t S4ActiveMessageC$AMPacket$destination(message_t *amsg);
#line 98
static inline error_t S4ActiveMessageC$PacketAcknowledgements$requestAck(message_t *msg);



static inline bool S4ActiveMessageC$PacketAcknowledgements$wasAcked(message_t *msg);
# 42 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/GeneralIO.nc"
static void LedsP$Led0$toggle(void );
static bool LedsP$Led0$get(void );


static void LedsP$Led0$makeOutput(void );
#line 40
static void LedsP$Led0$set(void );

static void LedsP$Led1$toggle(void );
static bool LedsP$Led1$get(void );


static void LedsP$Led1$makeOutput(void );
#line 40
static void LedsP$Led1$set(void );

static void LedsP$Led2$toggle(void );
static bool LedsP$Led2$get(void );


static void LedsP$Led2$makeOutput(void );
#line 40
static void LedsP$Led2$set(void );
# 56 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/system/LedsP.nc"
static inline error_t LedsP$Init$init(void );
#line 84
static inline void LedsP$Leds$led0Toggle(void );
#line 99
static void LedsP$Leds$led1Toggle(void );
#line 114
static void LedsP$Leds$led2Toggle(void );
# 80 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
static error_t LinkEstimatorTaggerCommM$BottomSendMsg$send(
# 18 "../../tos//lib/commstack/LinkEstimatorTaggerCommM.nc"
uint8_t arg_0x7fb1af0c22f0, 
# 80 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 110
static void LinkEstimatorTaggerCommM$AMSend$sendDone(
# 9 "../../tos//lib/commstack/LinkEstimatorTaggerCommM.nc"
uint8_t arg_0x7fb1af0c7258, 
# 103 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 62 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Init.nc"
static error_t LinkEstimatorTaggerCommM$BottomStdControlInit$init(void );
# 95 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/StdControl.nc"
static error_t LinkEstimatorTaggerCommM$BottomStdControl$start(void );
# 78 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



LinkEstimatorTaggerCommM$Receive$receive(
# 10 "../../tos//lib/commstack/LinkEstimatorTaggerCommM.nc"
uint8_t arg_0x7fb1af0c63c8, 
# 71 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 68 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMPacket.nc"
static am_addr_t LinkEstimatorTaggerCommM$AMPacket$address(void );
# 31 "../../tos//lib/commstack/LinkEstimatorTaggerCommM.nc"
uint16_t LinkEstimatorTaggerCommM$my_seqno[1000];

bool LinkEstimatorTaggerCommM$initialized[1000];

static inline error_t LinkEstimatorTaggerCommM$Init$init(void );









static inline error_t LinkEstimatorTaggerCommM$StdControl$start(void );
#line 61
static error_t LinkEstimatorTaggerCommM$AMSend$send(uint8_t am, uint16_t addr, message_t *msg, uint8_t length);
#line 85
static inline void LinkEstimatorTaggerCommM$BottomSendMsg$sendDone(uint8_t am, message_t *msg, error_t success);




static inline message_t *LinkEstimatorTaggerCommM$BottomReceiveMsg$receive(uint8_t am, message_t *msg, void *payload, uint8_t len);
# 80 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
static error_t GenericCommReallyPromiscuousM$BottomSendMsg$send(
# 12 "../../tos//lib/commstack/GenericCommReallyPromiscuousM.nc"
uint8_t arg_0x7fb1af08f020, 
# 80 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 110
static void GenericCommReallyPromiscuousM$AMSend$sendDone(
# 6 "../../tos//lib/commstack/GenericCommReallyPromiscuousM.nc"
uint8_t arg_0x7fb1af094bd0, 
# 103 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



GenericCommReallyPromiscuousM$Receive$receive(
# 7 "../../tos//lib/commstack/GenericCommReallyPromiscuousM.nc"
uint8_t arg_0x7fb1af093ce8, 
# 71 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 24 "../../tos//lib/commstack/GenericCommReallyPromiscuousM.nc"
bool GenericCommReallyPromiscuousM$initialized[1000];

static inline error_t GenericCommReallyPromiscuousM$Init$init(void );





static inline error_t GenericCommReallyPromiscuousM$StdControl$start(void );
#line 52
static inline error_t GenericCommReallyPromiscuousM$AMSend$send(uint8_t am, uint16_t addr, message_t *msg, uint8_t length);










static inline error_t GenericCommReallyPromiscuousM$BottomSendMsg$default$send(uint8_t am, uint16_t addr, message_t *msg, uint8_t length);



static inline void GenericCommReallyPromiscuousM$BottomSendMsg$sendDone(uint8_t am, message_t *msg, error_t success);







static message_t *GenericCommReallyPromiscuousM$BottomReceiveMsg$receive(uint8_t am, message_t *msg, void *payload, uint8_t len);
# 110 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
static void /*GenericCommReallyPromiscuous.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(
#line 103
message_t * msg, 






error_t error);
# 75 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Send.nc"
static error_t /*GenericCommReallyPromiscuous.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$send(
#line 67
message_t * msg, 







uint8_t len);
# 103 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMPacket.nc"
static void /*GenericCommReallyPromiscuous.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 162
static void /*GenericCommReallyPromiscuous.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(
#line 158
message_t * amsg, 



am_id_t t);
# 53 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/system/AMQueueEntryP.nc"
static inline error_t /*GenericCommReallyPromiscuous.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*GenericCommReallyPromiscuous.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(message_t *m, error_t err);
# 80 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(
# 48 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/system/AMQueueImplP.nc"
am_id_t arg_0x7fb1af033020, 
# 80 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 100 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Send.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(
# 46 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/system/AMQueueImplP.nc"
uint8_t arg_0x7fb1af036e18, 
# 96 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 78 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Packet.nc"
static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$payloadLength(
#line 74
message_t * msg);
#line 94
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 67 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/TaskBasic.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$postTask(void );
# 78 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMPacket.nc"
static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(
#line 74
message_t * amsg);
#line 147
static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(
#line 143
message_t * amsg);
# 126 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/system/AMQueueImplP.nc"
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4439 {
#line 126
  AMQueueImplP$0$CancelTask = 13U
};
#line 126
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_sillytask_CancelTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask];
#line 169
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4440 {
#line 169
  AMQueueImplP$0$errorTask = 14U
};
#line 169
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_sillytask_errorTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask];
#line 57
#line 55
typedef struct /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4441 {
  message_t * msg;
} /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue_entry_t;

uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[1000];
/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue_entry_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[1000][4];
uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[1000][4 / 8 + 1];

static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend(void );

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$nextPacket(void );
#line 90
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(uint8_t clientId, message_t *msg, 
uint8_t len);
#line 126
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask(void );
#line 163
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(uint8_t last, message_t * msg, error_t err);





static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void );




static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend(void );
#line 189
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(am_id_t id, message_t *msg, error_t err);
#line 215
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(uint8_t id, message_t *msg, error_t err);
# 110 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
static void /*GenericCommReallyPromiscuous.AMBeaconSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$sendDone(
#line 103
message_t * msg, 






error_t error);
# 75 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Send.nc"
static error_t /*GenericCommReallyPromiscuous.AMBeaconSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$send(
#line 67
message_t * msg, 







uint8_t len);
# 103 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMPacket.nc"
static void /*GenericCommReallyPromiscuous.AMBeaconSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 162
static void /*GenericCommReallyPromiscuous.AMBeaconSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setType(
#line 158
message_t * amsg, 



am_id_t t);
# 53 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/system/AMQueueEntryP.nc"
static inline error_t /*GenericCommReallyPromiscuous.AMBeaconSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*GenericCommReallyPromiscuous.AMBeaconSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$sendDone(message_t *m, error_t err);
# 110 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
static void /*GenericCommReallyPromiscuous.AMLESenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$sendDone(
#line 103
message_t * msg, 






error_t error);
# 75 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Send.nc"
static error_t /*GenericCommReallyPromiscuous.AMLESenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$2$Send$send(
#line 67
message_t * msg, 







uint8_t len);
# 103 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMPacket.nc"
static void /*GenericCommReallyPromiscuous.AMLESenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$2$AMPacket$setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 162
static void /*GenericCommReallyPromiscuous.AMLESenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$2$AMPacket$setType(
#line 158
message_t * amsg, 



am_id_t t);
# 53 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/system/AMQueueEntryP.nc"
static inline error_t /*GenericCommReallyPromiscuous.AMLESenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*GenericCommReallyPromiscuous.AMLESenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$2$Send$sendDone(message_t *m, error_t err);
# 110 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
static void /*GenericCommReallyPromiscuous.AMDVSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$3$AMSend$sendDone(
#line 103
message_t * msg, 






error_t error);
# 75 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Send.nc"
static error_t /*GenericCommReallyPromiscuous.AMDVSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$3$Send$send(
#line 67
message_t * msg, 







uint8_t len);
# 103 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMPacket.nc"
static void /*GenericCommReallyPromiscuous.AMDVSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$3$AMPacket$setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 162
static void /*GenericCommReallyPromiscuous.AMDVSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$3$AMPacket$setType(
#line 158
message_t * amsg, 



am_id_t t);
# 53 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/system/AMQueueEntryP.nc"
static inline error_t /*GenericCommReallyPromiscuous.AMDVSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$3$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*GenericCommReallyPromiscuous.AMDVSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$3$Send$sendDone(message_t *m, error_t err);
# 58 "../../tos//lib/bvr/CoordinateTableM.nc"
uint8_t CoordinateTableM$num_active[1000];
CoordinateTableEntry CoordinateTableM$table[1000][COORD_TABLE_SIZE];
CoordinateTableEntry *CoordinateTableM$tablePtrs[1000][COORD_TABLE_SIZE];

bool CoordinateTableM$state_is_active[1000];


static inline error_t CoordinateTableM$Init$init(void );










static inline error_t CoordinateTableM$StdControl$start(void );
#line 97
static void CoordinateTableM$printTable(void );
#line 235
static CoordinateTableEntry *CoordinateTableM$get_entry(uint16_t addr);
#line 253
inline static CoordinateTableEntry *CoordinateTableM$get_free(void );
#line 270
static inline CoordinateTableEntry *CoordinateTableM$CoordinateTable$getEntry(uint16_t addr);





inline static void CoordinateTableM$removeEntry(uint16_t addr);
#line 302
static inline error_t CoordinateTableM$CoordinateTable$removeEntry(uint16_t addr);
#line 322
static inline CoordinateTableEntry *CoordinateTableM$CoordinateTable$storeEntry(uint16_t addr, uint16_t first_hop, 
uint8_t seqno, uint8_t quality, 
Coordinates *coords);
#line 366
static inline error_t CoordinateTableM$CoordinateTable$updateQuality(uint16_t addr, uint16_t quality);
#line 238
static uint8_t CoordinateTableM$get_entry$current_entry[1000];
# 9 "../../tos//lib/bvr/S4TopologyM.nc"
uint8_t S4TopologyM$root_beacon_id[1000][N_NODES];




uint8_t S4TopologyM$n_root_beacons[1000];

static inline error_t S4TopologyM$Init$init(void );
#line 44
static error_t S4TopologyM$S4Topology$getRootBeaconIDs(uint8_t *array);
#line 58
static error_t S4TopologyM$S4Topology$setRootBeaconID(uint16_t pos, uint8_t val);








static inline uint16_t S4TopologyM$S4Topology$getRootNodesCount(void );




static inline void S4TopologyM$S4Topology$setRootNodesCount(uint16_t nodesCount);
# 67 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Leds.nc"
static void LBlinkM$Leds$led0Toggle(void );
#line 83
static void LBlinkM$Leds$led1Toggle(void );
#line 100
static void LBlinkM$Leds$led2Toggle(void );
# 78 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Timer.nc"
static void LBlinkM$Timer$stop(void );
# 16 "../../tos//lib/util/LBlinkM.nc"
uint16_t LBlinkM$rate[1000];
uint8_t LBlinkM$yellow[1000];
uint8_t LBlinkM$red[1000];
uint8_t LBlinkM$green[1000];
bool LBlinkM$timer_on[1000];
bool LBlinkM$initialized[1000];
#line 42
static inline error_t LBlinkM$StdControl$start(void );
#line 89
static inline void LBlinkM$Timer$fired(void );
# 52 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/system/RandomMlcgC.nc"
uint32_t RandomMlcgC$seed[1000];


static inline error_t RandomMlcgC$Init$init(void );
# 78 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/heap.c"
static inline void init_heap(heap_t *heap)
#line 78
{
  heap->size = 0;
  heap->private_size = STARTING_SIZE;
  heap->data = malloc(sizeof(node_t ) * heap->private_size);
}

#line 130
static inline void expand_heap(heap_t *heap)
#line 130
{
  int new_size = heap->private_size * 2 + 1;
  void *new_data = malloc(sizeof(node_t ) * new_size);



  memcpy(new_data, heap->data, sizeof(node_t ) * heap->private_size);
  free(heap->data);

  heap->data = new_data;
  heap->private_size = new_size;
}


static inline void heap_insert(heap_t *heap, void *data, long long int key)
#line 144
{
  int findex = heap->size;

#line 146
  if (findex == heap->private_size) {
      expand_heap(heap);
    }

  findex = heap->size;
  ((node_t *)heap->data)[findex].key = key;
  ((node_t *)heap->data)[findex].data = data;
  up_heap(heap, findex);

  heap->size++;
}

#line 88
static inline int is_empty(heap_t *heap)
#line 88
{
  return heap->size == 0;
}

static inline int heap_is_empty(heap_t *heap)
#line 92
{
  return is_empty(heap);
}

static inline long long int heap_get_min_key(heap_t *heap)
#line 96
{
  if (is_empty(heap)) {
      return -1;
    }
  else {
      return ((node_t *)heap->data)[0].key;
    }
}

# 317 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/sim_log.c"
inline static int sim_log_eq(void *key1, void *key2)
#line 317
{
  return strcmp((char *)key1, (char *)key2) == 0;
}

#line 306
inline static unsigned int sim_log_hash(void *key)
#line 306
{
  char *str = (char *)key;
  unsigned int hashVal = 0;
  int hashChar;

  while ((hashChar = * str++)) 
    hashVal = hashChar + (hashVal << 6) + (hashVal << 16) - hashVal;

  return hashVal;
}

#line 159
static inline void sim_log_init()
#line 159
{
  int i;

  channelTable = create_hashtable(128, sim_log_hash, sim_log_eq);

  for (i = 0; i < SIM_LOG_OUTPUT_COUNT; i++) {
      outputs[i].num = 1;
      outputs[i].files = (FILE **)malloc(sizeof(FILE *));
      outputs[i].files[0] = fdopen(1, "w");
    }
}

# 130 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/sim_noise.c"
inline static unsigned int sim_noise_hash(void *key)
#line 130
{
  char *pt = (char *)key;
  unsigned int hashVal = 0;
  int i;

#line 134
  for (i = 0; i < NOISE_HISTORY; i++) {
      hashVal = pt[i] + (hashVal << 6) + (hashVal << 16) - hashVal;
    }
  return hashVal;
}

inline static int sim_noise_eq(void *key1, void *key2)
#line 140
{
  return memcmp((void *)key1, (void *)key2, NOISE_HISTORY) == 0;
}

# 64 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/SimMoteP.nc"
static inline bool SimMoteP$SimMote$isOn(void )
#line 64
{
  return SimMoteP$isOn[sim_node()];
}

# 172 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/sim_log.c"
static inline void sim_log_add_channel(char *name, FILE *file)
#line 172
{
  sim_log_channel_t *channel;

#line 174
  channel = (sim_log_channel_t *)hashtable_search(channelTable, name);



  if (channel == (void *)0) {
      char *newName = (char *)malloc(strlen(name) + 1);

#line 180
      strcpy(newName, name);
      newName[strlen(name)] = 0;

      channel = (sim_log_channel_t *)malloc(sizeof(sim_log_channel_t ));
      channel->name = newName;
      channel->numOutputs = 0;
      channel->size = DEFAULT_CHANNEL_SIZE;
      channel->outputs = (FILE **)malloc(sizeof(FILE *) * channel->size);
      memset(channel->outputs, 0, sizeof(FILE *) * channel->size);
      hashtable_insert(channelTable, newName, channel);
    }



  if (channel->numOutputs == channel->size) {
      FILE **newOutputs;
      int newSize = channel->size * 2;

      newOutputs = (FILE **)malloc(sizeof(FILE *) * newSize);
      memcpy(newOutputs, channel->outputs, channel->size * sizeof(FILE **));

      free(channel->outputs);

      channel->outputs = newOutputs;
      channel->size = newSize;
    }

  channel->outputs[channel->numOutputs] = file;
  channel->numOutputs++;
  sim_log_commit_change();
}

static inline bool sim_log_remove_channel(char *output, FILE *file)
#line 212
{
  sim_log_channel_t *channel;
  int i;

#line 215
  channel = (sim_log_channel_t *)hashtable_search(channelTable, output);

  if (channel == (void *)0) {
      return FALSE;
    }


  for (i = 0; i < channel->numOutputs; i++) {
      FILE *f = channel->outputs[i];

#line 224
      if (file == f) {
          memcpy(&channel->outputs[i], &channel->outputs[i + 1], channel->numOutputs - (i + 1));
          channel->outputs[channel->numOutputs - 1] = (void *)0;
          channel->numOutputs--;
        }
    }

  return TRUE;
}

# 161 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/sim_gain.c"
static inline gain_entry_t *sim_gain_allocate_link(int mote)
#line 161
{
  gain_entry_t *newLink = (gain_entry_t *)malloc(sizeof(gain_entry_t ));

#line 163
  newLink->next = (void *)0;
  newLink->mote = mote;
  newLink->gain = -10000000.0;
  return newLink;
}

# 55 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/randomlib.c"
static inline void RandomInitialise(int ij, int kl)
{
  double s;
#line 57
  double t;
  int ii;
#line 58
  int i;
#line 58
  int j;
#line 58
  int k;
#line 58
  int l;
#line 58
  int jj;
#line 58
  int m;






  if (((ij < 0 || ij > 31328) || kl < 0) || kl > 30081) {
      ij = 1802;
      kl = 9373;
    }

  i = ij / 177 % 177 + 2;
  j = ij % 177 + 2;
  k = kl / 169 % 178 + 1;
  l = kl % 169;

  for (ii = 0; ii < 97; ii++) {
      s = 0.0;
      t = 0.5;
      for (jj = 0; jj < 24; jj++) {
          m = i * j % 179 * k % 179;
          i = j;
          j = k;
          k = m;
          l = (53 * l + 1) % 169;
          if (l * m % 64 >= 32) {
            s += t;
            }
#line 86
          t *= 0.5;
        }
      randU[ii] = s;
    }

  randC = 362436.0 / 16777216.0;
  randCD = 7654321.0 / 16777216.0;
  randCM = 16777213.0 / 16777216.0;
  i97 = 97;
  j97 = 33;
  test = TRUE;
}

# 284 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/sim_noise.c"
static inline void sim_noise_alarm()
#line 284
{
  dummy = 5;
}

# 50 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/sim_packet.c"
inline static tossim_header_t *getHeader(message_t *msg)
#line 50
{
  return (tossim_header_t *)(msg->data - sizeof(tossim_header_t ));
}

# 236 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/TossimActiveMessageC.nc"
static inline void TossimActiveMessageC$active_message_deliver_handle(sim_event_t *evt)
#line 236
{
  message_t *m = (message_t *)evt->data;

#line 238
  sim_log_debug(127U, "Packet", "Delivering packet to %i at %s\n", (int )sim_node(), sim_time_string());
  TossimActiveMessageC$Model$receive(m);
}

static inline sim_event_t *TossimActiveMessageC$allocate_deliver_event(int node, message_t *msg, sim_time_t t)
#line 242
{
  sim_event_t *evt = (sim_event_t *)malloc(sizeof(sim_event_t ));

#line 244
  evt->mote = node;
  evt->time = t;
  evt->handle = TossimActiveMessageC$active_message_deliver_handle;
  evt->cleanup = sim_queue_cleanup_event;
  evt->cancelled = 0;
  evt->force = 0;
  evt->data = msg;
  return evt;
}

#line 189
static inline void *TossimActiveMessageC$Packet$getPayload(message_t *msg, uint8_t len)
#line 189
{
  if (len <= 50) {
      return msg->data;
    }
  else {
      return (void *)0;
    }
}

#line 185
static inline uint8_t TossimActiveMessageC$Packet$maxPayloadLength(void )
#line 185
{
  return 50;
}

# 88 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/ActiveMessageAddressC.nc"
static inline am_addr_t ActiveMessageAddressC$amAddress(void )
#line 88
{
  return ActiveMessageAddressC$ActiveMessageAddress$amAddress();
}

# 57 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/TossimActiveMessageC.nc"
inline static am_addr_t TossimActiveMessageC$amAddress(void ){
#line 57
  unsigned short __nesc_result;
#line 57

#line 57
  __nesc_result = ActiveMessageAddressC$amAddress();
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
#line 136
static inline am_addr_t TossimActiveMessageC$AMPacket$address(void )
#line 136
{
  return TossimActiveMessageC$amAddress();
}

#line 160
static inline bool TossimActiveMessageC$AMPacket$isForMe(message_t *amsg)
#line 160
{
  return TossimActiveMessageC$AMPacket$destination(amsg) == TossimActiveMessageC$AMPacket$address() || 
  TossimActiveMessageC$AMPacket$destination(amsg) == AM_BROADCAST_ADDR;
}

#line 212
static inline message_t *TossimActiveMessageC$Receive$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 212
{
  return msg;
}

# 78 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Receive.nc"
inline static message_t * TossimActiveMessageC$Receive$receive(am_id_t arg_0x7fb1afec2340, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  switch (arg_0x7fb1afec2340) {
#line 78
    case 55:
#line 78
      __nesc_result = GenericCommReallyPromiscuousM$BottomReceiveMsg$receive(AM_S4_APP_MSG, msg, payload, len);
#line 78
      break;
#line 78
    case 56:
#line 78
      __nesc_result = GenericCommReallyPromiscuousM$BottomReceiveMsg$receive(AM_S4_BEACON_MSG, msg, payload, len);
#line 78
      break;
#line 78
    case 59:
#line 78
      __nesc_result = GenericCommReallyPromiscuousM$BottomReceiveMsg$receive(AM_LE_REVERSE_LINK_ESTIMATION_MSG, msg, payload, len);
#line 78
      break;
#line 78
    case 201:
#line 78
      __nesc_result = GenericCommReallyPromiscuousM$BottomReceiveMsg$receive(AM_DV_MSG, msg, payload, len);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = TossimActiveMessageC$Receive$default$receive(arg_0x7fb1afec2340, msg, payload, len);
#line 78
      break;
#line 78
    }
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 310 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_uint16(const void * source)
#line 310
{
  const uint8_t *base = source;

#line 312
  return ((uint16_t )base[0] << 8) | base[1];
}

#line 281
static __inline  uint8_t __nesc_ntoh_uint8(const void * source)
#line 281
{
  const uint8_t *base = source;

#line 283
  return base[0];
}

# 78 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMPacket.nc"
inline static am_addr_t S4ActiveMessageC$S4AMPacket$destination(message_t * amsg){
#line 78
  unsigned short __nesc_result;
#line 78

#line 78
  __nesc_result = TossimActiveMessageC$AMPacket$destination(amsg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 45 "../../tos//lib/commstack/S4ActiveMessageC.nc"
static inline am_addr_t S4ActiveMessageC$AMPacket$destination(message_t *amsg)
#line 45
{
  return S4ActiveMessageC$S4AMPacket$destination(amsg);
}

# 78 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMPacket.nc"
inline static am_addr_t FilterLocalCommM$AMPacket$destination(message_t * amsg){
#line 78
  unsigned short __nesc_result;
#line 78

#line 78
  __nesc_result = S4ActiveMessageC$AMPacket$destination(amsg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 286 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_uint8(void * target, uint8_t value)
#line 286
{
  uint8_t *base = target;

#line 288
  base[0] = value;
  return value;
}

# 54 "../../tos//lib/bvr/nexthopinfo.h"
static __inline void nextHopInfoInit(nextHopInfo *this)
#line 54
{
  __nesc_hton_uint8(this->n.nxdata, 0);
  __nesc_hton_uint8(this->f.nxdata, 0);
  __nesc_hton_uint8(this->index.nxdata, 0);
}

#line 87
static __inline void forwardRoutingBufferFree(forwardRoutingBuffer *this)
#line 87
{
  this->busy = FALSE;
  nextHopInfoInit(& this->next_hops);
}

# 25 "../../tos//lib/bvr/S4Neighborhood.nc"
inline static error_t S4RouterM$Neighborhood$getNextHops(uint16_t dest_addr, uint8_t closest_beacon, uint16_t *next_hop){
#line 25
  unsigned char __nesc_result;
#line 25

#line 25
  __nesc_result = S4StateM$S4Neighborhood$getNextHops(dest_addr, closest_beacon, next_hop);
#line 25

#line 25
  return __nesc_result;
#line 25
}
#line 25
# 222 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow(void )
#line 222
{
  return /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get();
}

# 109 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow(void ){
#line 109
  unsigned int __nesc_result;
#line 109

#line 109
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 96 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/AlarmToTimerC.nc"
static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void )
{
#line 97
  return /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow();
}

# 136 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Timer.nc"
inline static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(void ){
#line 136
  unsigned int __nesc_result;
#line 136

#line 136
  __nesc_result = /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow();
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 159 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(), dt, TRUE);
}

# 73 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Timer.nc"
inline static void S4RouterM$ForwardDelayTimer$startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(13U, dt);
#line 73
}
#line 73
# 46 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Random.nc"
inline static uint32_t S4RouterM$Random$rand32(void ){
#line 46
  unsigned int __nesc_result;
#line 46

#line 46
  __nesc_result = RandomLfsrC$Random$rand32();
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 78 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMPacket.nc"
inline static am_addr_t S4RouterM$AMPacket$destination(message_t * amsg){
#line 78
  unsigned short __nesc_result;
#line 78

#line 78
  __nesc_result = S4ActiveMessageC$AMPacket$destination(amsg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 201 "TestS4SimpleM.nc"
static inline message_t *TestS4SimpleM$Receive$receive(message_t *msg, void *payload, uint16_t payloadLen)
#line 201
{

  TestS4SimpleM$d[sim_node()] = * (uint16_t *)payload;
  sim_log_debug(177U, "App", "ReceiveApp: %d; len=%d!!\n", TestS4SimpleM$d[sim_node()], payloadLen);

  return msg;
}

# 60 "../../tos//lib/interfaces/S4Receive.nc"
inline static message_t *S4RouterM$S4Receive$receive(message_t *msg, void *payload, uint16_t payloadLen){
#line 60
  nx_struct message_t *__nesc_result;
#line 60

#line 60
  __nesc_result = TestS4SimpleM$Receive$receive(msg, payload, payloadLen);
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 812 "../../tos//lib/bvr/S4RouterM.nc"
static inline void S4RouterM$duplicateCacheUpdate(uint32_t key)
#line 812
{
  int i;

  if (!S4RouterM$DUP_CACHE_ENABLED) {
    return;
    }
  i = S4RouterM$duplicateCacheGetIndex(key);
  if (i < S4RouterM$DUP_CACHE_SIZE) {
    }
  else 
    {

      S4RouterM$dup_cache[sim_node()][S4RouterM$dup_cache_index[sim_node()]].valid = TRUE;
      S4RouterM$dup_cache[sim_node()][S4RouterM$dup_cache_index[sim_node()]].key = key;



      S4RouterM$dup_cache_index[sim_node()] = (S4RouterM$dup_cache_index[sim_node()] + 1) % S4RouterM$DUP_CACHE_SIZE;
    }
}

#line 796
static inline bool S4RouterM$duplicateCacheFind(uint32_t key)
#line 796
{
  int i;
  bool isDuplicate = FALSE;

  if (!S4RouterM$DUP_CACHE_ENABLED) {
    return FALSE;
    }
  i = S4RouterM$duplicateCacheGetIndex(key);
  if (i < S4RouterM$DUP_CACHE_SIZE) {

      isDuplicate = TRUE;
    }
  return isDuplicate;
}

#line 750
static inline uint32_t S4RouterM$getMsgUid(uint16_t origin, uint16_t id)
#line 750
{
  uint32_t result = ((uint32_t )origin << 16) | (uint32_t )id;

  return result;
}

#line 564
static inline message_t *S4RouterM$Receive$receive(message_t *pMsg, void *msgPayload, uint8_t len)
#line 564
{
  unsigned char __nesc_temp47;
  unsigned char *__nesc_temp46;
  unsigned char __nesc_temp45;
  unsigned char *__nesc_temp44;
#line 565
  message_t *next_receive = (void *)0;
  S4AppMsg *pS4Msg;
  uint8_t status = LOG_ROUTE_INVALID_STATUS;

  void *payload;
  uint16_t payloadLen;


  uint32_t msg_uid;

  error_t result;

  payloadLen = 50 - ((unsigned long )& ((S4AppMsg *)0)->type_data + (unsigned long )& ((S4AppData *)0)->data);
  pS4Msg = (S4AppMsg *)msgPayload;
  payload = & pS4Msg->type_data.data;


  sim_log_debug(188U, "TestBVR", "BVRRouter$ReceiveMsg: org:%d last_hop:%d hopcount:%d  dest:%d,   time=%s\n", __nesc_ntoh_uint16(pS4Msg->type_data.origin.nxdata), __nesc_ntoh_uint16(pS4Msg->header.last_hop.nxdata), __nesc_ntoh_uint8(pS4Msg->type_data.hopcount.nxdata), __nesc_ntoh_uint16(pS4Msg->type_data.dest_id.nxdata), sim_time_string());
#line 603
  msg_uid = S4RouterM$getMsgUid(__nesc_ntoh_uint16(pS4Msg->type_data.origin.nxdata), __nesc_ntoh_uint16(pS4Msg->type_data.msg_id.nxdata));
  if (S4RouterM$duplicateCacheFind(msg_uid)) {

      sim_log_debug(189U, "S4Router", "S4Router$Receive: duplicate!! Ignoring message (src %d dest %d)\n", __nesc_ntoh_uint16(pS4Msg->type_data.origin.nxdata), __nesc_ntoh_uint16(pS4Msg->type_data.dest_id.nxdata));

      next_receive = pMsg;
      return next_receive;
    }

  S4RouterM$duplicateCacheUpdate(msg_uid);





  if (__nesc_ntoh_uint16(pS4Msg->type_data.dest_id.nxdata) == S4RouterM$AMPacket$address() || __nesc_ntoh_uint16(
  pS4Msg->type_data.dest_id.nxdata) == 0xFFFF) {

      status = LOG_ROUTE_SUCCESS;

      sim_log_debug(190U, "TestBVR", "DestinedPacket: org:%d last_hop:%d hopcount:%d  \n", __nesc_ntoh_uint16(pS4Msg->type_data.origin.nxdata), __nesc_ntoh_uint16(pS4Msg->header.last_hop.nxdata), __nesc_ntoh_uint8(pS4Msg->type_data.hopcount.nxdata));



      next_receive = S4RouterM$S4Receive$receive(pMsg, payload, payloadLen);
    }
  else 
#line 628
    {


      if (S4RouterM$forward_buffer[sim_node()].busy) {

          status = LOG_ROUTE_FAIL_NO_LOCAL_BUFFER;

          sim_log_debug(191U, "S4Router", "no forward_buffer failure\n");

          next_receive = pMsg;

          S4RouterM$duplicateCacheRemove(msg_uid);
        }
      else 
#line 640
        {
          S4RouterM$forward_buffer[sim_node()].busy = TRUE;

          next_receive = S4RouterM$forward_buffer[sim_node()].msg;
          S4RouterM$forward_buffer[sim_node()].msg = pMsg;

          if (S4RouterM$AMPacket$destination(pMsg) == 0xFFFF) {

              S4RouterM$forward_buffer[sim_node()].next_hop = 0xFFFF;

              status = SUCCESS;
              (__nesc_temp44 = pS4Msg->type_data.hopcount.nxdata, __nesc_hton_uint8(__nesc_temp44, (__nesc_temp45 = __nesc_ntoh_uint8(__nesc_temp44)) + 1), __nesc_temp45);

              if (!S4RouterM$forward_delay_timer_pending[sim_node()]) {
                  S4RouterM$forward_delay[sim_node()] = S4RouterM$Random$rand32() % S4RouterM$delay_timer_jit[sim_node()] + 1;
                  sim_log_debug(192U, "S4Router", "FLOOD: timer with delay %d \n", S4RouterM$forward_delay[sim_node()]);
#line 655
                  S4RouterM$ForwardDelayTimer$startOneShot(S4RouterM$forward_delay[sim_node()]);

                  if (FALSE) {
                      status = LOG_ROUTE_BCAST_ERROR_TIMER_FAILED;
                      forwardRoutingBufferFree(&S4RouterM$forward_buffer[sim_node()]);
                    }
                  else 
#line 660
                    {
                      S4RouterM$forward_delay_timer_pending[sim_node()] = TRUE;
                      status = SUCCESS;
                    }
                }
              else 
#line 664
                {
                  status = LOG_ROUTE_BCAST_ERROR_TIMER_PENDING;
                  forwardRoutingBufferFree(&S4RouterM$forward_buffer[sim_node()]);
                }
            }
          else 
#line 668
            {



              result = S4RouterM$Neighborhood$getNextHops(__nesc_ntoh_uint16(pS4Msg->type_data.dest_id.nxdata), __nesc_ntoh_uint8(
              pS4Msg->type_data.closest_beacon.nxdata), & S4RouterM$forward_buffer[sim_node()].next_hop);



              if (result == FAIL) {


                  status = LOG_ROUTE_FAIL_STUCK_0;




                  sim_log_debug(193U, "S4Router", "STUCK_0 failure\n");

                  forwardRoutingBufferFree(&S4RouterM$forward_buffer[sim_node()]);
                }
              else 
#line 700
                {

                  status = SUCCESS;
                  (__nesc_temp46 = pS4Msg->type_data.hopcount.nxdata, __nesc_hton_uint8(__nesc_temp46, (__nesc_temp47 = __nesc_ntoh_uint8(__nesc_temp46)) + 1), __nesc_temp47);

                  if (S4RouterM$AMPacket$address() == __nesc_ntoh_uint8(pS4Msg->type_data.closest_beacon.nxdata) && __nesc_ntoh_uint16(pS4Msg->type_data.origin.nxdata) == S4RouterM$AMPacket$address()) {
                    }
                  else 
                    {
                      S4RouterM$forwardMessage(&S4RouterM$forward_buffer[sim_node()]);
                    }
                }
            }
        }
    }


  return next_receive;
}

# 67 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/TaskBasic.nc"
inline static error_t S4StateM$processDVMessage$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(S4StateM$processDVMessage);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 59 "../../tos//lib/linkestimator/LinkEstimator.nc"
inline static error_t S4StateM$LinkEstimator$goodBidirectionalQuality(uint8_t idx, bool *good){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = LinkEstimatorM$LinkEstimator$goodBidirectionalQuality(idx, good);
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 395 "../../tos//lib/linkestimator/LinkEstimatorM.nc"
static inline error_t LinkEstimatorM$LinkEstimator$find(uint16_t addr, uint8_t *idx)
#line 395
{
  return LinkEstimatorM$find(addr, idx);
}

# 44 "../../tos//lib/linkestimator/LinkEstimator.nc"
inline static error_t S4StateM$LinkEstimator$find(uint16_t addr, uint8_t *idx){
#line 44
  unsigned char __nesc_result;
#line 44

#line 44
  __nesc_result = LinkEstimatorM$LinkEstimator$find(addr, idx);
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 78 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMPacket.nc"
inline static am_addr_t S4StateM$AMPacket$destination(message_t * amsg){
#line 78
  unsigned short __nesc_result;
#line 78

#line 78
  __nesc_result = TossimActiveMessageC$AMPacket$destination(amsg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
#line 68
inline static am_addr_t S4StateM$AMPacket$address(void ){
#line 68
  unsigned short __nesc_result;
#line 68

#line 68
  __nesc_result = TossimActiveMessageC$AMPacket$address();
#line 68

#line 68
  return __nesc_result;
#line 68
}
#line 68
# 2928 "../../tos//lib/bvr/S4StateM.nc"
static inline message_t *S4StateM$ClusterReceive$receive(message_t *rcvMsg, void *msgPayload, uint8_t len)
#line 2928
{
  message_t *next_receive = S4StateM$rcv_cluster_ptr[sim_node()];

  DVMsg *rcv_dv_msg = (DVMsg *)&rcvMsg->data[0];
  uint8_t neighbor;
  bool quality;

  S4StateM$rcv_cluster_ptr[sim_node()] = (void *)0;

  if (!S4StateM$state_is_active[sim_node()]) {
      S4StateM$rcv_cluster_ptr[sim_node()] = next_receive;
      return rcvMsg;
    }



  if (S4StateM$AMPacket$destination(rcvMsg) != S4StateM$AMPacket$address() && 
  S4StateM$AMPacket$destination(rcvMsg) != 0xFFFF) {
      S4StateM$rcv_cluster_ptr[sim_node()] = next_receive;
      return rcvMsg;
    }





  if (S4StateM$LinkEstimator$find(__nesc_ntoh_uint16(rcv_dv_msg->header.last_hop.nxdata), &neighbor) != SUCCESS) {
      S4StateM$rcv_cluster_ptr[sim_node()] = next_receive;
      return rcvMsg;
    }


  if (S4StateM$LinkEstimator$goodBidirectionalQuality(neighbor, &quality) != SUCCESS) {
    quality = FALSE;
    }
#line 2962
  if (!quality) {
      S4StateM$rcv_cluster_ptr[sim_node()] = next_receive;
      return rcvMsg;
    }


  if (!S4StateM$rcv_clusterbuffer_busy[sim_node()]) {

      S4StateM$processDVMessage$postTask();
      S4StateM$rcv_cluster_ptr[sim_node()] = rcvMsg;
      S4StateM$rcv_clusterbuffer_busy[sim_node()] = TRUE;
    }
  else 
#line 2973
    {

      sim_log_debug(300U, "S4Router", "Failure: ClusterReceive$receive: dropping message, busy processing\n");
      S4StateM$rcv_cluster_ptr[sim_node()] = next_receive;
      next_receive = rcvMsg;
    }
  return next_receive;
}

# 67 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/TaskBasic.nc"
inline static error_t S4StateM$processMessage$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(S4StateM$processMessage);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 2050 "../../tos//lib/bvr/S4StateM.nc"
static inline message_t *S4StateM$S4StateReceive$receive(message_t *rcvMsg, void *msgPayload, uint8_t payloadLength)
#line 2050
{
  message_t *next_receive = S4StateM$rcv_beacon_ptr[sim_node()];

  S4BeaconMsg *rcv_bvr_msg = (S4BeaconMsg *)&rcvMsg->data[0];
  uint8_t neighbor;
  bool quality;

  S4StateM$rcv_beacon_ptr[sim_node()] = (void *)0;

  sim_log_debug(272U, "S4-state-func", "S4StateReceive$receive: %p (rcv_beacon_ptr:%p)08\n", rcvMsg, S4StateM$rcv_beacon_ptr[sim_node()]);





  if (!S4StateM$state_is_active[sim_node()]) {
      S4StateM$rcv_beacon_ptr[sim_node()] = next_receive;
      return rcvMsg;
    }




  if (S4StateM$AMPacket$destination(rcvMsg) != S4StateM$AMPacket$address() && 
  S4StateM$AMPacket$destination(rcvMsg) != 0xFFFF) {
      S4StateM$rcv_beacon_ptr[sim_node()] = next_receive;
      return rcvMsg;
    }





  if (S4StateM$LinkEstimator$find(__nesc_ntoh_uint16(rcv_bvr_msg->header.last_hop.nxdata), &neighbor) != SUCCESS) {
      S4StateM$rcv_beacon_ptr[sim_node()] = next_receive;
      return rcvMsg;
    }



  if (S4StateM$LinkEstimator$goodBidirectionalQuality(neighbor, &quality) != SUCCESS) {
    quality = FALSE;
    }
  if (!quality) {
      S4StateM$rcv_beacon_ptr[sim_node()] = next_receive;
      return rcvMsg;
    }



  if (!S4StateM$rcv_buffer_busy[sim_node()]) {
      S4StateM$processMessage$postTask();
      S4StateM$rcv_beacon_ptr[sim_node()] = rcvMsg;
      S4StateM$rcv_buffer_busy[sim_node()] = TRUE;
      sim_log_debug(273U, "S4UserRouter", "S4StateM$S4StateReceive$receive: posting processMessage, rcv_beacon_ptr:%p\n", S4StateM$rcv_beacon_ptr[sim_node()]);
    }
  else {

      sim_log_debug(274U, "S4UserRouter", "Failure: S4StateM$S4StateReceive$receive:dropping message, busy processing\n");
      S4StateM$rcv_beacon_ptr[sim_node()] = next_receive;
      next_receive = rcvMsg;
    }
  sim_log_debug(275U, "S4UserRouter", "S4StateReceive$receive: returning %p\n", next_receive);
  return next_receive;
}

# 122 "../../tos//lib/commstack/FilterLocalCommM.nc"
static inline message_t *FilterLocalCommM$Receive$default$receive(uint8_t am, message_t *msg, void *payload, uint8_t len)
#line 122
{
  return msg;
}

# 78 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Receive.nc"
inline static message_t * FilterLocalCommM$Receive$receive(uint8_t arg_0x7fb1af848480, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  switch (arg_0x7fb1af848480) {
#line 78
    case AM_S4_APP_MSG:
#line 78
      __nesc_result = S4RouterM$Receive$receive(msg, payload, len);
#line 78
      break;
#line 78
    case AM_S4_BEACON_MSG:
#line 78
      __nesc_result = S4StateM$S4StateReceive$receive(msg, payload, len);
#line 78
      break;
#line 78
    case AM_DV_MSG:
#line 78
      __nesc_result = S4StateM$ClusterReceive$receive(msg, payload, len);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = FilterLocalCommM$Receive$default$receive(arg_0x7fb1af848480, msg, payload, len);
#line 78
      break;
#line 78
    }
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 68 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMPacket.nc"
inline static am_addr_t S4ActiveMessageC$S4AMPacket$address(void ){
#line 68
  unsigned short __nesc_result;
#line 68

#line 68
  __nesc_result = TossimActiveMessageC$AMPacket$address();
#line 68

#line 68
  return __nesc_result;
#line 68
}
#line 68
# 26 "../../tos//lib/commstack/S4ActiveMessageC.nc"
static inline am_addr_t S4ActiveMessageC$AMPacket$address(void )
#line 26
{
  return S4ActiveMessageC$S4AMPacket$address();
}

# 68 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMPacket.nc"
inline static am_addr_t FilterLocalCommM$AMPacket$address(void ){
#line 68
  unsigned short __nesc_result;
#line 68

#line 68
  __nesc_result = S4ActiveMessageC$AMPacket$address();
#line 68

#line 68
  return __nesc_result;
#line 68
}
#line 68
# 108 "../../tos//lib/commstack/FilterLocalCommM.nc"
static inline message_t *FilterLocalCommM$BottomReceiveMsg$receive(uint8_t am, message_t *msg, void *payload, uint8_t len)
#line 108
{
  if (FilterLocalCommM$AMPacket$destination(msg) == FilterLocalCommM$AMPacket$address() || FilterLocalCommM$AMPacket$destination(msg) == 0xFFFF) {
      sim_log_debug(304U, "BVR-debug", "FilterLocalCommM: addr:%d. Receive.\n", FilterLocalCommM$AMPacket$destination(msg));
      return FilterLocalCommM$Receive$receive(am, msg, payload, len);
    }
  sim_log_debug(305U, "BVR-debug", "FilterLocalCommM: addr:%d. Drop.\n", FilterLocalCommM$AMPacket$destination(msg));
  return msg;
}

# 78 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Receive.nc"
inline static message_t * LinkEstimatorCommM$Receive$receive(uint8_t arg_0x7fb1af80f908, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = FilterLocalCommM$BottomReceiveMsg$receive(arg_0x7fb1af80f908, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 99 "../../tos//lib/commstack/LinkEstimatorCommM.nc"
static __inline uint8_t LinkEstimatorCommM$getRssi(message_t *m)
#line 99
{

  return *((uint8_t *)m->metadata + 1);
}

# 60 "../../tos//lib/util/Logger.nc"
inline static error_t LinkEstimatorM$Logger$LogChangeLink(LinkNeighbor *n){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = UARTLoggerM$Logger$LogChangeLink(n);
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 1573 "../../tos//lib/bvr/S4StateM.nc"
static inline error_t S4StateM$LinkEstimatorSynch$reverseQualityChanged(uint16_t addr, uint8_t reverseQuality)
#line 1573
{
  return SUCCESS;
}

# 45 "../../tos//lib/linkestimator/LinkEstimatorSynch.nc"
inline static error_t LinkEstimatorM$LinkEstimatorSynch$reverseQualityChanged(uint16_t addr, uint8_t reverseQuality){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = S4StateM$LinkEstimatorSynch$reverseQualityChanged(addr, reverseQuality);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 569 "../../tos//lib/linkestimator/LinkEstimatorM.nc"
static inline error_t LinkEstimatorM$LinkEstimator$ageReverse(uint8_t idx)
#line 569
{
  unsigned char __nesc_temp62;
  unsigned char *__nesc_temp61;
#line 570
  LinkNeighbor *n = LinkEstimatorM$neighborCachePtrs[sim_node()][idx];

#line 571
  if ((!LinkEstimatorM$state_is_active[sim_node()] || n == (void *)0) || !(__nesc_ntoh_uint8(n->state.nxdata) & ACTIVE_MASK)) {
    return FAIL;
    }
#line 573
  if (__nesc_ntoh_uint8(n->reverse_expiration.nxdata) > 0) {
      (__nesc_temp61 = n->reverse_expiration.nxdata, __nesc_hton_uint8(__nesc_temp61, (__nesc_temp62 = __nesc_ntoh_uint8(__nesc_temp61)) - 1), __nesc_temp62);
      if (__nesc_ntoh_uint8(n->reverse_expiration.nxdata) == 0) {
          __nesc_hton_uint8(n->reverse_quality.nxdata, 0);
          LinkEstimatorM$LinkEstimatorSynch$reverseQualityChanged(__nesc_ntoh_uint16(n->addr.nxdata), __nesc_ntoh_uint8(n->reverse_quality.nxdata));

          LinkEstimatorM$Logger$LogChangeLink(n);
        }
    }

  sim_log_debug(391U, "BVR-debug", "LinkEstimator$ageReverseLink: from %d to_expire:%d\n", __nesc_ntoh_uint16(n->addr.nxdata), __nesc_ntoh_uint8(n->reverse_expiration.nxdata));
  return SUCCESS;
}

# 52 "../../tos//lib/linkestimator/LinkEstimator.nc"
inline static error_t LinkEstimatorCommM$LinkEstimator$ageReverse(uint8_t idx){
#line 52
  unsigned char __nesc_result;
#line 52

#line 52
  __nesc_result = LinkEstimatorM$LinkEstimator$ageReverse(idx);
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 622 "../../tos//lib/linkestimator/LinkEstimatorM.nc"
__inline static uint8_t LinkEstimatorM$getBidirectionalQuality(LinkNeighbor *n)
#line 622
{

  if (((
#line 623
  n == (void *)0 || !(__nesc_ntoh_uint8(n->state.nxdata) & ACTIVE_MASK)) || 
  !(__nesc_ntoh_uint8(n->state.nxdata) & VALID_QUALITY_MASK)) || !(__nesc_ntoh_uint8(n->state.nxdata) & VALID_REVERSE_MASK)) {
      return 0;
    }
  return (uint8_t )(__nesc_ntoh_uint8(n->quality.nxdata) / 255.0 * (__nesc_ntoh_uint8(n->reverse_quality.nxdata) / 255.0) * 255);
}

# 113 "../../tos//lib/bvr/coordinate_table_entry.h"
static __inline error_t CTEntryUpdateQuality(CoordinateTableEntry *e, uint8_t quality)
#line 113
{
  if (e == (void *)0) {
    return FAIL;
    }
#line 116
  __nesc_hton_uint8(e->quality.nxdata, quality);
  return SUCCESS;
}

# 366 "../../tos//lib/bvr/CoordinateTableM.nc"
static inline error_t CoordinateTableM$CoordinateTable$updateQuality(uint16_t addr, uint16_t quality)
#line 366
{
  CoordinateTableEntry *e;

  if (!CoordinateTableM$state_is_active[sim_node()]) {
    return SUCCESS;
    }
  e = CoordinateTableM$get_entry(addr);
  if (e != (void *)0) {
      CTEntryUpdateQuality(e, quality);
    }

  CoordinateTableM$printTable();
  return SUCCESS;
}

# 61 "../../tos//lib/bvr/CoordinateTable.nc"
inline static error_t S4StateM$CoordinateTable$updateQuality(uint16_t addr, uint16_t quality){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = CoordinateTableM$CoordinateTable$updateQuality(addr, quality);
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 1563 "../../tos//lib/bvr/S4StateM.nc"
static inline error_t S4StateM$LinkEstimatorSynch$bidirectionalQualityChanged(uint16_t addr, uint8_t quality)
#line 1563
{


  if (S4StateM$state_is_active[sim_node()]) {
    S4StateM$CoordinateTable$updateQuality(addr, quality);
    }

  return SUCCESS;
}

# 47 "../../tos//lib/linkestimator/LinkEstimatorSynch.nc"
inline static error_t LinkEstimatorM$LinkEstimatorSynch$bidirectionalQualityChanged(uint16_t addr, uint8_t quality){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = S4StateM$LinkEstimatorSynch$bidirectionalQualityChanged(addr, quality);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 542 "../../tos//lib/linkestimator/LinkEstimatorM.nc"
static inline error_t LinkEstimatorM$LinkEstimator$updateReverse(uint8_t idx, uint8_t reverse, uint8_t expiration)
#line 542
{
  unsigned char *__nesc_temp60;
#line 543
  LinkNeighbor *n = LinkEstimatorM$neighborCachePtrs[sim_node()][idx];
  bool changed;

  sim_log_debug(389U, "BVR-debug", "Linkestimator.updateReverse called\n");


  if ((!LinkEstimatorM$state_is_active[sim_node()] || n == (void *)0) || !(__nesc_ntoh_uint8(n->state.nxdata) & ACTIVE_MASK)) {
    return FAIL;
    }
#line 551
  sim_log_debug(390U, "BVR-debug", "LinkEstimator$updateReverseLink: from %d result:%d expiration:%d\n", __nesc_ntoh_uint16(n->addr.nxdata), reverse, expiration);
  changed = !(__nesc_ntoh_uint8(n->state.nxdata) & VALID_REVERSE_MASK) || (__nesc_ntoh_uint8(
  n->state.nxdata) & VALID_REVERSE_MASK && reverse != __nesc_ntoh_uint8(n->reverse_quality.nxdata));
  (__nesc_temp60 = n->state.nxdata, __nesc_hton_uint8(__nesc_temp60, __nesc_ntoh_uint8(__nesc_temp60) | VALID_REVERSE_MASK));
  __nesc_hton_uint8(n->reverse_quality.nxdata, reverse);
  __nesc_hton_uint8(n->reverse_expiration.nxdata, expiration);
  if (changed) {
      LinkEstimatorM$LinkEstimatorSynch$reverseQualityChanged(__nesc_ntoh_uint16(n->addr.nxdata), __nesc_ntoh_uint8(n->reverse_quality.nxdata));
      LinkEstimatorM$LinkEstimatorSynch$bidirectionalQualityChanged(__nesc_ntoh_uint16(n->addr.nxdata), LinkEstimatorM$getBidirectionalQuality(n));

      LinkEstimatorM$Logger$LogChangeLink(n);
    }

  return SUCCESS;
}

# 49 "../../tos//lib/linkestimator/LinkEstimator.nc"
inline static error_t LinkEstimatorCommM$LinkEstimator$updateReverse(uint8_t idx, uint8_t reverse, uint8_t expiration){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = LinkEstimatorM$LinkEstimator$updateReverse(idx, reverse, expiration);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 68 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMPacket.nc"
inline static am_addr_t LinkEstimatorCommM$AMPacket$address(void ){
#line 68
  unsigned short __nesc_result;
#line 68

#line 68
  __nesc_result = TossimActiveMessageC$AMPacket$address();
#line 68

#line 68
  return __nesc_result;
#line 68
}
#line 68
# 75 "../../tos//lib/linkestimator/ReverseLinkInfo.h"
static inline error_t reverseLinkInfoGetQuality(ReverseLinkInfo *rliPtr, uint16_t addr, uint8_t *quality)
#line 75
{
  int i;
  bool found = FALSE;

#line 78
  if (rliPtr == (void *)0) {
    return FAIL;
    }
#line 80
  for (i = 0; i < __nesc_ntoh_uint8(rliPtr->num_elements.nxdata) && !found; i++) {
      sim_log_debug(64U, "S4-debug", "%d\n", __nesc_ntoh_uint16(rliPtr->entries[i].addr.nxdata));
      found = __nesc_ntoh_uint16(rliPtr->entries[i].addr.nxdata) == addr;
      if (found) {
          *quality = __nesc_ntoh_uint8(rliPtr->entries[i].quality.nxdata);
        }
    }
  return found ? SUCCESS : FAIL;
}

#line 118
static inline error_t reverseLinkInfoFromMsg(ReverseLinkInfo *rliPtr, ReverseLinkMsg *msg)
#line 118
{
  *rliPtr = msg->info;
  if (__nesc_ntoh_uint8(rliPtr->num_elements.nxdata) > NUM_REVERSE_LINK_ENTRIES) {
      __nesc_hton_uint8(rliPtr->num_elements.nxdata, NUM_REVERSE_LINK_ENTRIES);
    }
  return SUCCESS;
}

# 607 "../../tos//lib/linkestimator/LinkEstimatorM.nc"
static inline error_t LinkEstimatorM$LinkEstimator$updateStrength(uint8_t idx, uint16_t strength)
#line 607
{
  if (LinkEstimatorM$state_is_active[sim_node()]) {
    return LinkEstimatorM$updateStrength(idx, strength);
    }
  else {
#line 611
    return FAIL;
    }
}

# 53 "../../tos//lib/linkestimator/LinkEstimator.nc"
inline static error_t LinkEstimatorCommM$LinkEstimator$updateStrength(uint8_t idx, uint16_t strength){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = LinkEstimatorM$LinkEstimator$updateStrength(idx, strength);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 534 "../../tos//lib/linkestimator/LinkEstimatorM.nc"
static inline error_t LinkEstimatorM$LinkEstimator$updateSeqno(uint8_t idx, uint16_t seqno)
#line 534
{
  if (LinkEstimatorM$state_is_active[sim_node()]) {
    return LinkEstimatorM$updateSeqno(idx, seqno);
    }
  else {
#line 538
    return FAIL;
    }
}

# 48 "../../tos//lib/linkestimator/LinkEstimator.nc"
inline static error_t LinkEstimatorCommM$LinkEstimator$updateSeqno(uint8_t idx, uint16_t seqno){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = LinkEstimatorM$LinkEstimator$updateSeqno(idx, seqno);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 315 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_hton_uint16(void * target, uint16_t value)
#line 315
{
  uint8_t *base = target;

#line 317
  base[1] = value;
  base[0] = value >> 8;
  return value;
}

# 82 "../../tos//lib/util/BufferPool.nc"
static __inline void UARTLoggerM$bufferPoolDbg(UARTLoggerM$BufferPool *this)
#line 82
{
  int i;

#line 84
  sim_log_debug(398U, "BVR-flag", "bufferPool: num_elements: %d, q_first: %d, q_num_elements:%d\n", this->num_elements, this->q_first, this->q_num_elements);

  sim_log_debug(399U, "BVR-flag", "bufferPool: ");
  for (i = 0; i < UARTLoggerM$BUFFER_POOL_SIZE; i++) {
      sim_log_debug_clear(400U, "BVR-flag", "[%d]:%p (%d) ", i, this->bufferPtrs[i], this->busy[i]);
    }
  sim_log_debug_clear(401U, "BVR-flag", "\n");
}

#line 249
static __inline error_t UARTLoggerM$bufferPoolSetFree(UARTLoggerM$BufferPool *this, message_t *ptr)
#line 249
{
  int i;
  uint8_t pos = 255;

#line 252
  sim_log_debug(416U, "BVR-flag", "bufferPool:setFree.\n");
  UARTLoggerM$bufferPoolDbg(this);

  for (i = 0; i < UARTLoggerM$BUFFER_POOL_SIZE && pos == 255; i++) {
      if (this->bufferPtrs[i] == ptr) {
        pos = i;
        }
    }
#line 259
  if (pos == 255) {
    return FAIL;
    }
  this->busy[pos] = FALSE;
  this->num_elements--;
  sim_log_debug(417U, "BVR-flag", "bufferPool: freeing element %p. num_busy:%d\n", ptr, this->num_elements);
  return SUCCESS;
}

# 80 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
inline static error_t UARTLoggerM$LogSend$send(am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = S4QueuedSendM$QueueSendMsg$send(AM_S4_LOG_MSG, addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 68 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMPacket.nc"
inline static am_addr_t UARTLoggerM$AMPacket$address(void ){
#line 68
  unsigned short __nesc_result;
#line 68

#line 68
  __nesc_result = TossimActiveMessageC$AMPacket$address();
#line 68

#line 68
  return __nesc_result;
#line 68
}
#line 68
# 53 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/system/NoLedsC.nc"
static inline void NoLedsC$Leds$led0On(void )
#line 53
{
}

# 56 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Leds.nc"
inline static void UARTLoggerM$Leds$led0On(void ){
#line 56
  NoLedsC$Leds$led0On();
#line 56
}
#line 56
# 156 "../../tos//lib/util/BufferPool.nc"
static __inline error_t UARTLoggerM$bufferPoolGetFreePos(UARTLoggerM$BufferPool *this, uint8_t *pos)
#line 156
{
  int i;
  uint8_t free_pos = 255;

  sim_log_debug(406U, "BVR-flag", "bufferPool:getFreePos\n");
  UARTLoggerM$bufferPoolDbg(this);
  if (this->num_elements == UARTLoggerM$BUFFER_POOL_SIZE) {
      *pos = 0;
      return FAIL;
    }

  for (i = 0; i < UARTLoggerM$BUFFER_POOL_SIZE && free_pos == 255; i++) {
      if (this->busy[i] == FALSE) {
        free_pos = i;
        }
    }
#line 171
  if (free_pos == 255) {
      sim_log_debug(407U, "BVR-flag", "bufferPool: ERROR! inconsistent state. Did not find pos, but num_busy=%d\n", this->num_elements);
      UARTLoggerM$Leds$led0On();
      *pos = free_pos;
      return FAIL;
    }
  else 
#line 176
    {
      sim_log_debug(408U, "BVR-flag", "bufferPool: returning position %d (%p)\n", free_pos, this->bufferPtrs[free_pos]);
      *pos = free_pos;
      return SUCCESS;
    }
}

#line 224
static __inline error_t UARTLoggerM$bufferPoolGetFree(UARTLoggerM$BufferPool *this, message_t **buffer, uint8_t *status)
#line 224
{
  uint8_t free_pos;

  sim_log_debug(413U, "BVR-flag", "bufferPool:Get\n");

  if (UARTLoggerM$bufferPoolGetFreePos(this, &free_pos) == FAIL) {
      sim_log_debug(414U, "BVR-flag", "bufferPool: could not get free position\n");
      *status = free_pos;
      return FAIL;
    }

  this->busy[free_pos] = TRUE;
  this->num_elements++;
  *buffer = this->bufferPtrs[free_pos];

  sim_log_debug(415U, "BVR-flag", "bufferPoolGet: returning free buffer [%d]=%p\n", free_pos, *buffer);
  UARTLoggerM$bufferPoolDbg(this);

  return SUCCESS;
}

#line 130
static __inline uint8_t UARTLoggerM$bufferPoolGetNumberFree(UARTLoggerM$BufferPool *this)
#line 130
{
  return UARTLoggerM$BUFFER_POOL_SIZE - this->num_elements;
}

# 219 "../../tos//lib/util/UARTLoggerM.nc"
static inline error_t UARTLoggerM$Logger$LogAddLink(LinkNeighbor *n)
#line 219
{
  message_t *msg_ptr;
  BVRLogMsgWrapper *log_msg;
  BVRLogMsg *log_ptr;
  uint8_t bp_status;
  error_t result;

#line 225
  if (!UARTLoggerM$LOG_LINK) {
    return SUCCESS;
    }
#line 227
  sim_log_debug(420U, "BVR-debug", "Logger$AddLink\n");
  if (n == (void *)0) {
    return FAIL;
    }
#line 230
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 230
    {
      UARTLoggerM$stat_received[sim_node()]++;
      UARTLoggerM$min_available_buffers[sim_node()] = UARTLoggerM$min_available_buffers[sim_node()] < UARTLoggerM$bufferPoolGetNumberFree(&UARTLoggerM$buffers[sim_node()]) ? 
      UARTLoggerM$min_available_buffers[sim_node()] : UARTLoggerM$bufferPoolGetNumberFree(&UARTLoggerM$buffers[sim_node()]);
      UARTLoggerM$update_max_queued_send();
      result = UARTLoggerM$bufferPoolGetFree(&UARTLoggerM$buffers[sim_node()], &msg_ptr, &bp_status);
    }
#line 236
    __nesc_atomic_end(__nesc_atomic); }
  if (result == FAIL) {
      sim_log_debug(421U, "BVR-debug", "Logger: could not get free buffer\n");
      if (bp_status) {
        UARTLoggerM$stat_bad_buffer[sim_node()]++;
        }
      else {
#line 242
        UARTLoggerM$stat_no_buffer[sim_node()]++;
        }
#line 243
      return FAIL;
    }
  log_msg = (BVRLogMsgWrapper *)&msg_ptr->data[0];
  log_ptr = (BVRLogMsg *)& log_msg->log_msg;

  __nesc_hton_uint16(log_msg->header.last_hop.nxdata, UARTLoggerM$AMPacket$address());
  __nesc_hton_uint16(log_msg->header.seqno.nxdata, (uint16_t )UARTLoggerM$stat_received[sim_node()]);

  __nesc_hton_uint8(log_ptr->type.nxdata, LOG_ADD_LINK);
  log_ptr->change_link.link = *n;

  if (UARTLoggerM$LogSend$send(AM_BROADCAST_ADDR, msg_ptr, UARTLoggerM$msg_size[sim_node()]) != SUCCESS) {
      UARTLoggerM$stat_send_failed[sim_node()]++;
      sim_log_debug(422U, "BVR-debug", "Logger: send failed, freeing the buffer\n");
      UARTLoggerM$bufferPoolSetFree(&UARTLoggerM$buffers[sim_node()], msg_ptr);
      return FAIL;
    }
  return SUCCESS;
}

# 59 "../../tos//lib/util/Logger.nc"
inline static error_t LinkEstimatorM$Logger$LogAddLink(LinkNeighbor *n){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = UARTLoggerM$Logger$LogAddLink(n);
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 204 "../../tos//lib/linkestimator/LinkEstimatorM.nc"
inline static void LinkEstimatorM$neighborSetAddress(LinkNeighbor *n, uint16_t addr)
#line 204
{
  unsigned char *__nesc_temp49;

#line 205
  (__nesc_temp49 = n->state.nxdata, __nesc_hton_uint8(__nesc_temp49, __nesc_ntoh_uint8(__nesc_temp49) | VALID_ADDR_MASK));
  __nesc_hton_uint16(n->addr.nxdata, addr);
}

#line 200
inline static void LinkEstimatorM$neighborSetActive(LinkNeighbor *n)
#line 200
{
  unsigned char *__nesc_temp48;

#line 201
  (__nesc_temp48 = n->state.nxdata, __nesc_hton_uint8(__nesc_temp48, __nesc_ntoh_uint8(__nesc_temp48) | ACTIVE_MASK));
}

# 43 "../../tos//lib/linkestimator/LinkEstimatorSynch.nc"
inline static error_t LinkEstimatorM$LinkEstimatorSynch$linkRemoved(uint16_t addr){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = S4StateM$LinkEstimatorSynch$linkRemoved(addr);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 61 "../../tos//lib/util/Logger.nc"
inline static error_t LinkEstimatorM$Logger$LogDropLink(uint16_t addr){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = UARTLoggerM$Logger$LogDropLink(addr);
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 69 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 288 "../../tos//lib/commstack/LinkEstimatorCommM.nc"
static inline error_t LinkEstimatorCommM$LinkEstimator$canEvict(uint16_t addr)
#line 288
{
  return SUCCESS;
}

# 77 "../../tos//lib/linkestimator/LinkEstimator.nc"
inline static error_t LinkEstimatorM$LinkEstimator$canEvict(uint16_t addr){
#line 77
  unsigned char __nesc_result;
#line 77

#line 77
  __nesc_result = LinkEstimatorCommM$LinkEstimator$canEvict(addr);
#line 77
  __nesc_result = ecombine(__nesc_result, S4StateM$LinkEstimator$canEvict(addr));
#line 77

#line 77
  return __nesc_result;
#line 77
}
#line 77
# 187 "../../tos//lib/linkestimator/LinkEstimatorM.nc"
inline static LinkNeighbor *LinkEstimatorM$getFreeNeighbor(void )
#line 187
{
  int i;
  LinkNeighbor *n = (void *)0;

#line 190
  for (i = 0; i < N_CACHE_SIZE; i++) {
      if ((__nesc_ntoh_uint8(LinkEstimatorM$neighborCache[sim_node()][i].state.nxdata) & ACTIVE_MASK) == 0) {
          n = (LinkNeighbor *)&LinkEstimatorM$neighborCache[sim_node()][i];
          break;
        }
    }
  sim_log_debug(353U, "BVR-temp", "getFreeNeighbor returning pos %d (%p). Active:%d. Cache Size:%d\n", i, LinkEstimatorM$neighborCache[sim_node()][i], LinkEstimatorM$active_neighbors[sim_node()], N_CACHE_SIZE);
  return n;
}

#line 410
static inline error_t LinkEstimatorM$LinkEstimator$store(uint16_t addr, uint16_t seqno, 
uint16_t strength, uint8_t *idx)
#line 411
{
  int i;
  uint8_t n;
  uint8_t min_quality = MAX_QUALITY;
  uint8_t victim = N_CACHE_SIZE;
  bool found;
  bool can_evict;

  sim_log_debug(374U, "BVR-debug", "NCache: store %d\n", addr);
  if (LinkEstimatorM$state_is_active[sim_node()]) {
      found = LinkEstimatorM$find(addr, &n);
      if (found == FAIL) {

          if (LinkEstimatorM$active_neighbors[sim_node()] < N_CACHE_SIZE) {
              sim_log_debug(375U, "BVR-debug", "NCache: miss (%d). There is space. No replacement necessary.\n", addr);

              LinkEstimatorM$neighborCachePtrs[sim_node()][LinkEstimatorM$active_neighbors[sim_node()]] = LinkEstimatorM$getFreeNeighbor();
              n = LinkEstimatorM$active_neighbors[sim_node()];
              if (LinkEstimatorM$neighborCachePtrs[sim_node()][n] == (void *)0) {
                  sim_log_debug(376U, "BVR-temp", "LinkEstimatorM$store: getFreeNeighbor returned NULL, there's no actual free space\n");
                }
              LinkEstimatorM$active_neighbors[sim_node()]++;
              sim_log_debug(377U, "BVR-temp", "LinkEstimatorM$store: %d not in cache. There was space. active_neighbors = %d\n", addr, LinkEstimatorM$active_neighbors[sim_node()]);
            }
          else 
#line 434
            {



              if (LinkEstimatorM$active_neighbors[sim_node()] != N_CACHE_SIZE) {
                sim_log_debug(378U, "BVR-temp", "LinkEstimatorM$store: assertion failed: active_neighbor == N_CACHE_SIZE is false (%d)(%d)\n", LinkEstimatorM$active_neighbors[sim_node()], N_CACHE_SIZE);
                }
#line 440
              sim_log_debug(379U, "BVR-debug", "NCache: miss (%d). There is no space. Replacement necessary.\n", addr);








              for (i = 0; i < LinkEstimatorM$active_neighbors[sim_node()]; i++) {

                  if (__nesc_ntoh_uint8(
#line 450
                  LinkEstimatorM$neighborCachePtrs[sim_node()][i]->chances.nxdata) == 0 && __nesc_ntoh_uint8(
                  LinkEstimatorM$neighborCachePtrs[sim_node()][i]->quality.nxdata) < min_quality && __nesc_ntoh_uint8(
                  LinkEstimatorM$neighborCachePtrs[sim_node()][i]->quality.nxdata) < LINK_ESTIMATOR_REPLACE_THRESH) {

                      can_evict = LinkEstimatorM$LinkEstimator$canEvict(__nesc_ntoh_uint16(LinkEstimatorM$neighborCachePtrs[sim_node()][i]->addr.nxdata)) == SUCCESS;
                      if (can_evict) {
                          min_quality = __nesc_ntoh_uint8(LinkEstimatorM$neighborCachePtrs[sim_node()][i]->quality.nxdata);
                          victim = i;
                        }
                    }
                }

              sim_log_debug(380U, "BVR-debug", "NCache: CacheTable\n");
              for (i = 0; i < LinkEstimatorM$active_neighbors[sim_node()]; i++) {
                  sim_log_debug(381U, "BVR-debug", "NCache:\t Cache[%d]. Addr:%d Quality:%d Chance:%d%s\n", i, __nesc_ntoh_uint16(LinkEstimatorM$neighborCachePtrs[sim_node()][i]->addr.nxdata), __nesc_ntoh_uint8(LinkEstimatorM$neighborCachePtrs[sim_node()][i]->quality.nxdata), __nesc_ntoh_uint8(LinkEstimatorM$neighborCachePtrs[sim_node()][i]->chances.nxdata), i == victim ? " <-- victim HA HA HA!!!" : "");
                }






              if (victim == N_CACHE_SIZE) {
                  sim_log_debug(382U, "BVR-debug", "NCache: miss (%d). Did not find victim to replace, ignoring\n", addr);
                  return FAIL;
                }
              else 
#line 475
                {

                  n = victim;

                  LinkEstimatorM$Logger$LogDropLink(__nesc_ntoh_uint16(LinkEstimatorM$neighborCachePtrs[sim_node()][n]->addr.nxdata));

                  LinkEstimatorM$LinkEstimatorSynch$linkRemoved(__nesc_ntoh_uint16(LinkEstimatorM$neighborCachePtrs[sim_node()][n]->addr.nxdata));
                  sim_log_debug(383U, "BVR-debug", "NCache: miss (%d) replace [%d], addr:%d\n", addr, n, __nesc_ntoh_uint16(LinkEstimatorM$neighborCachePtrs[sim_node()][n]->addr.nxdata));
                  sim_log_debug(384U, "BVR-temp", "Neighborhood DIRECTED GRAPH: remove edge %d\n", __nesc_ntoh_uint16(LinkEstimatorM$neighborCachePtrs[sim_node()][n]->addr.nxdata));
                  sim_log_debug(385U, "BVR-temp", "LinkEstimatorM$Store: replacing entry no. %d (addr %d)\n", n, __nesc_ntoh_uint16(LinkEstimatorM$neighborCachePtrs[sim_node()][n]->addr.nxdata));
                  LinkEstimatorM$neighborInit(LinkEstimatorM$neighborCachePtrs[sim_node()][n]);
                }
            }

          LinkEstimatorM$neighborSetActive(LinkEstimatorM$neighborCachePtrs[sim_node()][n]);
          LinkEstimatorM$neighborSetAddress(LinkEstimatorM$neighborCachePtrs[sim_node()][n], addr);

          LinkEstimatorM$Logger$LogAddLink(LinkEstimatorM$neighborCachePtrs[sim_node()][n]);

          sim_log_debug(386U, "BVR-temp", "Neighborhood DIRECTED GRAPH: add edge %d label: %d\n", addr, LinkEstimatorM$getQuality(n));
        }
      else 
#line 495
        {

          sim_log_debug(387U, "BVR-debug", "NCache: store called, but addr (%d) already in cache\n", addr);
        }
      LinkEstimatorM$updateSeqno(n, seqno);
      LinkEstimatorM$updateStrength(n, strength);

      *idx = n;
      return SUCCESS;
    }
  else 
#line 504
    {

      return FAIL;
    }
}

# 45 "../../tos//lib/linkestimator/LinkEstimator.nc"
inline static error_t LinkEstimatorCommM$LinkEstimator$store(uint16_t addr, uint16_t seqno, uint16_t strength, uint8_t *idx){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = LinkEstimatorM$LinkEstimator$store(addr, seqno, strength, idx);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
#line 44
inline static error_t LinkEstimatorCommM$LinkEstimator$find(uint16_t addr, uint8_t *idx){
#line 44
  unsigned char __nesc_result;
#line 44

#line 44
  __nesc_result = LinkEstimatorM$LinkEstimator$find(addr, idx);
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 187 "../../tos//lib/commstack/LinkEstimatorCommM.nc"
static inline message_t *LinkEstimatorCommM$BottomReceiveMsg$receive(uint8_t am, message_t *msg, void *payload, uint8_t len)
#line 187
{
  bool found = FALSE;
  bool stored = FALSE;
  LEHeader *link_header_ptr = (LEHeader *)&msg->data[0];
  uint8_t reverse_quality;
  uint8_t reverse_expiration;
  uint8_t idx;

  if (__nesc_ntoh_uint16(link_header_ptr->last_hop.nxdata) == LinkEstimatorCommM$AMPacket$address()) {
      sim_log_debug(311U, "BVR-debug", "LinkEstimatorCommM: received packet from ourselves!!! (%p)\n", msg);
      return msg;
    }



  if (LinkEstimatorCommM$state_is_active[sim_node()] && (
  !LinkEstimatorCommM$filter_by_strength[sim_node()] || (
  LinkEstimatorCommM$filter_by_strength[sim_node()] && LinkEstimatorCommM$getRssi(msg) < SIGNAL_STRENGTH_FILTER_THRESHOLD))) {


      sim_log_debug(312U, "BVR-debug", "LinkEstimatorCommM: packet will be used for link estimation (strength:%d)\n", LinkEstimatorCommM$getRssi(msg));

      LinkEstimatorCommM$link_msg_ptr[sim_node()] = (ReverseLinkMsg *)&msg->data[0];

      found = LinkEstimatorCommM$LinkEstimator$find(__nesc_ntoh_uint16(link_header_ptr->last_hop.nxdata), &idx) == SUCCESS;

      sim_log_debug(313U, "BVR-debug", "LinkEstimatorCommM.receive: Found or not %d\n", found);

      if (!found) {
          stored = LinkEstimatorCommM$LinkEstimator$store(__nesc_ntoh_uint16(link_header_ptr->last_hop.nxdata), __nesc_ntoh_uint16(
          link_header_ptr->seqno.nxdata), LinkEstimatorCommM$getRssi(msg), &idx) == SUCCESS;
        }
      else 
#line 218
        {
          LinkEstimatorCommM$LinkEstimator$updateSeqno(idx, __nesc_ntoh_uint16(link_header_ptr->seqno.nxdata));
          LinkEstimatorCommM$LinkEstimator$updateStrength(idx, LinkEstimatorCommM$getRssi(msg));
        }
      if (found || stored) {
          if (am == AM_LE_REVERSE_LINK_ESTIMATION_MSG) {
              reverseLinkInfoFromMsg(&LinkEstimatorCommM$link_info_buf[sim_node()], LinkEstimatorCommM$link_msg_ptr[sim_node()]);

              sim_log_debug(314U, "S4-debug", "before reverseLinkInfoGetQuality:  %x %d rliPtr->num_elements=%d\n", &LinkEstimatorCommM$link_info_buf[sim_node()], LinkEstimatorCommM$AMPacket$address(), __nesc_ntoh_uint8(LinkEstimatorCommM$link_info_buf[sim_node()].num_elements.nxdata));
              if (reverseLinkInfoGetQuality(&LinkEstimatorCommM$link_info_buf[sim_node()], LinkEstimatorCommM$AMPacket$address(), &reverse_quality) == SUCCESS) {
                  reverse_expiration = (__nesc_ntoh_uint8(LinkEstimatorCommM$link_info_buf[sim_node()].total_links.nxdata) / __nesc_ntoh_uint8(LinkEstimatorCommM$link_info_buf[sim_node()].num_elements.nxdata) + 1) * 3;
                  sim_log_debug(315U, "BVR-debug", "LinkEstimatorCommM: links: %d received: %d expiration:%d\n", __nesc_ntoh_uint8(LinkEstimatorCommM$link_info_buf[sim_node()].total_links.nxdata), __nesc_ntoh_uint8(LinkEstimatorCommM$link_info_buf[sim_node()].num_elements.nxdata), reverse_expiration);

                  LinkEstimatorCommM$LinkEstimator$updateReverse(idx, reverse_quality, reverse_expiration);
                }
              else 
#line 232
                {
                  LinkEstimatorCommM$LinkEstimator$ageReverse(idx);
                }
            }
        }
      else 
#line 236
        {

          sim_log_debug(316U, "BVR-debug", "LinkEstimatorCommM: neighbor (%d) cannot be stored now\n", __nesc_ntoh_uint16(link_header_ptr->last_hop.nxdata));
        }
    }
  else 
#line 240
    {
      sim_log_debug(317U, "BVR-debug", "LinkEstimatorCommM: packet not used for link estimation (strength:%d)\n", LinkEstimatorCommM$getRssi(msg));
    }

  sim_log_debug(318U, "BVR-debug", "LinkEstimatorCommM: received message from:%d seqno:%d AM:%d strength:%d found:%d stored:%d\n", __nesc_ntoh_uint16(link_header_ptr->last_hop.nxdata), __nesc_ntoh_uint16(link_header_ptr->seqno.nxdata), am, LinkEstimatorCommM$getRssi(msg), found, stored);

  return LinkEstimatorCommM$Receive$receive(am, msg, payload, len);
}

# 78 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Receive.nc"
inline static message_t * LinkEstimatorTaggerCommM$Receive$receive(uint8_t arg_0x7fb1af0c63c8, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = LinkEstimatorCommM$BottomReceiveMsg$receive(arg_0x7fb1af0c63c8, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 90 "../../tos//lib/commstack/LinkEstimatorTaggerCommM.nc"
static inline message_t *LinkEstimatorTaggerCommM$BottomReceiveMsg$receive(uint8_t am, message_t *msg, void *payload, uint8_t len)
#line 90
{
  return LinkEstimatorTaggerCommM$Receive$receive(am, msg, payload, len);
}

# 78 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Receive.nc"
inline static message_t * GenericCommReallyPromiscuousM$Receive$receive(uint8_t arg_0x7fb1af093ce8, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = LinkEstimatorTaggerCommM$BottomReceiveMsg$receive(arg_0x7fb1af093ce8, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 83 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Leds.nc"
inline static void S4QueuedSendM$Leds$led1Toggle(void ){
#line 83
  LedsP$Leds$led1Toggle();
#line 83
}
#line 83
# 60 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$toggle(void )
#line 60
{
#line 60
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 60
    atm128RegFile[sim_node()][27U] ^= 1 << 1;
#line 60
    __nesc_atomic_end(__nesc_atomic); }
}

# 42 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led1$toggle(void ){
#line 42
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$toggle();
#line 42
}
#line 42
# 54 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$get(void )
#line 54
{
#line 54
  return (atm128RegFile[sim_node()][27U] & (1 << 1)) != 0;
}

# 43 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/GeneralIO.nc"
inline static bool LedsP$Led1$get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 67 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/TaskBasic.nc"
inline static error_t S4QueuedSendM$QueueServiceTask$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(S4QueuedSendM$QueueServiceTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 139 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline bool SimSchedulerBasicP$isWaiting(uint8_t id)
{
  return SimSchedulerBasicP$m_next[sim_node()][id] != SimSchedulerBasicP$NO_TASK || SimSchedulerBasicP$m_tail[sim_node()] == id;
}

static inline bool SimSchedulerBasicP$pushTask(uint8_t id)
{
  if (!SimSchedulerBasicP$isWaiting(id)) 
    {
      if (SimSchedulerBasicP$m_head[sim_node()] == SimSchedulerBasicP$NO_TASK) 
        {
          SimSchedulerBasicP$m_head[sim_node()] = id;
          SimSchedulerBasicP$m_tail[sim_node()] = id;
        }
      else 
        {
          SimSchedulerBasicP$m_next[sim_node()][SimSchedulerBasicP$m_tail[sim_node()]] = id;
          SimSchedulerBasicP$m_tail[sim_node()] = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

#line 69
static inline int SimSchedulerBasicP$sim_config_task_latency(void )
#line 69
{
#line 69
  return 100;
}

# 276 "../../tos//lib/bvr/CoordinateTableM.nc"
inline static void CoordinateTableM$removeEntry(uint16_t addr)
#line 276
{
  int i;
#line 277
  int j;
#line 277
  int removed;

#line 278
  removed = 0;


  for (i = 0, j = 0; j < CoordinateTableM$num_active[sim_node()]; i++, j++) {
      while (j < CoordinateTableM$num_active[sim_node()] && (__nesc_ntoh_uint16(CoordinateTableM$tablePtrs[sim_node()][j]->addr.nxdata) == addr || __nesc_ntoh_uint16(CoordinateTableM$tablePtrs[sim_node()][j]->first_hop.nxdata) == addr)) {


          __nesc_hton_uint8(CoordinateTableM$tablePtrs[sim_node()][j]->valid.nxdata, FALSE);
          j++;
          removed++;
        }
      if (i < j && j < CoordinateTableM$num_active[sim_node()]) {
          CoordinateTableM$tablePtrs[sim_node()][i] = CoordinateTableM$tablePtrs[sim_node()][j];
          __nesc_hton_uint8(CoordinateTableM$tablePtrs[sim_node()][i]->pos.nxdata, i);
        }
    }
  if (removed) {
      CoordinateTableM$num_active[sim_node()] -= removed;
      sim_log_debug(499U, "BVR", "COORD_TABLE: cleanup\n");
      CoordinateTableM$printTable();
    }
}


static inline error_t CoordinateTableM$CoordinateTable$removeEntry(uint16_t addr)
#line 302
{
  if (CoordinateTableM$state_is_active[sim_node()]) {
    CoordinateTableM$removeEntry(addr);
    }
#line 305
  return SUCCESS;
}

# 59 "../../tos//lib/bvr/CoordinateTable.nc"
inline static error_t S4StateM$CoordinateTable$removeEntry(uint16_t addr){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = CoordinateTableM$CoordinateTable$removeEntry(addr);
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 67 "../../tos//lib/bvr/S4TopologyM.nc"
static inline uint16_t S4TopologyM$S4Topology$getRootNodesCount(void )
#line 67
{
  return S4TopologyM$n_root_beacons[sim_node()];
}

# 6 "../../tos//lib/bvr/S4Topology.nc"
inline static uint16_t S4StateM$S4Topology$getRootNodesCount(void ){
#line 6
  unsigned short __nesc_result;
#line 6

#line 6
  __nesc_result = S4TopologyM$S4Topology$getRootNodesCount();
#line 6

#line 6
  return __nesc_result;
#line 6
}
#line 6
# 924 "../../tos//lib/bvr/S4StateM.nc"
inline static void S4StateM$dropParent(uint8_t addr)
#line 924
{
  int i;

  for (i = 0; i < S4StateM$S4Topology$getRootNodesCount(); i++) {
      if (S4StateM$rootBeacons[sim_node()][i].parent == addr) {
          sim_log_debug(219U, "S4-debug", "Dropping parent %d for root %d\n", addr, i);
          S4StateM$rootBeaconInit(&S4StateM$rootBeacons[sim_node()][i]);
          __nesc_hton_uint16(S4StateM$my_coords_parents[sim_node()].parent[i].nxdata, 0xFFFF);
        }
    }
}

# 67 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 61 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/SimMoteP.nc"
static inline long long int SimMoteP$SimMote$getStartTime(void )
#line 61
{
  return SimMoteP$startTime[sim_node()];
}

# 127 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline sim_time_t HplAtm128Timer0AsyncP$notify_clockTicksPerSec(void )
#line 127
{
  return ATM128_TIMER0_TICKSPPS;
}

#line 154
static inline sim_time_t HplAtm128Timer0AsyncP$sim_to_clock(sim_time_t t)
#line 154
{
  t *= HplAtm128Timer0AsyncP$notify_clockTicksPerSec();
  t /= sim_ticks_per_sec();
  return t;
}

# 53 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag(void ){
#line 53
  union __nesc_unnamed4395 __nesc_result;
#line 53

#line 53
  __nesc_result = HplAtm128Timer0AsyncP$Timer0Ctrl$getInterruptFlag();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 80 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
inline static error_t LinkEstimatorCommM$BottomSendMsg$send(uint8_t arg_0x7fb1af80d4d0, am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = S4QueuedSendM$QueueSendMsg$send(arg_0x7fb1af80d4d0, addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 159 "../../tos//lib/commstack/LinkEstimatorCommM.nc"
static inline error_t LinkEstimatorCommM$AMSend$send(uint8_t am, uint16_t addr, message_t *msg, uint8_t length)
#line 159
{
  sim_log_debug(308U, "BVR-debug", "LinkEstimatorCommM$AMSend am=%d\n", am);

  return LinkEstimatorCommM$BottomSendMsg$send(am, addr, msg, length);
}

# 80 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
inline static error_t FilterLocalCommM$BottomSendMsg$send(uint8_t arg_0x7fb1af8460c8, am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = LinkEstimatorCommM$AMSend$send(arg_0x7fb1af8460c8, addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 81 "../../tos//lib/commstack/FilterLocalCommM.nc"
static inline error_t FilterLocalCommM$AMSend$send(uint8_t am, uint16_t addr, message_t *msg, uint8_t length)
#line 81
{
  sim_log_debug(302U, "BVR-debug", "FilterLocalCommM$AMSend$send am=%d\n", am);

  return FilterLocalCommM$BottomSendMsg$send(am, addr, msg, length);
}

# 80 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
inline static error_t S4RouterM$AMSend$send(am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = FilterLocalCommM$AMSend$send(AM_S4_APP_MSG, addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 216 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/TossimActiveMessageC.nc"
static inline message_t *TossimActiveMessageC$Snoop$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 216
{
  return msg;
}

# 78 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Receive.nc"
inline static message_t * TossimActiveMessageC$Snoop$receive(am_id_t arg_0x7fb1afec1020, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
    __nesc_result = TossimActiveMessageC$Snoop$default$receive(arg_0x7fb1afec1020, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 89 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/sim/atm128hardware.h"
static __inline void __nesc_disable_interrupt()
#line 89
{
  atm128RegFile[sim_node()][* (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F]] &= ~(1 << 7);
}






#line 97
__inline  __nesc_atomic_t 
__nesc_atomic_start(void )
{
  __nesc_atomic_t result = * (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F];

#line 101
  __nesc_disable_interrupt();
  return result;
}



#line 106
__inline  void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)
{
  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F] = original_SREG;
}

# 85 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline void SimSchedulerBasicP$sim_scheduler_event_handle(sim_event_t *e)
#line 85
{
  SimSchedulerBasicP$sim_scheduler_event_pending[sim_node()] = FALSE;








  if (SimSchedulerBasicP$Scheduler$runNextTask()) {
      SimSchedulerBasicP$sim_scheduler_submit_event();
    }
}




static inline void SimSchedulerBasicP$sim_scheduler_event_init(sim_event_t *e)
#line 103
{
  e->mote = sim_node();
  e->force = 0;
  e->data = (void *)0;
  e->handle = SimSchedulerBasicP$sim_scheduler_event_handle;
  e->cleanup = sim_queue_cleanup_none;
}

#line 166
static inline void SimSchedulerBasicP$Scheduler$init(void )
{
  sim_log_debug(114U, "Scheduler", "Initializing scheduler.\n");
  /* atomic removed: atomic calls only */
  {
    memset(SimSchedulerBasicP$m_next[sim_node()], SimSchedulerBasicP$NO_TASK, sizeof SimSchedulerBasicP$m_next[sim_node()]);
    SimSchedulerBasicP$m_head[sim_node()] = SimSchedulerBasicP$NO_TASK;
    SimSchedulerBasicP$m_tail[sim_node()] = SimSchedulerBasicP$NO_TASK;

    SimSchedulerBasicP$sim_scheduler_event_pending[sim_node()] = FALSE;
    SimSchedulerBasicP$sim_scheduler_event_init(&SimSchedulerBasicP$sim_scheduler_event[sim_node()]);
  }
}

# 57 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Scheduler.nc"
inline static void SimMainP$Scheduler$init(void ){
#line 57
  SimSchedulerBasicP$Scheduler$init();
#line 57
}
#line 57
# 120 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline uint8_t SimSchedulerBasicP$popTask(void )
{
  if (SimSchedulerBasicP$m_head[sim_node()] != SimSchedulerBasicP$NO_TASK) 
    {
      uint8_t id = SimSchedulerBasicP$m_head[sim_node()];

#line 125
      SimSchedulerBasicP$m_head[sim_node()] = SimSchedulerBasicP$m_next[sim_node()][SimSchedulerBasicP$m_head[sim_node()]];
      if (SimSchedulerBasicP$m_head[sim_node()] == SimSchedulerBasicP$NO_TASK) 
        {
          SimSchedulerBasicP$m_tail[sim_node()] = SimSchedulerBasicP$NO_TASK;
        }
      SimSchedulerBasicP$m_next[sim_node()][id] = SimSchedulerBasicP$NO_TASK;
      return id;
    }
  else 
    {
      return SimSchedulerBasicP$NO_TASK;
    }
}

# 68 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMPacket.nc"
inline static am_addr_t TestS4SimpleM$AMPacket$address(void ){
#line 68
  unsigned short __nesc_result;
#line 68

#line 68
  __nesc_result = TossimActiveMessageC$AMPacket$address();
#line 68

#line 68
  return __nesc_result;
#line 68
}
#line 68
# 57 "../../tos//lib/interfaces/S4Send.nc"
inline static void *TestS4SimpleM$Send$getBuffer(message_t *msg, uint16_t *length){
#line 57
  void *__nesc_result;
#line 57

#line 57
  __nesc_result = S4RouterM$S4Send$getBuffer(msg, length);
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
# 42 "../../tos//lib/util/LBlinkM.nc"
static inline error_t LBlinkM$StdControl$start(void )
#line 42
{
  if (!LBlinkM$initialized[sim_node()]) {


      LBlinkM$rate[sim_node()] = 0;
      LBlinkM$timer_on[sim_node()] = FALSE;
      LBlinkM$yellow[sim_node()] = LBlinkM$red[sim_node()] = LBlinkM$green[sim_node()] = 0;
      LBlinkM$initialized[sim_node()] = TRUE;
    }

  return SUCCESS;
}

# 95 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/StdControl.nc"
inline static error_t TestS4SimpleM$LBlinkControl$start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = LBlinkM$StdControl$start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 18 "../../tos//lib/bvr/S4Locator.nc"
inline static error_t S4RouterM$Locator$getCoordinates(Coordinates *coords){
#line 18
  unsigned char __nesc_result;
#line 18

#line 18
  __nesc_result = S4StateM$S4Locator$getCoordinates(coords);
#line 18

#line 18
  return __nesc_result;
#line 18
}
#line 18
# 756 "../../tos//lib/bvr/S4RouterM.nc"
static inline void S4RouterM$duplicateCacheInit(void )
#line 756
{
  int i;

#line 758
  for (i = 0; i < S4RouterM$DUP_CACHE_SIZE; i++) {
      S4RouterM$dup_cache[sim_node()][i].valid = FALSE;
    }
  S4RouterM$dup_cache_index[sim_node()] = 0;
}

# 92 "../../tos//lib/bvr/nexthopinfo.h"
static __inline void forwardRoutingBufferInit(forwardRoutingBuffer *this, message_t *msg)
#line 92
{
  forwardRoutingBufferFree(this);
  this->msg = msg;
}

# 278 "../../tos//lib/bvr/S4RouterM.nc"
static inline error_t S4RouterM$StdControl$start(void )
#line 278
{
  if (!S4RouterM$initialized[sim_node()]) {

      S4RouterM$local_message_counter[sim_node()] = 0;
      forwardRoutingBufferInit(&S4RouterM$send_buffer[sim_node()], (void *)0);
      forwardRoutingBufferInit(&S4RouterM$forward_buffer[sim_node()], &S4RouterM$fwd_buf[sim_node()]);
      S4RouterM$forward_delay_timer_pending[sim_node()] = FALSE;
      S4RouterM$delay_timer_jit[sim_node()] = S4RouterM$BCAST_MEAN_DELAY;

      S4RouterM$duplicateCacheInit();

      S4RouterM$coords_valid[sim_node()] = FALSE;




      S4RouterM$initialized[sim_node()] = TRUE;
    }

  S4RouterM$coords_valid[sim_node()] = S4RouterM$Locator$getCoordinates(&S4RouterM$my_coords[sim_node()]) == SUCCESS;
  return SUCCESS;
}

# 76 "../../tos//lib/bvr/CoordinateTableM.nc"
static inline error_t CoordinateTableM$StdControl$start(void )
#line 76
{
  return SUCCESS;
}

# 95 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/StdControl.nc"
inline static error_t S4StateM$CoordinateTableControl$start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = CoordinateTableM$StdControl$start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 60 "../../tos//lib/bvr/coordinate_table_entry.h"
static __inline error_t CTEntryInit(CoordinateTableEntry *e)
#line 60
{
  if (e == (void *)0) {
    return FAIL;
    }
  __nesc_hton_uint8(e->valid.nxdata, FALSE);
  __nesc_hton_uint16(e->first_hop.nxdata, 0);
  __nesc_hton_uint8(e->last_seqno.nxdata, 0);
  __nesc_hton_uint16(e->addr.nxdata, 0);
  __nesc_hton_uint8(e->quality.nxdata, 0);
  coordinates_init(& e->coords);
  __nesc_hton_uint8(e->pos.nxdata, 0);
  return SUCCESS;
}

# 65 "../../tos//lib/bvr/CoordinateTableM.nc"
static inline error_t CoordinateTableM$Init$init(void )
#line 65
{
  int i;

#line 67
  CoordinateTableM$state_is_active[sim_node()] = TRUE;
  sim_log_debug(485U, "BVR-debug", "CoordinateTableM.init\n");
  for (i = 0; i < COORD_TABLE_SIZE; i++) {
      CTEntryInit(&CoordinateTableM$table[sim_node()][i]);
    }

  sim_log_debug(486U, "BVR-debug", "CoordinateTableM.init ended\n");
  return SUCCESS;
}

# 62 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Init.nc"
inline static error_t S4StateM$CoordinateTableControlInit$init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = CoordinateTableM$Init$init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 2421 "../../tos//lib/bvr/S4StateM.nc"
inline static void S4StateM$init_cluster_msg(void )
#line 2421
{
  S4StateM$cluster_msg_ptr[sim_node()] = (DVMsg *)&S4StateM$cluster_buf[sim_node()].data[0];
  S4StateM$cluster_data_ptr[sim_node()] = (DVMsgData *)& S4StateM$cluster_msg_ptr[sim_node()]->type_data;
  return;
}

#line 849
inline static void S4StateM$rootBeaconSetMyself(S4RootBeacon *b)
#line 849
{

  if (b != (void *)0) {
      b->valid = 1;
      b->nodeid = S4StateM$AMPacket$address();
      b->parent = 0xFFFF;
      b->hops = 0;
      b->last_seqno = S4StateM$root_beacon_seqno[sim_node()];

      b->combined_quality = 0;




      b->updated = 0;
    }
  else {







    sim_log_debug(215U, "S4-error", "rootBeaconSetMyself called with NULL pointer\n");
    }
}

#line 897
inline static void S4StateM$init_my_coords(void )
#line 897
{
  int i;

#line 899
  sim_log_debug(216U, "S4-beacon", "init_my_coords: state_is_root_beacon:%d, root_beacon_id=%d\n", S4StateM$state_is_root_beacon[sim_node()], S4StateM$root_beacon_id[sim_node()]);
  coordinates_init(&S4StateM$my_coords[sim_node()]);
  if (S4StateM$state_is_root_beacon[sim_node()]) {
      coordinates_set_component(&S4StateM$my_coords[sim_node()], S4StateM$root_beacon_id[sim_node()], 0);
      S4StateM$rootBeaconSetMyself(&S4StateM$rootBeacons[sim_node()][S4StateM$root_beacon_id[sim_node()]]);
    }
  sim_log_debug(217U, "S4-debug", "init_my_coords:");
  coordinates_print(&S4StateM$my_coords[sim_node()]);
  for (i = 0; i < S4StateM$S4Topology$getRootNodesCount(); i++) {
      sim_log_debug(218U, "S4-beacon", "init_my_coords: rootBeacons[%d].nodeid=%d\n", i, S4StateM$rootBeacons[sim_node()][i].nodeid);

      if (S4StateM$rootBeacons[sim_node()][i].valid) {
          __nesc_hton_uint16(S4StateM$my_coords_parents[sim_node()].parent[i].nxdata, S4StateM$rootBeacons[sim_node()][i].parent);
        }
      else 
#line 912
        {
          __nesc_hton_uint16(S4StateM$my_coords_parents[sim_node()].parent[i].nxdata, 0xFFFF);
        }
    }
}

#line 664
inline static void S4StateM$init_beacon_msg(void )
#line 664
{
  S4StateM$beacon_msg_ptr[sim_node()] = (S4BeaconMsg *)&S4StateM$beacon_buf[sim_node()].data[0];
  S4StateM$beacon_data_ptr[sim_node()] = (S4BeaconMsgData *)& S4StateM$beacon_msg_ptr[sim_node()]->type_data;
  return;
}

# 2 "../../tos//lib/bvr/S4Topology.nc"
inline static error_t S4StateM$S4Topology$getRootBeaconIDs(uint8_t *array){
#line 2
  unsigned char __nesc_result;
#line 2

#line 2
  __nesc_result = S4TopologyM$S4Topology$getRootBeaconIDs(array);
#line 2

#line 2
  return __nesc_result;
#line 2
}
#line 2
# 16 "../../tos//lib/bvr/S4TopologyM.nc"
static inline error_t S4TopologyM$Init$init(void )
#line 16
{
  int i = 0;

#line 18
  S4TopologyM$n_root_beacons[sim_node()] = 0;

  sim_log_debug(504U, "S4-beacon", "S4TopologyM - Init.init\n");



  for (i = 0; i < N_NODES; i++) {
      S4TopologyM$root_beacon_id[sim_node()][i] = hc_root_beacon_id[i];

      if (S4TopologyM$root_beacon_id[sim_node()][i] != INVALID_BEACON_ID) {
          S4TopologyM$n_root_beacons[sim_node()]++;
        }
    }

  sim_log_debug(505U, "S4-beacon", "S4TopologyM; Number of beacons: %d\n", S4TopologyM$n_root_beacons[sim_node()]);
  copy_hc_root_beacon_id[TOS_NODE_ID] = S4TopologyM$root_beacon_id[sim_node()];







  return SUCCESS;
}

# 62 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Init.nc"
inline static error_t S4StateM$S4TopologyInit$init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = S4TopologyM$Init$init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 287 "../../tos//lib/bvr/S4StateM.nc"
inline static void S4StateM$initialize(void )
#line 287
{
  int i;

  uint8_t original_root_beacon_id[N_NODES];

  S4StateM$S4TopologyInit$init();

  S4StateM$S4Topology$getRootBeaconIDs(original_root_beacon_id);


  S4StateM$b_timer_int[sim_node()] = I_BEACON_INTERVAL * INTERVAL_MUL;
  S4StateM$b_timer_jit[sim_node()] = I_BEACON_JITTER;

  S4StateM$beacons_to_send[sim_node()] = 0;

  S4StateM$delay_timer_jit[sim_node()] = I_DELAY_TIMER;

  S4StateM$beacon_send_busy[sim_node()] = FALSE;
  S4StateM$rcv_buffer_busy[sim_node()] = FALSE;

  S4StateM$state_beaconing_coords[sim_node()] = TRUE;

  S4StateM$beacon_msg_length[sim_node()] = sizeof(S4BeaconMsg );
  S4StateM$beacon_seqno[sim_node()] = 1;
  S4StateM$rcv_beacon_ptr[sim_node()] = &S4StateM$rcv_beacon_buf[sim_node()];


  S4StateM$state_is_root_beacon[sim_node()] = 
  original_root_beacon_id[S4StateM$AMPacket$address()] == INVALID_BEACON_ID ? FALSE : TRUE;
  S4StateM$root_beacon_id[sim_node()] = original_root_beacon_id[S4StateM$AMPacket$address()];

  sim_log_debug(197U, "S4-beacon", "original_root_beacon_id[call AMPacket.address()]=%d, state_is_root_beacon=%d\n", original_root_beacon_id[S4StateM$AMPacket$address()], S4StateM$state_is_root_beacon[sim_node()]);


  S4StateM$root_beacon_seqno[sim_node()] = 1;



  S4StateM$next_beacon[sim_node()] = 0;


  S4StateM$init_beacon_msg();
#line 347
  for (i = 0; i < 8; i++) 
    S4StateM$rootBeaconInit(&S4StateM$rootBeacons[sim_node()][i]);

  S4StateM$init_my_coords();
#line 369
  S4StateM$next_beacon[sim_node()] = 0;


  S4StateM$update_int[sim_node()] = I_BEACON_UPDATE_INTERVAL;










  S4StateM$cluster_send_busy[sim_node()] = FALSE;
  S4StateM$rcv_clusterbuffer_busy[sim_node()] = FALSE;
  S4StateM$cluster_seqno[sim_node()] = 1;
  S4StateM$rcv_cluster_ptr[sim_node()] = &S4StateM$rcv_cluster_buf[sim_node()];
  S4StateM$init_cluster_msg();
  S4StateM$cluster_size[sim_node()] = 0;
  for (i = 0; i < 100; i++) 
    S4StateM$ClusterTable[sim_node()][i].valid = 0;
  S4StateM$first_global_beacon[sim_node()] = TRUE;







  S4StateM$cluster_msg_length[sim_node()] = sizeof(DVMsg );
  S4StateM$next_dv[sim_node()] = 0;
  S4StateM$curr_dv_size[sim_node()] = 0;




  S4StateM$ClusterTable[sim_node()][0].valid = 1;
  S4StateM$ClusterTable[sim_node()][0].dest = S4StateM$AMPacket$address();
  S4StateM$ClusterTable[sim_node()][0].parent = 65535;
  S4StateM$ClusterTable[sim_node()][0].hops = 0;

  S4StateM$ClusterTable[sim_node()][0].scope = INVALID_COMPONENT;
  S4StateM$ClusterTable[sim_node()][0].updated = 1;



  S4StateM$cluster_size[sim_node()]++;
#line 428
  S4StateM$largest_scope[sim_node()] = 0;
  S4StateM$current_scope[sim_node()] = INVALID_COMPONENT;
  S4StateM$scope_age[sim_node()] = 0;

  S4StateM$beacon_round[sim_node()] = 0;

  S4StateM$dv_round[sim_node()] = 0;


  S4StateM$sent_bv[sim_node()] = 0;
  S4StateM$sent_dv[sim_node()] = 0;
}

#line 493
static inline error_t S4StateM$StdControl$start(void )
#line 493
{

  if (!S4StateM$initialized[sim_node()]) {
      S4StateM$state_is_active[sim_node()] = TRUE;
      S4StateM$initialize();
      sim_log_debug(202U, "S4-debug", "sizeof MAX_ROOT_BEACONS:%d Coords:%d AppMsg:%d S4Msg:%d S4CommandMsg:%d LoggingMsg:%d message_t:%d\n", 8, sizeof(Coordinates ), sizeof(S4AppMsg ), sizeof(S4BeaconMsg ), sizeof(S4CommandMsg ), sizeof(S4LogMsgWrapper ), sizeof(message_t ));

      sim_log_debug(203U, "S4-debug", "sizeof TOSH_DATA_LENGTH:%d app_data_length:%d ReverseLinkMsg:%d\n", 50, 50 - ((unsigned long )& ((S4AppMsg *)0)->type_data + (unsigned long )& ((S4AppData *)0)->data), sizeof(ReverseLinkMsg ));


      S4StateM$CoordinateTableControlInit$init();
      S4StateM$initialized[sim_node()] = TRUE;
    }

  sim_log_debug(204U, "S4-debug", "S4StateM.start next_beacon=%d\n", S4StateM$next_beacon[sim_node()]);

  sim_log_debug(205U, "S4-debug", "This is S4StateM starting!\n");
  S4StateM$CoordinateTableControl$start();

  if (S4StateM$state_beaconing_coords[sim_node()]) {
      sim_log_debug(206U, "S4-debug", "Starting BeaconTimer with period %d\n", S4StateM$b_timer_int[sim_node()]);
      S4StateM$BeaconTimer$startOneShot(S4StateM$b_timer_int[sim_node()]);
    }










  return SUCCESS;
}

# 182 "../../tos//lib/commstack/S4QueuedSendM.nc"
static inline error_t S4QueuedSendM$StdControl$start(void )
#line 182
{
  if (!S4QueuedSendM$initialized[sim_node()]) {
      S4QueuedSendM$Init$init();
    }

  return SUCCESS;
}

# 26 "../../tos//lib/commstack/GenericCommReallyPromiscuousM.nc"
static inline error_t GenericCommReallyPromiscuousM$Init$init(void )
#line 26
{
  GenericCommReallyPromiscuousM$initialized[sim_node()] = TRUE;

  return SUCCESS;
}

static inline error_t GenericCommReallyPromiscuousM$StdControl$start(void )
#line 32
{
  error_t ok;

  if (!GenericCommReallyPromiscuousM$initialized[sim_node()]) {
      GenericCommReallyPromiscuousM$Init$init();
    }





  return ok;
}

# 95 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/StdControl.nc"
inline static error_t LinkEstimatorTaggerCommM$BottomStdControl$start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = GenericCommReallyPromiscuousM$StdControl$start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 62 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Init.nc"
inline static error_t LinkEstimatorTaggerCommM$BottomStdControlInit$init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = GenericCommReallyPromiscuousM$Init$init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 35 "../../tos//lib/commstack/LinkEstimatorTaggerCommM.nc"
static inline error_t LinkEstimatorTaggerCommM$Init$init(void )
#line 35
{
  error_t err;

#line 37
  LinkEstimatorTaggerCommM$my_seqno[sim_node()] = 1;
  err = LinkEstimatorTaggerCommM$BottomStdControlInit$init();

  LinkEstimatorTaggerCommM$initialized[sim_node()] = TRUE;

  return err;
}

static inline error_t LinkEstimatorTaggerCommM$StdControl$start(void )
#line 45
{
  if (!LinkEstimatorTaggerCommM$initialized[sim_node()]) {
      LinkEstimatorTaggerCommM$Init$init();
    }

  return LinkEstimatorTaggerCommM$BottomStdControl$start();
}

# 95 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/StdControl.nc"
inline static error_t LinkEstimatorCommM$BottomStdControl$start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = LinkEstimatorTaggerCommM$StdControl$start();
#line 95
  __nesc_result = ecombine(__nesc_result, S4QueuedSendM$StdControl$start());
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 154 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(), dt, FALSE);
}

# 64 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Timer.nc"
inline static void LinkEstimatorM$UpdateLinkTimer$startPeriodic(uint32_t dt){
#line 64
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(2U, dt);
#line 64
}
#line 64
# 138 "../../tos//lib/linkestimator/LinkEstimatorM.nc"
static inline error_t LinkEstimatorM$StdControl$start(void )
#line 138
{

  LinkEstimatorM$UpdateLinkTimer$startPeriodic(LinkEstimatorM$link_upd_timer_int[sim_node()]);
  LinkEstimatorM$state_is_active[sim_node()] = TRUE;
  return SUCCESS;
}

# 95 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/StdControl.nc"
inline static error_t LinkEstimatorCommM$LinkEstimatorControl$start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = LinkEstimatorM$StdControl$start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 128 "../../tos//lib/commstack/LinkEstimatorCommM.nc"
static inline error_t LinkEstimatorCommM$StdControl$start(void )
#line 128
{
  if (!LinkEstimatorCommM$initialized[sim_node()]) {
      LinkEstimatorCommM$Init$init();
    }

  LinkEstimatorCommM$state_is_active[sim_node()] = TRUE;
  LinkEstimatorCommM$MinRateTimer$startOneShot(LinkEstimatorCommM$reverse_period[sim_node()]);
  LinkEstimatorCommM$LinkEstimatorControl$start();
  return LinkEstimatorCommM$BottomStdControl$start();
}

# 95 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/StdControl.nc"
inline static error_t FilterLocalCommM$BottomStdControl$start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = LinkEstimatorCommM$StdControl$start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 62 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Init.nc"
inline static error_t FilterLocalCommM$BottomStdControlInit$init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = LinkEstimatorCommM$Init$init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 63 "../../tos//lib/commstack/FilterLocalCommM.nc"
static inline error_t FilterLocalCommM$Init$init(void )
#line 63
{
  error_t err = FilterLocalCommM$BottomStdControlInit$init();

#line 65
  FilterLocalCommM$initialized[sim_node()] = TRUE;

  return err;
}

static inline error_t FilterLocalCommM$StdControl$start(void )
#line 70
{
  if (!FilterLocalCommM$initialized[sim_node()]) {
      FilterLocalCommM$Init$init();
    }
  return FilterLocalCommM$BottomStdControl$start();
}

# 95 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/StdControl.nc"
inline static error_t TestS4SimpleM$RouterControl$start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = FilterLocalCommM$StdControl$start();
#line 95
  __nesc_result = ecombine(__nesc_result, S4StateM$StdControl$start());
#line 95
  __nesc_result = ecombine(__nesc_result, S4RouterM$StdControl$start());
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 215 "TestS4SimpleM.nc"
static inline void TestS4SimpleM$AMControl$startDone(error_t err)
#line 215
{
  if (err == SUCCESS) {
      sim_log_debug(178U, "BVR", "Radio started; now starting the rest");
      TestS4SimpleM$RouterControl$start();

      TestS4SimpleM$LBlinkControl$start();


      TestS4SimpleM$pAppMsg[sim_node()] = (uint8_t *)TestS4SimpleM$Send$getBuffer(&TestS4SimpleM$send_buffer[sim_node()], &TestS4SimpleM$payloadLength[sim_node()]);
      sim_log_debug(179U, "TestBVR", " init ended\n", TestS4SimpleM$mode[sim_node()]);

      TestS4SimpleM$msg_id[sim_node()] = TestS4SimpleM$AMPacket$address();
      TestS4SimpleM$busy_sending[sim_node()] = 0;

      TestS4SimpleM$mode[sim_node()] = 0;



      return;
    }
}

# 18 "../../tos//lib/commstack/S4ActiveMessageC.nc"
static inline void S4ActiveMessageC$SplitControl$startDone(error_t err)
#line 18
{
}

# 113 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/SplitControl.nc"
inline static void TossimPacketModelC$Control$startDone(error_t error){
#line 113
  S4ActiveMessageC$SplitControl$startDone(error);
#line 113
  TestS4SimpleM$AMControl$startDone(error);
#line 113
}
#line 113
# 96 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC$startDoneTask$runTask(void )
#line 96
{
  TossimPacketModelC$running[sim_node()] = TRUE;
  TossimPacketModelC$Control$startDone(SUCCESS);
}

# 211 "TestS4SimpleM.nc"
static inline void TestS4SimpleM$AMControl$stopDone(error_t err)
#line 211
{
}

# 22 "../../tos//lib/commstack/S4ActiveMessageC.nc"
static inline void S4ActiveMessageC$SplitControl$stopDone(error_t err)
#line 22
{
}

# 138 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/SplitControl.nc"
inline static void TossimPacketModelC$Control$stopDone(error_t error){
#line 138
  S4ActiveMessageC$SplitControl$stopDone(error);
#line 138
  TestS4SimpleM$AMControl$stopDone(error);
#line 138
}
#line 138
# 101 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC$stopDoneTask$runTask(void )
#line 101
{
  TossimPacketModelC$running[sim_node()] = FALSE;
  TossimPacketModelC$Control$stopDone(SUCCESS);
}

# 303 "/usr/lib/ncc/nesc_nx.h"
static __inline  int8_t __nesc_hton_int8(void * target, int8_t value)
#line 303
{
#line 303
  __nesc_hton_uint8(target, value);
#line 303
  return value;
}

# 110 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
inline static void TossimActiveMessageC$AMSend$sendDone(am_id_t arg_0x7fb1afec4220, message_t * msg, error_t error){
#line 110
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(arg_0x7fb1afec4220, msg, error);
#line 110
}
#line 110
# 103 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/TossimActiveMessageC.nc"
static inline void TossimActiveMessageC$Model$sendDone(message_t *msg, error_t result)
#line 103
{
  TossimActiveMessageC$AMSend$sendDone(TossimActiveMessageC$AMPacket$type(msg), msg, result);
}

# 76 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/TossimPacketModel.nc"
inline static void TossimPacketModelC$Packet$sendDone(message_t *msg, error_t error){
#line 76
  TossimActiveMessageC$Model$sendDone(msg, error);
#line 76
}
#line 76
# 82 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/TossimPacketModelC.nc"
static inline tossim_metadata_t *TossimPacketModelC$getMetadata(message_t *msg)
#line 82
{
  return (tossim_metadata_t *)& msg->metadata;
}

#line 145
static inline void TossimPacketModelC$sendDoneTask$runTask(void )
#line 145
{
  message_t *msg = TossimPacketModelC$sending[sim_node()];
  tossim_metadata_t *meta = TossimPacketModelC$getMetadata(msg);

#line 148
  __nesc_hton_uint8(meta->ack.nxdata, 0);
  __nesc_hton_int8(meta->strength.nxdata, 0);
  __nesc_hton_uint16(meta->time.nxdata, 0);
  TossimPacketModelC$sending[sim_node()] = FALSE;
  TossimPacketModelC$Packet$sendDone(msg, TossimPacketModelC$running[sim_node()] ? SUCCESS : EOFF);
}

# 2 "../../tos//lib/bvr/S4Topology.nc"
inline static error_t S4RouterM$S4Topology$getRootBeaconIDs(uint8_t *array){
#line 2
  unsigned char __nesc_result;
#line 2

#line 2
  __nesc_result = S4TopologyM$S4Topology$getRootBeaconIDs(array);
#line 2

#line 2
  return __nesc_result;
#line 2
}
#line 2
# 462 "../../tos//lib/bvr/S4RouterM.nc"
static inline error_t S4RouterM$S4Send$send(message_t *msg, uint16_t mhLength, 
uint16_t dest_id, uint8_t closest_beacon)

{
  uint8_t status = LOG_ROUTE_INVALID_STATUS;

  S4AppMsg *pS4Msg = (S4AppMsg *)msg->data;


  error_t result;

  __nesc_hton_uint16(pS4Msg->type_data.msg_id.nxdata, S4RouterM$local_message_counter[sim_node()]++);


  if (dest_id == S4RouterM$AMPacket$address()) {
      status = LOG_ROUTE_TO_SELF;
      sim_log_debug(184U, "S4Router", "S4Router$S4Send$send: dest_id is for us, error!\n");
    }
  else 
#line 479
    {

      if (S4RouterM$send_buffer[sim_node()].busy) {

          status = LOG_ROUTE_FAIL_NO_LOCAL_BUFFER;

          sim_log_debug(185U, "S4Router", "no send_buffer failure\n");
        }
      else {



          S4RouterM$send_buffer[sim_node()].busy = TRUE;
          S4RouterM$send_buffer[sim_node()].msg = msg;

          __nesc_hton_uint8(pS4Msg->type_data.hopcount.nxdata, 1);
          __nesc_hton_uint8(pS4Msg->type_data.rexmit_count.nxdata, 0);
          __nesc_hton_uint8(pS4Msg->type_data.tried_hopcount.nxdata, 0);
          __nesc_hton_uint16(pS4Msg->type_data.origin.nxdata, S4RouterM$AMPacket$address());
          __nesc_hton_uint16(pS4Msg->type_data.dest_id.nxdata, dest_id);




          __nesc_hton_uint8(pS4Msg->type_data.closest_beacon.nxdata, closest_beacon);

          result = S4RouterM$Neighborhood$getNextHops(dest_id, closest_beacon, & S4RouterM$send_buffer[sim_node()].next_hop);



          if (result == FAIL) {

              status = LOG_ROUTE_FAIL_STUCK_0;



              sim_log_debug(186U, "S4Router", "STUCK_0 failure\n");

              forwardRoutingBufferFree(&S4RouterM$send_buffer[sim_node()]);
            }
          else 









            {






              uint8_t root_beacon_id[N_NODES];

              S4RouterM$S4Topology$getRootBeaconIDs(root_beacon_id);

              sim_log_debug(187U, "TestBVR", "closest_beacon=%d, send_buffer.next_hop=%d\n", closest_beacon, S4RouterM$send_buffer[sim_node()].next_hop);

              if (S4RouterM$send_buffer[sim_node()].next_hop == 65535) {




                  return FAIL;
                }
              else {
                  return S4RouterM$forwardMessage(&S4RouterM$send_buffer[sim_node()]);
                }
            }
        }
    }



  return FAIL;
}

# 49 "../../tos//lib/interfaces/S4Send.nc"
inline static error_t TestS4SimpleM$Send$send(message_t *msg, uint16_t length, uint16_t dest_id, uint8_t beacon){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = S4RouterM$S4Send$send(msg, length, dest_id, beacon);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 176 "TestS4SimpleM.nc"
static inline void TestS4SimpleM$sendAnother$runTask(void )
#line 176
{
  uint8_t beacon = 6;

#line 178
  if (TestS4SimpleM$busy_sending[sim_node()]) {



      sim_log_debug(173U, "TestBVR", "TestBVR %d sendAnother: mode:%d, dest_id=%d!!\n", TestS4SimpleM$AMPacket$address(), TestS4SimpleM$mode[sim_node()], TestS4SimpleM$dest_id[sim_node()]);
      if (TestS4SimpleM$Send$send(&TestS4SimpleM$send_buffer[sim_node()], 2, TestS4SimpleM$dest_id[sim_node()], beacon) != SUCCESS) {
          sim_log_debug(174U, "App", "sendAnother: send failed\n");
          TestS4SimpleM$busy_sending[sim_node()] = FALSE;
        }
    }
  else {
#line 188
    sim_log_debug(175U, "TestBVR", "sendAnother ERROR: called without busy_sending set\n");
    }
}

# 46 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Random.nc"
inline static uint32_t S4StateM$Random$rand32(void ){
#line 46
  unsigned int __nesc_result;
#line 46

#line 46
  __nesc_result = RandomLfsrC$Random$rand32();
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 80 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
inline static error_t S4StateM$S4StateAMSend$send(am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = FilterLocalCommM$AMSend$send(AM_S4_BEACON_MSG, addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 1825 "../../tos//lib/bvr/S4StateM.nc"
static inline void S4StateM$sendBeaconTask$runTask(void )
#line 1825
{

  int j;
  uint8_t beacon_j;

#line 1841
  sim_log_debug(265U, "S4-debug", "NG$BeaconTimer$fired: bcast beacon. seqno:%d to_send:%d\n", __nesc_ntoh_uint16(S4StateM$beacon_data_ptr[sim_node()]->seqno.nxdata), S4StateM$beacons_to_send[sim_node()]);




  for (j = 0; j < 8; j++) {



      if (__nesc_ntoh_uint8(S4StateM$beacon_data_ptr[sim_node()]->beacons[j].hopcount.nxdata) != INVALID_COMPONENT) {

          beacon_j = __nesc_ntoh_uint8(S4StateM$beacon_data_ptr[sim_node()]->beacons[j].beacon_id.nxdata);
          sim_log_debug(266U, "S4-beacon", "NG$BeaconTimer$fired: bcast beacon. j:%d seqno:%d to_send:%d, nodeid=%d\n", j, __nesc_ntoh_uint16(S4StateM$beacon_data_ptr[sim_node()]->seqno.nxdata), S4StateM$beacons_to_send[sim_node()], __nesc_ntoh_uint16(S4StateM$beacon_data_ptr[sim_node()]->beacons[j].nodeid.nxdata));
        }





      sim_log_debug(267U, "S4-beacon", "NG$BeaconTimer$fired: bcast beacon. j:%d seqno:%d to_send:%d, nodeid=%d\n", j, __nesc_ntoh_uint16(S4StateM$beacon_data_ptr[sim_node()]->seqno.nxdata), S4StateM$beacons_to_send[sim_node()], __nesc_ntoh_uint16(S4StateM$beacon_data_ptr[sim_node()]->beacons[j].nodeid.nxdata));
    }



  S4StateM$sent_bv[sim_node()] += S4StateM$curr_bv_size[sim_node()] * sizeof(BeaconInfo );

  if (S4StateM$S4StateAMSend$send(AM_BROADCAST_ADDR, &S4StateM$beacon_buf[sim_node()], S4StateM$beacon_msg_length[sim_node()]) == SUCCESS) {
      S4StateM$beacon_send_retries[sim_node()] = 0;
    }
  else 
#line 1938
    {



      S4StateM$beacon_send_retries[sim_node()]++;
      if (S4StateM$beacon_send_retries[sim_node()] < 5) {

          sim_log_debug(268U, "S4Router", "%d Failure: send failed for beacon!\n", sim_time());




          if (S4StateM$next_beacon[sim_node()] < S4StateM$S4Topology$getRootNodesCount()) {

              uint16_t delay = S4StateM$Random$rand32() % S4StateM$delay_timer_jit[sim_node()] + 1;

#line 1953
              sim_log_debug(269U, "S4Router", "%d Retrying\n", sim_time());
              S4StateM$BeaconRetransmitTimer$startOneShot(delay);
            }
        }
      else 
#line 1956
        {




          S4StateM$beacon_send_busy[sim_node()] = FALSE;
          S4StateM$beacon_send_retries[sim_node()] = 0;
        }
    }
}

# 80 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
inline static error_t S4StateM$ClusterAMSend$send(am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = FilterLocalCommM$AMSend$send(AM_DV_MSG, addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 2762 "../../tos//lib/bvr/S4StateM.nc"
static inline void S4StateM$sendClusterTask$runTask(void )
#line 2762
{
#line 2776
  sim_log_debug(294U, "S4Router", "sendClusterTask: bcast dv.\n");



  S4StateM$sent_dv[sim_node()] += S4StateM$curr_dv_size[sim_node()] * sizeof(DVInfo );

  if (S4StateM$ClusterAMSend$send(0xFFFF, &S4StateM$cluster_buf[sim_node()], S4StateM$cluster_msg_length[sim_node()]) == SUCCESS) {
      sim_log_debug(295U, "S4Router", "ClusterAMSend.send successful\n");

      S4StateM$dv_send_retries[sim_node()] = 0;
    }
  else 
#line 2856
    {
      S4StateM$dv_send_retries[sim_node()]++;

      sim_log_debug(296U, "S4Router", "%s Failure: send failed for dv!\n", sim_time_string());

      if (S4StateM$dv_send_retries[sim_node()] < 5) {


          if (S4StateM$next_dv[sim_node()] < S4StateM$cluster_size[sim_node()]) {
              uint16_t delay = S4StateM$Random$rand32() % S4StateM$delay_timer_jit[sim_node()] + 1;

#line 2866
              sim_log_debug(297U, "S4Router", "%d Retrying\n", sim_time());
              S4StateM$ClusterRetransmitTimer$startOneShot(delay);
            }
        }
      else 
#line 2869
        {
          S4StateM$cluster_send_busy[sim_node()] = FALSE;
          S4StateM$dv_send_retries[sim_node()] = 0;
        }
    }
}

# 740 "../../tos//lib/bvr/S4RouterM.nc"
static inline error_t S4RouterM$Locator$statusChanged(void )
#line 740
{
  S4RouterM$coords_valid[sim_node()] = S4RouterM$Locator$getCoordinates(&S4RouterM$my_coords[sim_node()]) == SUCCESS;

  return SUCCESS;
}

# 26 "../../tos//lib/bvr/S4Locator.nc"
inline static error_t S4StateM$S4Locator$statusChanged(void ){
#line 26
  unsigned char __nesc_result;
#line 26

#line 26
  __nesc_result = S4RouterM$Locator$statusChanged();
#line 26

#line 26
  return __nesc_result;
#line 26
}
#line 26
# 4 "../../tos//lib/bvr/S4Topology.nc"
inline static error_t S4StateM$S4Topology$setRootBeaconID(uint16_t pos, uint8_t val){
#line 4
  unsigned char __nesc_result;
#line 4

#line 4
  __nesc_result = S4TopologyM$S4Topology$setRootBeaconID(pos, val);
#line 4

#line 4
  return __nesc_result;
#line 4
}
#line 4
# 72 "../../tos//lib/bvr/S4TopologyM.nc"
static inline void S4TopologyM$S4Topology$setRootNodesCount(uint16_t nodesCount)
#line 72
{
  S4TopologyM$n_root_beacons[sim_node()] = nodesCount;
}

# 8 "../../tos//lib/bvr/S4Topology.nc"
inline static void S4StateM$S4Topology$setRootNodesCount(uint16_t nodesCount){
#line 8
  S4TopologyM$S4Topology$setRootNodesCount(nodesCount);
#line 8
}
#line 8
# 569 "../../tos//lib/bvr/S4StateM.nc"
static __inline uint8_t S4StateM$scaledEtxFromQuality(uint8_t quality)
#line 569
{
  uint16_t etx;

#line 571
  if (quality == 0) {
    return S4StateM$MAX_ETX;
    }
#line 573
  etx = (uint16_t )((255.0 / quality - 1) * S4StateM$ETX_SCALE + 0.5);
  sim_log_debug(209U, "S4-debug", "scaled received quality %d, returning etx %d\n", quality, etx);
  etx = etx > S4StateM$MAX_ETX ? S4StateM$MAX_ETX : etx;
  return (uint8_t )etx;
}

# 56 "../../tos//lib/linkestimator/LinkEstimator.nc"
inline static error_t S4StateM$LinkEstimator$getBidirectionalQuality(uint8_t idx, uint8_t *quality){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = LinkEstimatorM$LinkEstimator$getBidirectionalQuality(idx, quality);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 581 "../../tos//lib/bvr/S4StateM.nc"
inline static bool S4StateM$is_within_range(uint8_t _new, uint8_t old)
#line 581
{
  uint8_t range = (uint8_t )MSG_VALID_RANGE8;

#line 583
  if ((uint8_t )(old + range) < old) {
      return _new > old || _new < (uint8_t )(old + range);
    }
  else 
#line 585
    {
      return _new > old && _new < (uint8_t )(old + range);
    }
}

#line 443
static __inline bool S4StateM$hasLowerHash(uint16_t val1, uint16_t val2)
#line 443
{
  if (val1 % 10 == val2 % 10) {
      return val1 < val2;
    }

  return val1 % 10 < val2 % 10;
}

#line 951
static inline void S4StateM$updateRootBeacon(uint8_t root_id, uint16_t nodeid, uint16_t from, uint8_t quality, 
uint8_t seqno, uint8_t hopcount)
#line 952
{



  bool force_update = FALSE;
  bool valid_seqno = FALSE;
  bool same_parent = FALSE;
  bool better_parent = FALSE;
  bool equal_parent = FALSE;
  uint8_t from_ld;
  uint8_t current_parent_ld;
  uint8_t received_quality;
#line 963
  uint8_t received_combined_quality;
  uint8_t current_quality;
  uint8_t quality_update_threshold;



  bool current_parent_in_table;
  bool different_hop;


  uint8_t first_s_etx;
#line 973
  uint8_t combined_s_etx;
  float received_combined_etx;
  float current_combined_etx;
  float etx_change_threshold;


  hopcount = hopcount + 1;

  sim_log_debug(220U, "S4-beacon", "root_id=%d, nodeid=%d, from=%d, hopcount=%d\n", root_id, nodeid, from, hopcount);

  if (S4StateM$rootBeacons[sim_node()][root_id].valid && S4StateM$hasLowerHash(S4StateM$rootBeacons[sim_node()][root_id].nodeid, nodeid)) {
      sim_log_debug(221U, "S4-beacon", "Returning due to higher hash compared to %d", S4StateM$rootBeacons[sim_node()][root_id].nodeid);
      return;
    }
  else {
#line 987
    if (S4StateM$rootBeacons[sim_node()][root_id].nodeid != nodeid) {
        int i;

#line 989
        force_update = TRUE;

        S4StateM$dv_round[sim_node()] = 0;
        sim_log_debug(222U, "S4-beacon", "Changing rootbeacon %d from %d to %d\n", root_id, S4StateM$rootBeacons[sim_node()][root_id].nodeid, nodeid);


        for (i = 1; i < 100; i++) 
          S4StateM$ClusterTable[sim_node()][i].valid = 0;
      }
    }
  if (root_id >= 8) {
      sim_log_debug(223U, "S4-debug", "ROOT: warning, received invalid root_id %d\n", root_id);
      return;
    }

  if (S4StateM$LinkEstimator$find(from, &from_ld) != SUCCESS) {
      sim_log_debug(224U, "S4-beacon", "ROOT: assertion failed: updateBeaconInfo received node %d not in LinkEstimator table\n", from);
      return;
    }

  if (S4StateM$state_is_root_beacon[sim_node()] && root_id == S4StateM$root_beacon_id[sim_node()] && S4StateM$rootBeacons[sim_node()][root_id].nodeid == nodeid) {
      sim_log_debug(225U, "S4-beacon", "From myself, discarding\n");
      return;
    }



  if (S4StateM$LinkEstimator$getBidirectionalQuality(from_ld, &received_quality) != SUCCESS) {
      received_quality = 0;
      sim_log_debug(226U, "S4-debug", "getBidirectionalQuality for %d failed, setting to 0\n", from);
    }
  else 
#line 1019
    {
      sim_log_debug(227U, "S4-debug", "getBidirectionalQuality for %d returned %d\n", from, received_quality);
    }





  if (received_quality > 0) {
      first_s_etx = S4StateM$scaledEtxFromQuality(received_quality);
      combined_s_etx = first_s_etx + quality;
      if (combined_s_etx < first_s_etx) {
#line 1030
        combined_s_etx = S4StateM$MAX_ETX;
        }
    }
  else 
#line 1031
    {
      combined_s_etx = S4StateM$MAX_ETX;
    }





  received_combined_etx = 1.0 * combined_s_etx / S4StateM$ETX_SCALE + hopcount;
  received_combined_quality = quality;
  sim_log_debug(228U, "S4-debug", "UpdateRootBeacon: received etx:%d first_s_etx:%d (quality_fist:%d) combined_s_etx:%d ETX:%f\n", quality, first_s_etx, received_quality, combined_s_etx, received_combined_etx);




  sim_log_debug(229U, "S4-debug", "Root beacon message: source: %d seqno:%d hopcount:%d last_hop:%d comb.quality:%d\n", root_id, seqno, hopcount, from, quality);




  if (! S4StateM$rootBeacons[sim_node()][root_id].valid) {

      sim_log_debug(230U, "S4-debug", "Stored root beacon :     id: %d no info stored\n", root_id);
      force_update = TRUE;
    }
  else 
#line 1055
    {

      sim_log_debug(231U, "S4-debug", "Stored root beacon :     id: %d seqno:%d hopcount:%d last_hop:%d comb.quality:%d\n", root_id, S4StateM$rootBeacons[sim_node()][root_id].last_seqno, S4StateM$rootBeacons[sim_node()][root_id].hops, S4StateM$rootBeacons[sim_node()][root_id].parent, S4StateM$rootBeacons[sim_node()][root_id].combined_quality);


      current_parent_in_table = S4StateM$LinkEstimator$find(S4StateM$rootBeacons[sim_node()][root_id].parent, &current_parent_ld) == SUCCESS;
      if (!current_parent_in_table) {
          sim_log_debug(232U, "S4-debug", "ROOT: force update: current parent %d not in LinkEstimator table\n", S4StateM$rootBeacons[sim_node()][root_id].parent);
          force_update = TRUE;
        }
      else 
#line 1064
        {






          if (hopcount == S4StateM$rootBeacons[sim_node()][root_id].hops) {
              different_hop = FALSE;


              valid_seqno = S4StateM$is_within_range(seqno, S4StateM$rootBeacons[sim_node()][root_id].last_seqno);



              valid_seqno = S4StateM$is_greater_by_2(seqno, S4StateM$rootBeacons[sim_node()][root_id].last_seqno);



              quality_update_threshold = 0;
              sim_log_debug(233U, "S4-debug", "ROOT: update: same hopcount, valid_seqno: %d threshold %d\n", valid_seqno, quality_update_threshold);
            }
          else {
              different_hop = TRUE;


              valid_seqno = S4StateM$is_greater_by_2(seqno, S4StateM$rootBeacons[sim_node()][root_id].last_seqno);

              quality_update_threshold = PARENT_SWITCH_THRESHOLD;
              sim_log_debug(234U, "S4-debug", "ROOT: update: different hopcount, valid_seqno: %d threshold: %d\n", valid_seqno, quality_update_threshold);
            }




          if (from == S4StateM$rootBeacons[sim_node()][root_id].parent) {
              same_parent = TRUE;


              if (different_hop) {
                  S4StateM$rootBeacons[sim_node()][root_id].tolerance = S4StateM$RESET_TOLERANCE;
                  sim_log_debug(235U, "S4-debug", "UpdateBeacon: same parent, different hop, reset tolerance: t[ %d ]= %d\n", root_id, S4StateM$rootBeacons[sim_node()][root_id].tolerance);
                }
              else 
#line 1106
                {
                  if (S4StateM$rootBeacons[sim_node()][root_id].tolerance < 255) {
                    S4StateM$rootBeacons[sim_node()][root_id].tolerance++;
                    }
#line 1109
                  sim_log_debug(236U, "S4-debug", "UpdateBeacon: same parent,   same hop, increase tolerance: t[ %d ]= %d\n", root_id, S4StateM$rootBeacons[sim_node()][root_id].tolerance);
                }


              if (S4StateM$LinkEstimator$getBidirectionalQuality(current_parent_ld, &current_quality) != SUCCESS) {
                current_quality = 0;
                }
#line 1115
              if (current_quality > 0) {
                  first_s_etx = S4StateM$scaledEtxFromQuality(current_quality);
                  combined_s_etx = first_s_etx + S4StateM$rootBeacons[sim_node()][root_id].combined_quality;
                  if (combined_s_etx < first_s_etx) {
#line 1118
                    combined_s_etx = S4StateM$MAX_ETX;
                    }
                }
              else 
#line 1119
                {
                  combined_s_etx = S4StateM$MAX_ETX;
                }
              current_combined_etx = 1.0 * combined_s_etx / S4StateM$ETX_SCALE + S4StateM$rootBeacons[sim_node()][root_id].hops;



              sim_log_debug(237U, "S4-debug", "ETX root_id: %d CURRENT etx: %f hopcount: %d through: %d RECEIVED etx: %f hopcount: %d from: %d changed: %d\n", sim_time_string(), root_id, current_combined_etx, S4StateM$rootBeacons[sim_node()][root_id].hops, S4StateM$rootBeacons[sim_node()][root_id].parent, received_combined_etx, hopcount, from, force_update || (valid_seqno && (same_parent || better_parent)));
            }
          else {







            if ((
#line 1135
            valid_seqno || (
            S4StateM$is_within_2(seqno, S4StateM$rootBeacons[sim_node()][root_id].last_seqno) && hopcount <= S4StateM$rootBeacons[sim_node()][root_id].hops)) || (
            seqno == S4StateM$rootBeacons[sim_node()][root_id].last_seqno && hopcount < S4StateM$rootBeacons[sim_node()][root_id].hops)) {


                if (S4StateM$LinkEstimator$getBidirectionalQuality(current_parent_ld, &current_quality) != SUCCESS) {
                  current_quality = 0;
                  }
#line 1157
                if (current_quality > 0) {
                    first_s_etx = S4StateM$scaledEtxFromQuality(current_quality);
                    combined_s_etx = first_s_etx + S4StateM$rootBeacons[sim_node()][root_id].combined_quality;
                    if (combined_s_etx < first_s_etx) {
#line 1160
                      combined_s_etx = S4StateM$MAX_ETX;
                      }
                  }
                else 
#line 1161
                  {
                    combined_s_etx = S4StateM$MAX_ETX;
                  }
                current_combined_etx = 1.0 * combined_s_etx / S4StateM$ETX_SCALE + S4StateM$rootBeacons[sim_node()][root_id].hops;
                sim_log_debug(238U, "S4-debug", "UpdateRootBeacon: current etx:%d first_s_etx:%d (quality_fist:%d) combined_s_etx:%d ETX:%f\n", quality, first_s_etx, current_quality, combined_s_etx, current_combined_etx);



                etx_change_threshold = 1.0 * quality_update_threshold / (1.0 * S4StateM$ETX_SCALE);
                better_parent = received_combined_etx < current_combined_etx - etx_change_threshold;




                if (better_parent) {
                    if (different_hop) {
                        S4StateM$rootBeacons[sim_node()][root_id].tolerance = (uint8_t )(S4StateM$rootBeacons[sim_node()][root_id].tolerance / 2.0);
                        better_parent = S4StateM$rootBeacons[sim_node()][root_id].tolerance == 0;
                        if (S4StateM$rootBeacons[sim_node()][root_id].tolerance == 0) {
                            S4StateM$rootBeacons[sim_node()][root_id].tolerance = S4StateM$RESET_TOLERANCE;
                            sim_log_debug(239U, "S4-debug", "UpdateBeacon: diff parent, different hop, reset tolerance: t[ %d ]= %d\n", root_id, S4StateM$rootBeacons[sim_node()][root_id].tolerance);
                          }
                        else 
#line 1182
                          {
                            sim_log_debug(240U, "S4-debug", "UpdateBeacon: diff parent, different hop, decrease tolerance: t[ %d ]= %d\n", root_id, S4StateM$rootBeacons[sim_node()][root_id].tolerance);
                          }
                      }
                    else 
#line 1185
                      {

                        if (S4StateM$rootBeacons[sim_node()][root_id].tolerance < 255) {
                          S4StateM$rootBeacons[sim_node()][root_id].tolerance++;
                          }
#line 1189
                        sim_log_debug(241U, "S4-debug", "UpdateBeacon: diff parent,   same hop, increase tolerance: t[ %d ]= %d\n", root_id, S4StateM$rootBeacons[sim_node()][root_id].tolerance);
                      }
                  }


                sim_log_debug(242U, "S4-debug", "UpdateRootBeacon: comparing ETX. Current etx %f hopcount %d . Received etx %f hopcount %d (threshold:%f)\n", current_combined_etx, S4StateM$rootBeacons[sim_node()][root_id].hops, received_combined_etx, hopcount, etx_change_threshold);




                sim_log_debug(243U, "S4-debug", "%s ETX root_id: %d CURRENT etx: %f hopcount: %d through: %d RECEIVED etx: %f hopcount: %d from: %d changed: %d\n", sim_time_string(), root_id, current_combined_etx, S4StateM$rootBeacons[sim_node()][root_id].hops, S4StateM$rootBeacons[sim_node()][root_id].parent, received_combined_etx, hopcount, from, force_update || (valid_seqno && (same_parent || better_parent)));
              }
            }
        }
    }







  if (force_update) {
      S4StateM$rootBeacons[sim_node()][root_id].tolerance = S4StateM$RESET_TOLERANCE;
      sim_log_debug(244U, "S4-debug", "UpdateBeacon: force update,   - -, reset tolerance: t[ %d ]= %d\n", root_id, S4StateM$rootBeacons[sim_node()][root_id].tolerance);
    }
#line 1232
  if ((
#line 1231
  force_update || ((valid_seqno || S4StateM$is_within_2(seqno, S4StateM$rootBeacons[sim_node()][root_id].last_seqno)) && (better_parent || equal_parent)))
   || (seqno == S4StateM$rootBeacons[sim_node()][root_id].last_seqno && better_parent)) {
      bool coordinates_changed;
#line 1233
      bool parent_changed;









      parent_changed = force_update || S4StateM$rootBeacons[sim_node()][root_id].parent != from;
      coordinates_changed = force_update || S4StateM$rootBeacons[sim_node()][root_id].hops != hopcount;


      if (!parent_changed) {
          sim_log_debug(245U, "S4-debug", "NGProcessRootBeacon: keeping parent for beacon %d\n", root_id);
        }
      else 
#line 1249
        {
          sim_log_debug(246U, "S4-debug", "NGProcessRootBeacon: replacing parent for beacon %d\n", root_id);
          if (S4StateM$rootBeacons[sim_node()][root_id].valid) {
              sim_log_debug(247U, "S4-temp", "root_beacon_%d DIRECTED GRAPH: remove edge %d\n", root_id, S4StateM$rootBeacons[sim_node()][root_id].parent);
            }

          sim_log_debug(248U, "S4-temp", "root_beacon_%d DIRECTED GRAPH: add edge %d\n", root_id, from);
        }



      if (S4StateM$rootBeacons[sim_node()][root_id].hops != hopcount) {
          S4StateM$rootBeacons[sim_node()][root_id].updated = 1;
        }



      if (root_id >= S4StateM$S4Topology$getRootNodesCount()) {
        S4StateM$S4Topology$setRootNodesCount(root_id + 1);
        }
      S4StateM$S4Topology$setRootBeaconID(S4StateM$rootBeacons[sim_node()][root_id].nodeid, 0xFF);
      S4StateM$S4Topology$setRootBeaconID(nodeid, root_id);


      if (S4StateM$rootBeacons[sim_node()][root_id].nodeid == S4StateM$AMPacket$address()) {
          S4StateM$state_is_root_beacon[sim_node()] = FALSE;
        }

      S4StateM$rootBeacons[sim_node()][root_id].valid = TRUE;
      S4StateM$rootBeacons[sim_node()][root_id].nodeid = nodeid;

      S4StateM$rootBeacons[sim_node()][root_id].parent = from;
      S4StateM$rootBeacons[sim_node()][root_id].last_seqno = seqno;
      S4StateM$rootBeacons[sim_node()][root_id].hops = hopcount;
      S4StateM$rootBeacons[sim_node()][root_id].combined_quality = received_combined_quality;
      coordinates_set_component(&S4StateM$my_coords[sim_node()], root_id, hopcount);
      __nesc_hton_uint16(S4StateM$my_coords_parents[sim_node()].parent[root_id].nxdata, S4StateM$rootBeacons[sim_node()][root_id].parent);

      sim_log_debug(249U, "S4-beacon", "CHANGED! root_id=%d, nodeid=%d, from=%d, hopcount=%d\n", root_id, nodeid, from, hopcount);



      if (coordinates_changed) {
          sim_log_debug(250U, "S4-debug", "COORDS: My Coordinates changed: ");
          coordinates_print(&S4StateM$my_coords[sim_node()]);
          S4StateM$S4Locator$statusChanged();
        }

      sim_log_debug(251U, "S4-debug", "Reached end of updateBeaconInfo\n");
    }
}

# 106 "../../tos//lib/bvr/coordinate_table_entry.h"
static __inline error_t CTEntryUpdateSeqno(CoordinateTableEntry *e, uint16_t seqno)
#line 106
{
  if (e == (void *)0) {
    return FAIL;
    }
#line 109
  __nesc_hton_uint8(e->last_seqno.nxdata, seqno);
  return SUCCESS;
}

#line 100
static __inline error_t CTEntryUpdateCoordinates(CoordinateTableEntry *e, Coordinates *c)
#line 100
{
  if (e == (void *)0 || c == (void *)0) {
    return FAIL;
    }
#line 103
  return coordinates_copy(c, & e->coords);
}

#line 74
static __inline error_t CTEntryTouch(CoordinateTableEntry *e)
#line 74
{
  if (e == (void *)0) {
    return FAIL;
    }
#line 77
  __nesc_hton_uint8(e->age.nxdata, 0);
  return SUCCESS;
}

# 253 "../../tos//lib/bvr/CoordinateTableM.nc"
inline static CoordinateTableEntry *CoordinateTableM$get_free(void )
#line 253
{
  uint8_t i;
  CoordinateTableEntry *ce = (void *)0;

  if (CoordinateTableM$num_active[sim_node()] == COORD_TABLE_SIZE) {
    return (void *)0;
    }
  for (i = 0; i < COORD_TABLE_SIZE && ce == (void *)0; i++) {
      if (__nesc_ntoh_uint8(CoordinateTableM$table[sim_node()][i].valid.nxdata) == FALSE) {
        ce = &CoordinateTableM$table[sim_node()][i];
        }
    }
#line 264
  return ce;
}

#line 322
static inline CoordinateTableEntry *CoordinateTableM$CoordinateTable$storeEntry(uint16_t addr, uint16_t first_hop, 
uint8_t seqno, uint8_t quality, 
Coordinates *coords)
{
  CoordinateTableEntry *e = (void *)0;

#line 327
  if (!CoordinateTableM$state_is_active[sim_node()]) {
      return e;
    }
  sim_log_debug(500U, "BVR-debug", "CoordinateTable$storeEntry: called with addr: %d first_hop: %d seqno: %d qual: %d \n", addr, first_hop, seqno, quality);

  e = CoordinateTableM$get_entry(addr);
  if (e != (void *)0) {
      sim_log_debug(501U, "BVR-debug", "CoordinateTable$storeEntry: store called on item that was already stored\n");
    }
  else 
#line 335
    {

      if (CoordinateTableM$num_active[sim_node()] < COORD_TABLE_SIZE) {

          CoordinateTableM$tablePtrs[sim_node()][CoordinateTableM$num_active[sim_node()]] = CoordinateTableM$get_free();
          if (CoordinateTableM$tablePtrs[sim_node()][CoordinateTableM$num_active[sim_node()]] == (void *)0) {
            sim_log_debug(502U, "BVR-error", "get_free returned null when it shouldn't!!!\n");
            }
#line 342
          __nesc_hton_uint8(CoordinateTableM$tablePtrs[sim_node()][CoordinateTableM$num_active[sim_node()]]->valid.nxdata, TRUE);
          __nesc_hton_uint16(CoordinateTableM$tablePtrs[sim_node()][CoordinateTableM$num_active[sim_node()]]->first_hop.nxdata, first_hop);
          __nesc_hton_uint8(CoordinateTableM$tablePtrs[sim_node()][CoordinateTableM$num_active[sim_node()]]->last_seqno.nxdata, seqno);
          __nesc_hton_uint16(CoordinateTableM$tablePtrs[sim_node()][CoordinateTableM$num_active[sim_node()]]->addr.nxdata, addr);
          __nesc_hton_uint8(CoordinateTableM$tablePtrs[sim_node()][CoordinateTableM$num_active[sim_node()]]->quality.nxdata, quality);
          coordinates_copy(coords, & CoordinateTableM$tablePtrs[sim_node()][CoordinateTableM$num_active[sim_node()]]->coords);
          __nesc_hton_uint8(CoordinateTableM$tablePtrs[sim_node()][CoordinateTableM$num_active[sim_node()]]->age.nxdata, 0);
          __nesc_hton_uint8(CoordinateTableM$tablePtrs[sim_node()][CoordinateTableM$num_active[sim_node()]]->pos.nxdata, CoordinateTableM$num_active[sim_node()]);
          e = CoordinateTableM$tablePtrs[sim_node()][CoordinateTableM$num_active[sim_node()]];

          CoordinateTableM$num_active[sim_node()]++;
        }
      else 
#line 353
        {




          sim_log_debug(503U, "BVR-debug", "CoordinateTable$storeEntry: item not in cache, cache full\n");
        }
    }
  CoordinateTableM$printTable();
  return e;
}

# 69 "../../tos//lib/bvr/CoordinateTable.nc"
inline static CoordinateTableEntry *S4StateM$CoordinateTable$storeEntry(uint16_t addr, uint16_t first_hop, uint8_t seqno, uint8_t quality, Coordinates *coords){
#line 69
  nx_struct __nesc_unnamed4296 *__nesc_result;
#line 69

#line 69
  __nesc_result = CoordinateTableM$CoordinateTable$storeEntry(addr, first_hop, seqno, quality, coords);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 270 "../../tos//lib/bvr/CoordinateTableM.nc"
static inline CoordinateTableEntry *CoordinateTableM$CoordinateTable$getEntry(uint16_t addr)
#line 270
{
  return CoordinateTableM$get_entry(addr);
}

# 50 "../../tos//lib/bvr/CoordinateTable.nc"
inline static CoordinateTableEntry *S4StateM$CoordinateTable$getEntry(uint16_t addr){
#line 50
  nx_struct __nesc_unnamed4296 *__nesc_result;
#line 50

#line 50
  __nesc_result = CoordinateTableM$CoordinateTable$getEntry(addr);
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 1312 "../../tos//lib/bvr/S4StateM.nc"
static inline void S4StateM$processMessage$runTask(void )
#line 1312
{

  bool found = FALSE;
  S4BeaconMsg *rcv_bvr_msg = (S4BeaconMsg *)&S4StateM$rcv_beacon_ptr[sim_node()]->data[0];
  S4BeaconMsgData *rcv_bvr_data_ptr = (S4BeaconMsgData *)& rcv_bvr_msg->type_data;
  BeaconInfo *beacon_info;
  int i;
  uint8_t beacon_i;

  uint8_t neighbor;
  uint8_t quality;
#line 1335
  Coordinates received_coords;
  CoordinateTableEntry *ce;

#line 1350
  coordinates_init(&received_coords);





  for (i = 0; i < 8; i++) {



      if (__nesc_ntoh_uint8(rcv_bvr_data_ptr->beacons[i].hopcount.nxdata) != INVALID_COMPONENT) {
          beacon_info = &rcv_bvr_data_ptr->beacons[i];

          beacon_i = __nesc_ntoh_uint8(beacon_info->beacon_id.nxdata);

          coordinates_set_component(&received_coords, beacon_i, __nesc_ntoh_uint8(beacon_info->hopcount.nxdata));
        }
    }







  if (!S4StateM$rcv_buffer_busy[sim_node()]) {
    sim_log_debug(252U, "S4-debug", "Assertion failed: in processMessage, rcv_buffer_busy is false!!\n");
    }
  if (S4StateM$LinkEstimator$find(__nesc_ntoh_uint16(rcv_bvr_msg->header.last_hop.nxdata), &neighbor) == SUCCESS) {
    found = TRUE;
    }
  else {
#line 1381
    found = FALSE;
    }
  if (found) {

      if (S4StateM$LinkEstimator$getBidirectionalQuality(neighbor, &quality) != SUCCESS) {
        quality = 0;
        }
      sim_log_debug(253U, "S4-debug", "NG$S4StateReceive$receive: from %d \n", __nesc_ntoh_uint16(rcv_bvr_msg->header.last_hop.nxdata));



      if (__nesc_ntoh_uint16(rcv_bvr_msg->header.last_hop.nxdata) == S4StateM$AMPacket$address()) {

          sim_log_debug(254U, "S4-debug", "COORDS: Received beacon from myself, discarding\n");
        }
      else 
#line 1395
        {

          sim_log_debug(255U, "S4-debug", "COORDS: Received coordinate beacon. last_hop:%d seqno:%d", __nesc_ntoh_uint16(rcv_bvr_msg->header.last_hop.nxdata), __nesc_ntoh_uint16(rcv_bvr_data_ptr->seqno.nxdata));




          sim_log_debug(256U, "S4-debug", " coords: ");
          coordinates_print(&received_coords);

          ce = S4StateM$CoordinateTable$getEntry(__nesc_ntoh_uint16(rcv_bvr_msg->header.last_hop.nxdata));
          if (ce == (void *)0) {

              sim_log_debug(257U, "S4-debug", "COORDS: Node is not in CoordinateTable\n");
              ce = S4StateM$CoordinateTable$storeEntry(__nesc_ntoh_uint16(
              rcv_bvr_msg->header.last_hop.nxdata), __nesc_ntoh_uint16(
              rcv_bvr_msg->header.last_hop.nxdata), __nesc_ntoh_uint16(
              rcv_bvr_data_ptr->seqno.nxdata), 
              quality, 
              &received_coords);
              if (ce != (void *)0) {

                  sim_log_debug(258U, "S4-debug", "COORDS: It is now\n");
                }
            }
          else 
#line 1419
            {
              sim_log_debug(259U, "S4-debug", "COORDS: Node is in CoordinateTable, updating entry\n");

              CTEntryTouch(ce);
              CTEntryUpdateCoordinates(ce, &received_coords);
              CTEntryUpdateSeqno(ce, __nesc_ntoh_uint16(rcv_bvr_data_ptr->seqno.nxdata));
            }

          if (ce == (void *)0) {
              sim_log_debug(260U, "S4-debug", "COORDS: could not store entry in CoordinateTable\n");
            }
#line 1485
          for (i = 0; i < 8; i++) {




              if (__nesc_ntoh_uint8(
#line 1489
              rcv_bvr_data_ptr->beacons[i].hopcount.nxdata) != INVALID_COMPONENT
               && __nesc_ntoh_uint16(rcv_bvr_data_ptr->beacons[i].nodeid.nxdata) != 0) 

                {
                  beacon_info = &rcv_bvr_data_ptr->beacons[i];

                  beacon_i = __nesc_ntoh_uint8(beacon_info->beacon_id.nxdata);

                  S4StateM$updateRootBeacon(beacon_i, __nesc_ntoh_uint16(beacon_info->nodeid.nxdata), __nesc_ntoh_uint16(rcv_bvr_msg->header.last_hop.nxdata), __nesc_ntoh_uint8(
                  beacon_info->quality.nxdata), __nesc_ntoh_uint8(beacon_info->seqno.nxdata), __nesc_ntoh_uint8(
                  beacon_info->hopcount.nxdata));
                }
            }
        }
    }
#line 1544
  S4StateM$rcv_buffer_busy[sim_node()] = FALSE;
}

#line 2465
static inline void S4StateM$processDVMessage$runTask(void )
#line 2465
{

  bool found = FALSE;
  DVMsg *rcv_dv_msg = (DVMsg *)&S4StateM$rcv_cluster_ptr[sim_node()]->data[0];
  DVMsgData *rcv_dv_data_ptr = (DVMsgData *)& rcv_dv_msg->type_data;
  int i;
#line 2470
  int src_index;
  int first_invalid;

  bool stored;
  uint16_t source;
  uint8_t hopcount;
  uint8_t scope;
  uint8_t seqno;
  uint8_t neighbor;









  if (!S4StateM$rcv_clusterbuffer_busy[sim_node()]) {
      sim_log_debug(286U, "S4Router", "Assertion failed: rcv_clusterbuffer_busy should be true!!\n");
    }


  sim_log_debug(287U, "S4Router", "processing DVMessage\n");

  if (S4StateM$LinkEstimator$find(__nesc_ntoh_uint16(rcv_dv_msg->header.last_hop.nxdata), &neighbor) == SUCCESS) {
    found = TRUE;
    }
  else {
#line 2498
    found = FALSE;
    }
  if (found) {




      if (__nesc_ntoh_uint16(rcv_dv_msg->header.last_hop.nxdata) == S4StateM$AMPacket$address()) {

          sim_log_debug(288U, "S4Router", "Received distance vector from myself, discarding\n");
        }
      else 
#line 2508
        {
          uint8_t counter = 0;

#line 2510
          while (counter < 4 && __nesc_ntoh_uint8(
          rcv_dv_data_ptr->dv_adv[counter].scope.nxdata) != INVALID_COMPONENT) {

              source = __nesc_ntoh_uint16(rcv_dv_data_ptr->dv_adv[counter].source.nxdata);
              hopcount = __nesc_ntoh_uint8(rcv_dv_data_ptr->dv_adv[counter].hopcount.nxdata);
              scope = __nesc_ntoh_uint8(rcv_dv_data_ptr->dv_adv[counter].scope.nxdata);
              seqno = __nesc_ntoh_uint8(rcv_dv_data_ptr->dv_adv[counter].seqno.nxdata);
              counter++;
              if (source != S4StateM$AMPacket$address()) {
                  if (scope <= hopcount) {

                      sim_log_debug(289U, "S4Router", "receive a dv with scope<=hopcount\n");
                      continue;
                    }




                  stored = FALSE;
                  first_invalid = S4StateM$cluster_size[sim_node()];
                  if (S4StateM$cluster_size[sim_node()] > 0) {
                      for (i = 0; i < S4StateM$cluster_size[sim_node()]; i++) {
                          if (! S4StateM$ClusterTable[sim_node()][i].valid && first_invalid == S4StateM$cluster_size[sim_node()]) {
                            first_invalid = i;
                            }
#line 2534
                          if (S4StateM$ClusterTable[sim_node()][i].valid && S4StateM$ClusterTable[sim_node()][i].dest == source) {
                              src_index = i;
                              stored = TRUE;
                              break;
                            }
                        }
                    }

                  if (!stored) {
                      if (S4StateM$cluster_size[sim_node()] >= 100 && first_invalid == S4StateM$cluster_size[sim_node()]) {



                          int largestHopCount = 0;
#line 2547
                          int largestHopCountPos = 0;

                          sim_log_debug(290U, "S4Router", "Failure: %d exceeds max cluster table size (%d), Finding new invalid\n", S4StateM$cluster_size[sim_node()], 100);



                          for (i = 0; i < S4StateM$cluster_size[sim_node()]; i++) {

                              if (S4StateM$ClusterTable[sim_node()][i].valid && S4StateM$ClusterTable[sim_node()][i].hops > largestHopCount) {
                                  largestHopCountPos = i;
                                  largestHopCount = S4StateM$ClusterTable[sim_node()][i].hops;
                                }
                            }

                          if (largestHopCount >= hopcount) {
                            first_invalid = largestHopCountPos;
                            }
                          else {
#line 2564
                            continue;
                            }

                          sim_log_debug(291U, "S4Router", "Found new invalid %d for %d\n", first_invalid, source);
                        }




                      S4StateM$ClusterTable[sim_node()][first_invalid].valid = 1;
                      S4StateM$ClusterTable[sim_node()][first_invalid].dest = source;
                      S4StateM$ClusterTable[sim_node()][first_invalid].parent = __nesc_ntoh_uint16(rcv_dv_msg->header.last_hop.nxdata);
                      S4StateM$ClusterTable[sim_node()][first_invalid].last_seqno = seqno;
                      S4StateM$ClusterTable[sim_node()][first_invalid].updated = 1;
                      S4StateM$ClusterTable[sim_node()][first_invalid].hops = hopcount + 1;
                      S4StateM$ClusterTable[sim_node()][first_invalid].scope = scope;





                      if (first_invalid == S4StateM$cluster_size[sim_node()]) {
                        S4StateM$cluster_size[sim_node()]++;
                        }
                    }
                  else 


                    {
#line 2623
                      if ((
#line 2622
                      S4StateM$is_greater_by_2(seqno, S4StateM$ClusterTable[sim_node()][src_index].last_seqno) || (
                      S4StateM$is_within_2(seqno, S4StateM$ClusterTable[sim_node()][src_index].last_seqno) && hopcount + 1 <= S4StateM$ClusterTable[sim_node()][src_index].hops)) || (
                      seqno == S4StateM$ClusterTable[sim_node()][src_index].last_seqno && hopcount + 1 < S4StateM$ClusterTable[sim_node()][src_index].hops)) {




                          S4StateM$ClusterTable[sim_node()][src_index].parent = __nesc_ntoh_uint16(rcv_dv_msg->header.last_hop.nxdata);
                          S4StateM$ClusterTable[sim_node()][src_index].last_seqno = seqno;
                          if (S4StateM$ClusterTable[sim_node()][src_index].hops != hopcount + 1) {
                            S4StateM$ClusterTable[sim_node()][src_index].updated = 1;
                            }
#line 2633
                          S4StateM$ClusterTable[sim_node()][src_index].hops = hopcount + 1;
                          S4StateM$ClusterTable[sim_node()][src_index].scope = scope;
                        }
                    }
                }
            }
        }
    }
#line 2660
  S4StateM$rcv_clusterbuffer_busy[sim_node()] = FALSE;
}

# 139 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void )
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow());
}

# 83 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired(void ){
#line 83
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired();
#line 83
}
#line 83
# 226 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm(void )
#line 226
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 227
    {
      unsigned int __nesc_temp = 
#line 227
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[sim_node()] + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[sim_node()];

      {
#line 227
        __nesc_atomic_end(__nesc_atomic); 
#line 227
        return __nesc_temp;
      }
    }
#line 229
    __nesc_atomic_end(__nesc_atomic); }
}

# 116 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(void ){
#line 116
  unsigned int __nesc_result;
#line 116

#line 116
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm();
#line 116

#line 116
  return __nesc_result;
#line 116
}
#line 116
#line 103
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type dt){
#line 103
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(t0, dt);
#line 103
}
#line 103
# 58 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[sim_node()] = dt;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[sim_node()] = oneshot;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(t0, dt);
}










static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void )
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[sim_node()] == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[sim_node()], FALSE);
    }
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired();
}

#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 94
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(t0, dt, TRUE);
}

# 129 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(uint32_t t0, uint32_t dt){
#line 129
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(t0, dt);
#line 129
}
#line 129
# 204 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop(void )
#line 204
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 205
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[sim_node()] = FALSE;
#line 205
    __nesc_atomic_end(__nesc_atomic); }
}

# 73 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop(void ){
#line 73
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop();
#line 73
}
#line 73
# 71 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void )
{
#line 72
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop();
}

# 78 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop();
#line 78
}
#line 78
# 100 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void )
{




  uint32_t now = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint16_t num;

  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop();

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[sim_node()][num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;
          int32_t remaining = timer->dt - elapsed;

          if (remaining < min_remaining) 
            {
              min_remaining = remaining;
              min_remaining_isset = TRUE;
            }
        }
    }

  if (min_remaining_isset) 
    {
      if (min_remaining <= 0) {
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(now);
        }
      else {
#line 135
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(now, min_remaining);
        }
    }
}

# 251 "../../tos//lib/linkestimator/LinkEstimatorM.nc"
static inline void LinkEstimatorM$updateLinkTask$runTask(void )
#line 251
{
  unsigned char __nesc_temp55;
  unsigned char *__nesc_temp54;
  unsigned char *__nesc_temp53;
  unsigned char __nesc_temp52;
  unsigned char *__nesc_temp51;
  unsigned char *__nesc_temp50;
#line 252
  uint8_t i;
#line 252
  uint8_t j;
  LinkNeighbor *n;
  uint8_t new_quality;
  uint8_t to_remove = 0;
  bool not_ready = FALSE;
  bool changed = FALSE;

  uint16_t received;
  uint16_t missed;
  uint16_t total_packets;







  for (i = 0; i < LinkEstimatorM$active_neighbors[sim_node()]; i++) {
      n = LinkEstimatorM$neighborCachePtrs[sim_node()][i];
      sim_log_debug(355U, "BVR-temp", "UpdateLinkTimer: for pos %d (node %d) chances=%d\n", i, __nesc_ntoh_uint16(n->addr.nxdata), __nesc_ntoh_uint8(n->chances.nxdata));
      not_ready = 0;
      received = missed = 0;

      sim_log_debug(356U, "BVR-temp", "UpdateLinkTimer: (node %d) [rcv,miss]: ", __nesc_ntoh_uint16(n->addr.nxdata));
      for (j = 0; j < LINK_ESTIMATOR_RECEIVE_WINDOW; j++) {
          sim_log_debug_clear(357U, "BVR-temp", " [%d,%d]", __nesc_ntoh_uint8(n->received[j].nxdata), __nesc_ntoh_uint8(n->missed[j].nxdata));
        }
      sim_log_debug_clear(358U, "BVR-temp", "\n");

      for (j = 0; j < LINK_ESTIMATOR_RECEIVE_WINDOW; j++) {
          if (__nesc_ntoh_uint8(n->received[j].nxdata) == LINK_ESTIMATOR_INVALID_PACKETS) {
              not_ready = 1;
              sim_log_debug(359U, "BVR-temp", "UpdateLinkTimer: (node %d) receive window[%d] invalid. Will not update yet.\n", __nesc_ntoh_uint16(n->addr.nxdata), j);
              break;
            }
          sim_log_debug(360U, "BVR-temp", "UpdateLinkTimer: (node %d) Adding received:%d + r[%d]:%d = %d, missed:%d + m[%d]:%d = %d\n", __nesc_ntoh_uint16(n->addr.nxdata), received, j, __nesc_ntoh_uint8(n->received[j].nxdata), received + __nesc_ntoh_uint8(n->received[j].nxdata), missed, j, __nesc_ntoh_uint8(n->missed[j].nxdata), missed + __nesc_ntoh_uint8(n->missed[j].nxdata));


          received += __nesc_ntoh_uint8(n->received[j].nxdata);
          missed += __nesc_ntoh_uint8(n->missed[j].nxdata);
        }


      if (!not_ready) {

          total_packets = received + missed;
          if (total_packets < LinkEstimatorM$min_packets[sim_node()]) {
              total_packets = LinkEstimatorM$min_packets[sim_node()];
            }
          new_quality = (uint8_t )255 * (received / (total_packets * 1.0));
          sim_log_debug(361U, "BVR-temp", "UpdateLinkTimer: (node %d) will update. total_packets:%d new_quality:%d current_window:%d\n", __nesc_ntoh_uint16(n->addr.nxdata), total_packets, new_quality, LinkEstimatorM$current_window[sim_node()]);


          if (__nesc_ntoh_uint8(n->state.nxdata) & VALID_QUALITY_MASK) {



              new_quality = (uint8_t )(0.60 * __nesc_ntoh_uint8(n->quality.nxdata) + 0.40 * new_quality);


              changed = new_quality != __nesc_ntoh_uint8(n->quality.nxdata);
            }
          else 
#line 313
            {
              (__nesc_temp50 = n->state.nxdata, __nesc_hton_uint8(__nesc_temp50, __nesc_ntoh_uint8(__nesc_temp50) | VALID_QUALITY_MASK));
              changed = TRUE;
            }

          sim_log_debug(362U, "BVR-temp", "UpdateLinkTimer: (node %d) will update. Total received:%d, missed:%d quality was:%d new:%d\n", __nesc_ntoh_uint16(n->addr.nxdata), received, missed, __nesc_ntoh_uint8(n->quality.nxdata), new_quality);



          __nesc_hton_uint8(n->quality.nxdata, new_quality);
        }


      if (__nesc_ntoh_uint8(n->received[LinkEstimatorM$current_window[sim_node()]].nxdata) == 0) {
          (__nesc_temp51 = n->age.nxdata, __nesc_hton_uint8(__nesc_temp51, (__nesc_temp52 = __nesc_ntoh_uint8(__nesc_temp51)) + 1), __nesc_temp52);
          sim_log_debug(363U, "BVR-temp", "UpdateLinkTimer: increased age(%d) to %d\n", __nesc_ntoh_uint16(n->addr.nxdata), __nesc_ntoh_uint8(n->age.nxdata));
        }
      else 
#line 329
        {
          __nesc_hton_uint8(n->age.nxdata, 0);
          sim_log_debug(364U, "BVR-temp", "UpdateLinkTimer: reset age, received a packet!\n");
        }

      if (__nesc_ntoh_uint8(n->age.nxdata) > AGE_THRESHOLD) {
          bool can_evict = LinkEstimatorM$LinkEstimator$canEvict(__nesc_ntoh_uint16(n->addr.nxdata)) == SUCCESS;

#line 336
          if (!can_evict) {
              __nesc_hton_uint8(n->age.nxdata, AGE_THRESHOLD);
            }
          else 
#line 338
            {

              LinkEstimatorM$Logger$LogDropLink(__nesc_ntoh_uint16(n->addr.nxdata));

              sim_log_debug(365U, "BVR-temp", "Neighborhood DIRECTED GRAPH: remove edge %d\n", __nesc_ntoh_uint16(n->addr.nxdata));
              sim_log_debug(366U, "BVR-temp", "UpdateLinkTimer: remove. Active neighbors:%d\n", LinkEstimatorM$active_neighbors[sim_node()]);
              to_remove++;
              (__nesc_temp53 = n->state.nxdata, __nesc_hton_uint8(__nesc_temp53, __nesc_ntoh_uint8(__nesc_temp53) | REMOVE_MASK));
              continue;
            }
        }


      if (__nesc_ntoh_uint8(n->chances.nxdata) > 0) {
        (__nesc_temp54 = n->chances.nxdata, __nesc_hton_uint8(__nesc_temp54, (__nesc_temp55 = __nesc_ntoh_uint8(__nesc_temp54)) - 1), __nesc_temp55);
        }

      LinkEstimatorM$Logger$LogChangeLink(n);

      sim_log_debug(367U, "BVR-temp", "Neighborhood DIRECTED GRAPH: remove edge %d\n", __nesc_ntoh_uint16(n->addr.nxdata));
      sim_log_debug(368U, "BVR-temp", "Neighborhood DIRECTED GRAPH: add edge %d label: %d\n", __nesc_ntoh_uint16(n->addr.nxdata), LinkEstimatorM$getQuality(i));

      __nesc_hton_uint8(n->missed[(LinkEstimatorM$current_window[sim_node()] + 1) % LINK_ESTIMATOR_RECEIVE_WINDOW].nxdata, 0);
      __nesc_hton_uint8(n->received[(LinkEstimatorM$current_window[sim_node()] + 1) % LINK_ESTIMATOR_RECEIVE_WINDOW].nxdata, 0);
    }

  LinkEstimatorM$current_window[sim_node()] = (LinkEstimatorM$current_window[sim_node()] + 1) % LINK_ESTIMATOR_RECEIVE_WINDOW;

  if (to_remove > 0) {

      for (i = 0, j = 0; j < LinkEstimatorM$active_neighbors[sim_node()]; i++, j++) {
          sim_log_debug(369U, "BVR-temp", "cleaning. i = %d, j = %d \n", i, j);
          while (j < LinkEstimatorM$active_neighbors[sim_node()] && __nesc_ntoh_uint8(LinkEstimatorM$neighborCachePtrs[sim_node()][j]->state.nxdata) & REMOVE_MASK) {
              sim_log_debug(370U, "BVR-temp", "Initializing cache pos %d (%p) (was addr %d).\n", j, LinkEstimatorM$neighborCachePtrs[sim_node()][j], __nesc_ntoh_uint16(LinkEstimatorM$neighborCachePtrs[sim_node()][j]->addr.nxdata));

              LinkEstimatorM$LinkEstimatorSynch$linkRemoved(__nesc_ntoh_uint16(LinkEstimatorM$neighborCachePtrs[sim_node()][j]->addr.nxdata));
              LinkEstimatorM$neighborInit(LinkEstimatorM$neighborCachePtrs[sim_node()][j]);
              j++;
            }
          if (i < LinkEstimatorM$active_neighbors[sim_node()] - to_remove && j > i) {
              LinkEstimatorM$neighborCachePtrs[sim_node()][i] = LinkEstimatorM$neighborCachePtrs[sim_node()][j];
            }
        }
      LinkEstimatorM$active_neighbors[sim_node()] -= to_remove;
    }
  sim_log_debug(371U, "BVR-temp", "Link Table: (active = %d)\n", LinkEstimatorM$active_neighbors[sim_node()]);
  for (i = 0; i < N_CACHE_SIZE; i++) {
      sim_log_debug(372U, "BVR-temp", "\t[%d](%p). Cache[%d](%p): valid=%d, addr=%d\n", i, LinkEstimatorM$neighborCachePtrs[sim_node()][i], i, &LinkEstimatorM$neighborCache[sim_node()][i], __nesc_ntoh_uint8(LinkEstimatorM$neighborCache[sim_node()][i].state.nxdata) & ACTIVE_MASK ? 1 : 0, __nesc_ntoh_uint16(LinkEstimatorM$neighborCache[sim_node()][i].addr.nxdata));
    }


  sim_log_debug(373U, "BVR-debug", "updateLinkTask ended\n");
}

# 347 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint32_t __nesc_hton_uint32(void * target, uint32_t value)
#line 347
{
  uint8_t *base = target;

#line 349
  base[3] = value;
  base[2] = value >> 8;
  base[1] = value >> 16;
  base[0] = value >> 24;
  return value;
}

# 948 "../../tos//lib/util/UARTLoggerM.nc"
static inline void UARTLoggerM$LogLoggerStats$runTask(void )
#line 948
{
  message_t *msg_ptr;
  BVRLogMsgWrapper *log_msg;
  BVRLogMsg *log_ptr;
  uint8_t bp_status;
  error_t result;

#line 954
  if (!UARTLoggerM$LOG_SELF) {
    return;
    }
#line 956
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 956
    {
      UARTLoggerM$stat_self_log[sim_node()]++;
      UARTLoggerM$min_available_buffers[sim_node()] = UARTLoggerM$min_available_buffers[sim_node()] < UARTLoggerM$bufferPoolGetNumberFree(&UARTLoggerM$buffers[sim_node()]) ? 
      UARTLoggerM$min_available_buffers[sim_node()] : UARTLoggerM$bufferPoolGetNumberFree(&UARTLoggerM$buffers[sim_node()]);
      UARTLoggerM$update_max_queued_send();
      result = UARTLoggerM$bufferPoolGetFree(&UARTLoggerM$buffers[sim_node()], &msg_ptr, &bp_status);
    }
#line 962
    __nesc_atomic_end(__nesc_atomic); }
  if (result == FAIL) {
      sim_log_debug(450U, "BVR-debug", "Logger: could not get free buffer\n");
      UARTLoggerM$stat_self_log_no_buffer[sim_node()]++;
      return;
    }

  log_msg = (BVRLogMsgWrapper *)&msg_ptr->data[0];
  log_ptr = (BVRLogMsg *)& log_msg->log_msg;

  __nesc_hton_uint16(log_msg->header.last_hop.nxdata, UARTLoggerM$AMPacket$address());
  __nesc_hton_uint16(log_msg->header.seqno.nxdata, (uint16_t )UARTLoggerM$stat_received[sim_node()]);

  __nesc_hton_uint8(log_ptr->type.nxdata, LOG_LOGGER_STATS);

  __nesc_hton_uint8(log_ptr->logger_stats.free_pos.nxdata, UARTLoggerM$min_available_buffers[sim_node()]);
  __nesc_hton_uint8(log_ptr->logger_stats.max_queue.nxdata, UARTLoggerM$max_queued_send[sim_node()]);
  __nesc_hton_uint32(log_ptr->logger_stats.stat_received.nxdata, UARTLoggerM$stat_received[sim_node()] + UARTLoggerM$stat_self_log[sim_node()] - 1);
  __nesc_hton_uint32(log_ptr->logger_stats.stat_written.nxdata, UARTLoggerM$stat_written[sim_node()]);
  __nesc_hton_uint32(log_ptr->logger_stats.stat_no_buffer.nxdata, UARTLoggerM$stat_no_buffer[sim_node()]);
  __nesc_hton_uint32(log_ptr->logger_stats.stat_send_failed.nxdata, UARTLoggerM$stat_send_failed[sim_node()]);
  __nesc_hton_uint32(log_ptr->logger_stats.stat_send_done_failed.nxdata, UARTLoggerM$stat_send_done_failed[sim_node()]);



  if (UARTLoggerM$LogSend$send(AM_BROADCAST_ADDR, msg_ptr, UARTLoggerM$msg_size[sim_node()]) != SUCCESS) {
      UARTLoggerM$stat_send_failed[sim_node()]++;
      sim_log_debug(451U, "BVR-debug", "Logger: send failed, freeing the buffer\n");
      UARTLoggerM$bufferPoolSetFree(&UARTLoggerM$buffers[sim_node()], msg_ptr);
    }
}

# 80 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
inline static error_t S4QueuedSendM$AirSendMsg$send(uint8_t arg_0x7fb1af1eb020, am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = LinkEstimatorTaggerCommM$AMSend$send(arg_0x7fb1af1eb020, addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 59 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/PacketAcknowledgements.nc"
inline static error_t S4ActiveMessageC$S4Acks$requestAck(message_t * msg){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = TossimPacketModelC$PacketAcknowledgements$requestAck(msg);
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 98 "../../tos//lib/commstack/S4ActiveMessageC.nc"
static inline error_t S4ActiveMessageC$PacketAcknowledgements$requestAck(message_t *msg)
#line 98
{
  return S4ActiveMessageC$S4Acks$requestAck(msg);
}

# 59 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/PacketAcknowledgements.nc"
inline static error_t S4QueuedSendM$Acks$requestAck(message_t * msg){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = S4ActiveMessageC$PacketAcknowledgements$requestAck(msg);
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 73 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Timer.nc"
inline static void S4QueuedSendM$QueueRetransmitTimer$startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(3U, dt);
#line 73
}
#line 73
# 46 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Random.nc"
inline static uint32_t S4QueuedSendM$Random$rand32(void ){
#line 46
  unsigned int __nesc_result;
#line 46

#line 46
  __nesc_result = RandomLfsrC$Random$rand32();
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 248 "../../tos//lib/commstack/S4QueuedSendM.nc"
static inline void S4QueuedSendM$QueueServiceTask$runTask(void )
#line 248
{
  uint8_t id;

  if (S4QueuedSendM$msgqueue[sim_node()][S4QueuedSendM$dequeue_next[sim_node()]].length != 0) {
      if (S4QueuedSendM$msgqueue[sim_node()][S4QueuedSendM$dequeue_next[sim_node()]].xmit_count > 0) {
          uint16_t delay = S4QueuedSendM$Random$rand32() % (20 * S4QueuedSendM$msgqueue[sim_node()][S4QueuedSendM$dequeue_next[sim_node()]].xmit_count) + 1;

#line 254
          S4QueuedSendM$QueueRetransmitTimer$startOneShot(delay);
          sim_log_debug(453U, "TestBVR", "Will retransmit after delay=%d\n", delay);
          return;
        }

      sim_log_debug(454U, "BVR-debug", "QueuedSend: sending msg (0x%x)\n", S4QueuedSendM$dequeue_next[sim_node()]);
      id = S4QueuedSendM$msgqueue[sim_node()][S4QueuedSendM$dequeue_next[sim_node()]].id;



      if (id != AM_S4_LOG_MSG && id != AM_BVR_LOG_MSG && S4QueuedSendM$msgqueue[sim_node()][S4QueuedSendM$dequeue_next[sim_node()]].address != 0xFFFF) {
          S4QueuedSendM$Acks$requestAck(S4QueuedSendM$msgqueue[sim_node()][S4QueuedSendM$dequeue_next[sim_node()]].pMsg);
        }

      if (id == AM_S4_LOG_MSG || id == AM_BVR_LOG_MSG) {
        }
      else {


        if (
#line 271
        S4QueuedSendM$AirSendMsg$send(id, S4QueuedSendM$msgqueue[sim_node()][S4QueuedSendM$dequeue_next[sim_node()]].address, 
        S4QueuedSendM$msgqueue[sim_node()][S4QueuedSendM$dequeue_next[sim_node()]].pMsg, 
        S4QueuedSendM$msgqueue[sim_node()][S4QueuedSendM$dequeue_next[sim_node()]].length) != SUCCESS) {
            sim_log_debug(455U, "S4-debug", "QueuedSend: send request failed. stuck in queue\n");
          }
        else {
          }
        }
    }
  else 
    {
      S4QueuedSendM$fQueueIdle[sim_node()] = TRUE;
    }
}

# 163 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(uint8_t last, message_t * msg, error_t err)
#line 163
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][last].msg = (void *)0;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend();
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(last, msg, err);
}

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void )
#line 169
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()], /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()]].msg, FAIL);
}

#line 126
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask(void )
#line 126
{
  uint8_t i;
#line 127
  uint8_t j;
#line 127
  uint8_t mask;
#line 127
  uint8_t last;
  message_t *msg;

#line 129
  for (i = 0; i < 4 / 8 + 1; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[sim_node()][i]) {
          for (mask = 1, j = 0; j < 8; j++) {
              if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[sim_node()][i] & mask) {
                  last = i * 8 + j;
                  msg = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][last].msg;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][last].msg = (void *)0;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[sim_node()][i] &= ~mask;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(last, msg, ECANCEL);
                }
              mask <<= 1;
            }
        }
    }
}

# 221 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline void SimSchedulerBasicP$TaskBasic$default$runTask(uint8_t id)
{
}

# 75 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/TaskBasic.nc"
inline static void SimSchedulerBasicP$TaskBasic$runTask(uint8_t arg_0x7fb1b032f108){
#line 75
  switch (arg_0x7fb1b032f108) {
#line 75
    case TossimPacketModelC$startDoneTask:
#line 75
      TossimPacketModelC$startDoneTask$runTask();
#line 75
      break;
#line 75
    case TossimPacketModelC$stopDoneTask:
#line 75
      TossimPacketModelC$stopDoneTask$runTask();
#line 75
      break;
#line 75
    case TossimPacketModelC$sendDoneTask:
#line 75
      TossimPacketModelC$sendDoneTask$runTask();
#line 75
      break;
#line 75
    case TestS4SimpleM$sendAnother:
#line 75
      TestS4SimpleM$sendAnother$runTask();
#line 75
      break;
#line 75
    case S4StateM$sendBeaconTask:
#line 75
      S4StateM$sendBeaconTask$runTask();
#line 75
      break;
#line 75
    case S4StateM$sendClusterTask:
#line 75
      S4StateM$sendClusterTask$runTask();
#line 75
      break;
#line 75
    case S4StateM$processMessage:
#line 75
      S4StateM$processMessage$runTask();
#line 75
      break;
#line 75
    case S4StateM$processDVMessage:
#line 75
      S4StateM$processDVMessage$runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired:
#line 75
      /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer:
#line 75
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask();
#line 75
      break;
#line 75
    case LinkEstimatorM$updateLinkTask:
#line 75
      LinkEstimatorM$updateLinkTask$runTask();
#line 75
      break;
#line 75
    case UARTLoggerM$LogLoggerStats:
#line 75
      UARTLoggerM$LogLoggerStats$runTask();
#line 75
      break;
#line 75
    case S4QueuedSendM$QueueServiceTask:
#line 75
      S4QueuedSendM$QueueServiceTask$runTask();
#line 75
      break;
#line 75
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask:
#line 75
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask();
#line 75
      break;
#line 75
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask:
#line 75
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask();
#line 75
      break;
#line 75
    default:
#line 75
      SimSchedulerBasicP$TaskBasic$default$runTask(arg_0x7fb1b032f108);
#line 75
      break;
#line 75
    }
#line 75
}
#line 75
# 110 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
inline static void LinkEstimatorTaggerCommM$AMSend$sendDone(uint8_t arg_0x7fb1af0c7258, message_t * msg, error_t error){
#line 110
  S4QueuedSendM$AirSendMsg$sendDone(arg_0x7fb1af0c7258, msg, error);
#line 110
}
#line 110
# 85 "../../tos//lib/commstack/LinkEstimatorTaggerCommM.nc"
static inline void LinkEstimatorTaggerCommM$BottomSendMsg$sendDone(uint8_t am, message_t *msg, error_t success)
#line 85
{
  sim_log_debug(476U, "BVR-debug", "LinkEstimatorCommM$sendDone: result:%d\n", success);
  LinkEstimatorTaggerCommM$AMSend$sendDone(am, msg, success);
}

# 110 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
inline static void GenericCommReallyPromiscuousM$AMSend$sendDone(uint8_t arg_0x7fb1af094bd0, message_t * msg, error_t error){
#line 110
  LinkEstimatorTaggerCommM$BottomSendMsg$sendDone(arg_0x7fb1af094bd0, msg, error);
#line 110
}
#line 110
# 67 "../../tos//lib/commstack/GenericCommReallyPromiscuousM.nc"
static inline void GenericCommReallyPromiscuousM$BottomSendMsg$sendDone(uint8_t am, message_t *msg, error_t success)
#line 67
{
  sim_log_debug(478U, "S4-debug", "Called GenericCommReallyPromiscuousM.AMSend.sendDone with args(am=%d): msg, %d\n", am, success);



  GenericCommReallyPromiscuousM$AMSend$sendDone(am, msg, success);
}

# 110 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
inline static void /*GenericCommReallyPromiscuous.AMDVSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$3$AMSend$sendDone(message_t * msg, error_t error){
#line 110
  GenericCommReallyPromiscuousM$BottomSendMsg$sendDone(AM_DV_MSG, msg, error);
#line 110
}
#line 110
# 65 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/system/AMQueueEntryP.nc"
static inline void /*GenericCommReallyPromiscuous.AMDVSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$3$Send$sendDone(message_t *m, error_t err)
#line 65
{
  /*GenericCommReallyPromiscuous.AMDVSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$3$AMSend$sendDone(m, err);
}

# 54 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$get(void )
#line 54
{
#line 54
  return (atm128RegFile[sim_node()][27U] & (1 << 2)) != 0;
}

# 43 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/GeneralIO.nc"
inline static bool LedsP$Led0$get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 60 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$toggle(void )
#line 60
{
#line 60
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 60
    atm128RegFile[sim_node()][27U] ^= 1 << 2;
#line 60
    __nesc_atomic_end(__nesc_atomic); }
}

# 42 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led0$toggle(void ){
#line 42
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$toggle();
#line 42
}
#line 42
# 84 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/system/LedsP.nc"
static inline void LedsP$Leds$led0Toggle(void )
#line 84
{
  LedsP$Led0$toggle();
  sim_log_debug(468U, "LedsC", "LEDS: Led""0"" %s.\n", LedsP$Led0$get() ? "off" : "on");
#line 86
  ;
}

# 67 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Leds.nc"
inline static void S4QueuedSendM$Leds$led0Toggle(void ){
#line 67
  LedsP$Leds$led0Toggle();
#line 67
}
#line 67
# 140 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/TossimPacketModelC.nc"
static inline error_t TossimPacketModelC$PacketAcknowledgements$wasAcked(message_t *ack)
#line 140
{
  tossim_metadata_t *meta = TossimPacketModelC$getMetadata(ack);

#line 142
  return __nesc_ntoh_uint8(meta->ack.nxdata);
}

# 85 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/PacketAcknowledgements.nc"
inline static bool S4ActiveMessageC$S4Acks$wasAcked(message_t * msg){
#line 85
  unsigned char __nesc_result;
#line 85

#line 85
  __nesc_result = TossimPacketModelC$PacketAcknowledgements$wasAcked(msg);
#line 85

#line 85
  return __nesc_result;
#line 85
}
#line 85
# 102 "../../tos//lib/commstack/S4ActiveMessageC.nc"
static inline bool S4ActiveMessageC$PacketAcknowledgements$wasAcked(message_t *msg)
#line 102
{
  return S4ActiveMessageC$S4Acks$wasAcked(msg);
}

# 85 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/PacketAcknowledgements.nc"
inline static bool S4QueuedSendM$Acks$wasAcked(message_t * msg){
#line 85
  unsigned char __nesc_result;
#line 85

#line 85
  __nesc_result = S4ActiveMessageC$PacketAcknowledgements$wasAcked(msg);
#line 85

#line 85
  return __nesc_result;
#line 85
}
#line 85
# 110 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
inline static void S4QueuedSendM$QueueSendMsg$sendDone(uint8_t arg_0x7fb1af1ee6b0, message_t * msg, error_t error){
#line 110
  LinkEstimatorCommM$BottomSendMsg$sendDone(arg_0x7fb1af1ee6b0, msg, error);
#line 110
  switch (arg_0x7fb1af1ee6b0) {
#line 110
    case AM_S4_LOG_MSG:
#line 110
      UARTLoggerM$LogSend$sendDone(msg, error);
#line 110
      break;
#line 110
  }
#line 110
}
#line 110
# 59 "../../tos//lib/interfaces/S4Send.nc"
inline static error_t S4RouterM$S4Send$sendDone(message_t *msg, error_t success){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = TestS4SimpleM$Send$sendDone(msg, success);
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 353 "../../tos//lib/bvr/S4RouterM.nc"
static inline void S4RouterM$AMSend$sendDone(message_t *msg, error_t result)
#line 353
{
  forwardRoutingBuffer *fb;
  S4AppMsg *pS4Msg;
  uint8_t status;








  pS4Msg = (S4AppMsg *)msg->data;

  if (msg == S4RouterM$forward_buffer[sim_node()].msg) {
      fb = &S4RouterM$forward_buffer[sim_node()];
    }
  else {
#line 369
    if (msg == S4RouterM$send_buffer[sim_node()].msg) {
        fb = &S4RouterM$send_buffer[sim_node()];
      }
    else 
#line 371
      {
        sim_log_debug(182U, "S4Router", "S4Router$AMSend$sendDone: error:%p is not a known buffer!\n", msg);
      }
    }
  if (result == SUCCESS) {
      if (S4RouterM$AMPacket$destination(msg) == 0xFFFF) {
          status = LOG_ROUTE_SENT_BCAST_OK;
        }
      else {
#line 379
        status = LOG_ROUTE_SENT_NORMAL_OK;
        }


      forwardRoutingBufferFree(fb);
      if (fb == &S4RouterM$send_buffer[sim_node()]) {
          S4RouterM$S4Send$sendDone(msg, result);
          return;
        }
      else {
        return;
        }
    }
  else 
#line 390
    {









      sim_log_debug(183U, "S4Router", "forwarding to %d failed (src %d dest %d)\n", fb->next_hop, __nesc_ntoh_uint16(pS4Msg->type_data.origin.nxdata), __nesc_ntoh_uint16(pS4Msg->type_data.dest_id.nxdata));

      forwardRoutingBufferFree(fb);
      if (S4RouterM$AMPacket$destination(msg) == 0xFFFF) {
          status = LOG_ROUTE_STATUS_BCAST_FAIL;
        }
      else 
#line 405
        {
          status = LOG_ROUTE_FAIL_STUCK;
        }

      if (fb == &S4RouterM$send_buffer[sim_node()]) {
          S4RouterM$S4Send$sendDone(msg, result);
          return;
        }
      else {
        return;
        }
    }
#line 452
  if (fb == &S4RouterM$send_buffer[sim_node()]) {
      S4RouterM$S4Send$sendDone(msg, result);
      return;
    }
  else {
    return;
    }
}

# 2876 "../../tos//lib/bvr/S4StateM.nc"
static inline void S4StateM$ClusterAMSend$sendDone(message_t *msg, error_t success)
#line 2876
{
  sim_log_debug(298U, "S4Router", "NG$ClusterAMSend$SendDone: result=%s\n", success == SUCCESS ? "ok" : "failure");
  if (msg == &S4StateM$cluster_buf[sim_node()]) {

      int i;



      i = 0;
      while (i < 4 && __nesc_ntoh_uint8(
      S4StateM$cluster_data_ptr[sim_node()]->dv_adv[i].scope.nxdata) != INVALID_COMPONENT) {





          S4StateM$ClusterTable[sim_node()][__nesc_ntoh_uint8(S4StateM$cluster_data_ptr[sim_node()]->dv_adv[i].indx.nxdata)].updated = 0;
          i++;
        }






      if (S4StateM$next_dv[sim_node()] < S4StateM$cluster_size[sim_node()]) {
          S4StateM$set_cluster_msg();
          if (S4StateM$curr_dv_size[sim_node()] > 0) {
              uint16_t delay = S4StateM$Random$rand32() % S4StateM$delay_timer_jit[sim_node()] + 1;

#line 2905
              S4StateM$ClusterRetransmitTimer$startOneShot(delay);
            }
          else 
#line 2906
            {
              if (S4StateM$next_dv[sim_node()] < S4StateM$cluster_size[sim_node()]) {

                  sim_log_debug(299U, "S4Router", "curr_dv_size is 0, but not the end of cluster table!\n");
                  return;
                }

              S4StateM$next_dv[sim_node()] = 0;
              S4StateM$cluster_send_busy[sim_node()] = FALSE;
              S4StateM$dv_send_retries[sim_node()] = 0;
            }
        }
      else 
#line 2917
        {

          S4StateM$next_dv[sim_node()] = 0;
          S4StateM$cluster_send_busy[sim_node()] = FALSE;
          S4StateM$dv_send_retries[sim_node()] = 0;
        }
    }

  return;
}

#line 1968
static inline void S4StateM$S4StateAMSend$sendDone(message_t *msg, error_t success)
#line 1968
{
  sim_log_debug(270U, "S4-state-func", "NG$S4StateAMSend$SendDone (%p): result=%s\n", msg, success == SUCCESS ? "ok" : "failure");
  if (msg == &S4StateM$beacon_buf[sim_node()]) {

      int j;
      uint8_t beacon_j;

      sim_log_debug(271U, "S4UserRouter", "\t sent beacon buffer\n");




      for (j = 0; j < 8; j++) {



          if (__nesc_ntoh_uint8(S4StateM$beacon_data_ptr[sim_node()]->beacons[j].hopcount.nxdata) != INVALID_COMPONENT) {

              beacon_j = __nesc_ntoh_uint8(S4StateM$beacon_data_ptr[sim_node()]->beacons[j].beacon_id.nxdata);




              S4StateM$rootBeacons[sim_node()][beacon_j].updated = 0;
            }
        }
#line 2012
      if (S4StateM$next_beacon[sim_node()] < S4StateM$S4Topology$getRootNodesCount()) {
          S4StateM$set_beacon_msg();
          if (S4StateM$curr_bv_size[sim_node()] > 0) {
              uint16_t delay = S4StateM$Random$rand32() % S4StateM$delay_timer_jit[sim_node()] + 1;

#line 2016
              S4StateM$BeaconRetransmitTimer$startOneShot(delay);
            }
          else 
#line 2017
            {
              if (S4StateM$next_beacon[sim_node()] < S4StateM$S4Topology$getRootNodesCount()) {



                  return;
                }

              S4StateM$beacon_send_busy[sim_node()] = FALSE;
              S4StateM$beacon_send_retries[sim_node()] = 0;
              S4StateM$next_beacon[sim_node()] = 0;
            }
        }
      else 
#line 2029
        {


          S4StateM$beacon_send_busy[sim_node()] = FALSE;
          S4StateM$beacon_send_retries[sim_node()] = 0;
          S4StateM$next_beacon[sim_node()] = 0;
        }
    }



  return;
}

# 118 "../../tos//lib/commstack/FilterLocalCommM.nc"
static inline void FilterLocalCommM$AMSend$default$sendDone(uint8_t am, message_t *msg, error_t success)
#line 118
{
  return;
}

# 110 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
inline static void FilterLocalCommM$AMSend$sendDone(uint8_t arg_0x7fb1af849368, message_t * msg, error_t error){
#line 110
  switch (arg_0x7fb1af849368) {
#line 110
    case AM_S4_APP_MSG:
#line 110
      S4RouterM$AMSend$sendDone(msg, error);
#line 110
      break;
#line 110
    case AM_S4_BEACON_MSG:
#line 110
      S4StateM$S4StateAMSend$sendDone(msg, error);
#line 110
      break;
#line 110
    case AM_DV_MSG:
#line 110
      S4StateM$ClusterAMSend$sendDone(msg, error);
#line 110
      break;
#line 110
    default:
#line 110
      FilterLocalCommM$AMSend$default$sendDone(arg_0x7fb1af849368, msg, error);
#line 110
      break;
#line 110
    }
#line 110
}
#line 110
# 99 "../../tos//lib/commstack/FilterLocalCommM.nc"
static inline void FilterLocalCommM$BottomSendMsg$sendDone(uint8_t am, message_t *msg, error_t success)
#line 99
{
  sim_log_debug(303U, "BVR-temp", "FilterLocalCommM$sendDone: result:%d\n", success);
  FilterLocalCommM$AMSend$sendDone(am, msg, success);
}

# 110 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
inline static void LinkEstimatorCommM$AMSend$sendDone(uint8_t arg_0x7fb1af810778, message_t * msg, error_t error){
#line 110
  FilterLocalCommM$BottomSendMsg$sendDone(arg_0x7fb1af810778, msg, error);
#line 110
}
#line 110
inline static void /*GenericCommReallyPromiscuous.AMLESenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$sendDone(message_t * msg, error_t error){
#line 110
  GenericCommReallyPromiscuousM$BottomSendMsg$sendDone(AM_LE_REVERSE_LINK_ESTIMATION_MSG, msg, error);
#line 110
}
#line 110
# 65 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/system/AMQueueEntryP.nc"
static inline void /*GenericCommReallyPromiscuous.AMLESenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$2$Send$sendDone(message_t *m, error_t err)
#line 65
{
  /*GenericCommReallyPromiscuous.AMLESenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$sendDone(m, err);
}

# 110 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
inline static void /*GenericCommReallyPromiscuous.AMBeaconSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$sendDone(message_t * msg, error_t error){
#line 110
  GenericCommReallyPromiscuousM$BottomSendMsg$sendDone(AM_S4_BEACON_MSG, msg, error);
#line 110
}
#line 110
# 65 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/system/AMQueueEntryP.nc"
static inline void /*GenericCommReallyPromiscuous.AMBeaconSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$sendDone(message_t *m, error_t err)
#line 65
{
  /*GenericCommReallyPromiscuous.AMBeaconSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$sendDone(m, err);
}

# 110 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
inline static void /*GenericCommReallyPromiscuous.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(message_t * msg, error_t error){
#line 110
  GenericCommReallyPromiscuousM$BottomSendMsg$sendDone(AM_S4_APP_MSG, msg, error);
#line 110
}
#line 110
# 65 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/system/AMQueueEntryP.nc"
static inline void /*GenericCommReallyPromiscuous.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(message_t *m, error_t err)
#line 65
{
  /*GenericCommReallyPromiscuous.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(m, err);
}

# 65 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$nextPacket(void )
#line 65
{
  uint8_t i;

#line 67
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] = (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] + 1) % 4;
  for (i = 0; i < 4; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()]].msg == (void *)0 || 
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] / 8] & (1 << /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] % 8)) 
        {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] = (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] + 1) % 4;
        }
      else {
          break;
        }
    }
  if (i >= 4) {
#line 78
    /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] = 4;
    }
}

# 147 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMPacket.nc"
inline static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(message_t * amsg){
#line 147
  unsigned char __nesc_result;
#line 147

#line 147
  __nesc_result = TossimActiveMessageC$AMPacket$type(amsg);
#line 147

#line 147
  return __nesc_result;
#line 147
}
#line 147
#line 78
inline static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(message_t * amsg){
#line 78
  unsigned short __nesc_result;
#line 78

#line 78
  __nesc_result = TossimActiveMessageC$AMPacket$destination(amsg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 65 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/TossimActiveMessageC.nc"
static inline tossim_header_t *TossimActiveMessageC$getHeader(message_t *amsg)
#line 65
{
  return (tossim_header_t *)(amsg->data - sizeof(tossim_header_t ));
}

#line 177
static inline uint8_t TossimActiveMessageC$Packet$payloadLength(message_t *msg)
#line 177
{
  return __nesc_ntoh_uint8(TossimActiveMessageC$getHeader(msg)->length.nxdata);
}

# 78 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Packet.nc"
inline static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$payloadLength(message_t * msg){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = TossimActiveMessageC$Packet$payloadLength(msg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 80 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(am_id_t arg_0x7fb1af033020, am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = TossimActiveMessageC$AMSend$send(arg_0x7fb1af033020, addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 483 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/CpmModelC.nc"
static inline void CpmModelC$free_receive_message(CpmModelC$receive_message_t *msg)
#line 483
{
  free(msg);
}

# 61 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/GainRadioModel.nc"
inline static bool CpmModelC$Model$shouldAck(message_t *msg){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = TossimPacketModelC$GainRadioModel$shouldAck(msg);
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 85 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/TossimPacketModel.nc"
inline static void TossimPacketModelC$Packet$receive(message_t *msg){
#line 85
  TossimActiveMessageC$Model$receive(msg);
#line 85
}
#line 85
# 288 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC$GainRadioModel$receive(message_t *msg)
#line 288
{
  if (TossimPacketModelC$running[sim_node()] && !TossimPacketModelC$transmitting[sim_node()]) {
      TossimPacketModelC$Packet$receive(msg);
    }
}

# 60 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/GainRadioModel.nc"
inline static void CpmModelC$Model$receive(message_t *msg){
#line 60
  TossimPacketModelC$GainRadioModel$receive(msg);
#line 60
}
#line 60
# 260 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/CpmModelC.nc"
static inline bool CpmModelC$checkReceive(CpmModelC$receive_message_t *msg)
#line 260
{
  double noise = CpmModelC$noise_hash_generation();
  CpmModelC$receive_message_t *list = CpmModelC$outstandingReceptionHead[sim_node()];

#line 263
  noise = pow(10.0, noise / 10.0);
  while (list != (void *)0) {
      if (list != msg) {
          noise += pow(10.0, list->power / 10.0);
        }
      list = list->next;
    }
  noise = 10.0 * log(noise) / log(10.0);
  return CpmModelC$shouldReceive(msg->power - noise);
}

#line 296
static inline void CpmModelC$sim_gain_receive_handle(sim_event_t *evt)
#line 296
{
  CpmModelC$receive_message_t *mine = (CpmModelC$receive_message_t *)evt->data;
  CpmModelC$receive_message_t *predecessor = (void *)0;
  CpmModelC$receive_message_t *list = CpmModelC$outstandingReceptionHead[sim_node()];

  sim_log_debug(147U, "CpmModelC", "Handling reception event @ %s.\n", sim_time_string());
  while (list != (void *)0) {
      if (list->next == mine) {
          predecessor = list;
        }
      list = list->next;
    }
  if (predecessor) {
      predecessor->next = mine->next;
    }
  else {
#line 311
    if (mine == CpmModelC$outstandingReceptionHead[sim_node()]) {
        CpmModelC$outstandingReceptionHead[sim_node()] = mine->next;
      }
    else {
        sim_log_error(148U, "CpmModelC", "Incoming packet list structure is corrupted: entry is not the head and no entry points to it.\n");
      }
    }
#line 317
  sim_log_debug(149U, "CpmModelC,SNRLoss", "Packet from %i to %i\n", (int )mine->source, (int )sim_node());
  if (!CpmModelC$checkReceive(mine)) {
      sim_log_debug(150U, "CpmModelC,SNRLoss", " - lost packet from %i as SNR was too low.\n", (int )mine->source);
      mine->lost = 1;
    }
  if (! mine->lost) {



      tossim_metadata_t *meta = (tossim_metadata_t *)& mine->msg->metadata;

#line 327
      __nesc_hton_int8(meta->strength.nxdata, mine->strength);

      sim_log_debug_clear(151U, "CpmModelC,SNRLoss", "  -signaling reception\n");
      CpmModelC$Model$receive(mine->msg);
      if (mine->ack) {
          sim_log_debug_clear(152U, "CpmModelC", " acknowledgment requested, ");
        }
      else {
          sim_log_debug_clear(153U, "CpmModelC", " no acknowledgment requested.\n");
        }

      if (mine->ack && CpmModelC$Model$shouldAck(mine->msg)) {
          sim_log_debug_clear(154U, "CpmModelC", " scheduling ack.\n");
          CpmModelC$sim_gain_schedule_ack(mine->source, sim_time() + 1, mine);
        }
      else {
          CpmModelC$free_receive_message(mine);
        }

      CpmModelC$receiving[sim_node()] = 0;
    }
  else {
      if (RandomUniform() < 0.001) {
          sim_log_debug(155U, "CpmModelC,SNRLoss", "Packet was technically lost, but TOSSIM introduces an ack false positive rate.\n");
          if (mine->ack && CpmModelC$Model$shouldAck(mine->msg)) {
              sim_log_debug_clear(156U, "CpmModelC", " scheduling ack.\n");
              CpmModelC$sim_gain_schedule_ack(mine->source, sim_time() + 1, mine);
            }
          else {
              CpmModelC$free_receive_message(mine);
            }
        }
      else {
          CpmModelC$free_receive_message(mine);
        }
      CpmModelC$receiving[sim_node()] = 0;
      sim_log_debug_clear(157U, "CpmModelC,SNRLoss", "  -packet was lost.\n");
    }
}

#line 467
static inline sim_event_t *CpmModelC$allocate_receive_event(sim_time_t endTime, CpmModelC$receive_message_t *msg)
#line 467
{
  sim_event_t *evt = (sim_event_t *)malloc(sizeof(sim_event_t ));

#line 469
  evt->mote = sim_node();
  evt->time = endTime;
  evt->handle = CpmModelC$sim_gain_receive_handle;
  evt->cleanup = sim_queue_cleanup_event;
  evt->cancelled = 0;
  evt->force = 1;
  evt->data = msg;
  return evt;
}

static inline CpmModelC$receive_message_t *CpmModelC$allocate_receive_message(void )
#line 479
{
  return (CpmModelC$receive_message_t *)malloc(sizeof(CpmModelC$receive_message_t ));
}

#line 369
static inline void CpmModelC$enqueue_receive_event(int source, sim_time_t endTime, message_t *msg, bool receive, double power, double reversePower)
#line 369
{
  sim_event_t *evt;
  CpmModelC$receive_message_t *list;
  CpmModelC$receive_message_t *rcv = CpmModelC$allocate_receive_message();
  double noiseStr = CpmModelC$packetNoise(rcv);

#line 374
  rcv->source = source;
  rcv->start = sim_time();
  rcv->end = endTime;
  rcv->power = power;
  rcv->reversePower = reversePower;




  rcv->strength = (int8_t )floor(10.0 * log(pow(10.0, power / 10.0) + pow(10.0, noiseStr / 10.0)) / log(10.0));
  rcv->msg = msg;
  rcv->lost = 0;
  rcv->ack = receive;





  if (!sim_mote_is_on(sim_node())) {
      sim_log_debug(158U, "CpmModelC", "Lost packet from %i due to %i being off\n", source, sim_node());
      rcv->lost = 1;
    }
  else {
#line 396
    if (!CpmModelC$shouldReceive(power - noiseStr)) {
        sim_log_debug(159U, "CpmModelC,SNRLoss", "Lost packet from %i to %i due to SNR being too low (%i)\n", source, sim_node(), (int )(power - noiseStr));
        rcv->lost = 1;
      }
    else {
#line 400
      if (CpmModelC$receiving[sim_node()]) {
          sim_log_debug(160U, "CpmModelC,SNRLoss", "Lost packet from %i due to %i being mid-reception\n", source, sim_node());
          rcv->lost = 1;
        }
      else {
#line 404
        if (CpmModelC$transmitting[sim_node()] && rcv->start < CpmModelC$transmissionEndTime[sim_node()] && CpmModelC$transmissionEndTime[sim_node()] <= rcv->end) {
            sim_log_debug(161U, "CpmModelC,SNRLoss", "Lost packet from %i due to %i being mid-transmission, transmissionEndTime %llu\n", source, sim_node(), CpmModelC$transmissionEndTime[sim_node()]);
            rcv->lost = 1;
          }
        else {
            CpmModelC$receiving[sim_node()] = 1;
          }
        }
      }
    }
#line 412
  list = CpmModelC$outstandingReceptionHead[sim_node()];
  while (list != (void *)0) {
      if (!CpmModelC$shouldReceive(list->power - rcv->power)) {
          sim_log_debug(162U, "Gain,SNRLoss", "Going to lose packet from %i with signal %lf as am receiving a packet from %i with signal %lf\n", list->source, list->power, source, rcv->power);
          list->lost = 1;
        }
      list = list->next;
    }

  rcv->next = CpmModelC$outstandingReceptionHead[sim_node()];
  CpmModelC$outstandingReceptionHead[sim_node()] = rcv;
  evt = CpmModelC$allocate_receive_event(endTime, rcv);
  sim_queue_insert(evt);
}


static inline void CpmModelC$sim_gain_put(int dest, message_t *msg, sim_time_t endTime, bool receive, double power, double reversePower)
#line 428
{
  int prevNode = sim_node();

#line 430
  sim_log_debug(163U, "CpmModelC", "Enqueing reception event for %i at %llu with power %lf.\n", dest, endTime, power);
  sim_set_node(dest);
  CpmModelC$enqueue_receive_event(prevNode, endTime, msg, receive, power, reversePower);
  sim_set_node(prevNode);
}

static inline void CpmModelC$Model$putOnAirTo(int dest, message_t *msg, bool ack, sim_time_t endTime, double power, double reversePower)
#line 436
{
  CpmModelC$receive_message_t *list;
  gain_entry_t *neighborEntry = sim_gain_first(sim_node());

#line 439
  CpmModelC$requestAck[sim_node()] = ack;
  CpmModelC$outgoing[sim_node()] = msg;
  CpmModelC$transmissionEndTime[sim_node()] = endTime;
  sim_log_debug(164U, "CpmModelC", "Node %i transmitting to %i, finishes at %llu.\n", sim_node(), dest, endTime);

  while (neighborEntry != (void *)0) {
      int other = neighborEntry->mote;

#line 446
      CpmModelC$sim_gain_put(other, msg, endTime, ack, power + sim_gain_value(sim_node(), other), reversePower + sim_gain_value(other, sim_node()));
      neighborEntry = sim_gain_next(neighborEntry);
    }

  list = CpmModelC$outstandingReceptionHead[sim_node()];
  while (list != (void *)0) {
      list->lost = 1;
      sim_log_debug(165U, "CpmModelC,SNRLoss", "Lost packet from %i because %i has outstanding reception, startTime %llu endTime %llu\n", list->source, sim_node(), list->start, list->end);
      list = list->next;
    }
}

# 48 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/GainRadioModel.nc"
inline static void TossimPacketModelC$GainRadioModel$putOnAirTo(int dest, message_t *msg, bool ack, sim_time_t endTime, double gain, double reverseGain){
#line 48
  CpmModelC$Model$putOnAirTo(dest, msg, ack, endTime, gain, reverseGain);
#line 48
}
#line 48
# 280 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC$send_transmit_done(sim_event_t *evt)
#line 280
{
  message_t *rval = TossimPacketModelC$sending[sim_node()];

#line 282
  TossimPacketModelC$sending[sim_node()] = (void *)0;
  TossimPacketModelC$transmitting[sim_node()] = FALSE;
  sim_log_debug(139U, "TossimPacketModelC", "PACKET: Signaling send done at %llu.\n", sim_time());
  TossimPacketModelC$Packet$sendDone(rval, TossimPacketModelC$running[sim_node()] ? SUCCESS : EOFF);
}

#line 253
static inline void TossimPacketModelC$send_transmit(sim_event_t *evt)
#line 253
{
  sim_time_t duration;
  tossim_metadata_t *metadata = TossimPacketModelC$getMetadata(TossimPacketModelC$sending[sim_node()]);

  duration = 8 * TossimPacketModelC$sendingLength[sim_node()];
  duration /= sim_csma_bits_per_symbol();
  duration += sim_csma_preamble_length();

  if (__nesc_ntoh_uint8(metadata->ack.nxdata)) {
      duration += sim_csma_ack_time();
    }
  duration *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();

  evt->time += duration;
  evt->handle = TossimPacketModelC$send_transmit_done;

  sim_log_debug(137U, "TossimPacketModelC", "PACKET: Broadcasting packet to everyone.\n");
  TossimPacketModelC$GainRadioModel$putOnAirTo(TossimPacketModelC$destNode[sim_node()], TossimPacketModelC$sending[sim_node()], __nesc_ntoh_uint8(metadata->ack.nxdata), evt->time, 0.0, 0.0);
  __nesc_hton_uint8(metadata->ack.nxdata, 0);

  evt->time += sim_csma_rxtx_delay() * (sim_ticks_per_sec() / sim_csma_symbols_per_sec());

  sim_log_debug(138U, "TossimPacketModelC", "PACKET: Send done at %llu.\n", evt->time);

  sim_queue_insert(evt);
}

# 459 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/CpmModelC.nc"
static inline void CpmModelC$Model$setPendingTransmission(void )
#line 459
{
  CpmModelC$transmitting[sim_node()] = TRUE;
  sim_log_debug(166U, "CpmModelC", "setPendingTransmission: transmitting %i @ %s\n", CpmModelC$transmitting[sim_node()], sim_time_string());
}

# 57 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/GainRadioModel.nc"
inline static void TossimPacketModelC$GainRadioModel$setPendingTransmission(void ){
#line 57
  CpmModelC$Model$setPendingTransmission();
#line 57
}
#line 57
# 211 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/CpmModelC.nc"
static inline bool CpmModelC$Model$clearChannel(void )
#line 211
{
  sim_log_debug(145U, "CpmModelC", "Checking clear channel @ %s: %f <= %f \n", sim_time_string(), (double )CpmModelC$packetNoise((void *)0), CpmModelC$clearThreshold[sim_node()]);
  return CpmModelC$packetNoise((void *)0) < CpmModelC$clearThreshold[sim_node()];
}

# 56 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/GainRadioModel.nc"
inline static bool TossimPacketModelC$GainRadioModel$clearChannel(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = CpmModelC$Model$clearChannel();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 211 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC$send_backoff(sim_event_t *evt)
#line 211
{
  TossimPacketModelC$backoffCount[sim_node()]++;
  if (TossimPacketModelC$GainRadioModel$clearChannel()) {
      TossimPacketModelC$neededFreeSamples[sim_node()]--;
    }
  else {
      TossimPacketModelC$neededFreeSamples[sim_node()] = sim_csma_min_free_samples();
    }
  if (TossimPacketModelC$neededFreeSamples[sim_node()] == 0) {
      sim_time_t delay;

#line 221
      delay = sim_csma_rxtx_delay();
      delay *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();
      evt->time += delay;
      TossimPacketModelC$transmitting[sim_node()] = TRUE;
      TossimPacketModelC$GainRadioModel$setPendingTransmission();
      evt->handle = TossimPacketModelC$send_transmit;
      sim_queue_insert(evt);
    }
  else {
#line 229
    if (sim_csma_max_iterations() == 0 || 
    TossimPacketModelC$backoffCount[sim_node()] <= sim_csma_max_iterations()) {
        sim_time_t backoff = sim_random();
        sim_time_t modulo = sim_csma_high() - sim_csma_low();

#line 233
        modulo *= pow(sim_csma_exponent_base(), TossimPacketModelC$backoffCount[sim_node()]);
        backoff %= modulo;

        backoff += sim_csma_init_low();
        backoff *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();
        evt->time += backoff;
        sim_queue_insert(evt);
      }
    else {
        message_t *rval = TossimPacketModelC$sending[sim_node()];

#line 243
        TossimPacketModelC$sending[sim_node()] = (void *)0;
        sim_log_debug(136U, "TossimPacketModelC", "PACKET: Failed to send packet due to busy channel.\n");
        TossimPacketModelC$Packet$sendDone(rval, EBUSY);
      }
    }
}

#line 187
static inline void TossimPacketModelC$start_csma(void )
#line 187
{
  sim_time_t first_sample;




  sim_time_t backoff = sim_random();

#line 194
  backoff %= sim_csma_init_high() - sim_csma_init_low();
  backoff += sim_csma_init_low();
  backoff *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();
  sim_log_debug(135U, "TossimPacketModelC", "Starting CMSA with %lli.\n", backoff);
  first_sample = sim_time() + backoff;

  TossimPacketModelC$sendEvent[sim_node()].mote = sim_node();
  TossimPacketModelC$sendEvent[sim_node()].time = first_sample;
  TossimPacketModelC$sendEvent[sim_node()].force = 0;
  TossimPacketModelC$sendEvent[sim_node()].cancelled = 0;

  TossimPacketModelC$sendEvent[sim_node()].handle = TossimPacketModelC$send_backoff;
  TossimPacketModelC$sendEvent[sim_node()].cleanup = sim_queue_cleanup_none;
  sim_queue_insert(&TossimPacketModelC$sendEvent[sim_node()]);
}

#line 161
static inline error_t TossimPacketModelC$Packet$send(int dest, message_t *msg, uint8_t len)
#line 161
{
  if (!TossimPacketModelC$initialized[sim_node()]) {
      sim_log_error(133U, "TossimPacketModelC", "TossimPacketModelC: Send.send() called, but not initialized!\n");
      return EOFF;
    }
  if (!TossimPacketModelC$running[sim_node()]) {
      sim_log_error(134U, "TossimPacketModelC", "TossimPacketModelC: Send.send() called, but not running!\n");
      return EOFF;
    }

  if (TossimPacketModelC$sending[sim_node()] != (void *)0) {
      return EBUSY;
    }
  TossimPacketModelC$sendingLength[sim_node()] = len;
  TossimPacketModelC$sending[sim_node()] = msg;
  TossimPacketModelC$destNode[sim_node()] = dest;
  TossimPacketModelC$backoffCount[sim_node()] = 0;
  TossimPacketModelC$neededFreeSamples[sim_node()] = sim_csma_min_free_samples();
  TossimPacketModelC$start_csma();
  return SUCCESS;
}

# 57 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/TossimPacketModel.nc"
inline static error_t TossimActiveMessageC$Model$send(int node, message_t *msg, uint8_t len){
#line 57
  unsigned char __nesc_result;
#line 57

#line 57
  __nesc_result = TossimPacketModelC$Packet$send(node, msg, len);
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
# 90 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/CpmModelC.nc"
static inline double CpmModelC$timeInMs(void )
#line 90
{
  sim_time_t ftime = sim_time();
  int hours;
#line 92
  int minutes;
#line 92
  int seconds;
  sim_time_t secondBillionths;
  int temp_time;
  double ms_time;

  secondBillionths = ftime % sim_ticks_per_sec();
  if (sim_ticks_per_sec() > (sim_time_t )1000000000) {
      secondBillionths /= sim_ticks_per_sec() / (sim_time_t )1000000000;
    }
  else {
      secondBillionths *= (sim_time_t )1000000000 / sim_ticks_per_sec();
    }
  temp_time = (int )(secondBillionths / 10000);

  if (temp_time % 10 >= 5) {
      temp_time += 10 - temp_time % 10;
    }
  else {
      temp_time -= temp_time % 10;
    }
  ms_time = (float )(temp_time / 100.0);

  seconds = (int )(ftime / sim_ticks_per_sec());
  minutes = seconds / 60;
  hours = minutes / 60;
  seconds %= 60;
  minutes %= 60;

  ms_time += (hours * 3600 + minutes * 60 + seconds) * 1000;

  return ms_time;
}

#line 230
static inline double CpmModelC$prr_estimate_from_snr(double SNR)
#line 230
{



  double beta1 = 0.9794;
  double beta2 = 2.3851;
  double X = SNR - beta2;
  double PSE = 0.5 * erfc(beta1 * X / sqrt(2));
  double prr_hat = pow(1 - PSE, 23 * 2);

#line 239
  sim_log_debug(146U, "CpmModelC,SNR", "SNR is %lf, PRR is %lf\n", SNR, prr_hat);
  if (prr_hat > 1) {
    prr_hat = 1.1;
    }
  else {
#line 242
    if (prr_hat < 0) {
      prr_hat = -0.1;
      }
    }
#line 245
  return prr_hat;
}

# 127 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/TossimActiveMessageC.nc"
static inline bool TossimActiveMessageC$Model$shouldAck(message_t *msg)
#line 127
{
  tossim_header_t *header = TossimActiveMessageC$getHeader(msg);

#line 129
  if (__nesc_ntoh_uint16(header->dest.nxdata) == TossimActiveMessageC$amAddress()) {
      sim_log_debug(126U, "Acks", "Received packet addressed to me so ack it\n");
      return TRUE;
    }
  return FALSE;
}

# 87 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/TossimPacketModel.nc"
inline static bool TossimPacketModelC$Packet$shouldAck(message_t *msg){
#line 87
  unsigned char __nesc_result;
#line 87

#line 87
  __nesc_result = TossimActiveMessageC$Model$shouldAck(msg);
#line 87

#line 87
  return __nesc_result;
#line 87
}
#line 87
# 296 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC$GainRadioModel$acked(message_t *msg)
#line 296
{
  if (TossimPacketModelC$running[sim_node()]) {
      tossim_metadata_t *metadata = TossimPacketModelC$getMetadata(TossimPacketModelC$sending[sim_node()]);

#line 299
      __nesc_hton_uint8(metadata->ack.nxdata, 1);
      if (msg != TossimPacketModelC$sending[sim_node()]) {
          TossimPacketModelC$error[sim_node()] = 1;
          sim_log_debug(140U, "TossimPacketModelC", "Requested ack for 0x%x, but outgoing packet is 0x%x.\n", msg, TossimPacketModelC$sending[sim_node()]);
        }
    }
}

# 59 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/GainRadioModel.nc"
inline static void CpmModelC$Model$acked(message_t *msg){
#line 59
  TossimPacketModelC$GainRadioModel$acked(msg);
#line 59
}
#line 59
# 151 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/CpmModelC.nc"
static inline double CpmModelC$arr_estimate_from_snr(double SNR)
#line 151
{
  double beta1 = 0.9794;
  double beta2 = 2.3851;
  double X = SNR - beta2;
  double PSE = 0.5 * erfc(beta1 * X / sqrt(2));
  double prr_hat = pow(1 - PSE, 23 * 2);

#line 157
  sim_log_debug(143U, "CpmModelC,SNRLoss", "SNR is %lf, ARR is %lf\n", SNR, prr_hat);
  if (prr_hat > 1) {
    prr_hat = 1.1;
    }
  else {
#line 160
    if (prr_hat < 0) {
      prr_hat = -0.1;
      }
    }
#line 163
  return prr_hat;
}

static inline int CpmModelC$shouldAckReceive(double snr)
#line 166
{
  double prr = CpmModelC$arr_estimate_from_snr(snr);
  double coin = RandomUniform();

#line 169
  if (prr >= 0 && prr <= 1) {
      if (coin < prr) {
        prr = 1.0;
        }
      else {
#line 173
        prr = 0.0;
        }
    }
#line 175
  return (int )prr;
}

static inline void CpmModelC$sim_gain_ack_handle(sim_event_t *evt)
#line 178
{






  if (
#line 184
  CpmModelC$requestAck[sim_node()] && 
  CpmModelC$outgoing[sim_node()] != (void *)0 && 
  sim_mote_is_on(sim_node())) {
      CpmModelC$receive_message_t *rcv = (CpmModelC$receive_message_t *)evt->data;
      double power = rcv->reversePower;
      double noise = CpmModelC$packetNoise(rcv);
      double snr = power - noise;

#line 191
      if (CpmModelC$shouldAckReceive(snr)) {
          CpmModelC$Model$acked(CpmModelC$outgoing[sim_node()]);
        }
    }
  CpmModelC$free_receive_message((CpmModelC$receive_message_t *)evt->data);
}

# 67 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/TaskBasic.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 68 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMPacket.nc"
inline static am_addr_t LinkEstimatorTaggerCommM$AMPacket$address(void ){
#line 68
  unsigned short __nesc_result;
#line 68

#line 68
  __nesc_result = S4ActiveMessageC$AMPacket$address();
#line 68

#line 68
  return __nesc_result;
#line 68
}
#line 68
# 75 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Send.nc"
inline static error_t /*GenericCommReallyPromiscuous.AMDVSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$3$Send$send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(3U, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 162 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMPacket.nc"
inline static void /*GenericCommReallyPromiscuous.AMDVSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$3$AMPacket$setType(message_t * amsg, am_id_t t){
#line 162
  TossimActiveMessageC$AMPacket$setType(amsg, t);
#line 162
}
#line 162
#line 103
inline static void /*GenericCommReallyPromiscuous.AMDVSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$3$AMPacket$setDestination(message_t * amsg, am_addr_t addr){
#line 103
  TossimActiveMessageC$AMPacket$setDestination(amsg, addr);
#line 103
}
#line 103
# 53 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/system/AMQueueEntryP.nc"
static inline error_t /*GenericCommReallyPromiscuous.AMDVSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$3$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 55
{
  /*GenericCommReallyPromiscuous.AMDVSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$3$AMPacket$setDestination(msg, dest);
  /*GenericCommReallyPromiscuous.AMDVSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$3$AMPacket$setType(msg, 201);
  return /*GenericCommReallyPromiscuous.AMDVSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$3$Send$send(msg, len);
}

# 75 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Send.nc"
inline static error_t /*GenericCommReallyPromiscuous.AMLESenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$2$Send$send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(2U, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 162 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMPacket.nc"
inline static void /*GenericCommReallyPromiscuous.AMLESenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$2$AMPacket$setType(message_t * amsg, am_id_t t){
#line 162
  TossimActiveMessageC$AMPacket$setType(amsg, t);
#line 162
}
#line 162
#line 103
inline static void /*GenericCommReallyPromiscuous.AMLESenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$2$AMPacket$setDestination(message_t * amsg, am_addr_t addr){
#line 103
  TossimActiveMessageC$AMPacket$setDestination(amsg, addr);
#line 103
}
#line 103
# 53 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/system/AMQueueEntryP.nc"
static inline error_t /*GenericCommReallyPromiscuous.AMLESenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 55
{
  /*GenericCommReallyPromiscuous.AMLESenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$2$AMPacket$setDestination(msg, dest);
  /*GenericCommReallyPromiscuous.AMLESenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$2$AMPacket$setType(msg, 59);
  return /*GenericCommReallyPromiscuous.AMLESenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$2$Send$send(msg, len);
}

# 75 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Send.nc"
inline static error_t /*GenericCommReallyPromiscuous.AMBeaconSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(1U, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 162 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMPacket.nc"
inline static void /*GenericCommReallyPromiscuous.AMBeaconSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setType(message_t * amsg, am_id_t t){
#line 162
  TossimActiveMessageC$AMPacket$setType(amsg, t);
#line 162
}
#line 162
#line 103
inline static void /*GenericCommReallyPromiscuous.AMBeaconSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setDestination(message_t * amsg, am_addr_t addr){
#line 103
  TossimActiveMessageC$AMPacket$setDestination(amsg, addr);
#line 103
}
#line 103
# 53 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/system/AMQueueEntryP.nc"
static inline error_t /*GenericCommReallyPromiscuous.AMBeaconSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 55
{
  /*GenericCommReallyPromiscuous.AMBeaconSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setDestination(msg, dest);
  /*GenericCommReallyPromiscuous.AMBeaconSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setType(msg, 56);
  return /*GenericCommReallyPromiscuous.AMBeaconSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$send(msg, len);
}

# 75 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Send.nc"
inline static error_t /*GenericCommReallyPromiscuous.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(0U, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 162 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMPacket.nc"
inline static void /*GenericCommReallyPromiscuous.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(message_t * amsg, am_id_t t){
#line 162
  TossimActiveMessageC$AMPacket$setType(amsg, t);
#line 162
}
#line 162
#line 103
inline static void /*GenericCommReallyPromiscuous.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(message_t * amsg, am_addr_t addr){
#line 103
  TossimActiveMessageC$AMPacket$setDestination(amsg, addr);
#line 103
}
#line 103
# 53 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/system/AMQueueEntryP.nc"
static inline error_t /*GenericCommReallyPromiscuous.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 55
{
  /*GenericCommReallyPromiscuous.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(msg, dest);
  /*GenericCommReallyPromiscuous.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(msg, 55);
  return /*GenericCommReallyPromiscuous.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$send(msg, len);
}

# 63 "../../tos//lib/commstack/GenericCommReallyPromiscuousM.nc"
static inline error_t GenericCommReallyPromiscuousM$BottomSendMsg$default$send(uint8_t am, uint16_t addr, message_t *msg, uint8_t length)
#line 63
{
  return SUCCESS;
}

# 80 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
inline static error_t GenericCommReallyPromiscuousM$BottomSendMsg$send(uint8_t arg_0x7fb1af08f020, am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  switch (arg_0x7fb1af08f020) {
#line 80
    case AM_S4_APP_MSG:
#line 80
      __nesc_result = /*GenericCommReallyPromiscuous.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(addr, msg, len);
#line 80
      break;
#line 80
    case AM_S4_BEACON_MSG:
#line 80
      __nesc_result = /*GenericCommReallyPromiscuous.AMBeaconSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$send(addr, msg, len);
#line 80
      break;
#line 80
    case AM_LE_REVERSE_LINK_ESTIMATION_MSG:
#line 80
      __nesc_result = /*GenericCommReallyPromiscuous.AMLESenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$send(addr, msg, len);
#line 80
      break;
#line 80
    case AM_DV_MSG:
#line 80
      __nesc_result = /*GenericCommReallyPromiscuous.AMDVSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$3$AMSend$send(addr, msg, len);
#line 80
      break;
#line 80
    default:
#line 80
      __nesc_result = GenericCommReallyPromiscuousM$BottomSendMsg$default$send(arg_0x7fb1af08f020, addr, msg, len);
#line 80
      break;
#line 80
    }
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 52 "../../tos//lib/commstack/GenericCommReallyPromiscuousM.nc"
static inline error_t GenericCommReallyPromiscuousM$AMSend$send(uint8_t am, uint16_t addr, message_t *msg, uint8_t length)
#line 52
{
  error_t err;

  err = GenericCommReallyPromiscuousM$BottomSendMsg$send(am, addr, msg, length);

  sim_log_debug(477U, "S4-debug", "Called GenericCommReallyPromiscuousM.AMSend.send with args(am=%d): %d, msg=%x, %d, ret val=%d, time=%s \n", am, addr, msg, length, err, sim_time_string());


  return err;
}

# 80 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMSend.nc"
inline static error_t LinkEstimatorTaggerCommM$BottomSendMsg$send(uint8_t arg_0x7fb1af0c22f0, am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = GenericCommReallyPromiscuousM$AMSend$send(arg_0x7fb1af0c22f0, addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 181 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/TossimActiveMessageC.nc"
static inline void TossimActiveMessageC$Packet$setPayloadLength(message_t *msg, uint8_t len)
#line 181
{
  __nesc_hton_uint8(TossimActiveMessageC$getHeader(msg)->length.nxdata, len);
}

# 94 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Packet.nc"
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(message_t * msg, uint8_t len){
#line 94
  TossimActiveMessageC$Packet$setPayloadLength(msg, len);
#line 94
}
#line 94
# 126 "../../tos//lib/linkestimator/ReverseLinkInfo.h"
static inline error_t reverseLinkInfoToMsg(ReverseLinkInfo *rliPtr, ReverseLinkMsg *msg)
#line 126
{
  if (rliPtr == (void *)0 || msg == (void *)0) {
    return FAIL;
    }
#line 129
  msg->info = *rliPtr;
  return SUCCESS;
}

#line 107
static inline error_t reverseLinkInfoAppend(ReverseLinkInfo *rliPtr, uint16_t addr, uint8_t quality)
#line 107
{
  unsigned char __nesc_temp43;
  unsigned char *__nesc_temp42;

#line 108
  if (rliPtr == (void *)0) {
    return FAIL;
    }
#line 110
  if (__nesc_ntoh_uint8(rliPtr->num_elements.nxdata) >= NUM_REVERSE_LINK_ENTRIES) {
    return FAIL;
    }
#line 112
  __nesc_hton_uint16(rliPtr->entries[__nesc_ntoh_uint8(rliPtr->num_elements.nxdata)].addr.nxdata, addr);
  __nesc_hton_uint8(rliPtr->entries[__nesc_ntoh_uint8(rliPtr->num_elements.nxdata)].quality.nxdata, quality);
  (__nesc_temp42 = rliPtr->num_elements.nxdata, __nesc_hton_uint8(__nesc_temp42, (__nesc_temp43 = __nesc_ntoh_uint8(__nesc_temp42)) + 1), __nesc_temp43);
  return SUCCESS;
}

# 670 "../../tos//lib/linkestimator/LinkEstimatorM.nc"
static inline error_t LinkEstimatorM$LinkEstimator$setReverseLinkInfo(ReverseLinkInfo *rli, uint8_t *start)
#line 670
{
  uint8_t i;
  bool full = FALSE;
  int count = 0;
  uint8_t real_index;

#line 675
  real_index = *start;
  if (real_index >= LinkEstimatorM$active_neighbors[sim_node()]) {
#line 676
    real_index = 0;
    }
#line 677
  for (i = 0; i < LinkEstimatorM$active_neighbors[sim_node()] && !full; i++) {
      sim_log_debug(394U, "BVR-debug", "LinkEstimator$setReverseLinkInfo: n (addr):%d(%d) valid:%d quality:%d\n", real_index, __nesc_ntoh_uint16(LinkEstimatorM$neighborCachePtrs[sim_node()][real_index]->addr.nxdata), __nesc_ntoh_uint8(LinkEstimatorM$neighborCachePtrs[sim_node()][real_index]->state.nxdata) & VALID_SEQNO_MASK ? 1 : 0, __nesc_ntoh_uint8(LinkEstimatorM$neighborCachePtrs[sim_node()][real_index]->quality.nxdata));




      if (__nesc_ntoh_uint8(
#line 682
      LinkEstimatorM$neighborCachePtrs[sim_node()][real_index]->state.nxdata) & VALID_SEQNO_MASK
       && __nesc_ntoh_uint8(LinkEstimatorM$neighborCachePtrs[sim_node()][real_index]->quality.nxdata) > 0) {
          full |= reverseLinkInfoAppend(rli, __nesc_ntoh_uint16(LinkEstimatorM$neighborCachePtrs[sim_node()][real_index]->addr.nxdata), __nesc_ntoh_uint8(
          LinkEstimatorM$neighborCachePtrs[sim_node()][real_index]->quality.nxdata)) == FAIL ? TRUE : FALSE;
          if (!full) {
#line 686
            count++;
            }
        }
#line 688
      real_index = (real_index + 1) % LinkEstimatorM$active_neighbors[sim_node()];
    }
  __nesc_hton_uint8(rli->total_links.nxdata, LinkEstimatorM$active_neighbors[sim_node()]);
  *start = real_index;
  sim_log_debug(395U, "BVR-debug", "LinkEstimator$setReverseLinkInfo: added %d of %d neighbors (full:%s)\n", count, LinkEstimatorM$active_neighbors[sim_node()], full ? "y" : "n");

  return SUCCESS;
}

# 65 "../../tos//lib/linkestimator/LinkEstimator.nc"
inline static error_t LinkEstimatorCommM$LinkEstimator$setReverseLinkInfo(ReverseLinkInfo *rli, uint8_t *start){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = LinkEstimatorM$LinkEstimator$setReverseLinkInfo(rli, start);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 90 "../../tos//lib/linkestimator/ReverseLinkInfo.h"
static inline error_t reverseLinkInfoReset(ReverseLinkInfo *rliPtr)
#line 90
{
  int i;

#line 92
  if (rliPtr == (void *)0) {
    return FAIL;
    }
#line 94
  for (i = 1; i < __nesc_ntoh_uint8(rliPtr->num_elements.nxdata); i++) {
      __nesc_hton_uint16(rliPtr->entries[i].addr.nxdata, REVERSE_LINK_INVALID_ADDR);
      __nesc_hton_uint8(rliPtr->entries[i].quality.nxdata, 0);
    }
  __nesc_hton_uint8(rliPtr->num_elements.nxdata, 0);
  return SUCCESS;
}

# 46 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Random.nc"
inline static uint32_t LinkEstimatorCommM$Random$rand32(void ){
#line 46
  unsigned int __nesc_result;
#line 46

#line 46
  __nesc_result = RandomLfsrC$Random$rand32();
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 249 "../../tos//lib/commstack/LinkEstimatorCommM.nc"
static inline void LinkEstimatorCommM$MinRateTimer$fired(void )
#line 249
{
  int32_t jitter;
  uint32_t interval;

  sim_log_debug(319U, "BVR-debug", "LinkEstimatorCommM.MinRateTimer.fired\n");

  if (!LinkEstimatorCommM$state_is_active[sim_node()]) {
      return;
    }

  jitter = LinkEstimatorCommM$Random$rand32() % LinkEstimatorCommM$reverse_jitter[sim_node()] - (LinkEstimatorCommM$reverse_jitter[sim_node()] >> 1);
  interval = LinkEstimatorCommM$reverse_period[sim_node()] + jitter;

  LinkEstimatorCommM$MinRateTimer$startOneShot(interval);



  sim_log_debug(320U, "BVR-debug", "LinkEstimatorCommM:MinRateTimer$fired: will send packet\n");

  if (!LinkEstimatorCommM$send_buffer_busy[sim_node()]) {

      LinkEstimatorCommM$link_msg_ptr[sim_node()] = (ReverseLinkMsg *)&LinkEstimatorCommM$send_buffer[sim_node()].data[0];
      reverseLinkInfoReset(&LinkEstimatorCommM$link_info_buf[sim_node()]);
      LinkEstimatorCommM$LinkEstimator$setReverseLinkInfo(&LinkEstimatorCommM$link_info_buf[sim_node()], &LinkEstimatorCommM$reverse_info_index[sim_node()]);
      reverseLinkInfoToMsg(&LinkEstimatorCommM$link_info_buf[sim_node()], LinkEstimatorCommM$link_msg_ptr[sim_node()]);


      if (
#line 275
      LinkEstimatorCommM$BottomSendMsg$send(AM_LE_REVERSE_LINK_ESTIMATION_MSG, 0xFFFF, 
      &LinkEstimatorCommM$send_buffer[sim_node()], LinkEstimatorCommM$reverse_msg_length[sim_node()]) == SUCCESS) {
          LinkEstimatorCommM$send_buffer_busy[sim_node()] = TRUE;
          sim_log_debug(321U, "BVR-debug", "LinkEstimatorCommM:MinRateTimer$fired: successfully enqueued send\n");
        }
      else 
#line 279
        {
          sim_log_debug(322U, "BVR-debug", "LinkEstimatorCommM:MinRateTimer$fired: cannot send, send returned fail\n");
        }
    }
  else 
#line 282
    {
      sim_log_debug(323U, "BVR-debug", "LinkEstimatorCommM:MinRateTimer$fired: cannot send, buffer is busy\n");
    }
  return;
}

# 67 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/TaskBasic.nc"
inline static error_t UARTLoggerM$LogLoggerStats$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(UARTLoggerM$LogLoggerStats);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 998 "../../tos//lib/util/UARTLoggerM.nc"
static inline void UARTLoggerM$SelfTimer$fired(void )
#line 998
{
  UARTLoggerM$LogLoggerStats$postTask();
  UARTLoggerM$min_available_buffers[sim_node()] = 255;
  UARTLoggerM$max_queued_send[sim_node()] = 0;
  return;
}

# 67 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/TaskBasic.nc"
inline static error_t LinkEstimatorM$updateLinkTask$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(LinkEstimatorM$updateLinkTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 731 "../../tos//lib/linkestimator/LinkEstimatorM.nc"
static inline void LinkEstimatorM$UpdateLinkTimer$fired(void )
#line 731
{
  sim_log_debug(397U, "BVR-temp", "LinkEstimatorM.UpdateLinkTimer.fired\n");
  if (LinkEstimatorM$state_is_active[sim_node()]) {
    LinkEstimatorM$updateLinkTask$postTask();
    }
#line 735
  return;
}

# 286 "../../tos//lib/commstack/S4QueuedSendM.nc"
static inline void S4QueuedSendM$QueueRetransmitTimer$fired(void )
#line 286
{
  uint8_t id;
  S4AppMsg *pS4Msg;


  id = S4QueuedSendM$msgqueue[sim_node()][S4QueuedSendM$dequeue_next[sim_node()]].id;


  if (id != AM_S4_LOG_MSG && id != AM_BVR_LOG_MSG && S4QueuedSendM$msgqueue[sim_node()][S4QueuedSendM$dequeue_next[sim_node()]].address != 0xFFFF) {
      S4QueuedSendM$Acks$requestAck(S4QueuedSendM$msgqueue[sim_node()][S4QueuedSendM$dequeue_next[sim_node()]].pMsg);
    }



  if (
#line 298
  S4QueuedSendM$AirSendMsg$send(id, S4QueuedSendM$msgqueue[sim_node()][S4QueuedSendM$dequeue_next[sim_node()]].address, S4QueuedSendM$msgqueue[sim_node()][S4QueuedSendM$dequeue_next[sim_node()]].pMsg, 
  S4QueuedSendM$msgqueue[sim_node()][S4QueuedSendM$dequeue_next[sim_node()]].length)
   != SUCCESS) {
      sim_log_debug(456U, "S4-debug", "QueuedSend: send request failed. stuck in queue\n");
    }

  pS4Msg = (S4AppMsg *)S4QueuedSendM$msgqueue[sim_node()][S4QueuedSendM$dequeue_next[sim_node()]].pMsg->data;
  return;
}

# 67 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/TaskBasic.nc"
inline static error_t S4StateM$sendBeaconTask$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(S4StateM$sendBeaconTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 1691 "../../tos//lib/bvr/S4StateM.nc"
static inline void S4StateM$BeaconTimer$fired(void )
#line 1691
{


  int i;



  int32_t jitter;
#line 1698
  int32_t jitter2;
  uint32_t interval;

  if (S4StateM$state_beaconing_coords[sim_node()]) {


      jitter = S4StateM$Random$rand32() % (S4StateM$b_timer_jit[sim_node()] >> 2) - (S4StateM$b_timer_jit[sim_node()] >> 3);
      interval = S4StateM$b_timer_int[sim_node()] + jitter;
      sim_log_debug(261U, "S4-temp", "COORDS: beacon timer:jitter=%d. (max %d). Interval: %d\n", jitter, S4StateM$b_timer_jit[sim_node()], interval);

      S4StateM$BeaconTimer$startOneShot(interval);
    }





  S4StateM$beacon_round[sim_node()]++;
  if (S4StateM$beacon_round[sim_node()] > 60) {


      i = coordinates_get_closest_beacon(&S4StateM$my_coords[sim_node()]);




      if (
#line 1723
      S4StateM$first_global_beacon[sim_node()] && 
      i != INVALID_COMPONENT && !S4StateM$state_is_root_beacon[sim_node()]) {
          S4StateM$first_global_beacon[sim_node()] = FALSE;
          jitter2 = S4StateM$Random$rand32() % 2000;
          sim_log_debug(262U, "S4Router", "%s Starting ClusterTimer in %d\n", sim_time_string(), S4StateM$b_timer_int[sim_node()] + jitter2);



          S4StateM$ClusterTimer$startOneShot(S4StateM$b_timer_int[sim_node()] + jitter);
        }
    }
#line 1753
  if (S4StateM$beacon_send_busy[sim_node()]) {

      return;
    }


  if (S4StateM$next_beacon[sim_node()] == 0) {
#line 1773
      S4StateM$beacon_seqno[sim_node()]++;





      if (S4StateM$state_is_root_beacon[sim_node()]) {

          S4StateM$rootBeacons[sim_node()][S4StateM$root_beacon_id[sim_node()]].last_seqno = S4StateM$root_beacon_seqno[sim_node()]++;
        }



      S4StateM$set_beacon_msg();




      sim_log_debug(263U, "S4-debug", "curr_bv_size = %d\n", S4StateM$curr_bv_size[sim_node()]);

      if (S4StateM$curr_bv_size[sim_node()] > 0) {






          S4StateM$beacon_send_busy[sim_node()] = TRUE;

          S4StateM$sendBeaconTask$postTask();
        }
      else {
#line 1803
        S4StateM$next_beacon[sim_node()] = 0;
        }
    }
  else {





    sim_log_debug(264U, "S4Router", "next_beacon != 0, next_beacon = %d\n", S4StateM$next_beacon[sim_node()]);
    }



  return;
}

static inline void S4StateM$BeaconRetransmitTimer$fired(void )
#line 1820
{
  S4StateM$sendBeaconTask$postTask();
  return;
}

#line 2249
inline static void S4StateM$set_beacon_update_msg(void )
#line 2249
{
  uint8_t counter = 0;
  S4RootBeacon *b;

  while (counter < 8 && S4StateM$next_beacon[sim_node()] < S4StateM$S4Topology$getRootNodesCount()) {
      b = &S4StateM$rootBeacons[sim_node()][S4StateM$next_beacon[sim_node()]];










      if (b->valid && b->updated) {


          __nesc_hton_uint8(S4StateM$beacon_data_ptr[sim_node()]->beacons[counter].hopcount.nxdata, b->hops);
          __nesc_hton_uint8(S4StateM$beacon_data_ptr[sim_node()]->beacons[counter].beacon_id.nxdata, S4StateM$next_beacon[sim_node()]);
          __nesc_hton_uint8(S4StateM$beacon_data_ptr[sim_node()]->beacons[counter].seqno.nxdata, b->last_seqno);
          __nesc_hton_uint8(S4StateM$beacon_data_ptr[sim_node()]->beacons[counter].quality.nxdata, b->combined_quality);
          counter++;
        }
      S4StateM$next_beacon[sim_node()]++;
    }
  S4StateM$curr_bv_size[sim_node()] = counter;
  if (counter == 0) {
#line 2277
    return;
    }
#line 2278
  if (counter < 8) {



      while (counter < 8) {


          __nesc_hton_uint8(S4StateM$beacon_data_ptr[sim_node()]->beacons[counter].hopcount.nxdata, INVALID_COMPONENT);
          counter++;
        }
    }
}

# 164 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(uint8_t num)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[sim_node()][num].isrunning = FALSE;
}

# 78 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Timer.nc"
inline static void S4StateM$BeaconUpdateTimer$stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(7U);
#line 78
}
#line 78
#line 73
inline static void S4StateM$BeaconUpdateTimer$startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(7U, dt);
#line 73
}
#line 73
# 83 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Leds.nc"
inline static void S4StateM$Leds$led1Toggle(void ){
#line 83
  LedsP$Leds$led1Toggle();
#line 83
  LedsP$Leds$led1Toggle();
#line 83
}
#line 83
# 2119 "../../tos//lib/bvr/S4StateM.nc"
static inline void S4StateM$BeaconUpdateTimer$fired(void )
#line 2119
{
  int32_t jitter;
  uint32_t interval;

  int i;











  jitter = S4StateM$Random$rand32() % (S4StateM$b_timer_jit[sim_node()] >> 2) - (S4StateM$b_timer_jit[sim_node()] >> 3);
  interval = S4StateM$update_int[sim_node()] + jitter;
  S4StateM$Leds$led1Toggle();
  S4StateM$BeaconUpdateTimer$startOneShot(interval);


  S4StateM$beacon_round[sim_node()]++;
  if (S4StateM$beacon_round[sim_node()] > 60) {
      S4StateM$BeaconUpdateTimer$stop();



      i = coordinates_get_closest_beacon(&S4StateM$my_coords[sim_node()]);



      if (
#line 2150
      S4StateM$first_global_beacon[sim_node()] && 
      i != INVALID_COMPONENT && !S4StateM$state_is_root_beacon[sim_node()]) {
          S4StateM$first_global_beacon[sim_node()] = FALSE;
          sim_log_debug(276U, "S4-usr3", "%d Starting ClusterTimer in %d\n", sim_time(), S4StateM$b_timer_int[sim_node()]);



          S4StateM$ClusterTimer$startOneShot(S4StateM$b_timer_int[sim_node()]);
        }
    }
#line 2178
  if (S4StateM$beacon_send_busy[sim_node()]) {
      return;
    }
#line 2237
  S4StateM$set_beacon_update_msg();
  if (S4StateM$curr_bv_size[sim_node()] > 0) {
      S4StateM$beacon_send_busy[sim_node()] = TRUE;

      S4StateM$sendBeaconTask$postTask();
    }
  else {
#line 2242
    S4StateM$next_beacon[sim_node()] = 0;
    }
#line 2243
  return;
}

# 67 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/TaskBasic.nc"
inline static error_t S4StateM$sendClusterTask$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(S4StateM$sendClusterTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 78 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Timer.nc"
inline static void S4StateM$ClusterTimer$stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(9U);
#line 78
}
#line 78
# 2664 "../../tos//lib/bvr/S4StateM.nc"
static inline void S4StateM$ClusterTimer$fired(void )
#line 2664
{
  int i;


  int32_t jitter;
  uint32_t interval;

  jitter = S4StateM$Random$rand32() % (S4StateM$b_timer_jit[sim_node()] >> 2) - (S4StateM$b_timer_jit[sim_node()] >> 3);
  interval = S4StateM$b_timer_int[sim_node()] + jitter;
  S4StateM$ClusterTimer$startOneShot(interval);



  S4StateM$dv_round[sim_node()]++;
  sim_log_debug(292U, "BVR", "%d\n", S4StateM$dv_round[sim_node()]);
  if (S4StateM$dv_round[sim_node()] > 20 && S4StateM$S4Topology$getRootNodesCount() >= 8) {
    S4StateM$ClusterTimer$stop();
    }






  if (S4StateM$cluster_send_busy[sim_node()]) {

      return;
    }


  if (S4StateM$current_scope[sim_node()] == INVALID_COMPONENT || S4StateM$scope_age[sim_node()] > 6) {
      i = coordinates_get_closest_beacon(&S4StateM$my_coords[sim_node()]);
      if (i == INVALID_COMPONENT || __nesc_ntoh_uint8(S4StateM$my_coords[sim_node()].comps[i].nxdata) == 0) {

          sim_log_debug(293U, "S4Router", "no closest beacon, something is wrong\n");
          S4StateM$current_scope[sim_node()] = INVALID_COMPONENT;
          return;
        }
      S4StateM$scope_age[sim_node()] = 1;
      S4StateM$current_scope[sim_node()] = __nesc_ntoh_uint8(S4StateM$my_coords[sim_node()].comps[i].nxdata);
      S4StateM$ClusterTable[sim_node()][0].scope = __nesc_ntoh_uint8(S4StateM$my_coords[sim_node()].comps[i].nxdata);


      if (S4StateM$largest_scope[sim_node()] < S4StateM$current_scope[sim_node()]) {
        S4StateM$largest_scope[sim_node()] = S4StateM$current_scope[sim_node()];
        }
    }
  else {
#line 2709
    S4StateM$scope_age[sim_node()]++;
    }
#line 2725
  if (S4StateM$next_dv[sim_node()] == 0) {






      S4StateM$ClusterTable[sim_node()][0].last_seqno = S4StateM$cluster_seqno[sim_node()]++;




      S4StateM$set_cluster_msg();






      if (S4StateM$curr_dv_size[sim_node()] > 0) {
          S4StateM$cluster_send_busy[sim_node()] = TRUE;
          S4StateM$sendClusterTask$postTask();
        }
      else {
#line 2747
        S4StateM$next_dv[sim_node()] = 0;
        }
    }


  return;
}

static inline void S4StateM$ClusterRetransmitTimer$fired(void )
#line 2755
{



  S4StateM$sendClusterTask$postTask();
}

#line 3072
inline static void S4StateM$set_dv_update_msg(void )
#line 3072
{
  uint8_t counter = 0;
  ClusterMember *b;

  while (counter < 4 && S4StateM$next_dv[sim_node()] < S4StateM$cluster_size[sim_node()]) {
      b = &S4StateM$ClusterTable[sim_node()][S4StateM$next_dv[sim_node()]];




      if (b->valid && b->scope != INVALID_COMPONENT && b->scope > b->hops && b->updated) {

          __nesc_hton_uint8(S4StateM$cluster_data_ptr[sim_node()]->dv_adv[counter].indx.nxdata, S4StateM$next_dv[sim_node()]);
          __nesc_hton_uint16(S4StateM$cluster_data_ptr[sim_node()]->dv_adv[counter].source.nxdata, b->dest);
          __nesc_hton_uint8(S4StateM$cluster_data_ptr[sim_node()]->dv_adv[counter].hopcount.nxdata, b->hops);
          __nesc_hton_uint8(S4StateM$cluster_data_ptr[sim_node()]->dv_adv[counter].seqno.nxdata, b->last_seqno);
          __nesc_hton_uint8(S4StateM$cluster_data_ptr[sim_node()]->dv_adv[counter].scope.nxdata, b->scope);
          counter++;
        }
      S4StateM$next_dv[sim_node()]++;
    }
  S4StateM$curr_dv_size[sim_node()] = counter;
  if (counter == 0) {
#line 3094
    return;
    }
#line 3095
  if (counter < 4) {
      while (counter < 4) {
          __nesc_hton_uint8(S4StateM$cluster_data_ptr[sim_node()]->dv_adv[counter].scope.nxdata, INVALID_COMPONENT);
          counter++;
        }
    }
}

# 78 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Timer.nc"
inline static void S4StateM$ClusterUpdateTimer$stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(11U);
#line 78
}
#line 78
#line 73
inline static void S4StateM$ClusterUpdateTimer$startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(11U, dt);
#line 73
}
#line 73
# 100 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Leds.nc"
inline static void S4StateM$Leds$led2Toggle(void ){
#line 100
  LedsP$Leds$led2Toggle();
#line 100
  LedsP$Leds$led2Toggle();
#line 100
}
#line 100
# 2983 "../../tos//lib/bvr/S4StateM.nc"
static inline void S4StateM$ClusterUpdateTimer$fired(void )
#line 2983
{
  int32_t jitter;
  uint32_t interval;











  jitter = S4StateM$Random$rand32() % (S4StateM$b_timer_jit[sim_node()] >> 2) - (S4StateM$b_timer_jit[sim_node()] >> 3);
  interval = S4StateM$update_int[sim_node()] + jitter;

  S4StateM$Leds$led2Toggle();
  S4StateM$ClusterUpdateTimer$startOneShot(interval);


  S4StateM$dv_round[sim_node()]++;
  if (S4StateM$dv_round[sim_node()] > 20) {
    S4StateM$ClusterUpdateTimer$stop();
    }

  if (S4StateM$cluster_send_busy[sim_node()]) {
      return;
    }

  sim_log_debug(301U, "S4Router", "%s ClusterUpdateTimer fired for dv_round=%d\n", sim_time_string(), S4StateM$dv_round[sim_node()]);
#line 3061
  S4StateM$set_dv_update_msg();
  if (S4StateM$curr_dv_size[sim_node()] > 0) {
      S4StateM$cluster_send_busy[sim_node()] = TRUE;

      S4StateM$sendClusterTask$postTask();
    }
  else 
#line 3066
    {
      S4StateM$next_dv[sim_node()] = 0;
    }
  return;
}

#line 454
static inline void S4StateM$displayRootBeacons(void )
#line 454
{


  int i;

#line 458
  for (i = 0; i < 8; i++) {
      sim_log_debug(198U, "S4-beacon", "BeaconDisplayTimer: hopcount=%d, i=%d, nodeid=%d, parent=%d, valid=%d, time=%s\n", S4StateM$rootBeacons[sim_node()][i].hops, i, S4StateM$rootBeacons[sim_node()][i].nodeid, S4StateM$rootBeacons[sim_node()][i].parent, S4StateM$rootBeacons[sim_node()][i].valid, sim_time_string());
    }
}






static inline void S4StateM$BeaconDisplayTimer$fired(void )
#line 468
{
  S4StateM$displayRootBeacons();
}

# 721 "../../tos//lib/bvr/S4RouterM.nc"
static inline void S4RouterM$ForwardDelayTimer$fired(void )
#line 721
{
  sim_log_debug(194U, "S4Router", "FLOOD: timer fired , will forward\n");
  S4RouterM$forward_delay_timer_pending[sim_node()] = FALSE;
  S4RouterM$forwardMessage(&S4RouterM$forward_buffer[sim_node()]);
  return;
}

#line 1135
static inline void S4RouterM$PeriodicTimer$fired(void )
#line 1135
{
  if (S4RouterM$Locator$getCoordinates(&S4RouterM$my_coords[sim_node()]) == SUCCESS) {
    }
  else {
    }
}

# 78 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Timer.nc"
inline static void LBlinkM$Timer$stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(17U);
#line 78
}
#line 78
# 59 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/system/NoLedsC.nc"
static inline void NoLedsC$Leds$led1Toggle(void )
#line 59
{
}

# 83 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Leds.nc"
inline static void LBlinkM$Leds$led1Toggle(void ){
#line 83
  NoLedsC$Leds$led1Toggle();
#line 83
}
#line 83
# 55 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/system/NoLedsC.nc"
static inline void NoLedsC$Leds$led0Toggle(void )
#line 55
{
}

# 67 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Leds.nc"
inline static void LBlinkM$Leds$led0Toggle(void ){
#line 67
  NoLedsC$Leds$led0Toggle();
#line 67
}
#line 67
# 63 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/system/NoLedsC.nc"
static inline void NoLedsC$Leds$led2Toggle(void )
#line 63
{
}

# 100 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Leds.nc"
inline static void LBlinkM$Leds$led2Toggle(void ){
#line 100
  NoLedsC$Leds$led2Toggle();
#line 100
}
#line 100
# 89 "../../tos//lib/util/LBlinkM.nc"
static inline void LBlinkM$Timer$fired(void )
#line 89
{
  if (LBlinkM$yellow[sim_node()] > 0) {
      LBlinkM$Leds$led2Toggle();
      LBlinkM$yellow[sim_node()]--;
    }
  if (LBlinkM$red[sim_node()] > 0) {
      LBlinkM$Leds$led0Toggle();
      LBlinkM$red[sim_node()]--;
    }
  if (LBlinkM$green[sim_node()] > 0) {
      LBlinkM$Leds$led1Toggle();
      LBlinkM$green[sim_node()]--;
    }
  if (LBlinkM$yellow[sim_node()] + LBlinkM$green[sim_node()] + LBlinkM$red[sim_node()] == 0) {
      LBlinkM$timer_on[sim_node()] = FALSE;
      LBlinkM$Timer$stop();
    }
  return;
}

# 67 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/TaskBasic.nc"
inline static error_t TestS4SimpleM$sendAnother$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(TestS4SimpleM$sendAnother);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 50 "../../tos//lib/bvr/CoordinateTable.nc"
inline static CoordinateTableEntry *TestS4SimpleM$CoordinateTable$getEntry(uint16_t addr){
#line 50
  nx_struct __nesc_unnamed4296 *__nesc_result;
#line 50

#line 50
  __nesc_result = CoordinateTableM$CoordinateTable$getEntry(addr);
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 102 "TestS4SimpleM.nc"
static inline void TestS4SimpleM$Timer1$fired(void )
#line 102
{
  CoordinateTableEntry *cte = (void *)0;
  CoordinateTableEntry *selectedCte = (void *)0;
  int i = 0;





  sim_log_debug(168U, "TestBVR", "Timer1.fired at %s\n", sim_time_string());

  for (i = 0; i < 200; i++) {
      cte = TestS4SimpleM$CoordinateTable$getEntry(i);

      if (cte != (void *)0) {
          selectedCte = cte;
          coordinates_print(& cte->coords);
        }
    }

  sim_log_debug(169U, "TestBVR", "cte=%x, dest=%x\n", cte, &TestS4SimpleM$dest[sim_node()]);

  if (cte == (void *)0) {
    TestS4SimpleM$Timer1$startOneShot(900000u);
    }
  cte = selectedCte;
  if (!TestS4SimpleM$busy_sending[sim_node()] && TestS4SimpleM$AMPacket$address() == TestS4SimpleM$src[sim_node()]) {



      __nesc_hton_uint8(TestS4SimpleM$dest[sim_node()].comps[0].nxdata, 255);
      __nesc_hton_uint8(TestS4SimpleM$dest[sim_node()].comps[1].nxdata, 255);
      __nesc_hton_uint8(TestS4SimpleM$dest[sim_node()].comps[2].nxdata, 255);
      __nesc_hton_uint8(TestS4SimpleM$dest[sim_node()].comps[3].nxdata, 255);
      __nesc_hton_uint8(TestS4SimpleM$dest[sim_node()].comps[4].nxdata, 255);
      __nesc_hton_uint8(TestS4SimpleM$dest[sim_node()].comps[5].nxdata, 255);
      __nesc_hton_uint8(TestS4SimpleM$dest[sim_node()].comps[6].nxdata, 0);
      __nesc_hton_uint8(TestS4SimpleM$dest[sim_node()].comps[7].nxdata, 255);
      TestS4SimpleM$dest_id[sim_node()] = 10;


      * (uint16_t *)TestS4SimpleM$pAppMsg[sim_node()] = TestS4SimpleM$msg_id[sim_node()];

      if (TestS4SimpleM$sendAnother$postTask() == SUCCESS) {
          TestS4SimpleM$busy_sending[sim_node()] = TRUE;
        }
      else {
          sim_log_debug(170U, "TestBVR", "132 routeTo failed\n ");
        }
    }
  else {
      sim_log_debug(171U, "TestBVR", "135 busy_sending was set!\n ");
    }

  sim_log_debug(172U, "TestBVR", "Timer1.fired ended\n");
}

# 204 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num)
{
}

# 83 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(uint8_t arg_0x7fb1af57cda0){
#line 83
  switch (arg_0x7fb1af57cda0) {
#line 83
    case 0U:
#line 83
      LinkEstimatorCommM$MinRateTimer$fired();
#line 83
      break;
#line 83
    case 1U:
#line 83
      UARTLoggerM$SelfTimer$fired();
#line 83
      break;
#line 83
    case 2U:
#line 83
      LinkEstimatorM$UpdateLinkTimer$fired();
#line 83
      break;
#line 83
    case 3U:
#line 83
      S4QueuedSendM$QueueRetransmitTimer$fired();
#line 83
      break;
#line 83
    case 5U:
#line 83
      S4StateM$BeaconTimer$fired();
#line 83
      break;
#line 83
    case 6U:
#line 83
      S4StateM$BeaconRetransmitTimer$fired();
#line 83
      break;
#line 83
    case 7U:
#line 83
      S4StateM$BeaconUpdateTimer$fired();
#line 83
      break;
#line 83
    case 9U:
#line 83
      S4StateM$ClusterTimer$fired();
#line 83
      break;
#line 83
    case 10U:
#line 83
      S4StateM$ClusterRetransmitTimer$fired();
#line 83
      break;
#line 83
    case 11U:
#line 83
      S4StateM$ClusterUpdateTimer$fired();
#line 83
      break;
#line 83
    case 12U:
#line 83
      S4StateM$BeaconDisplayTimer$fired();
#line 83
      break;
#line 83
    case 13U:
#line 83
      S4RouterM$ForwardDelayTimer$fired();
#line 83
      break;
#line 83
    case 16U:
#line 83
      S4RouterM$PeriodicTimer$fired();
#line 83
      break;
#line 83
    case 17U:
#line 83
      LBlinkM$Timer$fired();
#line 83
      break;
#line 83
    case 18U:
#line 83
      TestS4SimpleM$Timer1$fired();
#line 83
      break;
#line 83
    default:
#line 83
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(arg_0x7fb1af57cda0);
#line 83
      break;
#line 83
    }
#line 83
}
#line 83
# 118 "../../tos//lib/bvr/coordinates.h"
static inline uint8_t coordinates_count_valid_components(Coordinates *c)
#line 118
{
  uint8_t i;
  uint8_t count = 0;

#line 121
  if (c == (void *)0) {
    return 0;
    }
#line 123
  for (i = 0; i < 8; i++) {
      if (coordinates_is_valid_component(c, i)) {
        count++;
        }
    }
#line 127
  return count;
}

# 60 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$toggle(void )
#line 60
{
#line 60
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 60
    atm128RegFile[sim_node()][27U] ^= 1 << 0;
#line 60
    __nesc_atomic_end(__nesc_atomic); }
}

# 42 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led2$toggle(void ){
#line 42
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$toggle();
#line 42
}
#line 42
# 54 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$get(void )
#line 54
{
#line 54
  return (atm128RegFile[sim_node()][27U] & (1 << 0)) != 0;
}

# 43 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/GeneralIO.nc"
inline static bool LedsP$Led2$get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 54 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type t){
#line 54
  HplAtm128Timer0AsyncP$Compare$set(t);
#line 54
}
#line 54
# 61 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = HplAtm128Timer0AsyncP$Timer0$get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 569 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline int HplAtm128Timer0AsyncP$TimerAsync$compareBusy(void )
#line 569
{
  return (* (volatile uint8_t *)&atm128RegFile[sim_node()][0x30] & (1 << OCR0UB)) != 0;
}

# 44 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$compareBusy(void ){
#line 44
  int __nesc_result;
#line 44

#line 44
  __nesc_result = HplAtm128Timer0AsyncP$TimerAsync$compareBusy();
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 74 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setOcr0(uint8_t n)
#line 74
{
  while (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$compareBusy()) 
    ;
  if (n == /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get()) {
    n++;
    }


  if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()] + n + 1 < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()]) {
    n = -/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()] - 1;
    }
#line 84
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(n);
}

# 577 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP$cancel_compare(void )
#line 577
{
  sim_log_debug(350U, "HplAtm128CompareC", "Cancelling compare at 0x%p\n", HplAtm128Timer0AsyncP$compare[sim_node()]);
  if (HplAtm128Timer0AsyncP$compare[sim_node()] != (void *)0) {
      HplAtm128Timer0AsyncP$compare[sim_node()]->cancelled = 1;
      HplAtm128Timer0AsyncP$compare[sim_node()]->cleanup = sim_queue_cleanup_total;
    }
}

#line 116
static inline void HplAtm128Timer0AsyncP$notify_changed(void )
#line 116
{
  uint8_t newScale = HplAtm128Timer0AsyncP$Timer0$getScale();

#line 118
  if (newScale != AVR_CLOCK_OFF && 
  HplAtm128Timer0AsyncP$oldScale[sim_node()] == AVR_CLOCK_OFF) {
      HplAtm128Timer0AsyncP$lastZero[sim_node()] = sim_time();
    }
  HplAtm128Timer0AsyncP$oldScale[sim_node()] = newScale;

  HplAtm128Timer0AsyncP$schedule_new_compare();
}

#line 545
static inline void HplAtm128Timer0AsyncP$cancel_overflow(void )
#line 545
{
  if (HplAtm128Timer0AsyncP$overflow[sim_node()] != (void *)0) {
      HplAtm128Timer0AsyncP$overflow[sim_node()]->cancelled = 1;
      sim_log_debug(349U, "HplAtm128Timer0AsyncP", "Cancelling overflow %p.\n", HplAtm128Timer0AsyncP$overflow[sim_node()]);
      HplAtm128Timer0AsyncP$overflow[sim_node()]->cleanup = sim_queue_cleanup_total;
    }
}

#line 481
static inline void HplAtm128Timer0AsyncP$timer0_overflow_handle(sim_event_t *evt)
#line 481
{
  if (evt->cancelled) {
      return;
    }
  else {
      if ((atm128RegFile[sim_node()][ATM128_TIMSK] & (1 << TOIE0)) != 0) {
          atm128RegFile[sim_node()][ATM128_TIFR] &= ~(1 << TOV0);
          sim_log_debug(346U, "HplAtm128Timer0AsyncP", "Overflow interrupt at %s\n", sim_time_string());
          INTERRUPT_16();
        }
      else {
          sim_log_debug(347U, "HplAtm128Timer0AsyncP", "Setting overflow bit at %s\n", sim_time_string());
          atm128RegFile[sim_node()][ATM128_TIFR] |= 1 << TOV0;
        }
      HplAtm128Timer0AsyncP$configure_overflow(evt);
      sim_queue_insert(evt);
    }
}

static inline sim_event_t *HplAtm128Timer0AsyncP$allocate_overflow(void )
#line 500
{
  sim_event_t *newEvent = sim_queue_allocate_event();

  newEvent->handle = HplAtm128Timer0AsyncP$timer0_overflow_handle;
  newEvent->cleanup = sim_queue_cleanup_none;
  return newEvent;
}

#line 534
static inline void HplAtm128Timer0AsyncP$schedule_new_overflow(void )
#line 534
{
  sim_event_t *newEvent = HplAtm128Timer0AsyncP$allocate_overflow();

#line 536
  HplAtm128Timer0AsyncP$configure_overflow(newEvent);

  if (HplAtm128Timer0AsyncP$overflow[sim_node()] != (void *)0) {
      HplAtm128Timer0AsyncP$cancel_overflow();
    }
  HplAtm128Timer0AsyncP$overflow[sim_node()] = newEvent;
  sim_queue_insert(newEvent);
}

#line 148
static inline sim_time_t HplAtm128Timer0AsyncP$clock_to_sim(sim_time_t t)
#line 148
{
  t *= sim_ticks_per_sec();
  t /= HplAtm128Timer0AsyncP$notify_clockTicksPerSec();
  return t;
}

#line 297
static inline void HplAtm128Timer0AsyncP$Timer0$set(uint8_t newVal)
#line 297
{
  uint8_t curVal = HplAtm128Timer0AsyncP$Timer0$get();

#line 299
  sim_log_debug(339U, "HplAtm128Timer0AsyncP", "HplAtm128Timer0AsyncP: Setting timer: %hhu\n", newVal);
  if (newVal == curVal) {
      return;
    }
  else {
      sim_time_t adjustment = curVal - newVal;

#line 305
      adjustment = adjustment << HplAtm128Timer0AsyncP$shiftFromScale();
      adjustment = HplAtm128Timer0AsyncP$clock_to_sim(adjustment);

      if (newVal < curVal) {
          HplAtm128Timer0AsyncP$lastZero[sim_node()] += adjustment;
        }
      else {
          HplAtm128Timer0AsyncP$lastZero[sim_node()] -= adjustment;
        }

      HplAtm128Timer0AsyncP$schedule_new_overflow();
      HplAtm128Timer0AsyncP$notify_changed();
    }
}

#line 187
static inline void HplAtm128Timer0AsyncP$timer0_compare_handle(sim_event_t *evt)
#line 187
{
  sim_log_debug(329U, "HplAtm128Timer0AsyncP", "Beginning compare 0x%p at %s\n", evt, sim_time_string());
  if (evt->cancelled) {
      return;
    }
  else {
      char timeStr[128];

#line 194
      sim_print_now(timeStr, 128);
      sim_log_debug(330U, "HplAtm128Timer0AsyncP", "Handling compare at 0x%p @ %s\n", evt, sim_time_string());

      if ((atm128RegFile[sim_node()][ATM128_TCCR0] & (1 << WGM01)) != 0 && !((atm128RegFile[sim_node()][ATM128_TCCR0] & (1 << WGM00)) != 0)) {
          sim_log_debug(331U, "HplAtm128Timer0AsyncP", "%s: CTC is set, clear timer.\n", __FUNCTION__);
          HplAtm128Timer0AsyncP$Timer0$set(0);
        }
      else {
          sim_log_debug(332U, "HplAtm128Timer0AsyncP", "%s: TCCR is 0x%hhx, %i, %i\n", __FUNCTION__, * (volatile uint8_t *)&atm128RegFile[sim_node()][0x33], (int )((atm128RegFile[sim_node()][ATM128_TCCR0] & (1 << WGM01)) != 0), (int )((atm128RegFile[sim_node()][ATM128_TCCR0] & (1 << WGM00)) != 0));
        }

      if ((atm128RegFile[sim_node()][ATM128_TIMSK] & (1 << OCIE0)) != 0) {
          sim_log_debug(333U, "HplAtm128Timer0AsyncP", "TIFR is %hhx\n", * (volatile uint8_t *)&atm128RegFile[sim_node()][0x36]);
          atm128RegFile[sim_node()][ATM128_TIFR] &= ~(1 << OCF0);
          sim_log_debug(334U, "HplAtm128Timer0AsyncP", "TIFR is %hhx\n", * (volatile uint8_t *)&atm128RegFile[sim_node()][0x36]);
          sim_log_debug(335U, "HplAtm128Timer0AsyncP", "Compare interrupt @ %s\n", timeStr);
          INTERRUPT_15();
        }
      else {
          atm128RegFile[sim_node()][ATM128_TIFR] |= 1 << OCF0;
        }

      if (! evt->cancelled) {
          HplAtm128Timer0AsyncP$configure_compare(evt);
          sim_queue_insert(evt);
        }
    }
}

static inline sim_event_t *HplAtm128Timer0AsyncP$allocate_compare(void )
#line 223
{
  sim_event_t *newEvent = sim_queue_allocate_event();

#line 225
  sim_log_debug(336U, "HplAtm128Timer0AsyncP", "Allocated compare at 0x%p\n", newEvent);
  newEvent->handle = HplAtm128Timer0AsyncP$timer0_compare_handle;
  newEvent->cleanup = sim_queue_cleanup_none;
  return newEvent;
}

# 230 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow(void )
#line 230
{
}

# 70 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm128Timer0AsyncP$Timer0$overflow(void ){
#line 70
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow();
#line 70
}
#line 70
# 58 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void )
{
}

# 82 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Counter.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$overflow(void ){
#line 82
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow();
#line 82
}
#line 82
# 85 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/sim/atm128hardware.h"
static __inline void __nesc_enable_interrupt()
#line 85
{
  atm128RegFile[sim_node()][* (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F]] |= 1 << 7;
}

# 48 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get(void ){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = HplAtm128Timer0AsyncP$Compare$get();
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 149 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired(void )
#line 149
{
  int overflowed;


  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()] += /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get() + 1U;
  overflowed = !/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()];
  __nesc_enable_interrupt();
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt();
  if (overflowed) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$overflow();
    }
}

# 58 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer0AsyncP$Compare$fired(void ){
#line 58
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired();
#line 58
}
#line 58
# 67 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 81 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void )
{
#line 82
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask();
}

# 78 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Alarm.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$fired(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired();
#line 78
}
#line 78
# 63 "../../tos//lib/linkestimator/ReverseLinkInfo.h"
static inline error_t reverseLinkInfoInit(ReverseLinkInfo *ptr)
#line 63
{
  int i;

#line 65
  if (ptr == (void *)0) {
    return FAIL;
    }
#line 67
  __nesc_hton_uint8(ptr->num_elements.nxdata, 0);
  for (i = 0; i < NUM_REVERSE_LINK_ENTRIES; i++) {
      __nesc_hton_uint16(ptr->entries[i].addr.nxdata, REVERSE_LINK_INVALID_ADDR);
      __nesc_hton_uint8(ptr->entries[i].quality.nxdata, 0);
    }
  return SUCCESS;
}

# 122 "../../tos//lib/linkestimator/LinkEstimatorM.nc"
static inline error_t LinkEstimatorM$Init$init(void )
#line 122
{
  int i;

  LinkEstimatorM$state_is_active[sim_node()] = TRUE;
  LinkEstimatorM$link_upd_timer_int[sim_node()] = I_UPDATE_LINK_INTERVAL;
  LinkEstimatorM$min_packets[sim_node()] = LINK_ESTIMATOR_RECEIVE_WINDOW * LINK_ESTIMATOR_MIN_PACKETS;
  LinkEstimatorM$current_window[sim_node()] = 0;
  LinkEstimatorM$active_neighbors[sim_node()] = 0;
  for (i = 0; i < N_CACHE_SIZE; i++) {
      LinkEstimatorM$neighborCachePtrs[sim_node()][i] = &LinkEstimatorM$neighborCache[sim_node()][i];
      LinkEstimatorM$neighborInit(&LinkEstimatorM$neighborCache[sim_node()][i]);
    }


  return SUCCESS;
}

# 62 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Init.nc"
inline static error_t LinkEstimatorCommM$LinkEstimatorControlInit$init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = LinkEstimatorM$Init$init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
inline static error_t LinkEstimatorCommM$BottomStdControlInit$init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = S4QueuedSendM$Init$init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 61 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP$SubInit$default$init(void )
#line 61
{
  return SUCCESS;
}

# 62 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Init.nc"
inline static error_t MotePlatformP$SubInit$init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = MotePlatformP$SubInit$default$init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 59 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void )
#line 59
{
#line 59
  atm128RegFile[sim_node()][27U] &= ~(1 << 4);
}

# 41 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP$SerialIdPin$clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr();
#line 41
}
#line 41
# 62 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void )
#line 62
{
#line 62
  atm128RegFile[sim_node()][26U] &= ~(1 << 4);
}

# 44 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP$SerialIdPin$makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput();
#line 44
}
#line 44
# 49 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP$PlatformInit$init(void )
#line 49
{

  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x15] = 0;
  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x14] = 0xff;


  MotePlatformP$SerialIdPin$makeInput();
  MotePlatformP$SerialIdPin$clr();

  return MotePlatformP$SubInit$init();
}

# 55 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set(void )
#line 55
{
  sim_log_debug(65U, "Pins", "Setting bit %i of port %i.\n", (int )0, (int )27U);
  atm128RegFile[sim_node()][27U] |= 1 << 0;
}

# 40 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led2$set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set();
#line 40
}
#line 40
# 55 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set(void )
#line 55
{
  sim_log_debug(66U, "Pins", "Setting bit %i of port %i.\n", (int )1, (int )27U);
  atm128RegFile[sim_node()][27U] |= 1 << 1;
}

# 40 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led1$set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set();
#line 40
}
#line 40
# 55 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set(void )
#line 55
{
  sim_log_debug(67U, "Pins", "Setting bit %i of port %i.\n", (int )2, (int )27U);
  atm128RegFile[sim_node()][27U] |= 1 << 2;
}

# 40 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led0$set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set();
#line 40
}
#line 40
# 63 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput(void )
#line 63
{
#line 63
  atm128RegFile[sim_node()][26U] |= 1 << 0;
}

# 46 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led2$makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput();
#line 46
}
#line 46
# 63 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput(void )
#line 63
{
#line 63
  atm128RegFile[sim_node()][26U] |= 1 << 1;
}

# 46 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led1$makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput();
#line 46
}
#line 46
# 63 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput(void )
#line 63
{
#line 63
  atm128RegFile[sim_node()][26U] |= 1 << 2;
}

# 46 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led0$makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput();
#line 46
}
#line 46
# 56 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/system/LedsP.nc"
static inline error_t LedsP$Init$init(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 57
  {
    sim_log_debug(465U, "Init", "LEDS: initialized.\n");
    LedsP$Led0$makeOutput();
    LedsP$Led1$makeOutput();
    LedsP$Led2$makeOutput();
    LedsP$Led0$set();
    LedsP$Led1$set();
    LedsP$Led2$set();
  }
  return SUCCESS;
}

# 62 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Init.nc"
inline static error_t PlatformP$MoteInit$init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = LedsP$Init$init();
#line 62
  __nesc_result = ecombine(__nesc_result, MotePlatformP$PlatformInit$init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 21 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/platforms/mica/sim/MeasureClockC.nc"
static inline error_t MeasureClockC$Init$init(void )
#line 21
{
  return SUCCESS;
}

# 62 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Init.nc"
inline static error_t PlatformP$MeasureClock$init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = MeasureClockC$Init$init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 51 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/platforms/mica/PlatformP.nc"
static inline error_t PlatformP$Init$init(void )
{
  error_t ok;


  ok = PlatformP$MeasureClock$init();
  ok = ecombine(ok, PlatformP$MoteInit$init());

  return ok;
}

# 62 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Init.nc"
inline static error_t SimMainP$PlatformInit$init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = PlatformP$Init$init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 65 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Scheduler.nc"
inline static bool SimMainP$Scheduler$runNextTask(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = SimSchedulerBasicP$Scheduler$runNextTask();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 86 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/TossimPacketModelC.nc"
static inline error_t TossimPacketModelC$Init$init(void )
#line 86
{
  sim_log_debug(128U, "TossimPacketModelC", "TossimPacketModelC: Init.init() called\n");
  TossimPacketModelC$initialized[sim_node()] = TRUE;



  TossimPacketModelC$sendEvent[sim_node()].cancelled = 1;
  return SUCCESS;
}

# 447 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP$Compare$start(void )
#line 447
{
#line 447
  atm128RegFile[sim_node()][ATM128_TIMSK] |= 1 << OCIE0;
}

# 65 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$start(void ){
#line 65
  HplAtm128Timer0AsyncP$Compare$start();
#line 65
}
#line 65
# 364 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP$Timer0Ctrl$setControl(Atm128TimerControl_t x)
#line 364
{
  sim_log_debug(341U, "HplAtm128Timer0AsyncP", "Setting control to be 0x%hhx\n", x.flat);
  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x33] = x.flat;
}

# 46 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$setControl(Atm128TimerControl_t control){
#line 46
  HplAtm128Timer0AsyncP$Timer0Ctrl$setControl(control);
#line 46
}
#line 46
# 561 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous(void )
#line 561
{
  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x30] |= 1 << AS0;
}

# 32 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$setTimer0Asynchronous(void ){
#line 32
  HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous();
#line 32
}
#line 32
# 54 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init(void )
#line 54
{
  /* atomic removed: atomic calls only */
  {
    Atm128TimerControl_t x;

    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$setTimer0Asynchronous();
    x.flat = 0;
    x.bits.cs = 3;
    x.bits.wgm1 = 1;
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$setControl(x);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$start();
  }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt();
  return SUCCESS;
}

# 55 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/system/RandomMlcgC.nc"
static inline error_t RandomMlcgC$Init$init(void )
#line 55
{
  /* atomic removed: atomic calls only */
#line 56
  RandomMlcgC$seed[sim_node()] = (uint32_t )(TOS_NODE_ID + 1);

  return SUCCESS;
}

# 62 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Init.nc"
inline static error_t SimMainP$SoftwareInit$init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = RandomMlcgC$Init$init();
#line 62
  __nesc_result = ecombine(__nesc_result, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init());
#line 62
  __nesc_result = ecombine(__nesc_result, TossimPacketModelC$Init$init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 60 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Boot.nc"
inline static void SimMainP$Boot$booted(void ){
#line 60
  TestS4SimpleM$Boot$booted();
#line 60
  TestS4SimpleM$Boot$booted();
#line 60
}
#line 60
# 67 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/TaskBasic.nc"
inline static error_t TossimPacketModelC$startDoneTask$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(TossimPacketModelC$startDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 106 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/TossimPacketModelC.nc"
static inline error_t TossimPacketModelC$Control$start(void )
#line 106
{
  if (!TossimPacketModelC$initialized[sim_node()]) {
      sim_log_error(129U, "TossimPacketModelC", "TossimPacketModelC: Control.start() called before initialization!\n");
      return FAIL;
    }
  sim_log_debug(130U, "TossimPacketModelC", "TossimPacketModelC: Control.start() called.\n");
  TossimPacketModelC$startDoneTask$postTask();
  return SUCCESS;
}

# 104 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/SplitControl.nc"
inline static error_t TestS4SimpleM$AMControl$start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = TossimPacketModelC$Control$start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 55 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/SimMoteP.nc"
static inline long long int SimMoteP$SimMote$getEuid(void )
#line 55
{
  return SimMoteP$euid[sim_node()];
}

#line 58
static inline void SimMoteP$SimMote$setEuid(long long int e)
#line 58
{
  SimMoteP$euid[sim_node()] = e;
}







static inline int SimMoteP$SimMote$getVariableInfo(char *name, void **addr, size_t *size)
#line 68
{
  return __nesc_nido_resolve(sim_node(), name, (uintptr_t *)addr, (size_t *)size);
}

#line 85
static inline void SimMoteP$SimMote$turnOff(void )
#line 85
{
  SimMoteP$isOn[sim_node()] = FALSE;
}

#line 157
static inline void SimMoteP$sim_mote_boot_handle(sim_event_t *e)
#line 157
{
  char buf[128];

#line 159
  sim_print_now(buf, 128);

  SimMoteP$bootEvent[sim_node()] = (sim_event_t *)(void *)0;
  sim_log_debug(122U, "SimMoteP", "Turning on mote %i at time %s.\n", (int )sim_node(), buf);
  SimMoteP$SimMote$turnOn();
}

# 46 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/sim_event_queue.c"
  void sim_queue_init()
#line 46
{
  init_heap(&eventHeap);
}

  void sim_queue_insert(sim_event_t *event)
#line 50
{
  sim_log_debug(0U, "Queue", "Inserting 0x%p\n", event);
  heap_insert(&eventHeap, event, event->time);
}

# 246 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/sim_log.c"
static void sim_log_debug(uint16_t id, char *string, const char *format, ...)
#line 246
{
  va_list args;
  int i;

#line 249
  if (outputs[id].files == (void *)0) {
      fillInOutput(id, string);
    }
  for (i = 0; i < outputs[id].num; i++) {
      FILE *file = outputs[id].files[i];

#line 254
      __builtin_va_start(args, format);
      fprintf(file, "DEBUG (%i): ", (int )sim_node());
      vfprintf(file, format, args);
      fflush(file);
    }
}

#line 84
static void fillInOutput(int id, char *name)
#line 84
{
  char *termination = name;
  char *namePos = name;
  int count = 0;
  char *newName = (char *)malloc(strlen(name) + 1);

#line 89
  memset(newName, 0, strlen(name) + 1);

  while (termination != (void *)0) {
      sim_log_channel_t *channel;

      termination = strrchr(namePos, ',');

      if (termination == (void *)0) {
          strcpy(newName, namePos);
        }
      else 
        {
          memcpy(newName, namePos, termination - namePos);
          newName[termination - namePos] = 0;
        }

      channel = hashtable_search(channelTable, newName);
      if (channel != (void *)0) {
          count += channel->numOutputs;
        }

      namePos = termination + 1;
    }

  termination = name;
  namePos = name;


  outputs[id].files = (FILE **)malloc(sizeof(FILE *) * count);
  outputs[id].num = 0;


  while (termination != (void *)0) {
      sim_log_channel_t *channel;

      termination = strrchr(namePos, ',');

      if (termination == (void *)0) {
          strcpy(newName, namePos);
        }
      else 
        {
          memcpy(newName, namePos, termination - namePos);
          newName[termination - namePos] = 0;
        }

      channel = hashtable_search(channelTable, newName);
      if (channel != (void *)0) {
          int i;
#line 137
          int j;

#line 138
          for (i = 0; i < channel->numOutputs; i++) {
              int duplicate = 0;
              int outputCount = outputs[id].num;


              for (j = 0; j < outputCount; j++) {
                  if (fileno(outputs[id].files[j]) == fileno(channel->outputs[i])) {
                      duplicate = 1;
                      j = outputCount;
                    }
                }
              if (!duplicate) {
                  outputs[id].files[outputCount] = channel->outputs[i];
                  outputs[id].num++;
                }
            }
        }
      namePos = termination + 1;
    }
}

# 121 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/sim_tossim.c"
  unsigned long sim_node()
#line 121
{
  return current_node;
}

# 197 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/heap.c"
static void up_heap(heap_t *heap, int findex)
#line 197
{
  int parent_index;

#line 199
  if (findex == 0) {
      return;
    }

  parent_index = (findex - 1) / 2;

  if (((node_t *)heap->data)[parent_index].key > ((node_t *)heap->data)[findex].key) {
      swap(&((node_t *)heap->data)[findex], &((node_t *)heap->data)[parent_index]);
      up_heap(heap, parent_index);
    }
}

#line 158
static void swap(node_t *first, node_t *second)
#line 158
{
  long long int key;
  void *data;

  key = first->key;
  first->key = second->key;
  second->key = key;

  data = first->data;
  first->data = second->data;
  second->data = data;
}

# 55 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/sim_event_queue.c"
  sim_event_t *sim_queue_pop()
#line 55
{
  long long int key;

#line 57
  return (sim_event_t *)heap_pop_min_data(&eventHeap, &key);
}

# 114 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/heap.c"
static void *heap_pop_min_data(heap_t *heap, long long int *key)
#line 114
{
  int last_index = heap->size - 1;
  void *data = ((node_t *)heap->data)[0].data;

#line 117
  if (key != (void *)0) {
      *key = ((node_t *)heap->data)[0].key;
    }
  ((node_t *)heap->data)[0].data = ((node_t *)heap->data)[last_index].data;
  ((node_t *)heap->data)[0].key = ((node_t *)heap->data)[last_index].key;

  heap->size--;

  down_heap(heap, 0);

  return data;
}

#line 171
static void down_heap(heap_t *heap, int findex)
#line 171
{
  int right_index = (findex + 1) * 2;
  int left_index = findex * 2 + 1;

  if (right_index < heap->size) {
      long long int left_key = ((node_t *)heap->data)[left_index].key;
      long long int right_key = ((node_t *)heap->data)[right_index].key;
      int min_key_index = left_key < right_key ? left_index : right_index;

      if (((node_t *)heap->data)[min_key_index].key < ((node_t *)heap->data)[findex].key) {
          swap(&((node_t *)heap->data)[findex], &((node_t *)heap->data)[min_key_index]);
          down_heap(heap, min_key_index);
        }
    }
  else {
#line 185
    if (left_index >= heap->size) {
        return;
      }
    else {
        long long int left_key = ((node_t *)heap->data)[left_index].key;

#line 190
        if (left_key < ((node_t *)heap->data)[findex].key) {
            swap(&((node_t *)heap->data)[findex], &((node_t *)heap->data)[left_index]);
            return;
          }
      }
    }
}

# 60 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/sim_event_queue.c"
  bool sim_queue_is_empty()
#line 60
{
  return heap_is_empty(&eventHeap);
}

  long long int sim_queue_peek_time()
#line 64
{
  if (heap_is_empty(&eventHeap)) {
      return -1;
    }
  else {
      return heap_get_min_key(&eventHeap);
    }
}


  void sim_queue_cleanup_none(sim_event_t *event)
#line 74
{
  sim_log_debug(1U, "Queue", "cleanup_none: 0x%p\n", event);
}


  void sim_queue_cleanup_event(sim_event_t *event)
#line 79
{
  sim_log_debug(2U, "Queue", "cleanup_event: 0x%p\n", event);
  free(event);
}

  void sim_queue_cleanup_data(sim_event_t *event)
#line 84
{
  sim_log_debug(3U, "Queue", "cleanup_data: 0x%p\n", event);
  free(event->data);
  event->data = (void *)0;
}

  void sim_queue_cleanup_total(sim_event_t *event)
#line 90
{
  sim_log_debug(4U, "Queue", "cleanup_total: 0x%p\n", event);
  free(event->data);
  event->data = (void *)0;
  free(event);
}

# 57 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/sim_tossim.c"
  void sim_init()
#line 57
{
  sim_queue_init();
  sim_log_init();
  sim_log_commit_change();
  sim_noise_init();

  {
    struct timeval tv;

#line 65
    gettimeofday(&tv, (void *)0);





    if (tv.tv_usec != 0) {
        sim_random_seed(tv.tv_usec);
      }
    else {
        sim_random_seed(tv.tv_sec);
      }
  }
}

# 234 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/sim_log.c"
static void sim_log_commit_change()
#line 234
{
  int i;

#line 236
  for (i = 0; i < SIM_LOG_OUTPUT_COUNT; i++) {
      if (outputs[i].files != (void *)0) {
          outputs[i].num = 0;
          free(outputs[i].files);
          outputs[i].files = (void *)0;
        }
    }
}

# 67 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/sim_noise.c"
  void sim_noise_init()
{
  int j;



  for (j = 0; j < 1000; j++) {
      noiseData[j].noiseTable = create_hashtable(NOISE_HASHTABLE_SIZE, sim_noise_hash, sim_noise_eq);
      noiseData[j].noiseGenTime = 0;
      noiseData[j].noiseTrace = (char *)malloc(sizeof(char ) * NOISE_MIN_TRACE);
      noiseData[j].noiseTraceLen = NOISE_MIN_TRACE;
      noiseData[j].noiseTraceIndex = 0;
    }
}

# 102 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/sim_tossim.c"
  void sim_random_seed(int seed)
#line 102
{

  if (seed == 0) {
      seed = 1;
    }
  sim_seed = seed;
}

#line 80
  void sim_end()
#line 80
{
  sim_queue_init();
}



  int sim_random()
#line 86
{
  uint32_t mlcg;
#line 87
  uint32_t p;
#line 87
  uint32_t q;
  uint64_t tmpseed;

#line 89
  tmpseed = (uint64_t )33614U * (uint64_t )sim_seed;
  q = tmpseed;
  q = q >> 1;
  p = tmpseed >> 32;
  mlcg = p + q;
  if (mlcg & 0x80000000) {
      mlcg = mlcg & 0x7FFFFFFF;
      mlcg++;
    }
  sim_seed = mlcg;
  return mlcg;
}









  sim_time_t sim_time()
#line 110
{
  return sim_ticks;
}

#line 113
  void sim_set_time(sim_time_t t)
#line 113
{
  sim_ticks = t;
}

  sim_time_t sim_ticks_per_sec()
#line 117
{
  return 10000000000ULL;
}




  void sim_set_node(unsigned long node)
#line 124
{
  current_node = node;
  TOS_NODE_ID = node;
}

  bool sim_run_next_event()
#line 129
{
  bool result = FALSE;

#line 131
  if (!sim_queue_is_empty()) {
      sim_event_t *event = sim_queue_pop();

#line 133
      sim_set_time(event->time);
      sim_set_node(event->mote);



      sim_log_debug(5U, "Tossim", "CORE: popping event 0x%p for %i at %llu with handler %p... ", event, sim_node(), sim_time(), event->handle);
      if ((sim_mote_is_on(event->mote) || event->force) && 
      event->handle != (void *)0) {
          result = TRUE;
          sim_log_debug_clear(6U, "Tossim", " mote is on (or forced event), run it.\n");
          event->handle(event);
        }
      else {
          sim_log_debug_clear(7U, "Tossim", "\n");
        }
      if (event->cleanup != (void *)0) {
          event->cleanup(event);
        }
    }

  return result;
}

# 134 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/SimMoteP.nc"
  bool sim_mote_is_on(int mote)
#line 134
{
  bool result;
  int tmp = sim_node();

#line 137
  sim_set_node(mote);
  result = SimMoteP$SimMote$isOn();
  sim_set_node(tmp);
  return result;
}

# 276 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/sim_log.c"
static void sim_log_debug_clear(uint16_t id, char *string, const char *format, ...)
#line 276
{
  va_list args;
  int i;

#line 279
  if (outputs[id].files == (void *)0) {
      fillInOutput(id, string);
    }
  for (i = 0; i < outputs[id].num; i++) {
      FILE *file = outputs[id].files[i];

#line 284
      __builtin_va_start(args, format);
      vfprintf(file, format, args);
      fflush(file);
    }
}

# 156 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/sim_tossim.c"
  int sim_print_time(char *buf, int len, sim_time_t ftime)
#line 156
{
  int hours;
  int minutes;
  int seconds;
  sim_time_t secondBillionths;

  secondBillionths = ftime % sim_ticks_per_sec();
  if (sim_ticks_per_sec() > (sim_time_t )1000000000) {
      secondBillionths /= sim_ticks_per_sec() / (sim_time_t )1000000000;
    }
  else {
      secondBillionths *= (sim_time_t )1000000000 / sim_ticks_per_sec();
    }

  seconds = (int )(ftime / sim_ticks_per_sec());
  minutes = seconds / 60;
  hours = minutes / 60;
  seconds %= 60;
  minutes %= 60;
  buf[len - 1] = 0;
  return snprintf(buf, len - 1, "%i:%i:%i.%09llu", hours, minutes, seconds, secondBillionths);
}

  int sim_print_now(char *buf, int len)
#line 179
{
  return sim_print_time(buf, len, sim_time());
}


  char *sim_time_string()
#line 184
{
  sim_print_now(simTimeBuf, 128);
  return simTimeBuf;
}

  void sim_add_channel(char *channel, FILE *file)
#line 189
{
  sim_log_add_channel(channel, file);
}

  bool sim_remove_channel(char *channel, FILE *file)
#line 193
{
  return sim_log_remove_channel(channel, file);
}

# 57 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/sim_csma.c"
  int sim_csma_init_high()
#line 57
{
  return csmaInitHigh;
}

#line 60
  int sim_csma_init_low()
#line 60
{
  return csmaInitLow;
}

#line 63
  int sim_csma_high()
#line 63
{
  return csmaHigh;
}

#line 66
  int sim_csma_low()
#line 66
{
  return csmaLow;
}

#line 69
  int sim_csma_symbols_per_sec()
#line 69
{
  return csmaSymbolsPerSec;
}

#line 72
  int sim_csma_bits_per_symbol()
#line 72
{
  return csmaBitsPerSymbol;
}

#line 75
  int sim_csma_preamble_length()
#line 75
{
  return csmaPreambleLength;
}

#line 78
  int sim_csma_exponent_base()
#line 78
{
  return csmaExponentBase;
#line 79
  ;
}

#line 81
  int sim_csma_max_iterations()
#line 81
{
  return csmaMaxIterations;
}

#line 84
  int sim_csma_min_free_samples()
#line 84
{
  return csmaMinFreeSamples;
}

#line 87
  int sim_csma_rxtx_delay()
#line 87
{
  return csmaRxTxDelay;
}

#line 90
  int sim_csma_ack_time()
#line 90
{
  return csmaAckTime;
}



  void sim_csma_set_init_high(int val)
#line 96
{
  csmaInitHigh = val;
}

#line 99
  void sim_csma_set_init_low(int val)
#line 99
{
  csmaInitLow = val;
}

#line 102
  void sim_csma_set_high(int val)
#line 102
{
  csmaHigh = val;
}

#line 105
  void sim_csma_set_low(int val)
#line 105
{
  csmaLow = val;
}

#line 108
  void sim_csma_set_symbols_per_sec(int val)
#line 108
{
  csmaSymbolsPerSec = val;
}

#line 111
  void sim_csma_set_bits_per_symbol(int val)
#line 111
{
  csmaBitsPerSymbol = val;
}

#line 114
  void sim_csma_set_preamble_length(int val)
#line 114
{
  csmaPreambleLength = val;
}

#line 117
  void sim_csma_set_exponent_base(int val)
#line 117
{
  csmaExponentBase = val;
}

#line 120
  void sim_csma_set_max_iterations(int val)
#line 120
{
  csmaMaxIterations = val;
}

#line 123
  void sim_csma_set_min_free_samples(int val)
#line 123
{
  csmaMinFreeSamples = val;
}

#line 126
  void sim_csma_set_rxtx_delay(int val)
#line 126
{
  csmaRxTxDelay = val;
}

#line 129
  void sim_csma_set_ack_time(int val)
#line 129
{
  csmaAckTime = val;
}

# 16 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/sim_gain.c"
  gain_entry_t *sim_gain_first(int src)
#line 16
{
  if (src > 1000) {
      return connectivity[1000];
    }
  return connectivity[src];
}

  gain_entry_t *sim_gain_next(gain_entry_t *currentLink)
#line 23
{
  return currentLink->next;
}

  void sim_gain_add(int src, int dest, double gain)
#line 27
{
  gain_entry_t *current;
  int temp = sim_node();

#line 30
  if (src > 1000) {
      src = 1000;
    }
  sim_set_node(src);

  current = sim_gain_first(src);
  while (current != (void *)0) {
      if (current->mote == dest) {
          sim_set_node(temp);
          break;
        }
      current = current->next;
    }

  if (current == (void *)0) {
      current = sim_gain_allocate_link(dest);
      current->next = connectivity[src];
      connectivity[src] = current;
    }
  current->mote = dest;
  current->gain = gain;
  sim_log_debug(8U, "Gain", "Adding link from %i to %i with gain %f\n", src, dest, gain);
  sim_set_node(temp);
}

  double sim_gain_value(int src, int dest)
#line 55
{
  gain_entry_t *current;
  int temp = sim_node();

#line 58
  sim_set_node(src);
  current = sim_gain_first(src);
  while (current != (void *)0) {
      if (current->mote == dest) {
          sim_set_node(temp);
          sim_log_debug(9U, "Gain", "Getting link from %i to %i with gain %f\n", src, dest, current->gain);
          return current->gain;
        }
      current = current->next;
    }
  sim_set_node(temp);
  sim_log_debug(10U, "Gain", "Getting default link from %i to %i with gain %f\n", src, dest, 1.0);
  return 1.0;
}

  bool sim_gain_connected(int src, int dest)
#line 73
{
  gain_entry_t *current;
  int temp = sim_node();

#line 76
  sim_set_node(src);
  current = sim_gain_first(src);
  while (current != (void *)0) {
      if (current->mote == dest) {
          sim_set_node(temp);
          return TRUE;
        }
      current = current->next;
    }
  sim_set_node(temp);
  return FALSE;
}

  void sim_gain_remove(int src, int dest)
#line 89
{
  gain_entry_t *current;
  gain_entry_t *prevLink;
  int temp = sim_node();

  if (src > 1000) {
      src = 1000;
    }

  sim_set_node(src);

  current = sim_gain_first(src);
  prevLink = (void *)0;

  while (current != (void *)0) {
      gain_entry_t *tmp;

#line 105
      if (current->mote == dest) {
          if (prevLink == (void *)0) {
              connectivity[src] = current->next;
            }
          else {
              prevLink->next = current->next;
            }
          tmp = current->next;
          sim_gain_deallocate_link(current);
          current = tmp;
        }
      else {
          prevLink = current;
          current = current->next;
        }
    }
  sim_set_node(temp);
}

#line 169
  void sim_gain_deallocate_link(gain_entry_t *linkToDelete)
#line 169
{
  free(linkToDelete);
}

#line 124
  void sim_gain_set_noise_floor(int node, double mean, double range)
#line 124
{
  if (node > 1000) {
      node = 1000;
    }
  localNoise[node].mean = mean;
  localNoise[node].range = range;
}

#line 148
  double sim_gain_sample_noise(int node)
#line 148
{
  double val;
#line 149
  double adjust;

#line 150
  if (node > 1000) {
      node = 1000;
    }
  val = localNoise[node].mean;
  adjust = sim_random() % 2000000;
  adjust /= 1000000.0;
  adjust -= 1.0;
  adjust *= localNoise[node].range;
  return val + adjust;
}

#line 173
  void sim_gain_set_sensitivity(double s)
#line 173
{
  sensitivity = s;
}

  double sim_gain_sensitivity()
#line 177
{
  return sensitivity;
}

# 84 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/sim_noise.c"
  void sim_noise_create_model(uint16_t node_id)
#line 84
{
  makeNoiseModel(node_id);
  makePmfDistr(node_id);
}

#line 419
  void makeNoiseModel(uint16_t node_id)
#line 419
{
  int i;

#line 421
  for (i = 0; i < NOISE_HISTORY; i++) {
      noiseData[node_id].key[i] = search_bin_num(noiseData[node_id].noiseTrace[i]);
      sim_log_debug(44U, "Insert", "Setting history %i to be %i\n", (int )i, (int )noiseData[node_id].key[i]);
    }




  for (i = NOISE_HISTORY; i < noiseData[node_id].noiseTraceIndex; i++) {
      sim_noise_add(node_id, noiseData[node_id].noiseTrace[i]);
      arrangeKey(node_id);
      noiseData[node_id].key[NOISE_HISTORY - 1] = search_bin_num(noiseData[node_id].noiseTrace[i]);
    }
  noiseData[node_id].generated = 1;
}

#line 113
  uint8_t search_bin_num(char noise)
{
  uint8_t bin;

#line 116
  if (noise > NOISE_MAX || noise < NOISE_MIN) {
      noise = NOISE_MIN;
    }
  bin = (noise - NOISE_MIN) / NOISE_QUANTIZE_INTERVAL + 1;
  return bin;
}

#line 144
  void sim_noise_add(uint16_t node_id, char noise)
{
  int i;
  struct hashtable *pnoiseTable = noiseData[node_id].noiseTable;
  char *key = noiseData[node_id].key;
  sim_noise_hash_t *noise_hash;

#line 150
  noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, key);
  sim_log_debug(13U, "Insert", "Adding noise value %hhi\n", noise);
  if (noise_hash == (void *)0) {
      noise_hash = (sim_noise_hash_t *)malloc(sizeof(sim_noise_hash_t ));
      memcpy((void *)noise_hash->key, (void *)key, NOISE_HISTORY);

      noise_hash->numElements = 0;
      noise_hash->size = NOISE_DEFAULT_ELEMENT_SIZE;
      noise_hash->elements = (char *)malloc(sizeof(char ) * noise_hash->size);
      memset((void *)noise_hash->elements, 0, sizeof(char ) * noise_hash->size);

      noise_hash->flag = 0;
      for (i = 0; i < NOISE_NUM_VALUES; i++) {
          noise_hash->dist[i] = 0;
        }
      hashtable_insert(pnoiseTable, key, noise_hash);
      sim_log_debug(14U, "Insert", "Inserting %p into table %p with key ", noise_hash, pnoiseTable);
      {
        int ctr;

#line 169
        for (ctr = 0; ctr < NOISE_HISTORY; ctr++) 
          sim_log_debug_clear(15U, "Insert", "%0.3hhi ", key[ctr]);
      }
      sim_log_debug_clear(16U, "Insert", "\n");
    }

  if (noise_hash->numElements == noise_hash->size) 
    {
      char *newElements;
      int newSize = noise_hash->size * 2;

      newElements = (char *)malloc(sizeof(char ) * newSize);
      memcpy(newElements, noise_hash->elements, noise_hash->size);
      free(noise_hash->elements);
      noise_hash->elements = newElements;
      noise_hash->size = newSize;
    }

  noise_hash->elements[noise_hash->numElements] = noise;

  noise_hash->numElements++;
}

#line 245
  void arrangeKey(uint16_t node_id)
{
  char *pKey = noiseData[node_id].key;

#line 248
  memcpy(pKey, pKey + 1, NOISE_HISTORY - 1);
}





  void makePmfDistr(uint16_t node_id)
{
  int i;
  char *pKey = noiseData[node_id].key;
  char *fKey = noiseData[node_id].freqKey;

  FreqKeyNum = 0;
  for (i = 0; i < NOISE_HISTORY; i++) {
      pKey[i] = search_bin_num(noiseData[node_id].noiseTrace[i]);
    }

  for (i = NOISE_HISTORY; i < noiseData[node_id].noiseTraceIndex; i++) {
      if (i == NOISE_HISTORY) {
        }

      sim_noise_dist(node_id);
      arrangeKey(node_id);
      pKey[NOISE_HISTORY - 1] = search_bin_num(noiseData[node_id].noiseTrace[i]);
    }

  sim_log_debug_clear(21U, "HASH", "FreqKey = ");
  for (i = 0; i < NOISE_HISTORY; i++) 
    {
      sim_log_debug_clear(22U, "HASH", "%d,", fKey[i]);
    }
  sim_log_debug_clear(23U, "HASH", "\n");
}

#line 192
  void sim_noise_dist(uint16_t node_id)
{
  int i;
  uint8_t bin;
  float cmf = 0;
  struct hashtable *pnoiseTable = noiseData[node_id].noiseTable;
  char *key = noiseData[node_id].key;
  char *freqKey = noiseData[node_id].freqKey;
  sim_noise_hash_t *noise_hash;

#line 201
  noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, key);



  if (noise_hash->flag == 1) {
    return;
    }
  for (i = 0; i < NOISE_NUM_VALUES; i++) {
      noise_hash->dist[i] = 0.0;
    }

  for (i = 0; i < noise_hash->numElements; i++) 
    {
      float val;

#line 215
      sim_log_debug(17U, "Noise_output", "Noise is found to be %i\n", noise_hash->elements[i]);
      bin = noise_hash->elements[i] - NOISE_MIN_QUANTIZE;

      val = noise_hash->dist[bin];
      val += (float )1.0;
      noise_hash->dist[bin] = val;
    }

  for (i = 0; i < NOISE_NUM_VALUES; i++) 
    {
      noise_hash->dist[i] = noise_hash->dist[i] / noise_hash->numElements;
      cmf += noise_hash->dist[i];
      noise_hash->dist[i] = cmf;
    }
  noise_hash->flag = 1;


  if (noise_hash->numElements > FreqKeyNum) 
    {
      int j;

#line 235
      FreqKeyNum = noise_hash->numElements;
      memcpy((void *)freqKey, (void *)key, NOISE_HISTORY);
      sim_log_debug(18U, "HashZeroDebug", "Setting most frequent key (%i): ", (int )FreqKeyNum);
      for (j = 0; j < NOISE_HISTORY; j++) {
          sim_log_debug_clear(19U, "HashZeroDebug", "[%hhu] ", key[j]);
        }
      sim_log_debug_clear(20U, "HashZeroDebug", "\n");
    }
}

#line 97
  void sim_noise_trace_add(uint16_t node_id, char noiseVal)
#line 97
{

  if (noiseData[node_id].noiseTraceIndex == 
  noiseData[node_id].noiseTraceLen) {
      char *data = (char *)malloc(sizeof(char ) * noiseData[node_id].noiseTraceLen * 2);

#line 102
      memcpy(data, noiseData[node_id].noiseTrace, noiseData[node_id].noiseTraceLen);
      free(noiseData[node_id].noiseTrace);
      noiseData[node_id].noiseTraceLen *= 2;
      noiseData[node_id].noiseTrace = data;
    }
  noiseData[node_id].noiseTrace[noiseData[node_id].noiseTraceIndex] = noiseVal;
  noiseData[node_id].noiseTraceIndex++;
  sim_log_debug(12U, "Insert", "Adding noise value %i for %i of %i\n", (int )noiseData[node_id].noiseTraceIndex, (int )node_id, (int )noiseVal);
}

#line 123
  char search_noise_from_bin_num(int i)
{
  char noise;

#line 126
  noise = NOISE_MIN + (i - 1) * NOISE_QUANTIZE_INTERVAL;
  return noise;
}

#line 288
  char sim_noise_gen(uint16_t node_id)
{
  int i;
  int noiseIndex = 0;
  char noise;
  struct hashtable *pnoiseTable = noiseData[node_id].noiseTable;
  char *pKey = noiseData[node_id].key;
  char *fKey = noiseData[node_id].freqKey;
  double ranNum = RandomUniform();
  sim_noise_hash_t *noise_hash;

#line 298
  noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, pKey);

  if (noise_hash == (void *)0) {

      sim_log_debug(24U, "Noise_c", "Did not pattern match");

      sim_noise_alarm();
      noise = 0;
      sim_log_debug_clear(25U, "HASH", "(N)Noise\n");
      sim_log_debug(26U, "HashZeroDebug", "Defaulting to common hash.\n");
      memcpy((void *)pKey, (void *)fKey, NOISE_HISTORY);
      noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, pKey);
    }

  sim_log_debug_clear(27U, "HASH", "Key = ");
  for (i = 0; i < NOISE_HISTORY; i++) {
      sim_log_debug_clear(28U, "HASH", "%d,", pKey[i]);
    }
  sim_log_debug_clear(29U, "HASH", "\n");

  sim_log_debug(30U, "HASH", "Printing Key\n");
  sim_log_debug(31U, "HASH", "noise_hash->numElements=%d\n", noise_hash->numElements);


  numTotal++;


  if (noise_hash->numElements == 1) {
      noise = noise_hash->elements[0];
      sim_log_debug_clear(32U, "HASH", "(E)Noise = %d\n", noise);

      numCase1++;
      sim_log_debug(33U, "Noise_c", "In case 1: %i of %i\n", numCase1, numTotal);

      sim_log_debug(34U, "NoiseAudit", "Noise: %i\n", noise);
      return noise;
    }


  numCase2++;
  sim_log_debug(35U, "Noise_c", "In case 2: %i of %i\n", numCase2, numTotal);


  for (i = 0; i < NOISE_NUM_VALUES - 1; i++) {
      sim_log_debug(36U, "HASH", "IN:for i=%d\n", i);
      if (i == 0) {
          if (ranNum <= noise_hash->dist[i]) {
              noiseIndex = i;
              sim_log_debug_clear(37U, "HASH", "Selected Bin = %d -> ", i + 1);
              break;
            }
        }
      else {
#line 350
        if (noise_hash->dist[i - 1] < ranNum && 
        ranNum <= noise_hash->dist[i]) {
            noiseIndex = i;
            sim_log_debug_clear(38U, "HASH", "Selected Bin = %d -> ", i + 1);
            break;
          }
        }
    }
#line 357
  sim_log_debug(39U, "HASH", "OUT:for i=%d\n", i);

  noise = NOISE_MIN_QUANTIZE + i;
  sim_log_debug(40U, "NoiseAudit", "Noise: %i\n", noise);
  return noise;
}

# 103 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/randomlib.c"
static double RandomUniform(void )
{
  double uni;
  int seed1;
#line 106
  int seed2;


  if (!test) 
    {



      seed1 = sim_random() % 31329;
      seed2 = sim_random() % 30082;
      RandomInitialise(seed1, seed2);
    }

  uni = randU[i97 - 1] - randU[j97 - 1];
  if (uni <= 0.0) {
    uni++;
    }
#line 122
  randU[i97 - 1] = uni;
  i97--;
  if (i97 == 0) {
    i97 = 97;
    }
#line 126
  j97--;
  if (j97 == 0) {
    j97 = 97;
    }
#line 129
  randC -= randCD;
  if (randC < 0.0) {
    randC += randCM;
    }
#line 132
  uni -= randC;
  if (uni < 0.0) {
    uni++;
    }
  return uni;
}

# 364 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/sim_noise.c"
  char sim_noise_generate(uint16_t node_id, uint32_t cur_t)
#line 364
{
  uint32_t i;
  uint32_t prev_t;
  uint32_t delta_t;
  char *noiseG;
  char noise;

  prev_t = noiseData[node_id].noiseGenTime;

  if (noiseData[node_id].generated == 0) {
      sim_log_error(41U, "TOSSIM", "Tried to generate noise from an uninitialized radio model of node %hu.\n", node_id);
      return 127;
    }

  if (0 <= cur_t && cur_t < NOISE_HISTORY) {
      noiseData[node_id].noiseGenTime = cur_t;
      noiseData[node_id].key[cur_t] = search_bin_num(noiseData[node_id].noiseTrace[cur_t]);
      noiseData[node_id].lastNoiseVal = noiseData[node_id].noiseTrace[cur_t];
      return noiseData[node_id].noiseTrace[cur_t];
    }

  if (prev_t == 0) {
    delta_t = cur_t - (NOISE_HISTORY - 1);
    }
  else {
#line 388
    delta_t = cur_t - prev_t;
    }
  sim_log_debug_clear(42U, "HASH", "delta_t = %d\n", delta_t);

  if (delta_t == 0) {
    noise = noiseData[node_id].lastNoiseVal;
    }
  else 
#line 394
    {
      noiseG = (char *)malloc(sizeof(char ) * delta_t);

      for (i = 0; i < delta_t; i++) {
          noiseG[i] = sim_noise_gen(node_id);
          arrangeKey(node_id);
          noiseData[node_id].key[NOISE_HISTORY - 1] = search_bin_num(noiseG[i]);
        }
      noise = noiseG[delta_t - 1];
      noiseData[node_id].lastNoiseVal = noise;

      free(noiseG);
    }
  noiseData[node_id].noiseGenTime = cur_t;
  if (noise == 0) {
      sim_log_debug(43U, "HashZeroDebug", "Generated noise of zero.\n");
    }

  return noise;
}

# 261 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/sim_log.c"
static void sim_log_error(uint16_t id, char *string, const char *format, ...)
#line 261
{
  va_list args;
  int i;

#line 264
  if (outputs[id].files == (void *)0) {
      fillInOutput(id, string);
    }
  for (i = 0; i < outputs[id].num; i++) {
      FILE *file = outputs[id].files[i];

#line 269
      __builtin_va_start(args, format);
      fprintf(file, "ERROR (%i): ", (int )sim_node());
      vfprintf(file, format, args);
      fflush(file);
    }
}

# 54 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/sim_packet.c"
  void sim_packet_set_source(sim_packet_t *msg, uint16_t src)
#line 54
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 56
  __nesc_hton_uint16(hdr->src.nxdata, src);
}

  uint16_t sim_packet_source(sim_packet_t *msg)
#line 59
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 61
  return __nesc_ntoh_uint16(hdr->src.nxdata);
}

  void sim_packet_set_destination(sim_packet_t *msg, uint16_t dest)
#line 64
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 66
  __nesc_hton_uint16(hdr->dest.nxdata, dest);
}

  uint16_t sim_packet_destination(sim_packet_t *msg)
#line 69
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 71
  return __nesc_ntoh_uint16(hdr->dest.nxdata);
}

  void sim_packet_set_length(sim_packet_t *msg, uint8_t length)
#line 74
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 76
  __nesc_hton_uint8(hdr->length.nxdata, length);
}

#line 78
  uint16_t sim_packet_length(sim_packet_t *msg)
#line 78
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 80
  return __nesc_ntoh_uint8(hdr->length.nxdata);
}

  void sim_packet_set_type(sim_packet_t *msg, uint8_t type)
#line 83
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 85
  __nesc_hton_uint8(hdr->type.nxdata, type);
}

  uint8_t sim_packet_type(sim_packet_t *msg)
#line 88
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 90
  return __nesc_ntoh_uint8(hdr->type.nxdata);
}

  uint8_t *sim_packet_data(sim_packet_t *p)
#line 93
{
  message_t *msg = (message_t *)p;

#line 95
  return (uint8_t *)& msg->data;
}

#line 97
  void sim_packet_set_strength(sim_packet_t *p, uint16_t str)
#line 97
{
  message_t *msg = (message_t *)p;
  tossim_metadata_t *md = (tossim_metadata_t *)& msg->metadata;

#line 100
  __nesc_hton_int8(md->strength.nxdata, str);
}

#line 102
  void sim_packet_deliver(int node, sim_packet_t *msg, sim_time_t t)
#line 102
{
  if (t < sim_time()) {
      t = sim_time();
    }
  sim_log_debug(45U, "Packet", "sim_packet.c: Delivering packet %p to %i at %llu\n", msg, node, t);
  active_message_deliver(node, (message_t *)msg, t);
}

# 254 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/TossimActiveMessageC.nc"
  void active_message_deliver(int node, message_t *msg, sim_time_t t)
#line 254
{
  sim_event_t *evt = TossimActiveMessageC$allocate_deliver_event(node, msg, t);

#line 256
  sim_queue_insert(evt);
}

#line 109
static void TossimActiveMessageC$Model$receive(message_t *msg)
#line 109
{
  uint8_t len;
  void *payload;

  memcpy(TossimActiveMessageC$bufferPointer[sim_node()], msg, sizeof(message_t ));
  len = TossimActiveMessageC$Packet$payloadLength(TossimActiveMessageC$bufferPointer[sim_node()]);
  payload = TossimActiveMessageC$Packet$getPayload(TossimActiveMessageC$bufferPointer[sim_node()], TossimActiveMessageC$Packet$maxPayloadLength());

  if (TossimActiveMessageC$AMPacket$isForMe(msg)) {
      sim_log_debug(124U, "AM", "Received active message (%p) of type %hhu and length %hhu for me @ %s.\n", TossimActiveMessageC$bufferPointer[sim_node()], TossimActiveMessageC$AMPacket$type(TossimActiveMessageC$bufferPointer[sim_node()]), len, sim_time_string());
      TossimActiveMessageC$bufferPointer[sim_node()] = TossimActiveMessageC$Receive$receive(TossimActiveMessageC$AMPacket$type(TossimActiveMessageC$bufferPointer[sim_node()]), TossimActiveMessageC$bufferPointer[sim_node()], payload, len);
    }
  else {
      sim_log_debug(125U, "AM", "Snooped on active message of type %hhu and length %hhu for %hu @ %s.\n", TossimActiveMessageC$AMPacket$type(TossimActiveMessageC$bufferPointer[sim_node()]), len, TossimActiveMessageC$AMPacket$destination(TossimActiveMessageC$bufferPointer[sim_node()]), sim_time_string());
      TossimActiveMessageC$bufferPointer[sim_node()] = TossimActiveMessageC$Snoop$receive(TossimActiveMessageC$AMPacket$type(TossimActiveMessageC$bufferPointer[sim_node()]), TossimActiveMessageC$bufferPointer[sim_node()], payload, len);
    }
}

#line 140
static am_addr_t TossimActiveMessageC$AMPacket$destination(message_t *amsg)
#line 140
{
  tossim_header_t *header = TossimActiveMessageC$getHeader(amsg);

#line 142
  return __nesc_ntoh_uint16(header->dest.nxdata);
}

# 76 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC$ActiveMessageAddress$amAddress(void )
#line 76
{
  if (!ActiveMessageAddressC$set[sim_node()]) {
      ActiveMessageAddressC$addr[sim_node()] = TOS_NODE_ID;
      ActiveMessageAddressC$set[sim_node()] = TRUE;
    }
  return ActiveMessageAddressC$addr[sim_node()];
}

# 165 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/TossimActiveMessageC.nc"
static am_id_t TossimActiveMessageC$AMPacket$type(message_t *amsg)
#line 165
{
  tossim_header_t *header = TossimActiveMessageC$getHeader(amsg);

#line 167
  return __nesc_ntoh_uint8(header->type.nxdata);
}

# 75 "../../tos//lib/commstack/GenericCommReallyPromiscuousM.nc"
static message_t *GenericCommReallyPromiscuousM$BottomReceiveMsg$receive(uint8_t am, message_t *msg, void *payload, uint8_t len)
#line 75
{
  if (am == AM_S4_APP_MSG) {
    sim_log_debug(479U, "BVR", "Called GenericCommReallyPromiscuousM.Receive.receive with args(am=%d):  time=%s\n", am, sim_time_string());
    }

  return GenericCommReallyPromiscuousM$Receive$receive(am, msg, payload, len);
}

# 210 "../../tos//lib/linkestimator/LinkEstimatorM.nc"
static error_t LinkEstimatorM$find(uint16_t addr, uint8_t *idx)
#line 210
{
  int i;
  uint8_t neighbor = 0;
  bool found = FALSE;



  for (i = 0; i < LinkEstimatorM$active_neighbors[sim_node()] && !found; i++) {
      if (!(__nesc_ntoh_uint8(LinkEstimatorM$neighborCachePtrs[sim_node()][i]->state.nxdata) & ACTIVE_MASK)) {
          sim_log_debug(354U, "BVR-error", "Assertion failed: active_neighbor index %d has ACTIVE bit unset\n", i);
        }


      if (__nesc_ntoh_uint16(LinkEstimatorM$neighborCachePtrs[sim_node()][i]->addr.nxdata) == addr) {
          neighbor = i;
          found = TRUE;
        }
    }
  *idx = neighbor;



  return found ? SUCCESS : FAIL;
}

# 1597 "../../tos//lib/bvr/S4StateM.nc"
static error_t S4StateM$LinkEstimator$canEvict(uint16_t addr)
#line 1597
{
  int i;
  bool is_parent = FALSE;

#line 1600
  for (i = 0; i < S4StateM$S4Topology$getRootNodesCount(); i++) {
      is_parent = S4StateM$rootBeacons[sim_node()][i].parent == addr;
      if (is_parent) {
        break;
        }
    }
#line 1605
  return is_parent ? FAIL : SUCCESS;
}

# 305 "../../tos//lib/util/UARTLoggerM.nc"
static error_t UARTLoggerM$Logger$LogDropLink(uint16_t addr)
#line 305
{
  message_t *msg_ptr;
  BVRLogMsgWrapper *log_msg;
  BVRLogMsg *log_ptr;
  uint8_t bp_status;
  error_t result;

  if (!UARTLoggerM$LOG_LINK) {
    return SUCCESS;
    }
#line 314
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 314
    {
      UARTLoggerM$stat_received[sim_node()]++;
      UARTLoggerM$min_available_buffers[sim_node()] = UARTLoggerM$min_available_buffers[sim_node()] < UARTLoggerM$bufferPoolGetNumberFree(&UARTLoggerM$buffers[sim_node()]) ? 
      UARTLoggerM$min_available_buffers[sim_node()] : UARTLoggerM$bufferPoolGetNumberFree(&UARTLoggerM$buffers[sim_node()]);
      UARTLoggerM$update_max_queued_send();
      result = UARTLoggerM$bufferPoolGetFree(&UARTLoggerM$buffers[sim_node()], &msg_ptr, &bp_status);
    }
#line 320
    __nesc_atomic_end(__nesc_atomic); }
  if (result == FAIL) {
      sim_log_debug(425U, "BVR-debug", "Logger: could not get free buffer\n");
      if (bp_status) {
        UARTLoggerM$stat_bad_buffer[sim_node()]++;
        }
      else {
#line 326
        UARTLoggerM$stat_no_buffer[sim_node()]++;
        }
#line 327
      return FAIL;
    }
  log_msg = (BVRLogMsgWrapper *)&msg_ptr->data[0];
  log_ptr = (BVRLogMsg *)& log_msg->log_msg;

  __nesc_hton_uint16(log_msg->header.last_hop.nxdata, UARTLoggerM$AMPacket$address());
  __nesc_hton_uint16(log_msg->header.seqno.nxdata, (uint16_t )UARTLoggerM$stat_received[sim_node()]);

  __nesc_hton_uint8(log_ptr->type.nxdata, LOG_DROP_LINK);
  __nesc_hton_uint16(log_ptr->drop_link.addr.nxdata, addr);

  if (UARTLoggerM$LogSend$send(AM_BROADCAST_ADDR, msg_ptr, UARTLoggerM$msg_size[sim_node()]) != SUCCESS) {
      UARTLoggerM$stat_send_failed[sim_node()]++;
      sim_log_debug(426U, "BVR-debug", "Logger: send failed, freeing the buffer\n");
      UARTLoggerM$bufferPoolSetFree(&UARTLoggerM$buffers[sim_node()], msg_ptr);
      return FAIL;
    }
  return SUCCESS;
}

#line 109
static void UARTLoggerM$update_max_queued_send(void )
#line 109
{
  uint8_t queue_occupancy = 0;

#line 111
  UARTLoggerM$max_queued_send[sim_node()] = UARTLoggerM$max_queued_send[sim_node()] > queue_occupancy ? 
  UARTLoggerM$max_queued_send[sim_node()] : queue_occupancy;
}

# 309 "../../tos//lib/commstack/S4QueuedSendM.nc"
static error_t S4QueuedSendM$QueueSendMsg$send(uint8_t id, uint16_t address, message_t *msg, uint8_t length)
#line 309
{
  sim_log_debug(457U, "BVR-debug", "QueuedSend: queue msg enq %d deq %d\n", S4QueuedSendM$enqueue_next[sim_node()], S4QueuedSendM$dequeue_next[sim_node()]);


  if (id == AM_S4_LOG_MSG) {
      S4QueuedSendM$Leds$led1Toggle();

      return FAIL;
    }


  if ((S4QueuedSendM$enqueue_next[sim_node()] + 1) % S4QueuedSendM$MESSAGE_QUEUE_SIZE == S4QueuedSendM$dequeue_next[sim_node()]) {

      return FAIL;
    }
  S4QueuedSendM$msgqueue[sim_node()][S4QueuedSendM$enqueue_next[sim_node()]].address = address;
  S4QueuedSendM$msgqueue[sim_node()][S4QueuedSendM$enqueue_next[sim_node()]].length = length;
  S4QueuedSendM$msgqueue[sim_node()][S4QueuedSendM$enqueue_next[sim_node()]].id = id;
  S4QueuedSendM$msgqueue[sim_node()][S4QueuedSendM$enqueue_next[sim_node()]].pMsg = msg;
  S4QueuedSendM$msgqueue[sim_node()][S4QueuedSendM$enqueue_next[sim_node()]].xmit_count = 0;




  S4QueuedSendM$enqueue_next[sim_node()]++;
#line 333
  S4QueuedSendM$enqueue_next[sim_node()] %= S4QueuedSendM$MESSAGE_QUEUE_SIZE;

  sim_log_debug(458U, "BVR-debug", "QueuedSend: Successfully queued msg to 0x%x, id %d enq %d, deq %d\n", address, id, S4QueuedSendM$enqueue_next[sim_node()], S4QueuedSendM$dequeue_next[sim_node()]);

  sim_log_debug(459U, "BVR-debug", "QueuedSend: X fQueueIdle: %d\n", S4QueuedSendM$fQueueIdle[sim_node()]);



  if (S4QueuedSendM$fQueueIdle[sim_node()]) {
      S4QueuedSendM$fQueueIdle[sim_node()] = FALSE;
      if (S4QueuedSendM$QueueServiceTask$postTask() == FAIL) {
        sim_log_debug(460U, "BVR-error", "QueueSendM: post QueueServiceTask returned error!!\n");
        }
    }
  return SUCCESS;
}

# 99 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/system/LedsP.nc"
static void LedsP$Leds$led1Toggle(void )
#line 99
{
  LedsP$Led1$toggle();
  sim_log_debug(471U, "LedsC", "LEDS: Led""1"" %s.\n", LedsP$Led1$get() ? "off" : "on");
#line 101
  ;
}

# 205 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/SimSchedulerBasicP.nc"
static error_t SimSchedulerBasicP$TaskBasic$postTask(uint8_t id)
{
  error_t result;

#line 208
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 208
    {
      result = SimSchedulerBasicP$pushTask(id) ? SUCCESS : EBUSY;
    }
#line 210
    __nesc_atomic_end(__nesc_atomic); }
  if (result == SUCCESS) {
      sim_log_debug(117U, "Scheduler", "Posting task %hhu.\n", id);
      SimSchedulerBasicP$sim_scheduler_submit_event();
    }
  else {
      sim_log_debug(118U, "Scheduler", "Posting task %hhu, but already posted.\n", id);
    }
  return result;
}

#line 77
static void SimSchedulerBasicP$sim_scheduler_submit_event(void )
#line 77
{
  if (SimSchedulerBasicP$sim_scheduler_event_pending[sim_node()] == FALSE) {
      SimSchedulerBasicP$sim_scheduler_event[sim_node()].time = sim_time() + SimSchedulerBasicP$sim_config_task_latency();
      sim_queue_insert(&SimSchedulerBasicP$sim_scheduler_event[sim_node()]);
      SimSchedulerBasicP$sim_scheduler_event_pending[sim_node()] = TRUE;
    }
}

# 1551 "../../tos//lib/bvr/S4StateM.nc"
static error_t S4StateM$LinkEstimatorSynch$linkRemoved(uint16_t addr)
#line 1551
{
  if (S4StateM$state_is_active[sim_node()]) {

      S4StateM$CoordinateTable$removeEntry(addr);


      S4StateM$dropParent(addr);
    }

  return SUCCESS;
}

# 97 "../../tos//lib/bvr/CoordinateTableM.nc"
static void CoordinateTableM$printTable(void )
#line 97
{
  int i;

#line 99
  for (i = 0; i < CoordinateTableM$num_active[sim_node()]; i++) {
      sim_log_debug(489U, "BVR-debug", "CoordinateTable: [%d(%d)] addr:%d through:%d quality:%d age:%d coords: ", i, __nesc_ntoh_uint8(CoordinateTableM$tablePtrs[sim_node()][i]->pos.nxdata), __nesc_ntoh_uint16(CoordinateTableM$tablePtrs[sim_node()][i]->addr.nxdata), __nesc_ntoh_uint16(CoordinateTableM$tablePtrs[sim_node()][i]->first_hop.nxdata), __nesc_ntoh_uint8(CoordinateTableM$tablePtrs[sim_node()][i]->quality.nxdata), __nesc_ntoh_uint8(CoordinateTableM$tablePtrs[sim_node()][i]->age.nxdata));



      coordinates_print(& CoordinateTableM$tablePtrs[sim_node()][i]->coords);
    }
}

# 415 "../../tos//lib/bvr/coordinates.h"
static void coordinates_print(Coordinates *c)
#line 415
{

  int i;

#line 418
  sim_log_debug_clear(58U, "BVR-debug", "%d", coordinates_is_valid_component(c, 0) ? __nesc_ntoh_uint8(c->comps[0].nxdata) : -1);
  for (i = 1; i < 8; i++) {
      sim_log_debug_clear(59U, "BVR-debug", ", %d", coordinates_is_valid_component(c, i) ? __nesc_ntoh_uint8(c->comps[i].nxdata) : -1);
    }
  sim_log_debug_clear(60U, "BVR-debug", "\n");
}

#line 110
static bool coordinates_is_valid_component(Coordinates *c, uint8_t pos)
#line 110
{
  if (c == (void *)0 || pos >= 8) {
    return FALSE;
    }
#line 113
  return !(__nesc_ntoh_uint8(c->comps[pos].nxdata) == INVALID_COMPONENT);
}

# 832 "../../tos//lib/bvr/S4StateM.nc"
static void S4StateM$rootBeaconInit(S4RootBeacon *b)
#line 832
{
  if (b != (void *)0) {
      b->valid = 0;
      b->parent = 0;
      b->hops = INVALID_COMPONENT;
      b->last_seqno = 0;
      b->nodeid = 0xFFFF;



      b->combined_quality = S4StateM$MAX_ETX;
    }
  else {
    sim_log_debug(214U, "S4-error", "rootBeaconInit called with NULL pointer\n");
    }
}

# 166 "../../tos//lib/linkestimator/LinkEstimatorM.nc"
static void LinkEstimatorM$neighborInit(LinkNeighbor *n)
#line 166
{
  int i;

#line 168
  __nesc_hton_uint8(n->state.nxdata, 0);
  __nesc_hton_uint16(n->addr.nxdata, 0);
  __nesc_hton_uint8(n->reverse_quality.nxdata, 0);
  __nesc_hton_uint8(n->reverse_expiration.nxdata, 0);
  __nesc_hton_uint16(n->strength.nxdata, 0);
  __nesc_hton_uint8(n->quality.nxdata, 0);
  __nesc_hton_uint16(n->last_seqno.nxdata, 0);
  __nesc_hton_uint8(n->age.nxdata, 0);
  __nesc_hton_uint8(n->chances.nxdata, LINK_ESTIMATOR_PROBATION + LINK_ESTIMATOR_RECEIVE_WINDOW);
  for (i = 0; i < LINK_ESTIMATOR_RECEIVE_WINDOW; i++) {
      __nesc_hton_uint8(n->missed[i].nxdata, LINK_ESTIMATOR_INVALID_PACKETS);
      __nesc_hton_uint8(n->received[i].nxdata, LINK_ESTIMATOR_INVALID_PACKETS);
    }
  __nesc_hton_uint8(n->received[LinkEstimatorM$current_window[sim_node()]].nxdata, 0);
  __nesc_hton_uint8(n->missed[LinkEstimatorM$current_window[sim_node()]].nxdata, 0);
}

#line 615
static uint8_t LinkEstimatorM$getQuality(uint8_t idx)
#line 615
{
  LinkNeighbor *n = LinkEstimatorM$neighborCachePtrs[sim_node()][idx];

#line 617
  if ((n == (void *)0 || !(__nesc_ntoh_uint8(n->state.nxdata) & ACTIVE_MASK)) || !(__nesc_ntoh_uint8(n->state.nxdata) & VALID_QUALITY_MASK)) {
    return 0;
    }
#line 619
  return __nesc_ntoh_uint8(n->quality.nxdata);
}

#line 510
static error_t LinkEstimatorM$updateSeqno(uint8_t idx, uint16_t seqno)
#line 510
{
  unsigned char *__nesc_temp59;
  unsigned char *__nesc_temp58;
  unsigned char __nesc_temp57;
  unsigned char *__nesc_temp56;
#line 511
  LinkNeighbor *n = LinkEstimatorM$neighborCachePtrs[sim_node()][idx];
  uint8_t missed;

#line 513
  if (n == (void *)0 || !(__nesc_ntoh_uint8(n->state.nxdata) & ACTIVE_MASK)) {
    return FAIL;
    }
  if (__nesc_ntoh_uint8(n->received[LinkEstimatorM$current_window[sim_node()]].nxdata) < LINK_ESTIMATOR_MAX_PACKETS) {
    (__nesc_temp56 = n->received[LinkEstimatorM$current_window[sim_node()]].nxdata, __nesc_hton_uint8(__nesc_temp56, (__nesc_temp57 = __nesc_ntoh_uint8(__nesc_temp56)) + 1), __nesc_temp57);
    }
  if (__nesc_ntoh_uint8(n->state.nxdata) & VALID_SEQNO_MASK) {
      missed = seqno - __nesc_ntoh_uint16(n->last_seqno.nxdata) - 1;
      if (__nesc_ntoh_uint8(n->missed[LinkEstimatorM$current_window[sim_node()]].nxdata) > LINK_ESTIMATOR_MAX_PACKETS - missed) {
          __nesc_hton_uint8(n->missed[LinkEstimatorM$current_window[sim_node()]].nxdata, LINK_ESTIMATOR_MAX_PACKETS);
        }
      else 
#line 523
        {
          (__nesc_temp58 = n->missed[LinkEstimatorM$current_window[sim_node()]].nxdata, __nesc_hton_uint8(__nesc_temp58, __nesc_ntoh_uint8(__nesc_temp58) + missed));
        }
    }
  sim_log_debug(388U, "BVR-debug", "updateLinkQualityInfo: from=%d received=%d last_seq=%d rcv_seqno=%d missed=%d quality:%d\n", __nesc_ntoh_uint16(n->addr.nxdata), __nesc_ntoh_uint8(n->received[LinkEstimatorM$current_window[sim_node()]].nxdata), __nesc_ntoh_uint16(n->last_seqno.nxdata), seqno, __nesc_ntoh_uint8(n->missed[LinkEstimatorM$current_window[sim_node()]].nxdata), __nesc_ntoh_uint8(n->quality.nxdata));

  (__nesc_temp59 = n->state.nxdata, __nesc_hton_uint8(__nesc_temp59, __nesc_ntoh_uint8(__nesc_temp59) | VALID_SEQNO_MASK));
  __nesc_hton_uint16(n->last_seqno.nxdata, seqno);
  return SUCCESS;
}

#line 587
static error_t LinkEstimatorM$updateStrength(uint8_t idx, uint16_t strength)
#line 587
{
  unsigned char *__nesc_temp63;
#line 588
  uint16_t new_strength;
  LinkNeighbor *n = LinkEstimatorM$neighborCachePtrs[sim_node()][idx];

  if ((!LinkEstimatorM$state_is_active[sim_node()] || n == (void *)0) || !(__nesc_ntoh_uint8(n->state.nxdata) & ACTIVE_MASK)) {
    return FAIL;
    }
#line 593
  if (__nesc_ntoh_uint8(n->state.nxdata) & VALID_STRENGTH_MASK) {
      new_strength = (uint16_t )(0.25 * __nesc_ntoh_uint16(n->strength.nxdata) + 0.75 * strength);
      sim_log_debug(392U, "BVR-debug", "LinkEstimator$updateStrength: node [%d] addr:%d strength was:%d is:%d\n", idx, __nesc_ntoh_uint16(n->addr.nxdata), __nesc_ntoh_uint16(n->strength.nxdata), new_strength);

      __nesc_hton_uint16(n->strength.nxdata, new_strength);
    }
  else 
#line 598
    {
      sim_log_debug(393U, "BVR-debug", "LinkEstimator$updateStrength: node [%d] addr:%d strength was:-- is:%d\n", idx, __nesc_ntoh_uint16(n->addr.nxdata), strength);

      __nesc_hton_uint16(n->strength.nxdata, strength);
      (__nesc_temp63 = n->state.nxdata, __nesc_hton_uint8(__nesc_temp63, __nesc_ntoh_uint8(__nesc_temp63) | VALID_STRENGTH_MASK));
    }
  return SUCCESS;
}

# 235 "../../tos//lib/bvr/CoordinateTableM.nc"
static CoordinateTableEntry *CoordinateTableM$get_entry(uint16_t addr)
#line 235
{
  uint8_t i;
  uint8_t idx = 0;

  CoordinateTableEntry *e = (void *)0;

  if (CoordinateTableM$get_entry$current_entry[sim_node()] > CoordinateTableM$num_active[sim_node()]) {
#line 241
    CoordinateTableM$get_entry$current_entry[sim_node()] = 0;
    }
  for (i = 0; i < CoordinateTableM$num_active[sim_node()] && e == (void *)0; i++) {
      idx = (i + CoordinateTableM$get_entry$current_entry[sim_node()]) % CoordinateTableM$num_active[sim_node()];
      if (__nesc_ntoh_uint16(CoordinateTableM$tablePtrs[sim_node()][idx]->addr.nxdata) == addr) {
        e = CoordinateTableM$tablePtrs[sim_node()][idx];
        }
    }
#line 248
  CoordinateTableM$get_entry$current_entry[sim_node()] = idx;
  sim_log_debug(498U, "BVR-debug", "COORDS: CoordinateTableM$get_entry called w addr: %d returning %p\n", addr, e);
  return e;
}

# 262 "../../tos//lib/util/UARTLoggerM.nc"
static error_t UARTLoggerM$Logger$LogChangeLink(LinkNeighbor *n)
#line 262
{
  message_t *msg_ptr;
  BVRLogMsgWrapper *log_msg;
  BVRLogMsg *log_ptr;
  uint8_t bp_status;
  error_t result;

  if (!UARTLoggerM$LOG_LINK) {
    return SUCCESS;
    }
#line 271
  if (n == (void *)0) {
    return FAIL;
    }
#line 273
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 273
    {
      UARTLoggerM$stat_received[sim_node()]++;
      UARTLoggerM$min_available_buffers[sim_node()] = UARTLoggerM$min_available_buffers[sim_node()] < UARTLoggerM$bufferPoolGetNumberFree(&UARTLoggerM$buffers[sim_node()]) ? 
      UARTLoggerM$min_available_buffers[sim_node()] : UARTLoggerM$bufferPoolGetNumberFree(&UARTLoggerM$buffers[sim_node()]);
      UARTLoggerM$update_max_queued_send();
      result = UARTLoggerM$bufferPoolGetFree(&UARTLoggerM$buffers[sim_node()], &msg_ptr, &bp_status);
    }
#line 279
    __nesc_atomic_end(__nesc_atomic); }
  if (result == FAIL) {
      sim_log_debug(423U, "BVR-debug", "Logger: could not get free buffer\n");
      if (bp_status) {
        UARTLoggerM$stat_bad_buffer[sim_node()]++;
        }
      else {
#line 285
        UARTLoggerM$stat_no_buffer[sim_node()]++;
        }
#line 286
      return FAIL;
    }
  log_msg = (BVRLogMsgWrapper *)&msg_ptr->data[0];
  log_ptr = (BVRLogMsg *)& log_msg->log_msg;

  __nesc_hton_uint16(log_msg->header.last_hop.nxdata, UARTLoggerM$AMPacket$address());
  __nesc_hton_uint16(log_msg->header.seqno.nxdata, (uint16_t )UARTLoggerM$stat_received[sim_node()]);

  __nesc_hton_uint8(log_ptr->type.nxdata, LOG_CHANGE_LINK);
  log_ptr->change_link.link = *n;

  if (UARTLoggerM$LogSend$send(AM_BROADCAST_ADDR, msg_ptr, UARTLoggerM$msg_size[sim_node()]) != SUCCESS) {
      UARTLoggerM$stat_send_failed[sim_node()]++;
      sim_log_debug(424U, "BVR-debug", "Logger: send failed, freeing the buffer\n");
      UARTLoggerM$bufferPoolSetFree(&UARTLoggerM$buffers[sim_node()], msg_ptr);
      return FAIL;
    }
  return SUCCESS;
}

# 712 "../../tos//lib/linkestimator/LinkEstimatorM.nc"
static error_t LinkEstimatorM$LinkEstimator$goodBidirectionalQuality(uint8_t idx, bool *good)
#line 712
{
  LinkNeighbor *n = LinkEstimatorM$neighborCachePtrs[sim_node()][idx];

  sim_log_debug(396U, "S4UserRouter", "idx=%d, n=%x, n->state=%d, n->quality=%d\n", idx, n, __nesc_ntoh_uint8(n->state.nxdata), __nesc_ntoh_uint8(n->quality.nxdata));

  if (((n == (void *)0 || !(__nesc_ntoh_uint8(n->state.nxdata) & ACTIVE_MASK)) || !(__nesc_ntoh_uint8(n->state.nxdata) & VALID_QUALITY_MASK)) || 
  !(__nesc_ntoh_uint8(n->state.nxdata) & VALID_REVERSE_MASK)) {
      *good = FALSE;
      return FAIL;
    }
  *good = __nesc_ntoh_uint8(n->quality.nxdata) > LINK_QUALITY_THRESHOLD && __nesc_ntoh_uint8(n->reverse_quality.nxdata) > LINK_QUALITY_THRESHOLD;
  return SUCCESS;
}

# 765 "../../tos//lib/bvr/S4RouterM.nc"
static uint8_t S4RouterM$duplicateCacheGetIndex(uint32_t key)
#line 765
{
  int i;
#line 766
  int pos;

#line 767
  pos = S4RouterM$DUP_CACHE_SIZE;
  for (i = 0; i < S4RouterM$DUP_CACHE_SIZE && pos == S4RouterM$DUP_CACHE_SIZE; i++) {
      if (S4RouterM$dup_cache[sim_node()][i].valid && S4RouterM$dup_cache[sim_node()][i].key == key) {
          pos = i;
        }
    }
  return pos;
}

# 68 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/AMPacket.nc"
static am_addr_t S4RouterM$AMPacket$address(void ){
#line 68
  unsigned short __nesc_result;
#line 68

#line 68
  __nesc_result = S4ActiveMessageC$AMPacket$address();
#line 68

#line 68
  return __nesc_result;
#line 68
}
#line 68
# 777 "../../tos//lib/bvr/S4RouterM.nc"
static void S4RouterM$duplicateCacheRemove(uint32_t key)
#line 777
{
  int i;

  if (!S4RouterM$DUP_CACHE_ENABLED) {
    return;
    }
  i = S4RouterM$duplicateCacheGetIndex(key);
  if (i < S4RouterM$DUP_CACHE_SIZE) {
      sim_log_debug(195U, "S4UserRouter", "duplicateCacheRemove: %d was in cache, pos %d, removing\n", key, i);
      S4RouterM$dup_cache[sim_node()][i].valid = FALSE;
    }
  else 
#line 787
    {
      sim_log_debug(196U, "S4UserRouter", "duplicateCacheRemove: %d was not in cache!\n");
    }
}

# 99 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/system/RandomLfsrC.nc"
static uint32_t RandomLfsrC$Random$rand32(void )
#line 99
{
  return ((uint32_t )RandomLfsrC$Random$rand16() << 16) | RandomLfsrC$Random$rand16();
}

#line 83
static uint16_t RandomLfsrC$Random$rand16(void )
#line 83
{
  bool endbit;
  uint16_t tmpShiftReg;

#line 86
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 86
    {
      tmpShiftReg = RandomLfsrC$shiftReg[sim_node()];
      endbit = (tmpShiftReg & 0x8000) != 0;
      tmpShiftReg <<= 1;
      if (endbit) {
        tmpShiftReg ^= 0x100b;
        }
#line 92
      tmpShiftReg++;
      RandomLfsrC$shiftReg[sim_node()] = tmpShiftReg;
      tmpShiftReg = tmpShiftReg ^ RandomLfsrC$mask[sim_node()];
    }
#line 95
    __nesc_atomic_end(__nesc_atomic); }
  return tmpShiftReg;
}

# 144 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[sim_node()][num];

#line 147
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask();
}

# 161 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get(void )
#line 161
{
  uint32_t now;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {


      uint8_t now8 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get();

      if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag().bits.ocf0) {


        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()] + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get() + 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get();
        }
      else {

        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()] + now8;
        }
    }
#line 179
    __nesc_atomic_end(__nesc_atomic); }
#line 179
  return now;
}

# 282 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static uint8_t HplAtm128Timer0AsyncP$Timer0$get(void )
#line 282
{
  uint8_t rval;
  sim_time_t elapsed = sim_time() - HplAtm128Timer0AsyncP$last_zero();

#line 285
  elapsed = HplAtm128Timer0AsyncP$sim_to_clock(elapsed);
  elapsed = elapsed >> HplAtm128Timer0AsyncP$shiftFromScale();
  rval = (uint8_t )(elapsed & 0xff);
  sim_log_debug(338U, "HplAtm128Timer0AsyncP", "HplAtm128Timer0AsyncP: Getting timer: %hhu\n", rval);
  return rval;
}

#line 108
static sim_time_t HplAtm128Timer0AsyncP$last_zero(void )
#line 108
{
  if (HplAtm128Timer0AsyncP$lastZero[sim_node()] == 0) {
      HplAtm128Timer0AsyncP$lastZero[sim_node()] = sim_mote_start_time(sim_node());
    }
  return HplAtm128Timer0AsyncP$lastZero[sim_node()];
}

# 106 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/SimMoteP.nc"
  long long int sim_mote_start_time(int mote)
#line 106
{
  long long int result;
  int tmp = sim_node();

#line 109
  sim_set_node(mote);
  result = SimMoteP$SimMote$getStartTime();
  sim_set_node(tmp);
  return result;
}

# 160 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static uint16_t HplAtm128Timer0AsyncP$shiftFromScale(void )
#line 160
{
  uint8_t scale = HplAtm128Timer0AsyncP$Timer0$getScale();

#line 162
  switch (scale) {
      case 0: 
        return 0;
      case 1: 
        return 0;
      case 2: 
        return 3;
      case 3: 
        return 5;
      case 4: 
        return 6;
      case 5: 
        return 7;
      case 6: 
        return 8;
      case 7: 
        return 10;
      default: 
        return 255;
    }
}

#line 321
static uint8_t HplAtm128Timer0AsyncP$Timer0$getScale(void )
#line 321
{
  return * (volatile uint8_t *)&atm128RegFile[sim_node()][0x33] & 0x7;
}

#line 383
static Atm128_TIFR_t HplAtm128Timer0AsyncP$Timer0Ctrl$getInterruptFlag(void )
#line 383
{
  Atm128_TIFR_t at;

#line 385
  at.flat = * (volatile uint8_t *)&atm128RegFile[sim_node()][0x36];
  return at;
}

#line 457
static uint8_t HplAtm128Timer0AsyncP$Compare$get(void )
#line 457
{
  sim_log_debug(344U, "HplAtm128Timer0AsyncP", "HplAtm128Timer0AsyncP: Getting compare: %hhu\n", * (volatile uint8_t *)&atm128RegFile[sim_node()][0x31]);
  return * (volatile uint8_t *)&atm128RegFile[sim_node()][0x31];
}

# 2293 "../../tos//lib/bvr/S4StateM.nc"
static error_t S4StateM$S4Neighborhood$getNextHops(uint16_t dest_addr, uint8_t closest_beacon, 
uint16_t *next_hop)
#line 2294
{
  int i;
  NextHopTableEntry *nhte;


  if (S4StateM$cluster_size[sim_node()] > 0) {



      int hit[1000];

#line 2304
      for (i = 0; i < 1000; i++) 
        hit[i] = 0;

      sim_log_debug(277U, "S4Router", "cluster routing table:\n");
      for (i = 0; i < S4StateM$cluster_size[sim_node()]; i++) {
          sim_log_debug_clear(278U, "S4Router", "\t dest: %d, nexthop: %d, hopcount: %d\n", S4StateM$ClusterTable[sim_node()][i].dest, S4StateM$ClusterTable[sim_node()][i].parent, S4StateM$ClusterTable[sim_node()][i].hops);

          hit[S4StateM$ClusterTable[sim_node()][i].dest]++;
        }

      for (i = 0; i < 1000; i++) 
        if (hit[i] > 1) {
          sim_log_debug(279U, "S4Router", "duplicate entries for destination %d\n", i);
          }

      for (i = 0; i < S4StateM$cluster_size[sim_node()]; i++) {
          if (S4StateM$ClusterTable[sim_node()][i].dest == dest_addr) {
              *next_hop = S4StateM$ClusterTable[sim_node()][i].parent;
              sim_log_debug(280U, "S4Router", "nexthop (from cluster) of %d is %d\n", dest_addr, *next_hop);
              return SUCCESS;
            }
        }
    }
#line 2338
  sim_log_debug(281U, "S4-beacon", "closest_beacon=%d, bvrtopology.getrootnodescount=%d\n", closest_beacon, S4StateM$S4Topology$getRootNodesCount());

  if (closest_beacon == INVALID_COMPONENT || 
  closest_beacon >= S4StateM$S4Topology$getRootNodesCount()) {
      sim_log_debug(282U, "S4Router", "routing failure: no valid closest beacon\n");
      return FAIL;
    }
  if (S4StateM$rootBeacons[sim_node()][closest_beacon].valid == 1) {
      *next_hop = S4StateM$rootBeacons[sim_node()][closest_beacon].parent;
      if (*next_hop == 65535) {




          sim_log_debug(283U, "S4Router", "routing failure: no valid parent, broadcasting...\n");
        }
      sim_log_debug(284U, "S4Router", "nexthop (from closest beacon) of %d is %d (hc %d)\n", closest_beacon, *next_hop, S4StateM$rootBeacons[sim_node()][closest_beacon].hops);
      return SUCCESS;
    }


  sim_log_debug(285U, "S4Router", "routing failure: other reasons\n");
  return FAIL;
}

# 315 "../../tos//lib/bvr/S4RouterM.nc"
static error_t S4RouterM$forwardMessage(forwardRoutingBuffer *fb)
#line 315
{
  S4AppMsg *pS4Msg;

  uint32_t msg_uid;

  pS4Msg = (S4AppMsg *)fb->msg->data;



  if (! fb->busy || fb->msg == (void *)0) {
      sim_log_debug(180U, "S4Router", "Error here\n");

      return FAIL;
    }




  if (S4RouterM$AMSend$send(fb->next_hop, fb->msg, sizeof(S4AppMsg )) == SUCCESS) {





      return SUCCESS;
    }
  else 
#line 340
    {
      sim_log_debug(181U, "S4Router", "S4Router$forwardMessage: send failed. Queue full\n");


      msg_uid = S4RouterM$getMsgUid(__nesc_ntoh_uint16(pS4Msg->type_data.origin.nxdata), __nesc_ntoh_uint16(pS4Msg->type_data.msg_id.nxdata));
      S4RouterM$duplicateCacheRemove(msg_uid);
      forwardRoutingBufferFree(fb);
      return FAIL;
    }
}

# 110 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/sim_packet.c"
  uint8_t sim_packet_max_length(sim_packet_t *msg)
#line 110
{
  return 50;
}

  sim_packet_t *sim_packet_allocate()
#line 114
{
  return (sim_packet_t *)malloc(sizeof(message_t ));
}

  void sim_packet_free(sim_packet_t *p)
#line 118
{
  printf("sim_packet.c: Freeing packet %p\n", p);
  free(p);
}

# 51 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/SimMainP.nc"
  int sim_main_start_mote(void )
#line 51
{
  char timeBuf[128];

#line 53
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 53
    {






      SimMainP$Scheduler$init();





      SimMainP$PlatformInit$init();
      while (SimMainP$Scheduler$runNextTask()) ;





      SimMainP$SoftwareInit$init();
      while (SimMainP$Scheduler$runNextTask()) ;
    }
#line 75
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  sim_print_now(timeBuf, 128);
  sim_log_debug(113U, "SimMainP", "Mote %li signaling boot at time %s.\n", sim_node(), timeBuf);
  SimMainP$Boot$booted();





  return 0;
}

# 180 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/SimSchedulerBasicP.nc"
static bool SimSchedulerBasicP$Scheduler$runNextTask(void )
{
  uint8_t nextTask;

#line 183
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      nextTask = SimSchedulerBasicP$popTask();
      if (nextTask == SimSchedulerBasicP$NO_TASK) 
        {
          sim_log_debug(115U, "Scheduler", "Told to run next task, but no task to run.\n");
          {
            unsigned char __nesc_temp = 
#line 189
            FALSE;

            {
#line 189
              __nesc_atomic_end(__nesc_atomic); 
#line 189
              return __nesc_temp;
            }
          }
        }
    }
#line 193
    __nesc_atomic_end(__nesc_atomic); }
#line 192
  sim_log_debug(116U, "Scheduler", "Running task %hhu.\n", nextTask);
  SimSchedulerBasicP$TaskBasic$runTask(nextTask);
  return TRUE;
}

# 215 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/system/AMQueueImplP.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(uint8_t id, message_t *msg, error_t err)
#line 215
{
}

# 100 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/interfaces/Send.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(uint8_t arg_0x7fb1af036e18, message_t * msg, error_t error){
#line 100
  switch (arg_0x7fb1af036e18) {
#line 100
    case 0U:
#line 100
      /*GenericCommReallyPromiscuous.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(msg, error);
#line 100
      break;
#line 100
    case 1U:
#line 100
      /*GenericCommReallyPromiscuous.AMBeaconSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$sendDone(msg, error);
#line 100
      break;
#line 100
    case 2U:
#line 100
      /*GenericCommReallyPromiscuous.AMLESenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$2$Send$sendDone(msg, error);
#line 100
      break;
#line 100
    case 3U:
#line 100
      /*GenericCommReallyPromiscuous.AMDVSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$3$Send$sendDone(msg, error);
#line 100
      break;
#line 100
    default:
#line 100
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(arg_0x7fb1af036e18, msg, error);
#line 100
      break;
#line 100
    }
#line 100
}
#line 100
# 356 "../../tos//lib/commstack/S4QueuedSendM.nc"
static void S4QueuedSendM$AirSendMsg$sendDone(uint8_t id, message_t *msg, error_t success)
#line 356
{
  unsigned char __nesc_temp65;
  unsigned char *__nesc_temp64;
  S4AppMsg *pS4Msg;
  uint16_t app_msg_id;

#line 361
  pS4Msg = (S4AppMsg *)msg->data;
  app_msg_id = * (uint16_t *)& pS4Msg->type_data.data;


  if (id == AM_S4_APP_MSG) {
    S4QueuedSendM$Leds$led0Toggle();
    }
  sim_log_debug(461U, "BVR-debug", "QueueSendM$AirSendMsg$sendDone: result:%d ack:%d  is_BCAST:%d\n", success, S4QueuedSendM$Acks$wasAcked(msg), S4QueuedSendM$msgqueue[sim_node()][S4QueuedSendM$dequeue_next[sim_node()]].address == 0xFFFF);


  if (msg != S4QueuedSendM$msgqueue[sim_node()][S4QueuedSendM$dequeue_next[sim_node()]].pMsg) {
      sim_log_debug(462U, "BVR-debug", "QueuedSendM$AirSendMsg$sendDone: Internal Error: buffer mismatch!\n");
      return;
    }





  if (
#line 378
  id == AM_S4_APP_MSG && 
  S4QueuedSendM$retransmit[sim_node()] && 
  S4QueuedSendM$Acks$wasAcked(msg) != 0 && 
  S4QueuedSendM$msgqueue[sim_node()][S4QueuedSendM$dequeue_next[sim_node()]].address != 0xFFFF) {
    }





  if ((!S4QueuedSendM$retransmit[sim_node()] || S4QueuedSendM$Acks$wasAcked(msg) != FALSE) || S4QueuedSendM$msgqueue[sim_node()][S4QueuedSendM$dequeue_next[sim_node()]].address == 0xFFFF) {
      S4QueuedSendM$QueueSendMsg$sendDone(id, msg, success);
      S4QueuedSendM$msgqueue[sim_node()][S4QueuedSendM$dequeue_next[sim_node()]].length = 0;
      sim_log_debug(463U, "BVR-debug", "qent %d dequeued.\n", S4QueuedSendM$dequeue_next[sim_node()]);
      S4QueuedSendM$dequeue_next[sim_node()]++;
#line 392
      S4QueuedSendM$dequeue_next[sim_node()] %= S4QueuedSendM$MESSAGE_QUEUE_SIZE;
    }
  else 
    {


      if (id == AM_S4_APP_MSG) {
          (__nesc_temp64 = pS4Msg->type_data.rexmit_count.nxdata, __nesc_hton_uint8(__nesc_temp64, (__nesc_temp65 = __nesc_ntoh_uint8(__nesc_temp64)) + 1), __nesc_temp65);
        }

      if (++ S4QueuedSendM$msgqueue[sim_node()][S4QueuedSendM$dequeue_next[sim_node()]].xmit_count > S4QueuedSendM$max_retransmit_count[sim_node()]) {


          S4QueuedSendM$QueueSendMsg$sendDone(id, msg, FAIL);
          S4QueuedSendM$msgqueue[sim_node()][S4QueuedSendM$dequeue_next[sim_node()]].length = 0;
          S4QueuedSendM$dequeue_next[sim_node()]++;
#line 407
          S4QueuedSendM$dequeue_next[sim_node()] %= S4QueuedSendM$MESSAGE_QUEUE_SIZE;
        }
    }


  if (S4QueuedSendM$QueueServiceTask$postTask() == FAIL) {
    sim_log_debug(464U, "BVR-error", "QueueSendM: post QueueServiceTask returned error!!\n");
    }
  return;
}

# 177 "../../tos//lib/commstack/LinkEstimatorCommM.nc"
static void LinkEstimatorCommM$BottomSendMsg$sendDone(uint8_t am, message_t *msg, error_t success)
#line 177
{
  sim_log_debug(309U, "BVR-debug", "LinkEstimatorCommM$sendDone: result:%d\n", success);
  if (msg == &LinkEstimatorCommM$send_buffer[sim_node()]) {
      sim_log_debug(310U, "BVR-debug", "LinkEstimatorCommM:sendDone, packet (%p) is from us. result=%s\n", msg, success == SUCCESS ? "ok" : "failure");
      LinkEstimatorCommM$send_buffer_busy[sim_node()] = FALSE;
      return;
    }
  return LinkEstimatorCommM$AMSend$sendDone(am, msg, success);
}

# 675 "../../tos//lib/bvr/S4StateM.nc"
static void S4StateM$set_beacon_msg(void )
#line 675
{
  int i;
  S4RootBeacon *b;
  uint8_t b_parent_ld;
  uint8_t quality_first;
#line 679
  uint8_t combined_quality = 0;

  uint8_t combined_etx;
  uint8_t etx_first;




  uint8_t counter = 0;



  __nesc_hton_uint16(S4StateM$beacon_data_ptr[sim_node()]->seqno.nxdata, S4StateM$beacon_seqno[sim_node()] - 1);
#line 703
  for (i = 0; i < S4StateM$S4Topology$getRootNodesCount(); i++) {
      sim_log_debug(211U, "S4-beacon", "set_beacon_msg: rootBeacons[%d].nodeid=%d,hops=%d, parent=%d\n", i, S4StateM$rootBeacons[sim_node()][i].nodeid, S4StateM$rootBeacons[sim_node()][i].hops, S4StateM$rootBeacons[sim_node()][i].parent);
    }







  while (counter < 8 && S4StateM$next_beacon[sim_node()] < S4StateM$S4Topology$getRootNodesCount()) 
    {

      b = &S4StateM$rootBeacons[sim_node()][S4StateM$next_beacon[sim_node()]];

      if (b->hops != INVALID_COMPONENT && b->valid) 
        {
          __nesc_hton_uint8(S4StateM$beacon_data_ptr[sim_node()]->beacons[counter].beacon_id.nxdata, S4StateM$next_beacon[sim_node()]);

          __nesc_hton_uint8(S4StateM$beacon_data_ptr[sim_node()]->beacons[counter].hopcount.nxdata, b->hops);
          __nesc_hton_uint8(S4StateM$beacon_data_ptr[sim_node()]->beacons[counter].seqno.nxdata, b->last_seqno);
          __nesc_hton_uint16(S4StateM$beacon_data_ptr[sim_node()]->beacons[counter].nodeid.nxdata, b->nodeid);

          sim_log_debug(212U, "S4-beacon", "setting beacon_data_ptr: counter=%d,  b->nodeid=%d, next_beacon=%d\n", counter, b->nodeid, S4StateM$next_beacon[sim_node()]);
#line 739
          if (S4StateM$state_is_root_beacon[sim_node()] && S4StateM$next_beacon[sim_node()] == S4StateM$root_beacon_id[sim_node()]) {




              combined_etx = 0;
            }
          else 
#line 745
            {
              if (S4StateM$LinkEstimator$find(b->parent, &b_parent_ld) != SUCCESS) {

                  combined_etx = S4StateM$MAX_ETX;
                }
              else {
#line 749
                if (S4StateM$LinkEstimator$getBidirectionalQuality(b_parent_ld, &quality_first) != SUCCESS) {
                    combined_etx = S4StateM$MAX_ETX;
                  }
                }
#line 752
              if (quality_first > 0) {
                  etx_first = S4StateM$scaledEtxFromQuality(quality_first);
                  quality_first = etx_first;
                  combined_etx = etx_first + b->combined_quality;
                  if (combined_etx < etx_first) {
#line 756
                    combined_etx = S4StateM$MAX_ETX;
                    }
                }
              else 
#line 757
                {
                  combined_etx = S4StateM$MAX_ETX;
                }
            }
          combined_quality = combined_etx;
#line 795
          __nesc_hton_uint8(S4StateM$beacon_data_ptr[sim_node()]->beacons[counter].quality.nxdata, combined_quality);
          counter++;
        }
      else 



        {
        }







      S4StateM$next_beacon[sim_node()]++;
    }
  S4StateM$curr_bv_size[sim_node()] = counter;
  if (counter == 0) {
#line 814
    return;
    }
#line 815
  if (counter < 8) {



      while (counter < 8) {


          __nesc_hton_uint8(S4StateM$beacon_data_ptr[sim_node()]->beacons[counter].hopcount.nxdata, INVALID_COMPONENT);
          counter++;
        }
    }

  sim_log_debug(213U, "S4-debug", "set_beacon_msg: seqno:%d my coordinates: ", __nesc_ntoh_uint16(S4StateM$beacon_data_ptr[sim_node()]->seqno.nxdata));
  coordinates_print(&S4StateM$my_coords[sim_node()]);
}

# 640 "../../tos//lib/linkestimator/LinkEstimatorM.nc"
static error_t LinkEstimatorM$LinkEstimator$getBidirectionalQuality(uint8_t idx, uint8_t *quality)
#line 640
{
  LinkNeighbor *n = LinkEstimatorM$neighborCachePtrs[sim_node()][idx];

#line 642
  if (((n == (void *)0 || !(__nesc_ntoh_uint8(n->state.nxdata) & ACTIVE_MASK)) || !(__nesc_ntoh_uint8(n->state.nxdata) & VALID_QUALITY_MASK)) || 
  !(__nesc_ntoh_uint8(n->state.nxdata) & VALID_REVERSE_MASK)) {
      *quality = __nesc_ntoh_uint8(n->quality.nxdata);
      return FAIL;
    }
  *quality = LinkEstimatorM$getBidirectionalQuality(n);
  return SUCCESS;
}

# 73 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Timer.nc"
static void S4StateM$BeaconRetransmitTimer$startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(6U, dt);
#line 73
}
#line 73
# 2430 "../../tos//lib/bvr/S4StateM.nc"
static void S4StateM$set_cluster_msg(void )
#line 2430
{
  uint8_t counter = 0;


  while (counter < 4 && S4StateM$next_dv[sim_node()] < S4StateM$cluster_size[sim_node()]) {

      if (S4StateM$ClusterTable[sim_node()][S4StateM$next_dv[sim_node()]].valid && 
      S4StateM$ClusterTable[sim_node()][S4StateM$next_dv[sim_node()]].hops < S4StateM$ClusterTable[sim_node()][S4StateM$next_dv[sim_node()]].scope) {
          __nesc_hton_uint8(S4StateM$cluster_data_ptr[sim_node()]->dv_adv[counter].indx.nxdata, S4StateM$next_dv[sim_node()]);
          __nesc_hton_uint16(S4StateM$cluster_data_ptr[sim_node()]->dv_adv[counter].source.nxdata, S4StateM$ClusterTable[sim_node()][S4StateM$next_dv[sim_node()]].dest);
          __nesc_hton_uint8(S4StateM$cluster_data_ptr[sim_node()]->dv_adv[counter].hopcount.nxdata, S4StateM$ClusterTable[sim_node()][S4StateM$next_dv[sim_node()]].hops);
          __nesc_hton_uint8(S4StateM$cluster_data_ptr[sim_node()]->dv_adv[counter].scope.nxdata, S4StateM$ClusterTable[sim_node()][S4StateM$next_dv[sim_node()]].scope);
          __nesc_hton_uint8(S4StateM$cluster_data_ptr[sim_node()]->dv_adv[counter].seqno.nxdata, S4StateM$ClusterTable[sim_node()][S4StateM$next_dv[sim_node()]].last_seqno);
          counter++;
        }
      S4StateM$next_dv[sim_node()]++;
    }
  S4StateM$curr_dv_size[sim_node()] = counter;
  if (counter == 0) {
#line 2448
    return;
    }
#line 2449
  if (counter < 4) {



      while (counter < 4) {



          __nesc_hton_uint8(S4StateM$cluster_data_ptr[sim_node()]->dv_adv[counter].scope.nxdata, INVALID_COMPONENT);
          counter++;
        }
    }
}

# 73 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Timer.nc"
static void S4StateM$ClusterRetransmitTimer$startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(10U, dt);
#line 73
}
#line 73
# 191 "TestS4SimpleM.nc"
static error_t TestS4SimpleM$Send$sendDone(message_t *msg, error_t success)
#line 191
{

  if (msg == &TestS4SimpleM$send_buffer[sim_node()]) {
      TestS4SimpleM$busy_sending[sim_node()] = FALSE;
    }
  else 
#line 195
    {
      sim_log_debug(176U, "App", "App Send$sendDone: msg (%p)!=&send_buffer(%p)!\n", msg, &TestS4SimpleM$send_buffer[sim_node()]);
    }
  return SUCCESS;
}

# 937 "../../tos//lib/util/UARTLoggerM.nc"
static void UARTLoggerM$LogSend$sendDone(message_t *msg, error_t result)
#line 937
{
  sim_log_debug(449U, "BVR-debug", "LogSend.sendDone\n");
  if (result == SUCCESS) {
      UARTLoggerM$stat_written[sim_node()]++;
    }
  else 
#line 941
    {
      UARTLoggerM$stat_send_done_failed[sim_node()]++;
    }
  UARTLoggerM$bufferPoolSetFree(&UARTLoggerM$buffers[sim_node()], msg);
  return;
}

# 174 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/system/AMQueueImplP.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend(void )
#line 174
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$nextPacket();
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] < 4) {
      error_t nextErr;
      message_t *nextMsg = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()]].msg;
      am_id_t nextId = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(nextMsg);
      am_addr_t nextDest = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(nextMsg);
      uint8_t len = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$payloadLength(nextMsg);

#line 182
      nextErr = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(nextId, nextDest, nextMsg, len);
      if (nextErr != SUCCESS) {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$postTask();
        }
    }
}

# 73 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/TossimActiveMessageC.nc"
static error_t TossimActiveMessageC$AMSend$send(am_id_t id, am_addr_t addr, 
message_t *amsg, 
uint8_t len)
#line 75
{
  error_t err;
  tossim_header_t *header = TossimActiveMessageC$getHeader(amsg);

#line 78
  sim_log_debug(123U, "AM", "AM: Sending packet (id=%hhu, len=%hhu) to %hu\n", id, len, addr);
  __nesc_hton_uint8(header->type.nxdata, id);
  __nesc_hton_uint16(header->dest.nxdata, addr);
  __nesc_hton_uint16(header->src.nxdata, TossimActiveMessageC$AMPacket$address());
  __nesc_hton_uint8(header->length.nxdata, len);
  err = TossimActiveMessageC$Model$send((int )addr, amsg, len + sizeof(tossim_header_t ) + sizeof(tossim_footer_t ));
  return err;
}

# 274 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/CpmModelC.nc"
static double CpmModelC$packetNoise(CpmModelC$receive_message_t *msg)
#line 274
{
  double noise = CpmModelC$noise_hash_generation();
  CpmModelC$receive_message_t *list = CpmModelC$outstandingReceptionHead[sim_node()];

#line 277
  noise = pow(10.0, noise / 10.0);
  while (list != (void *)0) {
      if (list != msg) {
          noise += pow(10.0, list->power / 10.0);
        }
      list = list->next;
    }
  noise = 10.0 * log(noise) / log(10.0);
  return noise;
}

#line 126
static double CpmModelC$noise_hash_generation(void )
#line 126
{
  double CT = CpmModelC$timeInMs();
  uint32_t quotient = (sim_time_t )(CT * 10) / 10;
  uint8_t remain = (uint8_t )((sim_time_t )(CT * 10) % 10);
  double noise_val;
  uint16_t node_id = sim_node();

  sim_log_debug(141U, "CpmModelC", "IN: noise_hash_generation()\n");
  if (5 <= remain && remain < 10) {
      noise_val = (double )sim_noise_generate(node_id, quotient + 1);
    }
  else {
      noise_val = (double )sim_noise_generate(node_id, quotient);
    }
  sim_log_debug(142U, "CpmModelC,Tal", "%s: OUT: noise_hash_generation(): %lf\n", sim_time_string(), noise_val);

  return noise_val;
}

# 189 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/system/AMQueueImplP.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(am_id_t id, message_t *msg, error_t err)
#line 189
{





  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] >= 4) {
      return;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()]].msg == msg) {
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()], msg, err);
    }
  else {
      sim_log_debug(484U, "PointerBug", "%s received send done for %p, signaling for %p.\n", __FUNCTION__, msg, /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()]].msg);
    }
}

# 248 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/CpmModelC.nc"
static bool CpmModelC$shouldReceive(double SNR)
#line 248
{
  double prr = CpmModelC$prr_estimate_from_snr(SNR);
  double coin = RandomUniform();

#line 251
  if (prr >= 0 && prr <= 1) {
      if (coin < prr) {
        prr = 1.0;
        }
      else {
#line 255
        prr = 0.0;
        }
    }
#line 257
  return prr;
}

# 307 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/TossimPacketModelC.nc"
static bool TossimPacketModelC$GainRadioModel$shouldAck(message_t *msg)
#line 307
{
  if (TossimPacketModelC$running[sim_node()] && !TossimPacketModelC$transmitting[sim_node()]) {
      return TossimPacketModelC$Packet$shouldAck(msg);
    }
  else {
      return FALSE;
    }
}

# 216 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/CpmModelC.nc"
static void CpmModelC$sim_gain_schedule_ack(int source, sim_time_t t, CpmModelC$receive_message_t *r)
#line 216
{
  sim_event_t *ackEvent = (sim_event_t *)malloc(sizeof(sim_event_t ));

  ackEvent->mote = source;
  ackEvent->force = 1;
  ackEvent->cancelled = 0;
  ackEvent->time = t;
  ackEvent->handle = CpmModelC$sim_gain_ack_handle;
  ackEvent->cleanup = sim_queue_cleanup_event;
  ackEvent->data = r;

  sim_queue_insert(ackEvent);
}

# 128 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/TossimPacketModelC.nc"
static error_t TossimPacketModelC$PacketAcknowledgements$requestAck(message_t *msg)
#line 128
{
  tossim_metadata_t *meta = TossimPacketModelC$getMetadata(msg);

#line 130
  __nesc_hton_uint8(meta->ack.nxdata, TRUE);
  return SUCCESS;
}

# 61 "../../tos//lib/commstack/LinkEstimatorTaggerCommM.nc"
static error_t LinkEstimatorTaggerCommM$AMSend$send(uint8_t am, uint16_t addr, message_t *msg, uint8_t length)
#line 61
{
  LEHeader *link_header_ptr = (LEHeader *)&msg->data[0];

  sim_log_debug(475U, "BVR-debug", "LinkEstimatorCommM$send. Will tag packet with sequence number (%d)\n", LinkEstimatorTaggerCommM$my_seqno[sim_node()]);
  __nesc_hton_uint16(link_header_ptr->last_hop.nxdata, LinkEstimatorTaggerCommM$AMPacket$address());
  __nesc_hton_uint16(link_header_ptr->seqno.nxdata, LinkEstimatorTaggerCommM$my_seqno[sim_node()]++);



  return LinkEstimatorTaggerCommM$BottomSendMsg$send(am, addr, msg, length);
}

# 145 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/TossimActiveMessageC.nc"
static void TossimActiveMessageC$AMPacket$setDestination(message_t *amsg, am_addr_t addr)
#line 145
{
  tossim_header_t *header = TossimActiveMessageC$getHeader(amsg);

#line 147
  __nesc_hton_uint16(header->dest.nxdata, addr);
}

#line 170
static void TossimActiveMessageC$AMPacket$setType(message_t *amsg, am_id_t t)
#line 170
{
  tossim_header_t *header = TossimActiveMessageC$getHeader(amsg);

#line 172
  __nesc_hton_uint8(header->type.nxdata, t);
}

# 90 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/system/AMQueueImplP.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(uint8_t clientId, message_t *msg, 
uint8_t len)
#line 91
{
  if (clientId >= 4) {
      return FAIL;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][clientId].msg != (void *)0) {
      return EBUSY;
    }
  sim_log_debug(480U, "AMQueue", "AMQueue: request to send from %hhu (%p): passed checks\n", clientId, msg);

  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][clientId].msg = msg;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(msg, len);

  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] >= 4) {
      error_t err;
      am_id_t amId = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(msg);
      am_addr_t dest = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(msg);

      sim_log_debug(481U, "AMQueue", "%s: request to send from %hhu (%p): queue empty\n", __FUNCTION__, clientId, msg);
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] = clientId;

      err = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(amId, dest, msg, len);
      if (err != SUCCESS) {
          sim_log_debug(482U, "AMQueue", "%s: underlying send failed.\n", __FUNCTION__);
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] = 4;
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][clientId].msg = (void *)0;
        }

      return err;
    }
  else {
      sim_log_debug(483U, "AMQueue", "AMQueue: request to send from %hhu (%p): queue not empty\n", clientId, msg);
    }
  return SUCCESS;
}

# 73 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(uint32_t now)
{
  uint16_t num;

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[sim_node()][num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;

          if (elapsed >= timer->dt) 
            {
              if (timer->isoneshot) {
                timer->isrunning = FALSE;
                }
              else {
#line 90
                timer->t0 += timer->dt;
                }
              /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(num);
              break;
            }
        }
    }
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask();
}

# 73 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Timer.nc"
static void TestS4SimpleM$Timer1$startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(18U, dt);
#line 73
}
#line 73
# 1582 "../../tos//lib/bvr/S4StateM.nc"
static error_t S4StateM$S4Locator$getCoordinates(Coordinates *coords)
#line 1582
{


  if (coordinates_count_valid_components(&S4StateM$my_coords[sim_node()]) != 0) {
      coordinates_copy(&S4StateM$my_coords[sim_node()], coords);

      return SUCCESS;
    }
  else 
#line 1589
    {

      return FAIL;
    }
}

# 130 "../../tos//lib/bvr/coordinates.h"
static error_t coordinates_copy(Coordinates *source, Coordinates *dest)
#line 130
{
  int i;

#line 132
  if (source == (void *)0 || dest == (void *)0) {
    return FAIL;
    }
#line 134
  for (i = 0; i < 8; i++) 
    __nesc_hton_uint8(dest->comps[i].nxdata, __nesc_ntoh_uint8(source->comps[i].nxdata));
  return SUCCESS;
}

# 114 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/system/LedsP.nc"
static void LedsP$Leds$led2Toggle(void )
#line 114
{
  LedsP$Led2$toggle();
  sim_log_debug(474U, "LedsC", "LEDS: Led""2"" %s.\n", LedsP$Led2$get() ? "off" : "on");
#line 116
  ;
}

# 73 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Timer.nc"
static void S4StateM$ClusterTimer$startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(9U, dt);
#line 73
}
#line 73
# 377 "../../tos//lib/bvr/coordinates.h"
static uint8_t coordinates_get_closest_beacon(Coordinates *c)
#line 377
{
  uint8_t i;
  uint8_t closest = INVALID_COMPONENT;
  uint8_t closest_distance = INVALID_COMPONENT;

#line 381
  if (c == (void *)0) {
    return INVALID_COMPONENT;
    }
#line 383
  for (i = 0; i < 8; i++) {
      if (coordinates_is_valid_component(c, i)) {
          if (__nesc_ntoh_uint8(c->comps[i].nxdata) < closest_distance) {
              closest = i;
              closest_distance = __nesc_ntoh_uint8(c->comps[i].nxdata);
            }
        }
    }
  return closest;
}

# 73 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/timer/Timer.nc"
static void S4StateM$BeaconTimer$startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(5U, dt);
#line 73
}
#line 73
static void LinkEstimatorCommM$MinRateTimer$startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(0U, dt);
#line 73
}
#line 73
# 212 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(uint32_t nt0, uint32_t ndt)
#line 212
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[sim_node()] = TRUE;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[sim_node()] = nt0;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[sim_node()] = ndt;
    }
#line 218
    __nesc_atomic_end(__nesc_atomic); }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt();
}

#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt(void )
#line 90
{
  bool fired = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {



      uint8_t interrupt_in = 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get() - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get();
      uint8_t newOcr0;
      uint8_t tifr = (uint8_t )/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag().flat;

#line 101
      sim_log_debug(324U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: TIFR is %hhx\n", tifr);
      if ((interrupt_in != 0 && interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT) || tifr & (1 << OCF0)) {
          if (interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT) {
              sim_log_debug(325U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: under min: %hhu.\n", interrupt_in);
            }
          else {
              sim_log_debug(326U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: OCF set.\n");
            }
          {
#line 109
            __nesc_atomic_end(__nesc_atomic); 
#line 109
            return;
          }
        }

      if (!/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[sim_node()]) {
          newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT;
          sim_log_debug(327U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: no alarm set, set at max.\n");
        }
      else 
        {
          uint32_t now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get();

#line 120
          sim_log_debug(328U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: now-t0 = %llu, dt = %llu\n", now - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[sim_node()], /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[sim_node()]);

          if ((uint32_t )(now - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[sim_node()]) >= /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[sim_node()]) 
            {
              /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[sim_node()] = FALSE;
              fired = TRUE;
              newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT;
            }
          else 
            {


              uint32_t alarm_in = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[sim_node()] + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[sim_node()] - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()];

              if (alarm_in > /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT) {
                newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT;
                }
              else {
#line 136
                if ((uint8_t )alarm_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT) {
                  newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT;
                  }
                else {
#line 139
                  newOcr0 = alarm_in;
                  }
                }
            }
        }
#line 142
      newOcr0--;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setOcr0(newOcr0);
    }
#line 144
    __nesc_atomic_end(__nesc_atomic); }
  if (fired) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$fired();
    }
}

# 463 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static void HplAtm128Timer0AsyncP$Compare$set(uint8_t t)
#line 463
{
  sim_log_debug(345U, "HplAtm128Timer0AsyncP", "HplAtm128Timer0AsyncP: Setting compare: %hhu\n", t);
  /* atomic removed: atomic calls only */
#line 465
  {




    if (t == 0 || t >= 0xfe) {
      t = 1;
      }
    if (t != * (volatile uint8_t *)&atm128RegFile[sim_node()][0x31]) {
        * (volatile uint8_t *)&atm128RegFile[sim_node()][0x31] = t;
        HplAtm128Timer0AsyncP$schedule_new_compare();
      }
  }
}

#line 267
static void HplAtm128Timer0AsyncP$schedule_new_compare(void )
#line 267
{
  if (HplAtm128Timer0AsyncP$compare[sim_node()] != (void *)0) {
      HplAtm128Timer0AsyncP$cancel_compare();
    }
  if (HplAtm128Timer0AsyncP$Timer0$getScale() != AVR_CLOCK_OFF) {
      sim_event_t *newEvent = HplAtm128Timer0AsyncP$allocate_compare();

#line 273
      HplAtm128Timer0AsyncP$configure_compare(newEvent);

      HplAtm128Timer0AsyncP$compare[sim_node()] = newEvent;
      sim_queue_insert(newEvent);
    }
}

# 97 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/sim_event_queue.c"
static sim_event_t *sim_queue_allocate_event()
#line 97
{
  sim_event_t *evt = (sim_event_t *)malloc(sizeof(sim_event_t ));

#line 99
  memset(evt, 0, sizeof(sim_event_t ));
  evt->mote = sim_node();
  return evt;
}

# 100 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
  void INTERRUPT_16(void )
#line 100
{
  HplAtm128Timer0AsyncP$inOverflow[sim_node()] = TRUE;
  HplAtm128Timer0AsyncP$Timer0$overflow();
  HplAtm128Timer0AsyncP$inOverflow[sim_node()] = FALSE;
}

#line 508
static void HplAtm128Timer0AsyncP$configure_overflow(sim_event_t *evt)
#line 508
{
  sim_time_t overflowTime = 0;
  uint8_t timerVal = HplAtm128Timer0AsyncP$Timer0$get();
  uint8_t overflowVal = 0;




  overflowTime = (overflowVal - timerVal) & 0xff;
  if (overflowTime == 0) {
      overflowTime = 256;
    }




  overflowTime = overflowTime << HplAtm128Timer0AsyncP$shiftFromScale();
  overflowTime = HplAtm128Timer0AsyncP$clock_to_sim(overflowTime);
  overflowTime += sim_time();
  overflowTime -= (sim_time() - HplAtm128Timer0AsyncP$last_zero()) % (1 << HplAtm128Timer0AsyncP$shiftFromScale());

  sim_log_debug(348U, "HplAtm128Timer0AsyncP", "Scheduling new overflow for %i at time %llu\n", sim_node(), overflowTime);

  evt->time = overflowTime;
}

#line 94
  void INTERRUPT_15(void )
#line 94
{

  HplAtm128Timer0AsyncP$Compare$fired();
}

#line 231
static void HplAtm128Timer0AsyncP$configure_compare(sim_event_t *evt)
#line 231
{
  sim_time_t compareTime = 0;
  sim_time_t phaseOffset = 0;
  uint8_t timerVal = HplAtm128Timer0AsyncP$Timer0$get();
  uint8_t compareVal = HplAtm128Timer0AsyncP$Compare$get();




  compareTime = (compareVal - timerVal) & 0xff;
  if (compareTime == 0) {
      compareTime = 256;
    }






  compareTime = (compareTime + 1) << HplAtm128Timer0AsyncP$shiftFromScale();
  compareTime = HplAtm128Timer0AsyncP$clock_to_sim(compareTime);
  compareTime += sim_time();




  phaseOffset = sim_time();
  phaseOffset -= HplAtm128Timer0AsyncP$last_zero();
  phaseOffset %= HplAtm128Timer0AsyncP$clock_to_sim(1 << HplAtm128Timer0AsyncP$shiftFromScale());
  compareTime -= phaseOffset;

  sim_log_debug(337U, "HplAtm128Timer0AsyncP", "Configuring new compare of %i for %i at time %llu  (@ %llu)\n", (int )compareVal, sim_node(), compareTime, sim_time());

  evt->time = compareTime;
}

# 593 "../../tos//lib/bvr/S4StateM.nc"
static bool S4StateM$is_greater_by_2(uint8_t _new, uint8_t old)
#line 593
{
  uint8_t range = (uint8_t )MSG_VALID_RANGE8;
  uint8_t old1 = (uint8_t )(old + 10);

#line 596
  if ((uint8_t )(old1 + range) < old1) {
      return _new > old1 || _new < (uint8_t )(old1 + range);
    }
  else 
#line 598
    {
      return _new > old1 && _new < (uint8_t )(old1 + range);
    }
}

#line 602
static bool S4StateM$is_within_2(uint8_t _new, uint8_t old)
#line 602
{
  uint8_t range = (uint8_t )MSG_VALID_RANGE8;
  bool t1;
#line 604
  bool t2;
  uint8_t old1 = (uint8_t )(old + 10);

#line 606
  if ((uint8_t )(old + range) < old) {
      t1 = _new > old || _new < (uint8_t )(old + range);
    }
  else 
#line 608
    {
      t1 = _new > old && _new < (uint8_t )(old + range);
    }
  if ((uint8_t )(old1 + range) < old1) {
      t2 = _new <= old1 && _new >= (uint8_t )(old1 + range);
    }
  else 
#line 613
    {
      t2 = _new <= old1 || _new >= (uint8_t )(old1 + range);
    }
  return t1 && t2;
}

# 102 "../../tos//lib/bvr/coordinates.h"
static error_t coordinates_init(Coordinates *c)
#line 102
{
  int i;

#line 104
  if (c == (void *)0) {
    return FAIL;
    }
#line 106
  for (i = 0; i < 8; __nesc_hton_uint8(c->comps[i].nxdata, INVALID_COMPONENT), i++) ;
  return SUCCESS;
}

#line 194
static error_t coordinates_set_component(Coordinates *c, uint8_t pos, uint8_t hopcount)
#line 194
{

  if (c == (void *)0 || pos >= 8) {
    return FAIL;
    }
#line 198
  __nesc_hton_uint8(c->comps[pos].nxdata, hopcount);
  return SUCCESS;
}

# 58 "../../tos//lib/bvr/S4TopologyM.nc"
static error_t S4TopologyM$S4Topology$setRootBeaconID(uint16_t pos, uint8_t val)
#line 58
{
  if (pos >= N_NODES) {
    return FAIL;
    }
  S4TopologyM$root_beacon_id[sim_node()][pos] = val;

  return SUCCESS;
}

#line 44
static error_t S4TopologyM$S4Topology$getRootBeaconIDs(uint8_t *array)
#line 44
{
  uint16_t i = 0;

  for (i = 0; i < N_NODES; i++) {
      array[i] = S4TopologyM$root_beacon_id[sim_node()][i];
    }

  return SUCCESS;
}

# 108 "../../tos//lib/commstack/LinkEstimatorCommM.nc"
static error_t LinkEstimatorCommM$Init$init(void )
#line 108
{
  error_t err;

  LinkEstimatorCommM$state_is_active[sim_node()] = TRUE;
  LinkEstimatorCommM$filter_by_strength[sim_node()] = LINK_ESTIMATOR_FILTER_BY_STRENGTH;
  LinkEstimatorCommM$reverse_info_index[sim_node()] = 0;
  LinkEstimatorCommM$reverse_period[sim_node()] = I_REVERSE_LINK_PERIOD;
  LinkEstimatorCommM$reverse_jitter[sim_node()] = I_REVERSE_LINK_JITTER;
  reverseLinkInfoInit(&LinkEstimatorCommM$link_info_buf[sim_node()]);
  LinkEstimatorCommM$send_buffer_busy[sim_node()] = FALSE;
  LinkEstimatorCommM$link_msg_ptr[sim_node()] = (ReverseLinkMsg *)&LinkEstimatorCommM$send_buffer[sim_node()].data[0];
  LinkEstimatorCommM$reverse_msg_length[sim_node()] = sizeof(ReverseLinkMsg );
  LinkEstimatorCommM$LinkEstimatorControlInit$init();
  err = LinkEstimatorCommM$BottomStdControlInit$init();

  LinkEstimatorCommM$initialized[sim_node()] = TRUE;

  return err;
}

# 157 "../../tos//lib/commstack/S4QueuedSendM.nc"
static error_t S4QueuedSendM$Init$init(void )
#line 157
{
  int i;

#line 159
  S4QueuedSendM$max_retransmit_count[sim_node()] = S4QueuedSendM$MAX_RETRANSMIT_COUNT;
  for (i = 0; i < S4QueuedSendM$MESSAGE_QUEUE_SIZE; i++) {
      S4QueuedSendM$msgqueue[sim_node()][i].length = 0;
    }

  S4QueuedSendM$retransmit[sim_node()] = TRUE;



  S4QueuedSendM$enqueue_next[sim_node()] = 0;
  S4QueuedSendM$dequeue_next[sim_node()] = 0;

  sim_log_debug(452U, "BVR-debug", "BVRQueuedSendM.Init.init called\n");

  S4QueuedSendM$fQueueIdle[sim_node()] = TRUE;

  S4QueuedSendM$initialized[sim_node()] = TRUE;



  return SUCCESS;
}

# 730 "../../tos//lib/bvr/S4RouterM.nc"
static void *S4RouterM$S4Send$getBuffer(message_t *msg, uint16_t *length)
#line 730
{
  S4AppMsg *pS4Msg = (S4AppMsg *)msg->data;

  if (length != (void *)0) {
    *length = 50 - ((unsigned long )& ((S4AppMsg *)0)->type_data + (unsigned long )& ((S4AppData *)0)->data);
    }
#line 735
  return & pS4Msg->type_data.data;
}

# 87 "TestS4SimpleM.nc"
static void TestS4SimpleM$Boot$booted(void )
#line 87
{
  TestS4SimpleM$AMControl$start();

  if (TestS4SimpleM$AMPacket$address() == TestS4SimpleM$src[sim_node()]) {
    TestS4SimpleM$Timer1$startOneShot(900000u);
    }
  TestS4SimpleM$pAppMsg[sim_node()] = (uint8_t *)TestS4SimpleM$Send$getBuffer(&TestS4SimpleM$send_buffer[sim_node()], &TestS4SimpleM$payloadLength[sim_node()]);
  sim_log_debug(167U, "TestBVR", " init ended\n", TestS4SimpleM$mode[sim_node()]);

  TestS4SimpleM$msg_id[sim_node()] = TestS4SimpleM$AMPacket$address();
  TestS4SimpleM$busy_sending[sim_node()] = 0;

  TestS4SimpleM$mode[sim_node()] = 0;
}

# 90 "/opt/local/src/tinyos-release-tinyos-2_1_2/tos/lib/tossim/SimMoteP.nc"
  long long int sim_mote_euid(int mote)
#line 90
{
  long long int result;
  int tmp = sim_node();

#line 93
  sim_set_node(mote);
  result = SimMoteP$SimMote$getEuid();
  sim_set_node(tmp);
  return result;
}

  void sim_mote_set_euid(int mote, long long int id)
#line 99
{
  int tmp = sim_node();

#line 101
  sim_set_node(mote);
  SimMoteP$SimMote$setEuid(id);
  sim_set_node(tmp);
}










  int sim_mote_get_variable_info(int mote, char *name, void **ptr, size_t *len)
#line 115
{
  int result;
  int tmpID = sim_node();

#line 118
  sim_set_node(mote);
  result = SimMoteP$SimMote$getVariableInfo(name, ptr, len);
  sim_log_debug(120U, "SimMoteP", "Fetched %s of %i to be %p with len %i (result %i)\n", name, mote, *ptr, *len, result);
  sim_set_node(tmpID);
  return result;
}

  void sim_mote_set_start_time(int mote, long long int t)
#line 125
{
  int tmpID = sim_node();

#line 127
  sim_set_node(mote);
  SimMoteP$startTime[sim_node()] = t;
  sim_log_debug(121U, "SimMoteP", "Setting start time to %llu\n", SimMoteP$startTime[sim_node()]);
  sim_set_node(tmpID);
  return;
}










  void sim_mote_turn_on(int mote)
#line 143
{
  int tmp = sim_node();

#line 145
  sim_set_node(mote);
  SimMoteP$SimMote$turnOn();
  sim_set_node(tmp);
}

#line 72
static void SimMoteP$SimMote$turnOn(void )
#line 72
{
  if (!SimMoteP$isOn[sim_node()]) {
      if (SimMoteP$bootEvent[sim_node()] != (void *)0) {
          SimMoteP$bootEvent[sim_node()]->cancelled = TRUE;
        }
      __nesc_nido_initialise(sim_node());
      SimMoteP$startTime[sim_node()] = sim_time();
      sim_log_debug(119U, "SimMoteP", "Setting start time to %llu\n", SimMoteP$startTime[sim_node()]);
      SimMoteP$isOn[sim_node()] = TRUE;
      sim_main_start_mote();
    }
}

#line 150
  void sim_mote_turn_off(int mote)
#line 150
{
  int tmp = sim_node();

#line 152
  sim_set_node(mote);
  SimMoteP$SimMote$turnOff();
  sim_set_node(tmp);
}










  void sim_mote_enqueue_boot_event(int mote)
#line 166
{
  int tmp = sim_node();

#line 168
  sim_set_node(mote);

  if (SimMoteP$bootEvent[sim_node()] != (void *)0) {
      if (SimMoteP$bootEvent[sim_node()]->time == SimMoteP$startTime[sim_node()]) {

          SimMoteP$bootEvent[sim_node()]->cancelled = FALSE;
          return;
        }
      else {
          SimMoteP$bootEvent[sim_node()]->cancelled = TRUE;
        }
    }

  SimMoteP$bootEvent[sim_node()] = (sim_event_t *)malloc(sizeof(sim_event_t ));
  SimMoteP$bootEvent[sim_node()]->time = SimMoteP$startTime[sim_node()];
  SimMoteP$bootEvent[sim_node()]->mote = mote;
  SimMoteP$bootEvent[sim_node()]->force = TRUE;
  SimMoteP$bootEvent[sim_node()]->data = (void *)0;
  SimMoteP$bootEvent[sim_node()]->handle = SimMoteP$sim_mote_boot_handle;
  SimMoteP$bootEvent[sim_node()]->cleanup = sim_queue_cleanup_event;
  sim_queue_insert(SimMoteP$bootEvent[sim_node()]);

  sim_set_node(tmp);
}

/* Nido variable resolver function */

static int __nesc_nido_resolve(int __nesc_mote,
                               char* varname,
                               uintptr_t* addr, size_t* size)
{
  /* Module PlatformP */

  /* Module MotePlatformP */

  /* Module HplAtm128GeneralIOPinP$0 */

  /* Module HplAtm128GeneralIOPinP$1 */

  /* Module HplAtm128GeneralIOPinP$2 */

  /* Module HplAtm128GeneralIOPinP$3 */

  /* Module HplAtm128GeneralIOPinP$4 */

  /* Module HplAtm128GeneralIOPinP$5 */

  /* Module HplAtm128GeneralIOPinP$6 */

  /* Module HplAtm128GeneralIOPinP$7 */

  /* Module HplAtm128GeneralIOPinP$8 */

  /* Module HplAtm128GeneralIOPinP$9 */

  /* Module HplAtm128GeneralIOPinP$10 */

  /* Module HplAtm128GeneralIOPinP$11 */

  /* Module HplAtm128GeneralIOPinP$12 */

  /* Module HplAtm128GeneralIOPinP$13 */

  /* Module HplAtm128GeneralIOPinP$14 */

  /* Module HplAtm128GeneralIOPinP$15 */

  /* Module HplAtm128GeneralIOPinP$16 */

  /* Module HplAtm128GeneralIOPinP$17 */

  /* Module HplAtm128GeneralIOPinP$18 */

  /* Module HplAtm128GeneralIOPinP$19 */

  /* Module HplAtm128GeneralIOPinP$20 */

  /* Module HplAtm128GeneralIOPinP$21 */

  /* Module HplAtm128GeneralIOPinP$22 */

  /* Module HplAtm128GeneralIOPinP$23 */

  /* Module HplAtm128GeneralIOPinP$24 */

  /* Module HplAtm128GeneralIOPinP$25 */

  /* Module HplAtm128GeneralIOPinP$26 */

  /* Module HplAtm128GeneralIOPinP$27 */

  /* Module HplAtm128GeneralIOPinP$28 */

  /* Module HplAtm128GeneralIOPinP$29 */

  /* Module HplAtm128GeneralIOPinP$30 */

  /* Module HplAtm128GeneralIOPinP$31 */

  /* Module HplAtm128GeneralIOPinP$32 */

  /* Module HplAtm128GeneralIOPinP$33 */

  /* Module HplAtm128GeneralIOPinP$34 */

  /* Module HplAtm128GeneralIOPinP$35 */

  /* Module HplAtm128GeneralIOPinP$36 */

  /* Module HplAtm128GeneralIOPinP$37 */

  /* Module HplAtm128GeneralIOPinP$38 */

  /* Module HplAtm128GeneralIOPinP$39 */

  /* Module HplAtm128GeneralIOPinP$40 */

  /* Module HplAtm128GeneralIOPinP$41 */

  /* Module HplAtm128GeneralIOPinP$42 */

  /* Module HplAtm128GeneralIOPinP$43 */

  /* Module HplAtm128GeneralIOPinP$44 */

  /* Module HplAtm128GeneralIOPinP$45 */

  /* Module HplAtm128GeneralIOPinP$46 */

  /* Module HplAtm128GeneralIOPinP$47 */

  /* Module HplAtm128GeneralIOSlowPinP$0 */

  /* Module HplAtm128GeneralIOSlowPinP$1 */

  /* Module HplAtm128GeneralIOSlowPinP$2 */

  /* Module HplAtm128GeneralIOSlowPinP$3 */

  /* Module HplAtm128GeneralIOSlowPinP$4 */

  /* Module HplAtm128GeneralIOSlowPinP$5 */

  /* Module HplAtm128GeneralIOSlowPinP$6 */

  /* Module HplAtm128GeneralIOSlowPinP$7 */

  /* Module HplAtm128GeneralIOSlowPinP$8 */

  /* Module HplAtm128GeneralIOSlowPinP$9 */

  /* Module HplAtm128GeneralIOSlowPinP$10 */

  /* Module HplAtm128GeneralIOSlowPinP$11 */

  /* Module HplAtm128GeneralIOSlowPinP$12 */

  /* Module MeasureClockC */

  /* Module SimMainP */

  /* Module SimSchedulerBasicP */
  if (!strcmp(varname, "SimSchedulerBasicP$m_head"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP$m_head[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP$m_head[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP$m_tail"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP$m_tail[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP$m_tail[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP$m_next"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP$m_next[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP$m_next[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP$sim_scheduler_event_pending"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP$sim_scheduler_event_pending[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP$sim_scheduler_event_pending[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP$sim_scheduler_event"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP$sim_scheduler_event[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP$sim_scheduler_event[__nesc_mote]);
    return 0;
  }

  /* Module SimMoteP */
  if (!strcmp(varname, "SimMoteP$euid"))
  {
    *addr = (uintptr_t)&SimMoteP$euid[__nesc_mote];
    *size = sizeof(SimMoteP$euid[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimMoteP$startTime"))
  {
    *addr = (uintptr_t)&SimMoteP$startTime[__nesc_mote];
    *size = sizeof(SimMoteP$startTime[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimMoteP$isOn"))
  {
    *addr = (uintptr_t)&SimMoteP$isOn[__nesc_mote];
    *size = sizeof(SimMoteP$isOn[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimMoteP$bootEvent"))
  {
    *addr = (uintptr_t)&SimMoteP$bootEvent[__nesc_mote];
    *size = sizeof(SimMoteP$bootEvent[__nesc_mote]);
    return 0;
  }

  /* Module TossimActiveMessageC */
  if (!strcmp(varname, "TossimActiveMessageC$buffer"))
  {
    *addr = (uintptr_t)&TossimActiveMessageC$buffer[__nesc_mote];
    *size = sizeof(TossimActiveMessageC$buffer[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimActiveMessageC$bufferPointer"))
  {
    *addr = (uintptr_t)&TossimActiveMessageC$bufferPointer[__nesc_mote];
    *size = sizeof(TossimActiveMessageC$bufferPointer[__nesc_mote]);
    return 0;
  }

  /* Module TossimPacketModelC */
  if (!strcmp(varname, "TossimPacketModelC$initialized"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$initialized[__nesc_mote];
    *size = sizeof(TossimPacketModelC$initialized[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$running"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$running[__nesc_mote];
    *size = sizeof(TossimPacketModelC$running[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$backoffCount"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$backoffCount[__nesc_mote];
    *size = sizeof(TossimPacketModelC$backoffCount[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$neededFreeSamples"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$neededFreeSamples[__nesc_mote];
    *size = sizeof(TossimPacketModelC$neededFreeSamples[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$sending"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$sending[__nesc_mote];
    *size = sizeof(TossimPacketModelC$sending[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$transmitting"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$transmitting[__nesc_mote];
    *size = sizeof(TossimPacketModelC$transmitting[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$sendingLength"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$sendingLength[__nesc_mote];
    *size = sizeof(TossimPacketModelC$sendingLength[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$destNode"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$destNode[__nesc_mote];
    *size = sizeof(TossimPacketModelC$destNode[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$sendEvent"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$sendEvent[__nesc_mote];
    *size = sizeof(TossimPacketModelC$sendEvent[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$error"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$error[__nesc_mote];
    *size = sizeof(TossimPacketModelC$error[__nesc_mote]);
    return 0;
  }

  /* Module CpmModelC */
  if (!strcmp(varname, "CpmModelC$outgoing"))
  {
    *addr = (uintptr_t)&CpmModelC$outgoing[__nesc_mote];
    *size = sizeof(CpmModelC$outgoing[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC$requestAck"))
  {
    *addr = (uintptr_t)&CpmModelC$requestAck[__nesc_mote];
    *size = sizeof(CpmModelC$requestAck[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC$receiving"))
  {
    *addr = (uintptr_t)&CpmModelC$receiving[__nesc_mote];
    *size = sizeof(CpmModelC$receiving[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC$transmitting"))
  {
    *addr = (uintptr_t)&CpmModelC$transmitting[__nesc_mote];
    *size = sizeof(CpmModelC$transmitting[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC$transmissionEndTime"))
  {
    *addr = (uintptr_t)&CpmModelC$transmissionEndTime[__nesc_mote];
    *size = sizeof(CpmModelC$transmissionEndTime[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC$outstandingReceptionHead"))
  {
    *addr = (uintptr_t)&CpmModelC$outstandingReceptionHead[__nesc_mote];
    *size = sizeof(CpmModelC$outstandingReceptionHead[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC$clearThreshold"))
  {
    *addr = (uintptr_t)&CpmModelC$clearThreshold[__nesc_mote];
    *size = sizeof(CpmModelC$clearThreshold[__nesc_mote]);
    return 0;
  }

  /* Module ActiveMessageAddressC */
  if (!strcmp(varname, "ActiveMessageAddressC$set"))
  {
    *addr = (uintptr_t)&ActiveMessageAddressC$set[__nesc_mote];
    *size = sizeof(ActiveMessageAddressC$set[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ActiveMessageAddressC$addr"))
  {
    *addr = (uintptr_t)&ActiveMessageAddressC$addr[__nesc_mote];
    *size = sizeof(ActiveMessageAddressC$addr[__nesc_mote]);
    return 0;
  }

  /* Module TestS4SimpleM */
  if (!strcmp(varname, "TestS4SimpleM$send_buffer"))
  {
    *addr = (uintptr_t)&TestS4SimpleM$send_buffer[__nesc_mote];
    *size = sizeof(TestS4SimpleM$send_buffer[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TestS4SimpleM$pAppMsg"))
  {
    *addr = (uintptr_t)&TestS4SimpleM$pAppMsg[__nesc_mote];
    *size = sizeof(TestS4SimpleM$pAppMsg[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TestS4SimpleM$payloadLength"))
  {
    *addr = (uintptr_t)&TestS4SimpleM$payloadLength[__nesc_mote];
    *size = sizeof(TestS4SimpleM$payloadLength[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TestS4SimpleM$dest"))
  {
    *addr = (uintptr_t)&TestS4SimpleM$dest[__nesc_mote];
    *size = sizeof(TestS4SimpleM$dest[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TestS4SimpleM$busy_sending"))
  {
    *addr = (uintptr_t)&TestS4SimpleM$busy_sending[__nesc_mote];
    *size = sizeof(TestS4SimpleM$busy_sending[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TestS4SimpleM$d"))
  {
    *addr = (uintptr_t)&TestS4SimpleM$d[__nesc_mote];
    *size = sizeof(TestS4SimpleM$d[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TestS4SimpleM$mode"))
  {
    *addr = (uintptr_t)&TestS4SimpleM$mode[__nesc_mote];
    *size = sizeof(TestS4SimpleM$mode[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TestS4SimpleM$dest_id"))
  {
    *addr = (uintptr_t)&TestS4SimpleM$dest_id[__nesc_mote];
    *size = sizeof(TestS4SimpleM$dest_id[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TestS4SimpleM$msg_id"))
  {
    *addr = (uintptr_t)&TestS4SimpleM$msg_id[__nesc_mote];
    *size = sizeof(TestS4SimpleM$msg_id[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TestS4SimpleM$src"))
  {
    *addr = (uintptr_t)&TestS4SimpleM$src[__nesc_mote];
    *size = sizeof(TestS4SimpleM$src[__nesc_mote]);
    return 0;
  }

  /* Module S4RouterM */
  if (!strcmp(varname, "S4RouterM$local_message_counter"))
  {
    *addr = (uintptr_t)&S4RouterM$local_message_counter[__nesc_mote];
    *size = sizeof(S4RouterM$local_message_counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4RouterM$dup_cache_index"))
  {
    *addr = (uintptr_t)&S4RouterM$dup_cache_index[__nesc_mote];
    *size = sizeof(S4RouterM$dup_cache_index[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4RouterM$dup_cache"))
  {
    *addr = (uintptr_t)&S4RouterM$dup_cache[__nesc_mote];
    *size = sizeof(S4RouterM$dup_cache[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4RouterM$my_coords"))
  {
    *addr = (uintptr_t)&S4RouterM$my_coords[__nesc_mote];
    *size = sizeof(S4RouterM$my_coords[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4RouterM$coords_valid"))
  {
    *addr = (uintptr_t)&S4RouterM$coords_valid[__nesc_mote];
    *size = sizeof(S4RouterM$coords_valid[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4RouterM$forward_buffer"))
  {
    *addr = (uintptr_t)&S4RouterM$forward_buffer[__nesc_mote];
    *size = sizeof(S4RouterM$forward_buffer[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4RouterM$send_buffer"))
  {
    *addr = (uintptr_t)&S4RouterM$send_buffer[__nesc_mote];
    *size = sizeof(S4RouterM$send_buffer[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4RouterM$fwd_buf"))
  {
    *addr = (uintptr_t)&S4RouterM$fwd_buf[__nesc_mote];
    *size = sizeof(S4RouterM$fwd_buf[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4RouterM$forward_delay_timer_pending"))
  {
    *addr = (uintptr_t)&S4RouterM$forward_delay_timer_pending[__nesc_mote];
    *size = sizeof(S4RouterM$forward_delay_timer_pending[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4RouterM$forward_delay"))
  {
    *addr = (uintptr_t)&S4RouterM$forward_delay[__nesc_mote];
    *size = sizeof(S4RouterM$forward_delay[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4RouterM$delay_timer_jit"))
  {
    *addr = (uintptr_t)&S4RouterM$delay_timer_jit[__nesc_mote];
    *size = sizeof(S4RouterM$delay_timer_jit[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4RouterM$initialized"))
  {
    *addr = (uintptr_t)&S4RouterM$initialized[__nesc_mote];
    *size = sizeof(S4RouterM$initialized[__nesc_mote]);
    return 0;
  }

  /* Module S4StateM */
  if (!strcmp(varname, "S4StateM$b_timer_int"))
  {
    *addr = (uintptr_t)&S4StateM$b_timer_int[__nesc_mote];
    *size = sizeof(S4StateM$b_timer_int[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4StateM$b_timer_jit"))
  {
    *addr = (uintptr_t)&S4StateM$b_timer_jit[__nesc_mote];
    *size = sizeof(S4StateM$b_timer_jit[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4StateM$delay_timer_jit"))
  {
    *addr = (uintptr_t)&S4StateM$delay_timer_jit[__nesc_mote];
    *size = sizeof(S4StateM$delay_timer_jit[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4StateM$state_is_active"))
  {
    *addr = (uintptr_t)&S4StateM$state_is_active[__nesc_mote];
    *size = sizeof(S4StateM$state_is_active[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4StateM$state_beaconing_coords"))
  {
    *addr = (uintptr_t)&S4StateM$state_beaconing_coords[__nesc_mote];
    *size = sizeof(S4StateM$state_beaconing_coords[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4StateM$beacons_to_send"))
  {
    *addr = (uintptr_t)&S4StateM$beacons_to_send[__nesc_mote];
    *size = sizeof(S4StateM$beacons_to_send[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4StateM$my_coords"))
  {
    *addr = (uintptr_t)&S4StateM$my_coords[__nesc_mote];
    *size = sizeof(S4StateM$my_coords[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4StateM$beacon_buf"))
  {
    *addr = (uintptr_t)&S4StateM$beacon_buf[__nesc_mote];
    *size = sizeof(S4StateM$beacon_buf[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4StateM$rcv_beacon_buf"))
  {
    *addr = (uintptr_t)&S4StateM$rcv_beacon_buf[__nesc_mote];
    *size = sizeof(S4StateM$rcv_beacon_buf[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4StateM$rcv_beacon_ptr"))
  {
    *addr = (uintptr_t)&S4StateM$rcv_beacon_ptr[__nesc_mote];
    *size = sizeof(S4StateM$rcv_beacon_ptr[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4StateM$rcv_buffer_busy"))
  {
    *addr = (uintptr_t)&S4StateM$rcv_buffer_busy[__nesc_mote];
    *size = sizeof(S4StateM$rcv_buffer_busy[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4StateM$beacon_msg_ptr"))
  {
    *addr = (uintptr_t)&S4StateM$beacon_msg_ptr[__nesc_mote];
    *size = sizeof(S4StateM$beacon_msg_ptr[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4StateM$beacon_data_ptr"))
  {
    *addr = (uintptr_t)&S4StateM$beacon_data_ptr[__nesc_mote];
    *size = sizeof(S4StateM$beacon_data_ptr[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4StateM$beacon_msg_length"))
  {
    *addr = (uintptr_t)&S4StateM$beacon_msg_length[__nesc_mote];
    *size = sizeof(S4StateM$beacon_msg_length[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4StateM$beacon_send_busy"))
  {
    *addr = (uintptr_t)&S4StateM$beacon_send_busy[__nesc_mote];
    *size = sizeof(S4StateM$beacon_send_busy[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4StateM$beacon_seqno"))
  {
    *addr = (uintptr_t)&S4StateM$beacon_seqno[__nesc_mote];
    *size = sizeof(S4StateM$beacon_seqno[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4StateM$rootBeacons"))
  {
    *addr = (uintptr_t)&S4StateM$rootBeacons[__nesc_mote];
    *size = sizeof(S4StateM$rootBeacons[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4StateM$my_coords_parents"))
  {
    *addr = (uintptr_t)&S4StateM$my_coords_parents[__nesc_mote];
    *size = sizeof(S4StateM$my_coords_parents[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4StateM$state_is_root_beacon"))
  {
    *addr = (uintptr_t)&S4StateM$state_is_root_beacon[__nesc_mote];
    *size = sizeof(S4StateM$state_is_root_beacon[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4StateM$root_beacon_id"))
  {
    *addr = (uintptr_t)&S4StateM$root_beacon_id[__nesc_mote];
    *size = sizeof(S4StateM$root_beacon_id[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4StateM$root_beacon_seqno"))
  {
    *addr = (uintptr_t)&S4StateM$root_beacon_seqno[__nesc_mote];
    *size = sizeof(S4StateM$root_beacon_seqno[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4StateM$initialized"))
  {
    *addr = (uintptr_t)&S4StateM$initialized[__nesc_mote];
    *size = sizeof(S4StateM$initialized[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4StateM$beacon_send_retries"))
  {
    *addr = (uintptr_t)&S4StateM$beacon_send_retries[__nesc_mote];
    *size = sizeof(S4StateM$beacon_send_retries[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4StateM$next_beacon"))
  {
    *addr = (uintptr_t)&S4StateM$next_beacon[__nesc_mote];
    *size = sizeof(S4StateM$next_beacon[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4StateM$curr_bv_size"))
  {
    *addr = (uintptr_t)&S4StateM$curr_bv_size[__nesc_mote];
    *size = sizeof(S4StateM$curr_bv_size[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4StateM$update_int"))
  {
    *addr = (uintptr_t)&S4StateM$update_int[__nesc_mote];
    *size = sizeof(S4StateM$update_int[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4StateM$first_global_beacon"))
  {
    *addr = (uintptr_t)&S4StateM$first_global_beacon[__nesc_mote];
    *size = sizeof(S4StateM$first_global_beacon[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4StateM$dv_send_retries"))
  {
    *addr = (uintptr_t)&S4StateM$dv_send_retries[__nesc_mote];
    *size = sizeof(S4StateM$dv_send_retries[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4StateM$ClusterTable"))
  {
    *addr = (uintptr_t)&S4StateM$ClusterTable[__nesc_mote];
    *size = sizeof(S4StateM$ClusterTable[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4StateM$cluster_size"))
  {
    *addr = (uintptr_t)&S4StateM$cluster_size[__nesc_mote];
    *size = sizeof(S4StateM$cluster_size[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4StateM$cluster_buf"))
  {
    *addr = (uintptr_t)&S4StateM$cluster_buf[__nesc_mote];
    *size = sizeof(S4StateM$cluster_buf[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4StateM$rcv_cluster_buf"))
  {
    *addr = (uintptr_t)&S4StateM$rcv_cluster_buf[__nesc_mote];
    *size = sizeof(S4StateM$rcv_cluster_buf[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4StateM$rcv_cluster_ptr"))
  {
    *addr = (uintptr_t)&S4StateM$rcv_cluster_ptr[__nesc_mote];
    *size = sizeof(S4StateM$rcv_cluster_ptr[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4StateM$rcv_clusterbuffer_busy"))
  {
    *addr = (uintptr_t)&S4StateM$rcv_clusterbuffer_busy[__nesc_mote];
    *size = sizeof(S4StateM$rcv_clusterbuffer_busy[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4StateM$cluster_msg_length"))
  {
    *addr = (uintptr_t)&S4StateM$cluster_msg_length[__nesc_mote];
    *size = sizeof(S4StateM$cluster_msg_length[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4StateM$cluster_send_busy"))
  {
    *addr = (uintptr_t)&S4StateM$cluster_send_busy[__nesc_mote];
    *size = sizeof(S4StateM$cluster_send_busy[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4StateM$cluster_seqno"))
  {
    *addr = (uintptr_t)&S4StateM$cluster_seqno[__nesc_mote];
    *size = sizeof(S4StateM$cluster_seqno[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4StateM$cluster_msg_ptr"))
  {
    *addr = (uintptr_t)&S4StateM$cluster_msg_ptr[__nesc_mote];
    *size = sizeof(S4StateM$cluster_msg_ptr[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4StateM$cluster_data_ptr"))
  {
    *addr = (uintptr_t)&S4StateM$cluster_data_ptr[__nesc_mote];
    *size = sizeof(S4StateM$cluster_data_ptr[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4StateM$next_dv"))
  {
    *addr = (uintptr_t)&S4StateM$next_dv[__nesc_mote];
    *size = sizeof(S4StateM$next_dv[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4StateM$curr_dv_size"))
  {
    *addr = (uintptr_t)&S4StateM$curr_dv_size[__nesc_mote];
    *size = sizeof(S4StateM$curr_dv_size[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4StateM$current_scope"))
  {
    *addr = (uintptr_t)&S4StateM$current_scope[__nesc_mote];
    *size = sizeof(S4StateM$current_scope[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4StateM$scope_age"))
  {
    *addr = (uintptr_t)&S4StateM$scope_age[__nesc_mote];
    *size = sizeof(S4StateM$scope_age[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4StateM$largest_scope"))
  {
    *addr = (uintptr_t)&S4StateM$largest_scope[__nesc_mote];
    *size = sizeof(S4StateM$largest_scope[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4StateM$beacon_round"))
  {
    *addr = (uintptr_t)&S4StateM$beacon_round[__nesc_mote];
    *size = sizeof(S4StateM$beacon_round[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4StateM$dv_round"))
  {
    *addr = (uintptr_t)&S4StateM$dv_round[__nesc_mote];
    *size = sizeof(S4StateM$dv_round[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4StateM$sent_bv"))
  {
    *addr = (uintptr_t)&S4StateM$sent_bv[__nesc_mote];
    *size = sizeof(S4StateM$sent_bv[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4StateM$sent_dv"))
  {
    *addr = (uintptr_t)&S4StateM$sent_dv[__nesc_mote];
    *size = sizeof(S4StateM$sent_dv[__nesc_mote]);
    return 0;
  }

  /* Module FilterLocalCommM */
  if (!strcmp(varname, "FilterLocalCommM$initialized"))
  {
    *addr = (uintptr_t)&FilterLocalCommM$initialized[__nesc_mote];
    *size = sizeof(FilterLocalCommM$initialized[__nesc_mote]);
    return 0;
  }

  /* Module LinkEstimatorCommM */
  if (!strcmp(varname, "LinkEstimatorCommM$filter_by_strength"))
  {
    *addr = (uintptr_t)&LinkEstimatorCommM$filter_by_strength[__nesc_mote];
    *size = sizeof(LinkEstimatorCommM$filter_by_strength[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "LinkEstimatorCommM$reverse_period"))
  {
    *addr = (uintptr_t)&LinkEstimatorCommM$reverse_period[__nesc_mote];
    *size = sizeof(LinkEstimatorCommM$reverse_period[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "LinkEstimatorCommM$reverse_jitter"))
  {
    *addr = (uintptr_t)&LinkEstimatorCommM$reverse_jitter[__nesc_mote];
    *size = sizeof(LinkEstimatorCommM$reverse_jitter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "LinkEstimatorCommM$reverse_info_index"))
  {
    *addr = (uintptr_t)&LinkEstimatorCommM$reverse_info_index[__nesc_mote];
    *size = sizeof(LinkEstimatorCommM$reverse_info_index[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "LinkEstimatorCommM$state_is_active"))
  {
    *addr = (uintptr_t)&LinkEstimatorCommM$state_is_active[__nesc_mote];
    *size = sizeof(LinkEstimatorCommM$state_is_active[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "LinkEstimatorCommM$send_buffer"))
  {
    *addr = (uintptr_t)&LinkEstimatorCommM$send_buffer[__nesc_mote];
    *size = sizeof(LinkEstimatorCommM$send_buffer[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "LinkEstimatorCommM$link_msg_ptr"))
  {
    *addr = (uintptr_t)&LinkEstimatorCommM$link_msg_ptr[__nesc_mote];
    *size = sizeof(LinkEstimatorCommM$link_msg_ptr[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "LinkEstimatorCommM$link_info_buf"))
  {
    *addr = (uintptr_t)&LinkEstimatorCommM$link_info_buf[__nesc_mote];
    *size = sizeof(LinkEstimatorCommM$link_info_buf[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "LinkEstimatorCommM$send_buffer_busy"))
  {
    *addr = (uintptr_t)&LinkEstimatorCommM$send_buffer_busy[__nesc_mote];
    *size = sizeof(LinkEstimatorCommM$send_buffer_busy[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "LinkEstimatorCommM$reverse_msg_length"))
  {
    *addr = (uintptr_t)&LinkEstimatorCommM$reverse_msg_length[__nesc_mote];
    *size = sizeof(LinkEstimatorCommM$reverse_msg_length[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "LinkEstimatorCommM$initialized"))
  {
    *addr = (uintptr_t)&LinkEstimatorCommM$initialized[__nesc_mote];
    *size = sizeof(LinkEstimatorCommM$initialized[__nesc_mote]);
    return 0;
  }

  /* Module Atm128AlarmAsyncP$0 */
  if (!strcmp(varname, "/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set"))
  {
    *addr = (uintptr_t)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[__nesc_mote];
    *size = sizeof(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0"))
  {
    *addr = (uintptr_t)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[__nesc_mote];
    *size = sizeof(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt"))
  {
    *addr = (uintptr_t)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[__nesc_mote];
    *size = sizeof(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base"))
  {
    *addr = (uintptr_t)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[__nesc_mote];
    *size = sizeof(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[__nesc_mote]);
    return 0;
  }

  /* Module HplAtm128Timer0AsyncP */
  if (!strcmp(varname, "HplAtm128Timer0AsyncP$inOverflow"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP$inOverflow[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP$inOverflow[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HplAtm128Timer0AsyncP$lastZero"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP$lastZero[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP$lastZero[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HplAtm128Timer0AsyncP$oldScale"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP$oldScale[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP$oldScale[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HplAtm128Timer0AsyncP$compare"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP$compare[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP$compare[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HplAtm128Timer0AsyncP$overflow"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP$overflow[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP$overflow[__nesc_mote]);
    return 0;
  }

  /* Module AlarmToTimerC$0 */
  if (!strcmp(varname, "/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt"))
  {
    *addr = (uintptr_t)&/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[__nesc_mote];
    *size = sizeof(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot"))
  {
    *addr = (uintptr_t)&/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[__nesc_mote];
    *size = sizeof(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[__nesc_mote]);
    return 0;
  }

  /* Module VirtualizeTimerC$0 */
  if (!strcmp(varname, "/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers"))
  {
    *addr = (uintptr_t)&/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[__nesc_mote];
    *size = sizeof(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[__nesc_mote]);
    return 0;
  }

  /* Module CounterToLocalTimeC$0 */

  /* Module LinkEstimatorM */
  if (!strcmp(varname, "LinkEstimatorM$active_neighbors"))
  {
    *addr = (uintptr_t)&LinkEstimatorM$active_neighbors[__nesc_mote];
    *size = sizeof(LinkEstimatorM$active_neighbors[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "LinkEstimatorM$neighborCache"))
  {
    *addr = (uintptr_t)&LinkEstimatorM$neighborCache[__nesc_mote];
    *size = sizeof(LinkEstimatorM$neighborCache[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "LinkEstimatorM$neighborCachePtrs"))
  {
    *addr = (uintptr_t)&LinkEstimatorM$neighborCachePtrs[__nesc_mote];
    *size = sizeof(LinkEstimatorM$neighborCachePtrs[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "LinkEstimatorM$state_is_active"))
  {
    *addr = (uintptr_t)&LinkEstimatorM$state_is_active[__nesc_mote];
    *size = sizeof(LinkEstimatorM$state_is_active[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "LinkEstimatorM$current_window"))
  {
    *addr = (uintptr_t)&LinkEstimatorM$current_window[__nesc_mote];
    *size = sizeof(LinkEstimatorM$current_window[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "LinkEstimatorM$min_packets"))
  {
    *addr = (uintptr_t)&LinkEstimatorM$min_packets[__nesc_mote];
    *size = sizeof(LinkEstimatorM$min_packets[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "LinkEstimatorM$link_upd_timer_int"))
  {
    *addr = (uintptr_t)&LinkEstimatorM$link_upd_timer_int[__nesc_mote];
    *size = sizeof(LinkEstimatorM$link_upd_timer_int[__nesc_mote]);
    return 0;
  }

  /* Module UARTLoggerM */
  if (!strcmp(varname, "UARTLoggerM$buffers"))
  {
    *addr = (uintptr_t)&UARTLoggerM$buffers[__nesc_mote];
    *size = sizeof(UARTLoggerM$buffers[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "UARTLoggerM$stat_received"))
  {
    *addr = (uintptr_t)&UARTLoggerM$stat_received[__nesc_mote];
    *size = sizeof(UARTLoggerM$stat_received[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "UARTLoggerM$stat_self_log"))
  {
    *addr = (uintptr_t)&UARTLoggerM$stat_self_log[__nesc_mote];
    *size = sizeof(UARTLoggerM$stat_self_log[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "UARTLoggerM$stat_self_log_no_buffer"))
  {
    *addr = (uintptr_t)&UARTLoggerM$stat_self_log_no_buffer[__nesc_mote];
    *size = sizeof(UARTLoggerM$stat_self_log_no_buffer[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "UARTLoggerM$stat_written"))
  {
    *addr = (uintptr_t)&UARTLoggerM$stat_written[__nesc_mote];
    *size = sizeof(UARTLoggerM$stat_written[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "UARTLoggerM$stat_bad_buffer"))
  {
    *addr = (uintptr_t)&UARTLoggerM$stat_bad_buffer[__nesc_mote];
    *size = sizeof(UARTLoggerM$stat_bad_buffer[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "UARTLoggerM$stat_no_buffer"))
  {
    *addr = (uintptr_t)&UARTLoggerM$stat_no_buffer[__nesc_mote];
    *size = sizeof(UARTLoggerM$stat_no_buffer[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "UARTLoggerM$stat_send_failed"))
  {
    *addr = (uintptr_t)&UARTLoggerM$stat_send_failed[__nesc_mote];
    *size = sizeof(UARTLoggerM$stat_send_failed[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "UARTLoggerM$stat_send_done_failed"))
  {
    *addr = (uintptr_t)&UARTLoggerM$stat_send_done_failed[__nesc_mote];
    *size = sizeof(UARTLoggerM$stat_send_done_failed[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "UARTLoggerM$min_available_buffers"))
  {
    *addr = (uintptr_t)&UARTLoggerM$min_available_buffers[__nesc_mote];
    *size = sizeof(UARTLoggerM$min_available_buffers[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "UARTLoggerM$max_queued_send"))
  {
    *addr = (uintptr_t)&UARTLoggerM$max_queued_send[__nesc_mote];
    *size = sizeof(UARTLoggerM$max_queued_send[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "UARTLoggerM$msg_size"))
  {
    *addr = (uintptr_t)&UARTLoggerM$msg_size[__nesc_mote];
    *size = sizeof(UARTLoggerM$msg_size[__nesc_mote]);
    return 0;
  }

  /* Module NoLedsC */

  /* Module S4QueuedSendM */
  if (!strcmp(varname, "S4QueuedSendM$max_retransmit_count"))
  {
    *addr = (uintptr_t)&S4QueuedSendM$max_retransmit_count[__nesc_mote];
    *size = sizeof(S4QueuedSendM$max_retransmit_count[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4QueuedSendM$initialized"))
  {
    *addr = (uintptr_t)&S4QueuedSendM$initialized[__nesc_mote];
    *size = sizeof(S4QueuedSendM$initialized[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4QueuedSendM$msgqueue"))
  {
    *addr = (uintptr_t)&S4QueuedSendM$msgqueue[__nesc_mote];
    *size = sizeof(S4QueuedSendM$msgqueue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4QueuedSendM$enqueue_next"))
  {
    *addr = (uintptr_t)&S4QueuedSendM$enqueue_next[__nesc_mote];
    *size = sizeof(S4QueuedSendM$enqueue_next[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4QueuedSendM$dequeue_next"))
  {
    *addr = (uintptr_t)&S4QueuedSendM$dequeue_next[__nesc_mote];
    *size = sizeof(S4QueuedSendM$dequeue_next[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4QueuedSendM$retransmit"))
  {
    *addr = (uintptr_t)&S4QueuedSendM$retransmit[__nesc_mote];
    *size = sizeof(S4QueuedSendM$retransmit[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4QueuedSendM$fQueueIdle"))
  {
    *addr = (uintptr_t)&S4QueuedSendM$fQueueIdle[__nesc_mote];
    *size = sizeof(S4QueuedSendM$fQueueIdle[__nesc_mote]);
    return 0;
  }

  /* Module RandomLfsrC */
  if (!strcmp(varname, "RandomLfsrC$shiftReg"))
  {
    *addr = (uintptr_t)&RandomLfsrC$shiftReg[__nesc_mote];
    *size = sizeof(RandomLfsrC$shiftReg[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "RandomLfsrC$mask"))
  {
    *addr = (uintptr_t)&RandomLfsrC$mask[__nesc_mote];
    *size = sizeof(RandomLfsrC$mask[__nesc_mote]);
    return 0;
  }

  /* Module S4ActiveMessageC */

  /* Module LedsP */

  /* Module LinkEstimatorTaggerCommM */
  if (!strcmp(varname, "LinkEstimatorTaggerCommM$my_seqno"))
  {
    *addr = (uintptr_t)&LinkEstimatorTaggerCommM$my_seqno[__nesc_mote];
    *size = sizeof(LinkEstimatorTaggerCommM$my_seqno[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "LinkEstimatorTaggerCommM$initialized"))
  {
    *addr = (uintptr_t)&LinkEstimatorTaggerCommM$initialized[__nesc_mote];
    *size = sizeof(LinkEstimatorTaggerCommM$initialized[__nesc_mote]);
    return 0;
  }

  /* Module GenericCommReallyPromiscuousM */
  if (!strcmp(varname, "GenericCommReallyPromiscuousM$initialized"))
  {
    *addr = (uintptr_t)&GenericCommReallyPromiscuousM$initialized[__nesc_mote];
    *size = sizeof(GenericCommReallyPromiscuousM$initialized[__nesc_mote]);
    return 0;
  }

  /* Module AMQueueEntryP$0 */

  /* Module AMQueueImplP$0 */
  if (!strcmp(varname, "/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current"))
  {
    *addr = (uintptr_t)&/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[__nesc_mote];
    *size = sizeof(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue"))
  {
    *addr = (uintptr_t)&/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[__nesc_mote];
    *size = sizeof(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask"))
  {
    *addr = (uintptr_t)&/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[__nesc_mote];
    *size = sizeof(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[__nesc_mote]);
    return 0;
  }

  /* Module AMQueueEntryP$1 */

  /* Module AMQueueEntryP$2 */

  /* Module AMQueueEntryP$3 */

  /* Module CoordinateTableM */
  if (!strcmp(varname, "CoordinateTableM$num_active"))
  {
    *addr = (uintptr_t)&CoordinateTableM$num_active[__nesc_mote];
    *size = sizeof(CoordinateTableM$num_active[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CoordinateTableM$table"))
  {
    *addr = (uintptr_t)&CoordinateTableM$table[__nesc_mote];
    *size = sizeof(CoordinateTableM$table[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CoordinateTableM$tablePtrs"))
  {
    *addr = (uintptr_t)&CoordinateTableM$tablePtrs[__nesc_mote];
    *size = sizeof(CoordinateTableM$tablePtrs[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CoordinateTableM$state_is_active"))
  {
    *addr = (uintptr_t)&CoordinateTableM$state_is_active[__nesc_mote];
    *size = sizeof(CoordinateTableM$state_is_active[__nesc_mote]);
    return 0;
  }

  /* Module S4TopologyM */
  if (!strcmp(varname, "S4TopologyM$root_beacon_id"))
  {
    *addr = (uintptr_t)&S4TopologyM$root_beacon_id[__nesc_mote];
    *size = sizeof(S4TopologyM$root_beacon_id[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "S4TopologyM$n_root_beacons"))
  {
    *addr = (uintptr_t)&S4TopologyM$n_root_beacons[__nesc_mote];
    *size = sizeof(S4TopologyM$n_root_beacons[__nesc_mote]);
    return 0;
  }

  /* Module LBlinkM */
  if (!strcmp(varname, "LBlinkM$rate"))
  {
    *addr = (uintptr_t)&LBlinkM$rate[__nesc_mote];
    *size = sizeof(LBlinkM$rate[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "LBlinkM$yellow"))
  {
    *addr = (uintptr_t)&LBlinkM$yellow[__nesc_mote];
    *size = sizeof(LBlinkM$yellow[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "LBlinkM$red"))
  {
    *addr = (uintptr_t)&LBlinkM$red[__nesc_mote];
    *size = sizeof(LBlinkM$red[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "LBlinkM$green"))
  {
    *addr = (uintptr_t)&LBlinkM$green[__nesc_mote];
    *size = sizeof(LBlinkM$green[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "LBlinkM$timer_on"))
  {
    *addr = (uintptr_t)&LBlinkM$timer_on[__nesc_mote];
    *size = sizeof(LBlinkM$timer_on[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "LBlinkM$initialized"))
  {
    *addr = (uintptr_t)&LBlinkM$initialized[__nesc_mote];
    *size = sizeof(LBlinkM$initialized[__nesc_mote]);
    return 0;
  }

  /* Module RandomMlcgC */
  if (!strcmp(varname, "RandomMlcgC$seed"))
  {
    *addr = (uintptr_t)&RandomMlcgC$seed[__nesc_mote];
    *size = sizeof(RandomMlcgC$seed[__nesc_mote]);
    return 0;
  }

  return -1;
}
/* Invoke static initialisers for mote '__nesc_mote' */

static void __nesc_nido_initialise(int __nesc_mote)
{
  /* Module PlatformP */

  /* Module MotePlatformP */

  /* Module HplAtm128GeneralIOPinP$0 */

  /* Module HplAtm128GeneralIOPinP$1 */

  /* Module HplAtm128GeneralIOPinP$2 */

  /* Module HplAtm128GeneralIOPinP$3 */

  /* Module HplAtm128GeneralIOPinP$4 */

  /* Module HplAtm128GeneralIOPinP$5 */

  /* Module HplAtm128GeneralIOPinP$6 */

  /* Module HplAtm128GeneralIOPinP$7 */

  /* Module HplAtm128GeneralIOPinP$8 */

  /* Module HplAtm128GeneralIOPinP$9 */

  /* Module HplAtm128GeneralIOPinP$10 */

  /* Module HplAtm128GeneralIOPinP$11 */

  /* Module HplAtm128GeneralIOPinP$12 */

  /* Module HplAtm128GeneralIOPinP$13 */

  /* Module HplAtm128GeneralIOPinP$14 */

  /* Module HplAtm128GeneralIOPinP$15 */

  /* Module HplAtm128GeneralIOPinP$16 */

  /* Module HplAtm128GeneralIOPinP$17 */

  /* Module HplAtm128GeneralIOPinP$18 */

  /* Module HplAtm128GeneralIOPinP$19 */

  /* Module HplAtm128GeneralIOPinP$20 */

  /* Module HplAtm128GeneralIOPinP$21 */

  /* Module HplAtm128GeneralIOPinP$22 */

  /* Module HplAtm128GeneralIOPinP$23 */

  /* Module HplAtm128GeneralIOPinP$24 */

  /* Module HplAtm128GeneralIOPinP$25 */

  /* Module HplAtm128GeneralIOPinP$26 */

  /* Module HplAtm128GeneralIOPinP$27 */

  /* Module HplAtm128GeneralIOPinP$28 */

  /* Module HplAtm128GeneralIOPinP$29 */

  /* Module HplAtm128GeneralIOPinP$30 */

  /* Module HplAtm128GeneralIOPinP$31 */

  /* Module HplAtm128GeneralIOPinP$32 */

  /* Module HplAtm128GeneralIOPinP$33 */

  /* Module HplAtm128GeneralIOPinP$34 */

  /* Module HplAtm128GeneralIOPinP$35 */

  /* Module HplAtm128GeneralIOPinP$36 */

  /* Module HplAtm128GeneralIOPinP$37 */

  /* Module HplAtm128GeneralIOPinP$38 */

  /* Module HplAtm128GeneralIOPinP$39 */

  /* Module HplAtm128GeneralIOPinP$40 */

  /* Module HplAtm128GeneralIOPinP$41 */

  /* Module HplAtm128GeneralIOPinP$42 */

  /* Module HplAtm128GeneralIOPinP$43 */

  /* Module HplAtm128GeneralIOPinP$44 */

  /* Module HplAtm128GeneralIOPinP$45 */

  /* Module HplAtm128GeneralIOPinP$46 */

  /* Module HplAtm128GeneralIOPinP$47 */

  /* Module HplAtm128GeneralIOSlowPinP$0 */

  /* Module HplAtm128GeneralIOSlowPinP$1 */

  /* Module HplAtm128GeneralIOSlowPinP$2 */

  /* Module HplAtm128GeneralIOSlowPinP$3 */

  /* Module HplAtm128GeneralIOSlowPinP$4 */

  /* Module HplAtm128GeneralIOSlowPinP$5 */

  /* Module HplAtm128GeneralIOSlowPinP$6 */

  /* Module HplAtm128GeneralIOSlowPinP$7 */

  /* Module HplAtm128GeneralIOSlowPinP$8 */

  /* Module HplAtm128GeneralIOSlowPinP$9 */

  /* Module HplAtm128GeneralIOSlowPinP$10 */

  /* Module HplAtm128GeneralIOSlowPinP$11 */

  /* Module HplAtm128GeneralIOSlowPinP$12 */

  /* Module MeasureClockC */

  /* Module SimMainP */

  /* Module SimSchedulerBasicP */
  memset((void *)&SimSchedulerBasicP$m_head[__nesc_mote], 0, sizeof SimSchedulerBasicP$m_head[__nesc_mote]);
  memset((void *)&SimSchedulerBasicP$m_tail[__nesc_mote], 0, sizeof SimSchedulerBasicP$m_tail[__nesc_mote]);
  memset((void *)&SimSchedulerBasicP$m_next[__nesc_mote], 0, sizeof SimSchedulerBasicP$m_next[__nesc_mote]);
  SimSchedulerBasicP$sim_scheduler_event_pending[__nesc_mote] = FALSE;
  memset((void *)&SimSchedulerBasicP$sim_scheduler_event[__nesc_mote], 0, sizeof SimSchedulerBasicP$sim_scheduler_event[__nesc_mote]);

  /* Module SimMoteP */
  memset((void *)&SimMoteP$euid[__nesc_mote], 0, sizeof SimMoteP$euid[__nesc_mote]);
  memset((void *)&SimMoteP$startTime[__nesc_mote], 0, sizeof SimMoteP$startTime[__nesc_mote]);
  memset((void *)&SimMoteP$isOn[__nesc_mote], 0, sizeof SimMoteP$isOn[__nesc_mote]);
  memset((void *)&SimMoteP$bootEvent[__nesc_mote], 0, sizeof SimMoteP$bootEvent[__nesc_mote]);

  /* Module TossimActiveMessageC */
  memset((void *)&TossimActiveMessageC$buffer[__nesc_mote], 0, sizeof TossimActiveMessageC$buffer[__nesc_mote]);
  TossimActiveMessageC$bufferPointer[__nesc_mote] = &TossimActiveMessageC$buffer[__nesc_mote];

  /* Module TossimPacketModelC */
  TossimPacketModelC$initialized[__nesc_mote] = FALSE;
  TossimPacketModelC$running[__nesc_mote] = FALSE;
  memset((void *)&TossimPacketModelC$backoffCount[__nesc_mote], 0, sizeof TossimPacketModelC$backoffCount[__nesc_mote]);
  memset((void *)&TossimPacketModelC$neededFreeSamples[__nesc_mote], 0, sizeof TossimPacketModelC$neededFreeSamples[__nesc_mote]);
  TossimPacketModelC$sending[__nesc_mote] = (void *)0;
  TossimPacketModelC$transmitting[__nesc_mote] = FALSE;
  TossimPacketModelC$sendingLength[__nesc_mote] = 0;
  memset((void *)&TossimPacketModelC$destNode[__nesc_mote], 0, sizeof TossimPacketModelC$destNode[__nesc_mote]);
  memset((void *)&TossimPacketModelC$sendEvent[__nesc_mote], 0, sizeof TossimPacketModelC$sendEvent[__nesc_mote]);
  TossimPacketModelC$error[__nesc_mote] = 0;

  /* Module CpmModelC */
  memset((void *)&CpmModelC$outgoing[__nesc_mote], 0, sizeof CpmModelC$outgoing[__nesc_mote]);
  memset((void *)&CpmModelC$requestAck[__nesc_mote], 0, sizeof CpmModelC$requestAck[__nesc_mote]);
  CpmModelC$receiving[__nesc_mote] = 0;
  CpmModelC$transmitting[__nesc_mote] = 0;
  memset((void *)&CpmModelC$transmissionEndTime[__nesc_mote], 0, sizeof CpmModelC$transmissionEndTime[__nesc_mote]);
  CpmModelC$outstandingReceptionHead[__nesc_mote] = (void *)0;
  CpmModelC$clearThreshold[__nesc_mote] = -72.0;

  /* Module ActiveMessageAddressC */
  ActiveMessageAddressC$set[__nesc_mote] = FALSE;
  memset((void *)&ActiveMessageAddressC$addr[__nesc_mote], 0, sizeof ActiveMessageAddressC$addr[__nesc_mote]);

  /* Module TestS4SimpleM */
  memset((void *)&TestS4SimpleM$send_buffer[__nesc_mote], 0, sizeof TestS4SimpleM$send_buffer[__nesc_mote]);
  memset((void *)&TestS4SimpleM$pAppMsg[__nesc_mote], 0, sizeof TestS4SimpleM$pAppMsg[__nesc_mote]);
  memset((void *)&TestS4SimpleM$payloadLength[__nesc_mote], 0, sizeof TestS4SimpleM$payloadLength[__nesc_mote]);
  memset((void *)&TestS4SimpleM$dest[__nesc_mote], 0, sizeof TestS4SimpleM$dest[__nesc_mote]);
  memset((void *)&TestS4SimpleM$busy_sending[__nesc_mote], 0, sizeof TestS4SimpleM$busy_sending[__nesc_mote]);
  memset((void *)&TestS4SimpleM$d[__nesc_mote], 0, sizeof TestS4SimpleM$d[__nesc_mote]);
  memset((void *)&TestS4SimpleM$mode[__nesc_mote], 0, sizeof TestS4SimpleM$mode[__nesc_mote]);
  memset((void *)&TestS4SimpleM$dest_id[__nesc_mote], 0, sizeof TestS4SimpleM$dest_id[__nesc_mote]);
  memset((void *)&TestS4SimpleM$msg_id[__nesc_mote], 0, sizeof TestS4SimpleM$msg_id[__nesc_mote]);
  TestS4SimpleM$src[__nesc_mote] = 1;

  /* Module S4RouterM */
  memset((void *)&S4RouterM$local_message_counter[__nesc_mote], 0, sizeof S4RouterM$local_message_counter[__nesc_mote]);
  memset((void *)&S4RouterM$dup_cache_index[__nesc_mote], 0, sizeof S4RouterM$dup_cache_index[__nesc_mote]);
  memset((void *)&S4RouterM$dup_cache[__nesc_mote], 0, sizeof S4RouterM$dup_cache[__nesc_mote]);
  memset((void *)&S4RouterM$my_coords[__nesc_mote], 0, sizeof S4RouterM$my_coords[__nesc_mote]);
  memset((void *)&S4RouterM$coords_valid[__nesc_mote], 0, sizeof S4RouterM$coords_valid[__nesc_mote]);
  memset((void *)&S4RouterM$forward_buffer[__nesc_mote], 0, sizeof S4RouterM$forward_buffer[__nesc_mote]);
  memset((void *)&S4RouterM$send_buffer[__nesc_mote], 0, sizeof S4RouterM$send_buffer[__nesc_mote]);
  memset((void *)&S4RouterM$fwd_buf[__nesc_mote], 0, sizeof S4RouterM$fwd_buf[__nesc_mote]);
  memset((void *)&S4RouterM$forward_delay_timer_pending[__nesc_mote], 0, sizeof S4RouterM$forward_delay_timer_pending[__nesc_mote]);
  memset((void *)&S4RouterM$forward_delay[__nesc_mote], 0, sizeof S4RouterM$forward_delay[__nesc_mote]);
  memset((void *)&S4RouterM$delay_timer_jit[__nesc_mote], 0, sizeof S4RouterM$delay_timer_jit[__nesc_mote]);
  S4RouterM$initialized[__nesc_mote] = FALSE;

  /* Module S4StateM */
  memset((void *)&S4StateM$b_timer_int[__nesc_mote], 0, sizeof S4StateM$b_timer_int[__nesc_mote]);
  memset((void *)&S4StateM$b_timer_jit[__nesc_mote], 0, sizeof S4StateM$b_timer_jit[__nesc_mote]);
  memset((void *)&S4StateM$delay_timer_jit[__nesc_mote], 0, sizeof S4StateM$delay_timer_jit[__nesc_mote]);
  memset((void *)&S4StateM$state_is_active[__nesc_mote], 0, sizeof S4StateM$state_is_active[__nesc_mote]);
  memset((void *)&S4StateM$state_beaconing_coords[__nesc_mote], 0, sizeof S4StateM$state_beaconing_coords[__nesc_mote]);
  memset((void *)&S4StateM$beacons_to_send[__nesc_mote], 0, sizeof S4StateM$beacons_to_send[__nesc_mote]);
  memset((void *)&S4StateM$my_coords[__nesc_mote], 0, sizeof S4StateM$my_coords[__nesc_mote]);
  memset((void *)&S4StateM$beacon_buf[__nesc_mote], 0, sizeof S4StateM$beacon_buf[__nesc_mote]);
  memset((void *)&S4StateM$rcv_beacon_buf[__nesc_mote], 0, sizeof S4StateM$rcv_beacon_buf[__nesc_mote]);
  memset((void *)&S4StateM$rcv_beacon_ptr[__nesc_mote], 0, sizeof S4StateM$rcv_beacon_ptr[__nesc_mote]);
  memset((void *)&S4StateM$rcv_buffer_busy[__nesc_mote], 0, sizeof S4StateM$rcv_buffer_busy[__nesc_mote]);
  memset((void *)&S4StateM$beacon_msg_ptr[__nesc_mote], 0, sizeof S4StateM$beacon_msg_ptr[__nesc_mote]);
  memset((void *)&S4StateM$beacon_data_ptr[__nesc_mote], 0, sizeof S4StateM$beacon_data_ptr[__nesc_mote]);
  memset((void *)&S4StateM$beacon_msg_length[__nesc_mote], 0, sizeof S4StateM$beacon_msg_length[__nesc_mote]);
  memset((void *)&S4StateM$beacon_send_busy[__nesc_mote], 0, sizeof S4StateM$beacon_send_busy[__nesc_mote]);
  memset((void *)&S4StateM$beacon_seqno[__nesc_mote], 0, sizeof S4StateM$beacon_seqno[__nesc_mote]);
  memset((void *)&S4StateM$rootBeacons[__nesc_mote], 0, sizeof S4StateM$rootBeacons[__nesc_mote]);
  memset((void *)&S4StateM$my_coords_parents[__nesc_mote], 0, sizeof S4StateM$my_coords_parents[__nesc_mote]);
  memset((void *)&S4StateM$state_is_root_beacon[__nesc_mote], 0, sizeof S4StateM$state_is_root_beacon[__nesc_mote]);
  memset((void *)&S4StateM$root_beacon_id[__nesc_mote], 0, sizeof S4StateM$root_beacon_id[__nesc_mote]);
  memset((void *)&S4StateM$root_beacon_seqno[__nesc_mote], 0, sizeof S4StateM$root_beacon_seqno[__nesc_mote]);
  S4StateM$initialized[__nesc_mote] = FALSE;
  S4StateM$beacon_send_retries[__nesc_mote] = 0;
  memset((void *)&S4StateM$next_beacon[__nesc_mote], 0, sizeof S4StateM$next_beacon[__nesc_mote]);
  memset((void *)&S4StateM$curr_bv_size[__nesc_mote], 0, sizeof S4StateM$curr_bv_size[__nesc_mote]);
  memset((void *)&S4StateM$update_int[__nesc_mote], 0, sizeof S4StateM$update_int[__nesc_mote]);
  memset((void *)&S4StateM$first_global_beacon[__nesc_mote], 0, sizeof S4StateM$first_global_beacon[__nesc_mote]);
  S4StateM$dv_send_retries[__nesc_mote] = 0;
  memset((void *)&S4StateM$ClusterTable[__nesc_mote], 0, sizeof S4StateM$ClusterTable[__nesc_mote]);
  memset((void *)&S4StateM$cluster_size[__nesc_mote], 0, sizeof S4StateM$cluster_size[__nesc_mote]);
  memset((void *)&S4StateM$cluster_buf[__nesc_mote], 0, sizeof S4StateM$cluster_buf[__nesc_mote]);
  memset((void *)&S4StateM$rcv_cluster_buf[__nesc_mote], 0, sizeof S4StateM$rcv_cluster_buf[__nesc_mote]);
  memset((void *)&S4StateM$rcv_cluster_ptr[__nesc_mote], 0, sizeof S4StateM$rcv_cluster_ptr[__nesc_mote]);
  memset((void *)&S4StateM$rcv_clusterbuffer_busy[__nesc_mote], 0, sizeof S4StateM$rcv_clusterbuffer_busy[__nesc_mote]);
  memset((void *)&S4StateM$cluster_msg_length[__nesc_mote], 0, sizeof S4StateM$cluster_msg_length[__nesc_mote]);
  memset((void *)&S4StateM$cluster_send_busy[__nesc_mote], 0, sizeof S4StateM$cluster_send_busy[__nesc_mote]);
  memset((void *)&S4StateM$cluster_seqno[__nesc_mote], 0, sizeof S4StateM$cluster_seqno[__nesc_mote]);
  memset((void *)&S4StateM$cluster_msg_ptr[__nesc_mote], 0, sizeof S4StateM$cluster_msg_ptr[__nesc_mote]);
  memset((void *)&S4StateM$cluster_data_ptr[__nesc_mote], 0, sizeof S4StateM$cluster_data_ptr[__nesc_mote]);
  memset((void *)&S4StateM$next_dv[__nesc_mote], 0, sizeof S4StateM$next_dv[__nesc_mote]);
  memset((void *)&S4StateM$curr_dv_size[__nesc_mote], 0, sizeof S4StateM$curr_dv_size[__nesc_mote]);
  memset((void *)&S4StateM$current_scope[__nesc_mote], 0, sizeof S4StateM$current_scope[__nesc_mote]);
  memset((void *)&S4StateM$scope_age[__nesc_mote], 0, sizeof S4StateM$scope_age[__nesc_mote]);
  memset((void *)&S4StateM$largest_scope[__nesc_mote], 0, sizeof S4StateM$largest_scope[__nesc_mote]);
  memset((void *)&S4StateM$beacon_round[__nesc_mote], 0, sizeof S4StateM$beacon_round[__nesc_mote]);
  memset((void *)&S4StateM$dv_round[__nesc_mote], 0, sizeof S4StateM$dv_round[__nesc_mote]);
  memset((void *)&S4StateM$sent_bv[__nesc_mote], 0, sizeof S4StateM$sent_bv[__nesc_mote]);
  memset((void *)&S4StateM$sent_dv[__nesc_mote], 0, sizeof S4StateM$sent_dv[__nesc_mote]);

  /* Module FilterLocalCommM */
  FilterLocalCommM$initialized[__nesc_mote] = FALSE;

  /* Module LinkEstimatorCommM */
  memset((void *)&LinkEstimatorCommM$filter_by_strength[__nesc_mote], 0, sizeof LinkEstimatorCommM$filter_by_strength[__nesc_mote]);
  memset((void *)&LinkEstimatorCommM$reverse_period[__nesc_mote], 0, sizeof LinkEstimatorCommM$reverse_period[__nesc_mote]);
  memset((void *)&LinkEstimatorCommM$reverse_jitter[__nesc_mote], 0, sizeof LinkEstimatorCommM$reverse_jitter[__nesc_mote]);
  memset((void *)&LinkEstimatorCommM$reverse_info_index[__nesc_mote], 0, sizeof LinkEstimatorCommM$reverse_info_index[__nesc_mote]);
  memset((void *)&LinkEstimatorCommM$state_is_active[__nesc_mote], 0, sizeof LinkEstimatorCommM$state_is_active[__nesc_mote]);
  memset((void *)&LinkEstimatorCommM$send_buffer[__nesc_mote], 0, sizeof LinkEstimatorCommM$send_buffer[__nesc_mote]);
  memset((void *)&LinkEstimatorCommM$link_msg_ptr[__nesc_mote], 0, sizeof LinkEstimatorCommM$link_msg_ptr[__nesc_mote]);
  memset((void *)&LinkEstimatorCommM$link_info_buf[__nesc_mote], 0, sizeof LinkEstimatorCommM$link_info_buf[__nesc_mote]);
  memset((void *)&LinkEstimatorCommM$send_buffer_busy[__nesc_mote], 0, sizeof LinkEstimatorCommM$send_buffer_busy[__nesc_mote]);
  memset((void *)&LinkEstimatorCommM$reverse_msg_length[__nesc_mote], 0, sizeof LinkEstimatorCommM$reverse_msg_length[__nesc_mote]);
  LinkEstimatorCommM$initialized[__nesc_mote] = FALSE;

  /* Module Atm128AlarmAsyncP$0 */
  memset((void *)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[__nesc_mote], 0, sizeof /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[__nesc_mote]);
  memset((void *)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[__nesc_mote], 0, sizeof /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[__nesc_mote]);
  memset((void *)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[__nesc_mote], 0, sizeof /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[__nesc_mote]);
  memset((void *)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[__nesc_mote], 0, sizeof /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[__nesc_mote]);

  /* Module HplAtm128Timer0AsyncP */
  HplAtm128Timer0AsyncP$inOverflow[__nesc_mote] = 0;
  HplAtm128Timer0AsyncP$lastZero[__nesc_mote] = 0;
  HplAtm128Timer0AsyncP$oldScale[__nesc_mote] = AVR_CLOCK_OFF;
  memset((void *)&HplAtm128Timer0AsyncP$compare[__nesc_mote], 0, sizeof HplAtm128Timer0AsyncP$compare[__nesc_mote]);
  memset((void *)&HplAtm128Timer0AsyncP$overflow[__nesc_mote], 0, sizeof HplAtm128Timer0AsyncP$overflow[__nesc_mote]);

  /* Module AlarmToTimerC$0 */
  memset((void *)&/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[__nesc_mote], 0, sizeof /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[__nesc_mote]);
  memset((void *)&/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[__nesc_mote], 0, sizeof /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[__nesc_mote]);

  /* Module VirtualizeTimerC$0 */
  memset((void *)&/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[__nesc_mote], 0, sizeof /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[__nesc_mote]);

  /* Module CounterToLocalTimeC$0 */

  /* Module LinkEstimatorM */
  memset((void *)&LinkEstimatorM$active_neighbors[__nesc_mote], 0, sizeof LinkEstimatorM$active_neighbors[__nesc_mote]);
  memset((void *)&LinkEstimatorM$neighborCache[__nesc_mote], 0, sizeof LinkEstimatorM$neighborCache[__nesc_mote]);
  memset((void *)&LinkEstimatorM$neighborCachePtrs[__nesc_mote], 0, sizeof LinkEstimatorM$neighborCachePtrs[__nesc_mote]);
  memset((void *)&LinkEstimatorM$state_is_active[__nesc_mote], 0, sizeof LinkEstimatorM$state_is_active[__nesc_mote]);
  memset((void *)&LinkEstimatorM$current_window[__nesc_mote], 0, sizeof LinkEstimatorM$current_window[__nesc_mote]);
  memset((void *)&LinkEstimatorM$min_packets[__nesc_mote], 0, sizeof LinkEstimatorM$min_packets[__nesc_mote]);
  memset((void *)&LinkEstimatorM$link_upd_timer_int[__nesc_mote], 0, sizeof LinkEstimatorM$link_upd_timer_int[__nesc_mote]);

  /* Module UARTLoggerM */
  memset((void *)&UARTLoggerM$buffers[__nesc_mote], 0, sizeof UARTLoggerM$buffers[__nesc_mote]);
  memset((void *)&UARTLoggerM$stat_received[__nesc_mote], 0, sizeof UARTLoggerM$stat_received[__nesc_mote]);
  memset((void *)&UARTLoggerM$stat_self_log[__nesc_mote], 0, sizeof UARTLoggerM$stat_self_log[__nesc_mote]);
  memset((void *)&UARTLoggerM$stat_self_log_no_buffer[__nesc_mote], 0, sizeof UARTLoggerM$stat_self_log_no_buffer[__nesc_mote]);
  memset((void *)&UARTLoggerM$stat_written[__nesc_mote], 0, sizeof UARTLoggerM$stat_written[__nesc_mote]);
  memset((void *)&UARTLoggerM$stat_bad_buffer[__nesc_mote], 0, sizeof UARTLoggerM$stat_bad_buffer[__nesc_mote]);
  memset((void *)&UARTLoggerM$stat_no_buffer[__nesc_mote], 0, sizeof UARTLoggerM$stat_no_buffer[__nesc_mote]);
  memset((void *)&UARTLoggerM$stat_send_failed[__nesc_mote], 0, sizeof UARTLoggerM$stat_send_failed[__nesc_mote]);
  memset((void *)&UARTLoggerM$stat_send_done_failed[__nesc_mote], 0, sizeof UARTLoggerM$stat_send_done_failed[__nesc_mote]);
  memset((void *)&UARTLoggerM$min_available_buffers[__nesc_mote], 0, sizeof UARTLoggerM$min_available_buffers[__nesc_mote]);
  memset((void *)&UARTLoggerM$max_queued_send[__nesc_mote], 0, sizeof UARTLoggerM$max_queued_send[__nesc_mote]);
  memset((void *)&UARTLoggerM$msg_size[__nesc_mote], 0, sizeof UARTLoggerM$msg_size[__nesc_mote]);

  /* Module NoLedsC */

  /* Module S4QueuedSendM */
  memset((void *)&S4QueuedSendM$max_retransmit_count[__nesc_mote], 0, sizeof S4QueuedSendM$max_retransmit_count[__nesc_mote]);
  S4QueuedSendM$initialized[__nesc_mote] = FALSE;
  memset((void *)&S4QueuedSendM$msgqueue[__nesc_mote], 0, sizeof S4QueuedSendM$msgqueue[__nesc_mote]);
  memset((void *)&S4QueuedSendM$enqueue_next[__nesc_mote], 0, sizeof S4QueuedSendM$enqueue_next[__nesc_mote]);
  memset((void *)&S4QueuedSendM$dequeue_next[__nesc_mote], 0, sizeof S4QueuedSendM$dequeue_next[__nesc_mote]);
  memset((void *)&S4QueuedSendM$retransmit[__nesc_mote], 0, sizeof S4QueuedSendM$retransmit[__nesc_mote]);
  S4QueuedSendM$fQueueIdle[__nesc_mote] = TRUE;

  /* Module RandomLfsrC */
  memset((void *)&RandomLfsrC$shiftReg[__nesc_mote], 0, sizeof RandomLfsrC$shiftReg[__nesc_mote]);
  memset((void *)&RandomLfsrC$mask[__nesc_mote], 0, sizeof RandomLfsrC$mask[__nesc_mote]);

  /* Module S4ActiveMessageC */

  /* Module LedsP */

  /* Module LinkEstimatorTaggerCommM */
  memset((void *)&LinkEstimatorTaggerCommM$my_seqno[__nesc_mote], 0, sizeof LinkEstimatorTaggerCommM$my_seqno[__nesc_mote]);
  LinkEstimatorTaggerCommM$initialized[__nesc_mote] = FALSE;

  /* Module GenericCommReallyPromiscuousM */
  GenericCommReallyPromiscuousM$initialized[__nesc_mote] = FALSE;

  /* Module AMQueueEntryP$0 */

  /* Module AMQueueImplP$0 */
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[__nesc_mote] = 4;
  memset((void *)&/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[__nesc_mote], 0, sizeof /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[__nesc_mote]);
  memset((void *)&/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[__nesc_mote], 0, sizeof /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[__nesc_mote]);

  /* Module AMQueueEntryP$1 */

  /* Module AMQueueEntryP$2 */

  /* Module AMQueueEntryP$3 */

  /* Module CoordinateTableM */
  memset((void *)&CoordinateTableM$num_active[__nesc_mote], 0, sizeof CoordinateTableM$num_active[__nesc_mote]);
  memset((void *)&CoordinateTableM$table[__nesc_mote], 0, sizeof CoordinateTableM$table[__nesc_mote]);
  memset((void *)&CoordinateTableM$tablePtrs[__nesc_mote], 0, sizeof CoordinateTableM$tablePtrs[__nesc_mote]);
  memset((void *)&CoordinateTableM$state_is_active[__nesc_mote], 0, sizeof CoordinateTableM$state_is_active[__nesc_mote]);
  CoordinateTableM$get_entry$current_entry[__nesc_mote] = 0;

  /* Module S4TopologyM */
  memset((void *)&S4TopologyM$root_beacon_id[__nesc_mote], 0, sizeof S4TopologyM$root_beacon_id[__nesc_mote]);
  memset((void *)&S4TopologyM$n_root_beacons[__nesc_mote], 0, sizeof S4TopologyM$n_root_beacons[__nesc_mote]);

  /* Module LBlinkM */
  memset((void *)&LBlinkM$rate[__nesc_mote], 0, sizeof LBlinkM$rate[__nesc_mote]);
  memset((void *)&LBlinkM$yellow[__nesc_mote], 0, sizeof LBlinkM$yellow[__nesc_mote]);
  memset((void *)&LBlinkM$red[__nesc_mote], 0, sizeof LBlinkM$red[__nesc_mote]);
  memset((void *)&LBlinkM$green[__nesc_mote], 0, sizeof LBlinkM$green[__nesc_mote]);
  memset((void *)&LBlinkM$timer_on[__nesc_mote], 0, sizeof LBlinkM$timer_on[__nesc_mote]);
  LBlinkM$initialized[__nesc_mote] = FALSE;

  /* Module RandomMlcgC */
  memset((void *)&RandomMlcgC$seed[__nesc_mote], 0, sizeof RandomMlcgC$seed[__nesc_mote]);

}