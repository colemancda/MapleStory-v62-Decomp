/* FUN_50011e99 - 0x50011e99 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


short * __fastcall FUN_50011e99(short *param_1)

{
  int iVar1;
  short *unaff_retaddr;
  
  Ordinal_8(param_1);
  iVar1 = FUN_50006336(param_1,unaff_retaddr);
  if (iVar1 < 0) {
    FUN_50012c97(iVar1);
  }
  return param_1;
}


