/* FUN_5000d431 - 0x5000d431 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


short * __thiscall FUN_5000d431(void *this,undefined2 *param_1,char param_2)

{
  int iVar1;
  short *unaff_retaddr;
  
  if (param_2 == '\0') {
    memcpy(this,param_1,0x10);
    *param_1 = 0;
  }
  else {
    Ordinal_8(this);
    iVar1 = FUN_50006336(this,unaff_retaddr);
    if (iVar1 < 0) {
      FUN_50012c97(iVar1);
    }
  }
  return this;
}


