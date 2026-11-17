/* FUN_006bdaae - 0x006bdaae in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006bdaae(FILETIME *param_1,undefined4 param_2)

{
  char *pcVar1;
  WORD local_24;
  WORD local_22;
  WORD local_1e;
  _SYSTEMTIME local_14;
  
  (*DAT_0097b4a8)(&local_24);
  FileTimeToSystemTime(param_1,&local_14);
  if (((local_24 == local_14.wYear) && (local_22 == local_14.wMonth)) && (local_1e == local_14.wDay)
     ) {
    pcVar1 = s__d__02d_0096aa48;
  }
  else {
    pcVar1 = s__02d__02d_0096aa3c;
    local_14.wHour = local_14.wMonth;
    local_14.wMinute = local_14.wDay;
  }
  FUN_00434e21(param_2,pcVar1,local_14.wHour,local_14.wMinute);
  return;
}


