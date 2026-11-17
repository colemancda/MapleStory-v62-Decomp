/* FUN_004ef6e7 - 0x004ef6e7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004ef6e7(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar5;
  uint auStack_20 [3];
  
  FUN_00879bb8();
  auStack_20[2] = 0x4ef700;
  bVar1 = FUN_0042452b();
  iVar2 = *(int *)(extraout_ECX + 0x130);
  if ((((iVar2 != 0) && (*(int *)(iVar2 + -4) != 0)) && (iVar2 != 0)) &&
     ((uint)bVar1 < *(uint *)(iVar2 + -4))) {
    auStack_20[2] = 0x69c;
    auStack_20[1] = 0x4ef73f;
    iVar2 = FUN_004029b9();
    *(int *)(unaff_EBP + 8) = iVar2;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      auStack_20[2] = 0x4ef750;
      iVar2 = FUN_007e62e9();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uVar3 = -(uint)(iVar2 != 0) & iVar2 + 8U;
    *(uint *)(unaff_EBP + -0x10) = -(uint)(uVar3 != 0) & uVar3 - 8;
    auStack_20[2] = 0x4ef777;
    FUN_004c26c4();
    auStack_20[2] = 0;
    auStack_20[1] = 0;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    auStack_20[0] = (uint)bVar1;
    uVar4 = FUN_004726fc();
    *(uint **)(unaff_EBP + 8) = auStack_20;
    FUN_00450368(uVar4);
    uVar5 = 0x897b50;
    uVar4 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_004c2677(0,0x897b50);
    FUN_007eddac(uVar4,uVar5);
    auStack_20[2] = 0;
    auStack_20[1] = 0;
    auStack_20[0] = 0x4ef7b7;
    FUN_007edf11();
    auStack_20[2] = 0x4ef7bf;
    FUN_007e6e3c();
    auStack_20[2] = 0x4ef7c7;
    FUN_004bc6a2();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    auStack_20[2] = 0x4ef7d3;
    FUN_004c26e1();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


