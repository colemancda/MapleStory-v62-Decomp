/* FUN_004389ac - 0x004389ac in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_004389ac(undefined4 *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if ((undefined4 *)*param_1 == (undefined4 *)0x0) {
    puVar2 = (ushort *)0x0;
  }
  else {
    puVar2 = *(ushort **)*param_1;
  }
  if (puVar2 != (ushort *)0x0) {
    iVar3 = FUN_00432f42();
    if (0 < iVar3) {
      do {
        uVar1 = *puVar2;
        puVar2 = puVar2 + 1;
        iVar3 = iVar3 + -1;
        iVar4 = iVar4 * 0x20 + 1 + (uint)uVar1;
      } while (iVar3 != 0);
    }
  }
  return iVar4;
}


