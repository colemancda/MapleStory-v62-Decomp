/* FUN_0071ab7c - 0x0071ab7c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0071ab7c(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  uVar1 = *(uint *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (uVar1 < 3000) {
LAB_0071ac9b:
    if (uVar1 == 1) {
      iVar3 = *extraout_ECX;
    }
    else {
      if (uVar1 != 2) goto LAB_0071acb2;
      iVar3 = *extraout_ECX;
    }
    (**(code **)(iVar3 + 0x34))(uVar1);
  }
  else {
    if (uVar1 < 0xbc0) {
      FUN_0060142b(0x3f,0,0);
      iVar3 = extraout_ECX[0x177];
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iVar3 = FUN_0071bd20((uVar1 - 3000) + iVar3 * 8);
      *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(iVar3 + 4);
      FUN_0071ba82();
      uVar2 = *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x10);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00457d37(uVar2);
      FUN_00457d37(*(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x14));
      FUN_004751b2(unaff_EBP + -0x28);
      FUN_0071b935(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (*(int *)(unaff_EBP + -0x14) != 0) {
        FUN_0071bbfc(0);
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_0045ebca();
      goto LAB_0071acb2;
    }
    if (uVar1 == 4000) {
      iVar3 = extraout_ECX[0x177] + 1;
      if (extraout_ECX[0x178] + -1 < extraout_ECX[0x177] + 1) {
        iVar3 = extraout_ECX[0x178] + -1;
      }
      extraout_ECX[0x177] = iVar3;
    }
    else {
      if (uVar1 != 0xfa1) goto LAB_0071ac9b;
      iVar3 = extraout_ECX[0x177] + -1;
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      extraout_ECX[0x177] = iVar3;
    }
    FUN_0071b38c();
    FUN_008161f1(0);
  }
LAB_0071acb2:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


