/* FUN_50c06259 - 0x50c06259 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


undefined4 __cdecl FUN_50c06259(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_50c0627e(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_50c0627e(param_1);
    Ordinal_201(0,uVar2);
  }
  return *(undefined4 *)(param_1 + 4);
}


