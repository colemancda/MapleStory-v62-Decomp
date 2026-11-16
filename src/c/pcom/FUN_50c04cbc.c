/* FUN_50c04cbc - 0x50c04cbc in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


uint __fastcall FUN_50c04cbc(int *param_1)

{
  int iVar1;
  
  if (((int *)*param_1 != (int *)0x0) && (iVar1 = *(int *)*param_1, iVar1 != 0)) {
    return *(uint *)(iVar1 + -4) >> 1;
  }
  return 0;
}


