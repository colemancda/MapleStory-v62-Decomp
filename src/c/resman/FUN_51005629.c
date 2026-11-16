/* FUN_51005629 - 0x51005629 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


int __cdecl FUN_51005629(int *param_1)

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
    uVar3 = FUN_51005660(param_1);
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


