/* FUN_504068bd - 0x504068bd in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void __fastcall FUN_504068bd(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0xc);
  while (uVar3 != 0) {
    puVar2 = (undefined4 *)(-(uint)(uVar3 != 0) & uVar3 - 0x10);
    iVar1 = puVar2[1];
    FUN_504050bc(puVar2);
    uVar3 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


