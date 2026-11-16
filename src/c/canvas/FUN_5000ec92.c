/* FUN_5000ec92 - 0x5000ec92 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __thiscall FUN_5000ec92(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)this + 0x34))(this,param_2,param_3,&param_3);
  if (iVar1 < 0) {
    FUN_50012ca5(iVar1,this,&DAT_50018368);
  }
  *param_1 = param_3;
  return;
}


