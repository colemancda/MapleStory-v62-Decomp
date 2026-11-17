/* FUN_00794c02 - 0x00794c02 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00794c02(void)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  int iStack_44;
  int iStack_40;
  undefined1 auStack_3c [4];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  FUN_00879bb8();
  iStack_28 = 0x794c1e;
  uVar2 = FUN_0042452b();
  *(uint *)(extraout_ECX + 0x1700) = uVar2 & 0xff;
  if ((uVar2 & 0xff) == 0) {
    iStack_28 = 0x794d97;
    FUN_0046f2ad();
  }
  else {
    iStack_28 = 0x794c36;
    uVar3 = FUN_0042459a();
    *(undefined4 *)(extraout_ECX + 0x1704) = uVar3;
    iStack_28 = unaff_EBP + 8;
    uStack_2c = 0x794c47;
    iStack_28 = FUN_0045cdbc();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uStack_2c = 0x794c59;
    FUN_00414f8b();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + 8) != 0) {
      iStack_28 = *(int *)(unaff_EBP + 8) + -0xc;
      uStack_2c = 0x794c6d;
      FUN_00434e38();
    }
    iStack_28 = 0x794c75;
    uVar2 = FUN_0042452b();
    *(uint *)(extraout_ECX + 0x170c) = uVar2 & 0xff;
    iStack_28 = 0x794c85;
    uVar2 = FUN_0042452b();
    *(uint *)(extraout_ECX + 0x1710) = uVar2 & 0xff;
    iStack_28 = 0x794c95;
    uVar2 = FUN_0042452b();
    *(uint *)(extraout_ECX + 0x1718) = uVar2 & 0xff;
    iStack_28 = 0x794ca5;
    uVar2 = FUN_0042452b();
    *(uint *)(extraout_ECX + 0x1714) = uVar2 & 0xff;
    iStack_28 = 0x794cb5;
    uVar2 = FUN_0042452b();
    *(uint *)(extraout_ECX + 0x171c) = uVar2 & 0xff;
    if (*(int *)(extraout_ECX + 0x524) == 0) {
      iStack_28 = 3;
      uStack_2c = 0;
      uStack_30 = 0x794cd7;
      FUN_004031b7();
      iStack_28 = *(undefined4 *)(extraout_ECX + 0x171c);
      iStack_40 = extraout_ECX + 0xd74;
      uStack_2c = *(undefined4 *)(extraout_ECX + 0x1718);
      *(undefined4 *)(unaff_EBP + -4) = 1;
      uStack_30 = *(undefined4 *)(extraout_ECX + 0x1714);
      uStack_34 = *(undefined4 *)(extraout_ECX + 0x1710);
      uStack_38 = *(undefined4 *)(extraout_ECX + 0x170c);
      *(undefined1 **)(unaff_EBP + 8) = auStack_3c;
      iStack_44 = 0x794d0e;
      FUN_00433bdf();
      iStack_40 = unaff_EBP + -0x24;
      iStack_44 = unaff_EBP + -0x10;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00424e27();
      FUN_00425067();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iStack_40 = 0x794d37;
      FUN_004115d9();
      iStack_40 = 0x794d3e;
      iStack_40 = FUN_0040eed0();
      iStack_44 = 0x794d46;
      uVar3 = FUN_00449713();
      *(int **)(unaff_EBP + -0x14) = &iStack_44;
      FUN_00448a17(uVar3);
      uVar3 = *(undefined4 *)(extraout_ECX + 0x1700);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_0046cd86(uVar3);
      piVar1 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar4 = FUN_00402bc3(unaff_EBP + -0x24);
      if (iVar4 < 0) {
        FUN_00878dfb(iVar4);
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


