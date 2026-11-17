/* FUN_00848b83 - 0x00848b83 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00848b83(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 uVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(extraout_ECX + 0x208c) = 0;
  uVar5 = FUN_007d1e08();
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(extraout_ECX + 0x2090) = uVar5;
  uVar5 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + -0x2c) = uVar5;
  iVar6 = FUN_007c0104(uVar5);
  if ((iVar6 != 0) || (iVar6 = *(int *)(DAT_00978140 + 8), iVar6 != 0)) {
    uVar3 = FUN_0042452b();
    *(undefined1 *)(unaff_EBP + -0x28) = uVar3;
    uVar5 = FUN_00424561();
    *(undefined4 *)(unaff_EBP + -0x24) = uVar5;
    uVar5 = FUN_00424561();
    *(undefined4 *)(unaff_EBP + -0x20) = uVar5;
    cVar4 = FUN_0042452b();
    *(uint *)(unaff_EBP + -0x1c) = (uint)(cVar4 != '\0');
    FUN_0045cdbc(unaff_EBP + -0x18);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_0045cdbc(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    uVar7 = FUN_0042452b();
    *(uint *)(unaff_EBP + -0x10) = uVar7 & 0xff;
    uVar7 = FUN_0042452b();
    iVar2 = *(int *)(extraout_ECX + 0x31e4);
    *(uint *)(unaff_EBP + 8) = uVar7 & 0xff;
    if (iVar2 != 0) {
      FUN_00815de9();
      FUN_0083df2d();
    }
    FUN_008320df(10);
    FUN_007659d5(*(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(iVar6 + 0xd7c),
                 *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                 *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x18),
                 *(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + 8),
                 *(undefined4 *)(unaff_EBP + -0x1c));
    FUN_00765c73(iVar6 + 0x7c);
    FUN_00765b36(*(undefined4 *)(unaff_EBP + 8),uVar1);
    cVar4 = FUN_0042452b();
    if (cVar4 != '\0') {
      uVar5 = FUN_0042459a();
      uVar8 = FUN_0042459a();
      uVar9 = FUN_0042459a();
      if ((*(int *)(unaff_EBP + -0x10) == 0) || (*(int *)(unaff_EBP + 8) == 0)) {
        FUN_00765c06(uVar5,uVar8,uVar9);
      }
    }
    uVar7 = FUN_0042452b();
    uVar7 = uVar7 & 0xff;
    if (uVar7 != 0) {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_0056a92f(uVar7,unaff_EBP + 0xb);
      FUN_004245d2(*(undefined4 *)(unaff_EBP + -0x10),uVar7 << 2);
      FUN_00765f9a(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00445a30();
    }
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    FUN_005e0625();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_005ded69(uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_006eabaf();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


