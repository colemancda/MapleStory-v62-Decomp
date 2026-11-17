/* FUN_004e9d38 - 0x004e9d38 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004e9d38(void)

{
  int iVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = DAT_00978368;
  iVar4 = FUN_00455c59(unaff_EBP + -0x14);
  iVar4 = *(int *)(iVar4 + 4);
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_0045e7c2(0);
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  if (*(int *)(iVar1 + 0x2b40) == 0) {
    sVar3 = FUN_0045f084(iVar4 + 0x39,*(undefined4 *)(iVar4 + 0x3d));
    if (sVar3 == 0) {
      bVar2 = FUN_0045f03e(iVar4 + 0x33,*(undefined4 *)(iVar4 + 0x35));
      if (bVar2 < 10) {
        uVar5 = FUN_00679d22(unaff_EBP + -0x18,0x151);
        *(undefined4 *)(unaff_EBP + -4) = 1;
        FUN_00471102(uVar5,0xc);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        goto LAB_004e9df0;
      }
    }
    FUN_0060142b(0x70,0,0);
    *(undefined4 *)(unaff_EBP + -4) = 2;
    FUN_00457cda(1);
    FUN_004751b2(unaff_EBP + -0x28);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0045ebca();
  }
  else {
    uVar5 = FUN_00679d22(unaff_EBP + -0x10,0x14d);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00471102(uVar5,0xc);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
LAB_004e9df0:
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


