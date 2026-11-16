/* FUN_51005660 - 0x51005660 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


uint __fastcall FUN_51005660(int *param_1)

{
  int iVar1;
  
  if (((int *)*param_1 != (int *)0x0) && (iVar1 = *(int *)*param_1, iVar1 != 0)) {
    return *(uint *)(iVar1 + -4) >> 1;
  }
  return 0;
}


