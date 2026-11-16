/* FUN_10001130 - 0x10001130 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


void __cdecl FUN_10001130(uint *param_1,uint *param_2,uint param_3,undefined4 *param_4)

{
  uint local_138;
  uint local_134 [77];
  
  local_138 = 0;
  FUN_100015c0((undefined4 *)&DAT_10010060,(int)local_134);
  FUN_10001520(local_134,param_4);
  if (param_3 != 0) {
    FUN_10003990(local_134,param_2,param_3,param_1,&local_138);
  }
  FUN_10003b40(local_134,local_138 + (int)param_1,&local_138);
  return;
}


