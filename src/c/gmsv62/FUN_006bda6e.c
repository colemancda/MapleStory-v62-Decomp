/* FUN_006bda6e - 0x006bda6e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006bda6e(FILETIME *param_1,undefined4 param_2)

{
  _SYSTEMTIME local_14;
  
  FileTimeToSystemTime(param_1,&local_14);
  FUN_00434e21(param_2,s__d__02d__02d__02d__02d_0096aa24,local_14.wYear,local_14.wMonth,
               local_14.wDay,local_14.wHour,local_14.wMinute);
  return;
}


