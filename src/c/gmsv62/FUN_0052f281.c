/* FUN_0052f281 - 0x0052f281 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0052f281(void)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int extraout_ECX;
  int unaff_EBP;
  int iVar7;
  
  FUN_00879bb8();
  uVar2 = *(undefined4 *)(unaff_EBP + 8);
  uVar4 = FUN_0042459a();
  uVar5 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + 8) = uVar5;
  uVar5 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar5;
  uVar5 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar5;
  uVar5 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar5;
  uVar6 = FUN_0042452b();
  *(uint *)(unaff_EBP + -0x1c) = uVar6 & 0xff;
  uVar6 = FUN_0042452b();
  *(uint *)(unaff_EBP + -0x20) = uVar6 & 0xff;
  *(undefined4 *)(extraout_ECX + 0x5c) = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(extraout_ECX + 0x70) = *(undefined4 *)(unaff_EBP + -0x10);
  *(undefined4 *)(extraout_ECX + 0x68) = *(undefined4 *)(unaff_EBP + -0x14);
  uVar5 = *(undefined4 *)(unaff_EBP + -0x18);
  *(undefined4 *)(extraout_ECX + 0x58) = uVar4;
  *(undefined4 *)(extraout_ECX + 0x1668) = uVar4;
  *(undefined4 *)(extraout_ECX + 0x6c) = uVar5;
  FUN_0053ffb9();
  *(undefined4 *)(extraout_ECX + 0x15f8) = *(undefined4 *)(unaff_EBP + -0x1c);
  *(undefined4 *)(extraout_ECX + 0x15fc) = *(undefined4 *)(unaff_EBP + -0x20);
  FUN_00540d0a();
  FUN_00545bd5();
  FUN_0052b7ca();
  if (0 < *(int *)(unaff_EBP + 8)) {
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8);
    do {
      FUN_0052db8e(unaff_EBP + -0x28,uVar2);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      iVar7 = unaff_EBP + -0x28;
      FUN_0052fee3(0xffffffff);
      FUN_0052fe27(iVar7);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x24) != 0) {
        FUN_0048ba7b(0);
        *(undefined4 *)(unaff_EBP + -0x24) = 0;
      }
      piVar1 = (int *)(unaff_EBP + 8);
      *piVar1 = *piVar1 + -1;
    } while (*piVar1 != 0);
  }
  FUN_005462af();
  cVar3 = FUN_0042452b();
  if (cVar3 != '\0') {
    *(undefined4 *)(extraout_ECX + 0x18) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


