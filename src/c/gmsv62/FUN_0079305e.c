/* FUN_0079305e - 0x0079305e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Type propagation algorithm not settling */

void FUN_0079305e(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int unaff_EBP;
  int *piVar5;
  int aiStack_20 [3];
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x524) == 0) {
    iVar2 = *(int *)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(iVar2 + 0x74);
    uStack_10 = 0x79308c;
    FUN_00408b49();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + 0x10) != 0) {
      uStack_10 = 0x79309e;
      FUN_00408b49();
      uStack_10 = 0x7930a6;
      FUN_00402fa6();
      *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(iVar2 + 0x78);
    }
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      piVar5 = *(int **)(unaff_EBP + 8);
    }
    else {
      uStack_10 = 0x7930bb;
      FUN_00408b49();
      uStack_10 = 0x7930c3;
      FUN_00402fa6();
      piVar5 = *(int **)(iVar2 + 0x7c);
      *(int **)(unaff_EBP + 8) = piVar5;
    }
    if ((piVar5 == (int *)0x0) || (*piVar5 == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(uint *)(*piVar5 + -4) >> 1;
    }
    if (uVar1 != 0) {
      uStack_10 = *(undefined4 *)(unaff_EBP + 0x10);
      uStack_14 = 0x7fffffff;
      aiStack_20[2] = ((*(int *)(unaff_EBP + 0xc) + 10) * 1000) / 0x10;
      aiStack_20[1] = 0x10;
      aiStack_20[0] = extraout_ECX + 0xd3c;
      *(int **)(unaff_EBP + 0x10) = aiStack_20 + 1;
      FUN_0041160e();
      *(int **)(unaff_EBP + 0x14) = aiStack_20;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00486ada(aiStack_20);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar2 = FUN_0043f900();
      uVar1 = (uint)(iVar2 == 0);
      uVar3 = FUN_004091f9(uVar1);
      uVar4 = FUN_0067e5d1(uVar3);
      FUN_00424e82(uVar4);
      FUN_0042dc8f(uVar4,uVar3,uVar1);
    }
    if (*(int *)(unaff_EBP + 8) != 0) {
      uStack_10 = 0x79315e;
      FUN_004030b1();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


