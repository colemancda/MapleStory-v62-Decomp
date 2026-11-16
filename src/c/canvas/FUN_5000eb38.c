/* FUN_5000eb38 - 0x5000eb38 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __thiscall FUN_5000eb38(void *this,undefined4 param_1,ushort *param_2)

{
  int iVar1;
  
  if (param_2 == (ushort *)0x0) {
    param_2 = this;
  }
  if ((this != param_2) || ((short)param_1 != *(short *)this)) {
    iVar1 = FUN_5000cfbb(this,param_2,0,param_1);
    if (iVar1 < 0) {
      FUN_50012c97(iVar1);
    }
  }
  return;
}


