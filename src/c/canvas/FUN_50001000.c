/* FUN_50001000 - 0x50001000 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __cdecl FUN_50001000(uint *param_1,uint *param_2,uint param_3,void *param_4)

{
  void *this;
  uint local_13c [77];
  uint local_8;
  
  local_8 = 0;
  FUN_500013b1((uint *)&DAT_500180b0,(int)local_13c);
  FUN_50001372(local_13c,param_4);
  if (param_3 != 0) {
    FUN_50002260(this,local_13c,param_2,param_3,param_1,&local_8);
  }
  FUN_500023b8(local_13c,local_8 + (int)param_1,&local_8);
  return;
}


