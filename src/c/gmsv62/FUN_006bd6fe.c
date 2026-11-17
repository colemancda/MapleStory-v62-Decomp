/* FUN_006bd6fe - 0x006bd6fe in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006bd6fe(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x584) != 0) {
    FUN_006bdc1f();
  }
  iVar2 = FUN_004029b9(0x2c);
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_006bd916();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_006bdb51(uVar3);
  iVar2 = *(int *)(extraout_ECX + 0x584);
  uVar3 = FUN_0042459a();
  *(undefined4 *)(iVar2 + 0xc) = uVar3;
  *(undefined4 *)(extraout_ECX + 0x57c) = *(undefined4 *)(*(int *)(extraout_ECX + 0x584) + 0xc);
  iVar2 = *(int *)(extraout_ECX + 0x584);
  uVar3 = FUN_0042459a();
  *(undefined4 *)(iVar2 + 0x10) = uVar3;
  FUN_004245d2(*(int *)(extraout_ECX + 0x584) + 0x14,8);
  uVar3 = FUN_0045cdbc(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_00414f8b(uVar3);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + 8) != 0) {
    FUN_00434e38(*(int *)(unaff_EBP + 8) + -0xc);
  }
  uVar3 = FUN_0045cdbc(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 2;
  FUN_00414f8b(uVar3);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + 8) != 0) {
    FUN_00434e38(*(int *)(unaff_EBP + 8) + -0xc);
  }
  iVar2 = *(int *)(extraout_ECX + 0x584);
  uVar3 = FUN_0042459a();
  *(undefined4 *)(iVar2 + 0x24) = uVar3;
  FUN_006bdd81();
  iVar2 = FUN_0042459a();
  if (0 < iVar2) {
    *(int *)(unaff_EBP + 8) = iVar2;
    do {
      iVar2 = FUN_004029b9(0x20);
      *(int *)(unaff_EBP + -0x14) = iVar2;
      *(undefined4 *)(unaff_EBP + -4) = 3;
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006bd942();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
      FUN_006bdccf();
      iVar2 = *(int *)(unaff_EBP + -0x18);
      *(undefined4 *)(unaff_EBP + -4) = 4;
      uVar3 = FUN_0042459a();
      *(undefined4 *)(iVar2 + 0xc) = uVar3;
      iVar2 = *(int *)(unaff_EBP + -0x18);
      uVar3 = FUN_0042459a();
      *(undefined4 *)(iVar2 + 0x10) = uVar3;
      FUN_004245d2(*(int *)(unaff_EBP + -0x18) + 0x18,8);
      uVar3 = FUN_0045cdbc(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_00414f8b(uVar3);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_00414ebb();
      FUN_006bdb20(unaff_EBP + -0x1c,0xffffffff);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_006bdce1();
      piVar1 = (int *)(unaff_EBP + 8);
      *piVar1 = *piVar1 + -1;
    } while (*piVar1 != 0);
  }
  FUN_006bc926();
  FUN_006ba244();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined4 *)(extraout_ECX + 0x578) = 1;
  return;
}


