/* FUN_007eea62 - 0x007eea62 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007eea62(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0xc);
  while (uVar3 != 0) {
    iVar1 = *(int *)((-(uint)(uVar3 != 0) & uVar3 - 0x10) + 4);
    iVar2 = FUN_0049e8e1();
    FUN_00414f8b(uVar3);
    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(uVar3 + 4);
    uVar3 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
  }
  return;
}


