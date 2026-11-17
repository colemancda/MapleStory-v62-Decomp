/* FUN_005231da - 0x005231da in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005231da(void)

{
  int iVar1;
  int *piVar2;
  int extraout_ECX;
  uint uVar3;
  uint uVar4;
  int unaff_EBP;
  int iVar5;
  undefined4 local_6c;
  int iStack_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 *puStack_5c;
  
  FUN_00879bb8();
  puStack_5c = *(undefined4 **)(unaff_EBP + 8);
  uStack_60 = 0x5231f4;
  FUN_0081622a();
  puStack_5c = &DAT_00980690;
  uStack_60 = 0x523202;
  FUN_00403191();
  puStack_5c = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_60 = 0x523210;
  FUN_00403191();
  puStack_5c = (undefined4 *)0x0;
  uStack_60 = 0;
  iStack_64 = unaff_EBP + -0x38;
  iStack_68 = unaff_EBP + -0x28;
  *(undefined4 **)(unaff_EBP + -0x18) = &local_6c;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00679e4e(&local_6c,0xd9b);
  iVar1 = unaff_EBP + -0x58;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_64 = 0x52325a;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined4 *)(unaff_EBP + 8) = 0;
  if (iVar1 != 0) {
    puStack_5c = (undefined4 *)(unaff_EBP + -0x10);
    uStack_60 = 0x523270;
    puStack_5c = (undefined4 *)FUN_0041a581();
    if (((int)puStack_5c < 0) && (puStack_5c != (undefined4 *)0x80004002)) {
      uStack_60 = 0x523281;
      FUN_00878dfb();
    }
  }
  puStack_5c = (undefined4 *)(unaff_EBP + -0x58);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  uStack_60 = 0x52328e;
  puStack_5c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_5c < 0) {
    uStack_60 = 0x523299;
    FUN_00878dfb();
  }
  puStack_5c = (undefined4 *)(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  uStack_60 = 0x5232a6;
  puStack_5c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_5c < 0) {
    uStack_60 = 0x5232b1;
    FUN_00878dfb();
  }
  puStack_5c = (undefined4 *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_60 = 0x5232be;
  puStack_5c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_5c < 0) {
    uStack_60 = 0x5232c9;
    FUN_00878dfb();
  }
  puStack_5c = (undefined4 *)0x3;
  uStack_60 = 0xff;
  iStack_64 = 0x5232d8;
  FUN_004031b7();
  puStack_5c = (undefined4 *)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  uStack_60 = 0x5232e7;
  piVar2 = (int *)FUN_00448dc6();
  iVar1 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (iVar1 == 0) {
    puStack_5c = (undefined4 *)0x80004003;
    uStack_60 = 0x5232fb;
    FUN_00878dfb();
  }
  piVar2 = (int *)*piVar2;
  iVar1 = *piVar2;
  local_6c = *(undefined4 *)(unaff_EBP + 8);
  iStack_68 = *(undefined4 *)(unaff_EBP + -0x48);
  iStack_64 = *(undefined4 *)(unaff_EBP + -0x44);
  uStack_60 = *(undefined4 *)(unaff_EBP + -0x40);
  *(int **)(unaff_EBP + -0x14) = piVar2;
  puStack_5c = *(undefined4 **)(unaff_EBP + -0x3c);
  iVar1 = (**(code **)(iVar1 + 0x80))(piVar2,0x9b,0x2b);
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963cc8);
  }
  piVar2 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x48);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  iVar1 = *(int *)(extraout_ECX + 0x74);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -4) != 0)) {
    FUN_00522ddd(1,0x50,*(undefined4 *)(iVar1 + 4),0xff);
  }
  iVar1 = 2;
  iVar5 = 0x89;
  do {
    uVar4 = iVar1 + -6 + *(int *)(extraout_ECX + 0x94) * 6;
    uVar3 = 0;
    if (*(int *)(extraout_ECX + 0x74) != 0) {
      uVar3 = *(uint *)(*(int *)(extraout_ECX + 0x74) + -4);
    }
    if (uVar3 < uVar4) break;
    FUN_00522ddd(uVar4,iVar5,*(undefined4 *)(*(int *)(extraout_ECX + 0x74) + -0x14 + uVar4 * 0x18),
                 ((3 < (int)uVar4) - 1U & 0x3c) + 0x78);
    iVar5 = iVar5 + 0x19;
    iVar1 = iVar1 + 1;
  } while (iVar5 < 0x107);
  (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x7c) + 4) + 0x1c))
            (*(int *)(extraout_ECX + 0x94) != 1);
  if (*(int *)(extraout_ECX + 0x74) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(uint *)(*(int *)(extraout_ECX + 0x74) + -4);
  }
  (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x84) + 4) + 0x1c))
            (*(int *)(extraout_ECX + 0x94) * 6 + 2U <= uVar4);
  (**(code **)(**(int **)(extraout_ECX + 0x8c) + 0x1c))(0x94,0x129,0);
  (**(code **)(**(int **)(extraout_ECX + 0x7c) + 0x1c))(0x56,0x129,0);
  (**(code **)(**(int **)(extraout_ECX + 0x84) + 0x1c))(0xd9,0x129,0);
  piVar2 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


