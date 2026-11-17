/* FUN_005eb840 - 0x005eb840 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005eb840(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int extraout_ECX;
  int iVar6;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(*(int *)(extraout_ECX + 0x98) + 0xc) != 0) {
    iVar5 = *(int *)(unaff_EBP + 8);
    if (iVar5 != -1) {
      iVar6 = 0;
      iVar2 = *(int *)(*(int *)(extraout_ECX + 0xac) + 8 + iVar5 * 0x14);
      iVar1 = *(int *)(extraout_ECX + 0xac) + iVar5 * 0x14;
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      if (iVar2 == 0) {
        FUN_0040b905(*(undefined4 *)(extraout_ECX + 0x98),iVar5,iVar1);
        iVar6 = *(int *)(unaff_EBP + -0x10);
      }
      uVar4 = *(uint *)(iVar1 + 0xc);
      while (uVar4 != 0) {
        iVar5 = *(int *)((-(uint)(uVar4 != 0) & uVar4 - 0x10) + 4);
        iVar6 = iVar6 + *(int *)(*(int *)(uVar4 + 4) + 0x10);
        uVar4 = iVar5 + 0x10U & -(uint)(iVar5 != 0);
      }
      FUN_007fc0b7(iVar6,0);
    }
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    do {
      iVar5 = FUN_005e4404(0);
      if (iVar5 != 0) break;
      FUN_007f17b3();
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    } while (*(int *)(unaff_EBP + -0x10) < 0x37);
  }
  FUN_0060142b(0xa6,0,0);
  uVar3 = *(undefined4 *)(extraout_ECX + 0x94);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00457d37(uVar3);
  FUN_00457cda(*(undefined4 *)(unaff_EBP + 8));
  FUN_00457cda(*(undefined4 *)(unaff_EBP + 0xc));
  if (*(int *)(*(int *)(extraout_ECX + 0x98) + 0xc) != 0) {
    FUN_005e4469(unaff_EBP + -0x20,0,0);
  }
  FUN_004751b2(unaff_EBP + -0x20);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(extraout_ECX + 0x88) = 1;
  FUN_0045ebca();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


