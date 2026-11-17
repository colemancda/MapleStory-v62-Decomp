/* FUN_0073ecb5 - 0x0073ecb5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0073ecb5(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int iVar5;
  int unaff_EBP;
  bool bVar6;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0xb34) == 0) goto LAB_0073eed3;
  if (*(int *)(unaff_EBP + 0x10) < 0) {
    iVar3 = *(int *)(unaff_EBP + 0xc);
    bVar6 = *(int *)(extraout_ECX + 0xc74) <= iVar3;
    if (bVar6) {
      iVar2 = *(int *)(extraout_ECX + 0xb30);
      iVar5 = iVar3 - iVar2;
    }
    else {
      iVar2 = *(int *)(extraout_ECX + 0xb30);
      iVar5 = iVar2 - iVar3;
    }
    if (iVar5 < 0xe) goto LAB_0073eed3;
    if (bVar6) {
      bVar6 = *(int *)(extraout_ECX + 0xc64) < 0x1b;
    }
    else {
      bVar6 = 0x1fa < *(int *)(extraout_ECX + 0xc64);
    }
    if (bVar6) goto LAB_0073eed3;
    *(int *)(extraout_ECX + 0xc64) = *(int *)(extraout_ECX + 0xc64) + ((iVar2 - iVar3) / 0xd) * 0xd;
    iVar3 = *(int *)(extraout_ECX + 0xc64);
  }
  else {
    iVar3 = *(int *)(extraout_ECX + 0xc64);
    bVar6 = *(int *)(unaff_EBP + 0x10) == 1;
    if (bVar6) {
      bVar1 = 0x1fa < iVar3;
    }
    else {
      bVar1 = iVar3 < 0x1a;
    }
    if (bVar1) goto LAB_0073eed3;
    iVar3 = ((-(uint)bVar6 & 0x1a) - 0xd) + iVar3;
    *(int *)(extraout_ECX + 0xc64) = iVar3;
  }
  if (iVar3 < 0x1fb) {
    if (iVar3 < 0x1b) {
      *(undefined4 *)(extraout_ECX + 0xc64) = 0x1a;
    }
  }
  else {
    *(undefined4 *)(extraout_ECX + 0xc64) = 0x1fb;
  }
  iVar3 = *(int *)(extraout_ECX + 0xc64);
  *(int *)(extraout_ECX + 0xc6c) = iVar3 / 0xd;
  if (iVar3 % 0xd == 0) {
    *(int *)(extraout_ECX + 0xc64) = iVar3 + 2;
  }
  iVar3 = 0x1fd - *(int *)(extraout_ECX + 0xc64);
  *(int *)(extraout_ECX + 0xc74) = iVar3;
  *(int *)(extraout_ECX + 0xb30) = iVar3;
  FUN_00747946(1);
  if (*(int **)(extraout_ECX + 0xaa0) != (int *)0x0) {
    (**(code **)(**(int **)(extraout_ECX + 0xaa0) + 0xc))();
  }
  iVar3 = FUN_004029b9(0x74);
  *(int *)(unaff_EBP + 0x10) = iVar3;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_004abf25();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0048b9e9(uVar4);
  (**(code **)(**(int **)(extraout_ECX + 0xaa0) + 0x20))
            (extraout_ECX,0x3f1,1,4,0x236 - *(int *)(extraout_ECX + 3000),
             0x1fe - *(int *)(extraout_ECX + 0xc64),*(int *)(extraout_ECX + 0xc64) + -2,0);
  *(int *)(*(int *)(extraout_ECX + 0xaa0) + 0x34) = 0x244 - *(int *)(extraout_ECX + 3000);
  if (*(int *)(extraout_ECX + 0xc64) < 0x34) {
    *(undefined4 *)(*(int *)(extraout_ECX + 0xaa0) + 0x68) = 1;
  }
  iVar3 = 0;
  if (DAT_0097be44 != 0) {
    iVar3 = *(int *)(DAT_0097be44 + -4);
  }
  iVar3 = iVar3 - *(int *)(extraout_ECX + 0xc6c);
  FUN_004ad003(iVar3 + 1);
  FUN_004acfe9(iVar3);
  FUN_00744523();
  *(undefined4 *)(DAT_00978134 + 0x54) = *(undefined4 *)(extraout_ECX + 0xc64);
LAB_0073eed3:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


