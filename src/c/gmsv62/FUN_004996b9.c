/* FUN_004996b9 - 0x004996b9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004996b9(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  int extraout_ECX;
  char *extraout_ECX_00;
  int unaff_EBP;
  undefined4 uStack_30;
  char *pcStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  int iStack_18;
  
  FUN_00879bb8();
  if ((*(int *)(unaff_EBP + 8) == 0) && (*(int *)(unaff_EBP + 0xc) == 0)) {
    FUN_0074d6fb();
  }
  else {
    iVar1 = *(int *)(extraout_ECX + 0x24);
    if (*(int *)(extraout_ECX + 0x18) == 0) {
      iStack_18 = 0x4996fa;
      FUN_00878dfb();
    }
    iVar1 = (**(code **)(*(int *)(iVar1 + 4) + 0x2c))();
    iVar2 = FUN_00424ee1();
    iVar2 = iVar1 + iVar2 + *(int *)(extraout_ECX + 0x1c);
    iVar1 = *(int *)(extraout_ECX + 0x24);
    if (*(int *)(extraout_ECX + 0x18) == 0) {
      iStack_18 = 0x499728;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(extraout_ECX + 0x18);
    iVar1 = (**(code **)(*(int *)(iVar1 + 4) + 0x30))();
    iVar3 = FUN_00424f08();
    pcStack_2c = extraout_ECX_00;
    if (*(int *)(unaff_EBP + 0xc) != 0) {
      pcStack_2c = *(char **)(unaff_EBP + 0xc);
      iStack_18 = 0x49974f;
      sVar4 = _strlen(pcStack_2c);
      if (sVar4 == 0) {
        uStack_20 = 0x499764;
        iStack_1c = iVar2;
        iStack_18 = iVar1 + iVar3;
        FUN_0074d755();
        goto LAB_004997a6;
      }
    }
    iStack_18 = 1;
    iStack_1c = 0;
    uStack_20 = 0;
    uStack_24 = 0;
    uStack_28 = *(undefined4 *)(unaff_EBP + 0x10);
    *(char ***)(unaff_EBP + 0x10) = &pcStack_2c;
    uStack_30 = 0xffffffff;
    FUN_0045f0f3(*(undefined4 *)(unaff_EBP + 0xc));
    *(undefined4 *)(unaff_EBP + -4) = 0;
    *(undefined4 **)(unaff_EBP + 0xc) = &uStack_30;
    FUN_0045f0f3(*(undefined4 *)(unaff_EBP + 8),0xffffffff);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0074da18(iVar2,iVar1 + iVar3);
  }
LAB_004997a6:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


