/* FUN_0060634d - 0x0060634d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0060634d(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int *piStack_1c;
  
  FUN_00879bb8();
  piVar1 = *(int **)(unaff_EBP + 8);
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  piStack_1c = (int *)0x60636d;
  piStack_1c = (int *)FUN_0045e2eb();
  uStack_20 = 0x606373;
  iVar2 = FUN_00537942();
  if (iVar2 == 0) {
    piStack_1c = (int *)0x69c;
    uStack_20 = 0x60638b;
    iVar2 = FUN_004029b9();
    *(int *)(unaff_EBP + 8) = iVar2;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      piStack_1c = (int *)0x60639e;
      iVar2 = FUN_007e62e9();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uVar3 = -(uint)(iVar2 != 0) & iVar2 + 8U;
    *(uint *)(unaff_EBP + -0x14) = -(uint)(uVar3 != 0) & uVar3 - 8;
    piStack_1c = (int *)0x6063c5;
    FUN_004c26c4();
    piStack_1c = (int *)0x0;
    uStack_20 = 1;
    *(undefined4 **)(unaff_EBP + 8) = &uStack_24;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_00679d22(&uStack_24,0xef4);
    uVar5 = 0;
    uVar4 = 2;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_004c2677(2,0);
    FUN_007eddac(uVar4,uVar5);
    piStack_1c = (int *)0x0;
    uStack_20 = 10;
    uStack_24 = 0;
    uVar4 = (**(code **)(*piVar1 + 0x18))();
    FUN_007edf4a(1,1,uVar4);
    piStack_1c = (int *)0x60641a;
    FUN_007e6e3c();
    piStack_1c = (int *)0x606422;
    iVar2 = FUN_004bc6a2();
    if (iVar2 != 1) {
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      piStack_1c = (int *)0x606432;
      FUN_004c26e1();
      goto LAB_00606479;
    }
    uVar4 = *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0xbc);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x14) = uVar4;
    piStack_1c = (int *)0x60644f;
    FUN_004c26e1();
    iVar2 = *(int *)(unaff_EBP + -0x10);
  }
  else {
    *(undefined4 *)(extraout_ECX + 0x14) = 1;
    iVar2 = extraout_ECX;
  }
  uStack_20 = 0x606463;
  piStack_1c = piVar1;
  FUN_00609b69();
  *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(unaff_EBP + 0xc);
  piStack_1c = (int *)0x0;
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(unaff_EBP + 0x10);
  uStack_20 = 0x606479;
  FUN_008161f1();
LAB_00606479:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


