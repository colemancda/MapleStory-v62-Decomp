/* FUN_50407998 - 0x50407998 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


short * __thiscall FUN_50407998(void *this,undefined2 *param_1,char param_2)

{
  int iVar1;
  short *unaff_retaddr;
  
  if (param_2 == '\0') {
    memcpy(this,param_1,0x10);
    *param_1 = 0;
  }
  else {
    Ordinal_8(this);
    iVar1 = FUN_504057dd(this,unaff_retaddr);
    if (iVar1 < 0) {
      FUN_5042a358(iVar1);
    }
  }
  return this;
}


