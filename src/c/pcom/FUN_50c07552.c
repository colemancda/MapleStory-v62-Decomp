/* FUN_50c07552 - 0x50c07552 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


int __cdecl FUN_50c07552(ushort *param_1)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = 0;
  if (param_1 != (ushort *)0x0) {
    uVar2 = *param_1;
    while (uVar2 != 0) {
      iVar1 = iVar1 * 0x20 + 1 + (uint)uVar2;
      param_1 = param_1 + 1;
      uVar2 = *param_1;
    }
  }
  return iVar1;
}


