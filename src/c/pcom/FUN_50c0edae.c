/* FUN_50c0edae - 0x50c0edae in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


short * __thiscall FUN_50c0edae(void *this,short *param_1)

{
  int iVar1;
  
  iVar1 = FUN_50c09a25(this,param_1);
  if (iVar1 < 0) {
    FUN_50c101c4(iVar1);
  }
  return this;
}


