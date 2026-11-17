/* FUN_004839ff - 0x004839ff in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


longlong FUN_004839ff(int param_1)

{
  longlong lVar1;
  _SYSTEMTIME local_1c;
  _FILETIME local_c;
  
  GetLocalTime(&local_1c);
  SystemTimeToFileTime(&local_1c,&local_c);
  lVar1 = __allmul(param_1,param_1 >> 0x1f,600000000,0);
  return lVar1 + CONCAT44(local_c.dwHighDateTime,local_c.dwLowDateTime);
}


