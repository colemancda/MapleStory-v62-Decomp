/* FUN_00420479 - 0x00420479 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00420479(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined1 local_13c [308];
  int local_8;
  
  local_8 = 0;
  FUN_004208df(&DAT_00963e94,local_13c);
  FUN_00420861(local_13c,param_4,param_2,param_3);
  if (param_3 != 0) {
    FUN_0042286d(local_13c,param_2,param_3,param_1,&local_8);
  }
  FUN_004229b8(local_13c,local_8 + param_1,&local_8);
  return;
}


