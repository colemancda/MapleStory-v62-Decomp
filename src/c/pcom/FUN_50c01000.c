/* FUN_50c01000 - 0x50c01000 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __cdecl FUN_50c01000(uint *param_1,uint *param_2,uint param_3,void *param_4)

{
  void *this;
  uint local_13c [77];
  uint local_8;
  
  local_8 = 0;
  FUN_50c01427((uint *)&DAT_50c170b0,(int)local_13c);
  FUN_50c013e8(local_13c,param_4);
  if (param_3 != 0) {
    FUN_50c022d6(this,local_13c,param_2,param_3,param_1,&local_8);
  }
  FUN_50c02423(local_13c,local_8 + (int)param_1,&local_8);
  return;
}


