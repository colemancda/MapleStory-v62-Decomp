/* FUN_0052f3d4 - 0x0052f3d4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0052f3d4(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar2 = *(undefined4 *)(unaff_EBP + 8);
  uVar3 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  iVar4 = FUN_0042459a();
  uVar3 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + 8) = uVar3;
  uVar3 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
  uVar3 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar3;
  *(undefined4 *)(extraout_ECX + 0x68) = *(undefined4 *)(unaff_EBP + 8);
  FUN_0053ffb9();
  *(undefined4 *)(extraout_ECX + 0x6c) = *(undefined4 *)(unaff_EBP + -0x10);
  FUN_00540d0a();
  FUN_00545bd5();
  *(undefined4 *)(extraout_ECX + 0x70) = *(undefined4 *)(unaff_EBP + -0x14);
  *(undefined4 *)(extraout_ECX + 0x58) = *(undefined4 *)(unaff_EBP + -0x18);
  *(int *)(extraout_ECX + 0x5c) = iVar4;
  FUN_0052b7ca();
  if (0 < iVar4) {
    *(int *)(unaff_EBP + 8) = iVar4;
    do {
      FUN_0052db8e(unaff_EBP + -0x20,uVar2);
      iVar4 = unaff_EBP + -0x20;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_0052fee3(0xffffffff);
      FUN_0052fe27(iVar4);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x1c) != 0) {
        FUN_0048ba7b(0);
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      }
      piVar1 = (int *)(unaff_EBP + 8);
      *piVar1 = *piVar1 + -1;
    } while (*piVar1 != 0);
  }
  FUN_005462af();
  *(undefined4 *)(extraout_ECX + 0x18) = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


