/* FUN_504057b7 - 0x504057b7 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


short * __fastcall FUN_504057b7(short *param_1)

{
  int iVar1;
  short *unaff_retaddr;
  
  Ordinal_8(param_1);
  iVar1 = FUN_504057dd(param_1,unaff_retaddr);
  if (iVar1 < 0) {
    FUN_5042a358(iVar1);
  }
  return param_1;
}


