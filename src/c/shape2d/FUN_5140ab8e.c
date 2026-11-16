/* FUN_5140ab8e - 0x5140ab8e in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


short * __thiscall FUN_5140ab8e(void *this,undefined2 *param_1,char param_2)

{
  int iVar1;
  short *unaff_retaddr;
  
  if (param_2 == '\0') {
    memcpy(this,param_1,0x10);
    *param_1 = 0;
  }
  else {
    Ordinal_8(this);
    iVar1 = FUN_51409c5c(this,unaff_retaddr);
    if (iVar1 < 0) {
      FUN_5140ac47(iVar1);
    }
  }
  return this;
}


