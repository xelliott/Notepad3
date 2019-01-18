#include "StyleLexers.h"

// ----------------------------------------------------------------------------

KEYWORDLIST KeyWords_Fortran = {
  // Primary keywords and identifiers
  "assign backspace block call close common continue data dimension do else end "
  "endfile endif entry equivalence external format function goto if implicit inquire intrinsic "
  "open parameter pause print program read return rewind rewrite save stop subroutine then write "
  "allocatable allocate case contains cycle deallocate elsewhere exit include interface intent "
  "module namelist nullify only operator optional pointer private procedure public recursive "
  "result select sequence target use while where "
  "elemental forall pure "
  "abstract associate asynchronous bind class deferred enum enumerator extends final flush "
  "generic import non_overridable nopass pass protected value volatile wait "
  "block codimension concurrent contiguous critical error stop submodule sync images "
  "memory lock unlock",
  // Intrinsic functions
  "abort abs access achar acos acosd acosh adjustl adjustr aimag aint alarm all allocated and "
  "anint any asin asind asinh associated atan atand atan2 atan2d atanh atomic_add atomic_and "
  "atomic_cas atomic_define atomic_fetch_add atomic_fetch_and atomic_fetch_or atomic_fetch_xor "
  "atomic_or atomic_ref atomic_xor backtrace bessel_j0 bessel_j1 bessel_jn bessel_y0 bessel_y1 "
  "bessel_yn bge bgt bit_size ble blt btest c_associated c_f_pointer c_f_procpointer c_funloc "
  "c_loc c_sizeof ceiling char chdir chmod cmplx co_broadcast co_max co_min co_reduce co_sum "
  "command_argument_count compiler_options compiler_version complex conjg cos cosd cosh cotan "
  "cotand count cpu_time cshift ctime date_and_time dble dcmplx digits dim dot_product dprod "
  "dreal dshiftl dshiftr dtime eoshift epsilon erf erfc erfc_scaled etime event_query "
  "execute_command_line exit exp exponent extends_type_of fdate fget fgetc findloc floor flush "
  "fnum fput fputc fraction free fseek fstat ftell gamma gerror getarg get_command "
  "get_command_argument getcwd getenv get_environment_variable getgid getlog getpid getuid gmtime "
  "hostnm huge hypot iachar iall iand iany iargc ibclr ibits ibset ichar idate ieor ierrno "
  "image_index index int int2 int8 ior iparity irand is_contiguous is_iostat_end is_iostat_eor "
  "isatty ishft ishftc isnan itime kill kind lbound lcobound leadz len len_trim lge lgt link "
  "lle llt lnblnk loc log log10 log_gamma logical long lshift lstat ltime malloc maskl maskr "
  "matmul max maxexponent maxloc maxval mclock mclock8 merge merge_bits min minexponent minloc "
  "minval mod modulo move_alloc mvbits nearest new_line nint norm2 not null num_images or pack "
  "parity perror popcnt poppar precision present product radix ran rand random_init "
  "random_number random_seed range rank  real rename repeat reshape rrspacing rshift same_type_as "
  "scale scan secnds second selected_char_kind selected_int_kind selected_real_kind set_exponent "
  "shape shifta shiftl shiftr sign signal sin sind sinh size sizeof sleep spacing spread sqrt "
  "srand stat storage_size sum symlnk system system_clock tan tand tanh this_image time time8 "
  "tiny trailz transfer transpose trim ttynam ubound ucobound umask unlink unpack verify xor",
  // Extended and user defined functions
  "",
  "", "", "", "", "", ""
};

EDITLEXER lexFortran = {
  SCLEX_FORTRAN, IDS_LEX_FORTRAN_SRC, L"Fortran Source Code", L"f; for; ftn; fpp; f90; f95; f03; f08; f2k; hf", L"",
  &KeyWords_Fortran,{
    { { STYLE_DEFAULT }, IDS_LEX_STR_63126, L"Default", L"", L"" },
    //{ {SCE_F_DEFAULT}, IDS_LEX_STR_63126, L"Default", L"", L"" },
    { { SCE_F_IDENTIFIER }, IDS_LEX_STR_63129, L"Identifier", L"", L"" },
    { { SCE_F_COMMENT }, IDS_LEX_STR_63127, L"Comment", L"fore:#008000", L"" },
    { { SCE_F_WORD }, IDS_LEX_STR_63128, L"Keyword", L"bold; fore:#0A246A", L"" },
    { { SCE_F_WORD2 }, IDS_LEX_STR_63338, L"Standard Function", L"bold; fore:#3C6CDD", L"" },
    { { MULTI_STYLE(SCE_F_STRING1,SCE_F_STRING2,SCE_F_STRINGEOL,0) }, IDS_LEX_STR_63131, L"String", L"fore:#008000", L"" },
    { { SCE_F_NUMBER }, IDS_LEX_STR_63130, L"Number", L"fore:#FF0000", L"" },
    { { MULTI_STYLE(SCE_F_OPERATOR, SCE_F_OPERATOR2, 0, 0) }, IDS_LEX_STR_63132, L"Operator", L"fore:#B000B0", L"" },
    { { SCE_F_PREPROCESSOR }, IDS_LEX_STR_63133, L"Preprocessor", L"fore:#FF8000", L"" },
    { { SCE_F_LABEL }, IDS_LEX_STR_63235, L"Label", L"fore:#808000", L"" },
    { { SCE_F_CONTINUATION }, IDS_LEX_STR_63242, L"Line Change", L"fore:#008000", L"" },
    EDITLEXER_SENTINEL } };

