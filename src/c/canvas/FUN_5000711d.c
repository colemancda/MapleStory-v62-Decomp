/* FUN_5000711d - 0x5000711d in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


int __cdecl FUN_5000711d(int *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  if ((undefined4 *)*param_1 == (undefined4 *)0x0) {
    puVar2 = (ushort *)0x0;
  }
  else {
    puVar2 = *(ushort **)*param_1;
  }
  if (puVar2 != (ushort *)0x0) {
    uVar3 = FUN_50007154(param_1);
    if (0 < (int)uVar3) {
      do {
        uVar1 = *puVar2;
        puVar2 = puVar2 + 1;
        uVar3 = uVar3 - 1;
        iVar4 = iVar4 * 0x20 + 1 + (uint)uVar1;
      } while (uVar3 != 0);
    }
  }
  return iVar4;
}


