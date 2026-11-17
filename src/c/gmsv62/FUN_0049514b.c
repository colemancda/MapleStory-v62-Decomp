/* FUN_0049514b - 0x0049514b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0049514b(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x78) + 0x500);
  if ((iVar3 == 9) || (iVar3 == 10)) {
    iVar3 = 1;
  }
  iVar4 = (*(int *)(DAT_00978368 + 0x202c) + iVar3 * 2) * 0x3c;
  puVar2 = (undefined4 *)(param_1 + 100);
  iVar3 = 5;
  do {
    uVar1 = FUN_0045c1e1(iVar4 + 0x58 + *(int *)(param_1 + 0x78));
    *puVar2 = uVar1;
    iVar4 = iVar4 + 0xc;
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_008161f1(0);
  return;
}


