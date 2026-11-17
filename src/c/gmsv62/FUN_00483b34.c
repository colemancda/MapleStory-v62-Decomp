/* FUN_00483b34 - 0x00483b34 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


_FILETIME FUN_00483b34(int param_1)

{
  longlong lVar1;
  _SYSTEMTIME local_2c;
  _SYSTEMTIME local_1c;
  _FILETIME local_c;
  
  GetLocalTime(&local_1c);
  SystemTimeToFileTime(&local_1c,&local_c);
  lVar1 = __allmul(param_1,param_1 >> 0x1f,10000,0);
  local_c = (_FILETIME)(lVar1 + CONCAT44(local_c.dwHighDateTime,local_c.dwLowDateTime));
  FileTimeToSystemTime(&local_c,&local_2c);
  return local_c;
}


