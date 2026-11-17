/* FUN_00689055 - 0x00689055 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00689055(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  uint uVar5;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar2 = *(uint *)(extraout_ECX + 0x28);
  while (uVar2 != 0) {
    iVar1 = *(int *)((-(uint)(uVar2 != 0) & uVar2 - 0x10) + 4);
    uVar5 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
    *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(uVar2 + 4);
    FUN_0068a14e();
    iVar1 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x10);
    iVar3 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0xc);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    (*DAT_0097b504)(unaff_EBP + -0x34,iVar3 + -0x14,iVar1 + -0x32,iVar3 + 0x14,iVar1 + 0x32);
    iVar3 = (*DAT_0097b57c)(unaff_EBP + -0x34,*(undefined4 *)(unaff_EBP + 8),
                            *(undefined4 *)(unaff_EBP + 0xc));
    iVar1 = DAT_00978368;
    if (iVar3 != 0) {
      *(undefined4 *)(DAT_00978368 + 0x208c) = 1;
      uVar4 = FUN_007d1e08();
      *(undefined4 *)(iVar1 + 0x2090) = uVar4;
      FUN_0060142b(0x79,0,0);
      uVar4 = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 8);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00457d37(uVar4);
      FUN_00457cda(0);
      FUN_004751b2(unaff_EBP + -0x24);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_0045ebca();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uVar2 = uVar5;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      FUN_0068a181(0);
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


