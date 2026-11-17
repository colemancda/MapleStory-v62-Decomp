/* FUN_005b1cbc - 0x005b1cbc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005b1cbc(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  cVar4 = FUN_0042452b();
  uVar5 = FUN_0042452b();
  uVar5 = uVar5 & 0xff;
  if (cVar4 == '\0') {
    uVar6 = FUN_0042452b();
    *(uint *)(unaff_EBP + -0x10) = uVar6 & 0xff;
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (cVar4 == '\0') {
    uVar6 = FUN_0042452b();
    uVar6 = uVar6 & 0xff;
    if ((int)uVar6 < *(int *)(extraout_ECX + 0xc4)) {
      FUN_005b75a5(uVar5,1);
      *(uint *)(extraout_ECX + 0x740) = uVar5;
      if (uVar6 == *(uint *)(extraout_ECX + 0xc0)) {
        *(undefined4 *)(extraout_ECX + 0x700) = 0;
      }
      else {
        *(undefined4 *)(extraout_ECX + 0x700) = 1;
      }
      *(undefined4 *)(extraout_ECX + 0x720) = 0x2d50;
      puVar7 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0x61c);
      uVar3 = *puVar7;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_007d40d5(uVar3,100);
      *(undefined1 *)(unaff_EBP + -4) = 0;
    }
    else {
      FUN_005b75a5(uVar5,0);
      FUN_005b7d41(*(undefined4 *)(unaff_EBP + -0x10));
      iVar2 = *(int *)(unaff_EBP + -0x10);
      *(undefined4 *)(*(int *)(extraout_ECX + 0x200) + iVar2 * 4) = 0xffffffff;
      *(undefined4 *)(*(int *)(extraout_ECX + 0x200) + uVar5 * 4) = 0xffffffff;
      piVar1 = (int *)(extraout_ECX + 0x758 + (uVar6 - *(int *)(extraout_ECX + 0xc4)) * 4);
      *piVar1 = *piVar1 + 1;
      *(undefined4 *)(extraout_ECX + 0x720) = 10000;
      FUN_005b4ab0(iVar2,uVar5);
      FUN_005b5b1b();
      *(undefined4 *)(extraout_ECX + 0x740) = 0xffffffff;
      *(undefined4 *)(extraout_ECX + 0x73c) = 0xffffffff;
      puVar7 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0x61b);
      uVar3 = *puVar7;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_007d40d5(uVar3,100);
      *(undefined1 *)(unaff_EBP + -4) = 0;
    }
    FUN_00402676();
    *(undefined4 *)(extraout_ECX + 0x6fc) = 0;
    *(undefined4 *)(extraout_ECX + 0x748) = 0;
  }
  else {
    FUN_005b75a5(uVar5,0);
    *(uint *)(extraout_ECX + 0x73c) = uVar5;
  }
  FUN_008161f1(0);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


