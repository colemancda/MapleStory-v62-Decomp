/* FUN_5140a555 - 0x5140a555 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


short * __fastcall FUN_5140a555(short *param_1)

{
  int iVar1;
  short *unaff_retaddr;
  
  Ordinal_8(param_1);
  iVar1 = FUN_51409c5c(param_1,unaff_retaddr);
  if (iVar1 < 0) {
    FUN_5140ac47(iVar1);
  }
  return param_1;
}


