/* FUN_5000b4b0 - 0x5000b4b0 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void FUN_5000b4b0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int extraout_ECX;
  uint uVar5;
  int unaff_EBP;
  
  FUN_50012d80();
  *(undefined4 **)(unaff_EBP + -0x10) = (undefined4 *)(extraout_ECX + 0x44);
  FUN_500024f7();
  iVar4 = *(int *)(extraout_ECX + 0x68);
  iVar3 = *(int *)(extraout_ECX + 0x60);
  iVar1 = extraout_ECX + 0x60;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar4 < iVar3) {
    (*DAT_50081c5c)(iVar1,0,0,*(undefined4 *)(extraout_ECX + 0x28),
                    *(undefined4 *)(extraout_ECX + 0x2c));
    (*DAT_50081cf8)(iVar1,iVar1,extraout_ECX + 0x70);
    uVar5 = *(uint *)(extraout_ECX + 0x58);
    while (uVar5 != 0) {
      iVar3 = *(int *)((-(uint)(uVar5 != 0) & uVar5 - 0x10) + 4);
      (*DAT_50081cf8)(iVar1,iVar1,uVar5);
      uVar5 = -(uint)(iVar3 != 0) & iVar3 + 0x10U;
    }
  }
  (*DAT_50081cf8)(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 8),iVar1);
  piVar2 = (int *)(extraout_ECX + 0x48);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    *(undefined4 *)(extraout_ECX + 0x44) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


