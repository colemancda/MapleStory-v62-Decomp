/* FUN_0084d336 - 0x0084d336 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0084d336(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(unaff_EBP + 8) != 0) {
    *(undefined4 *)(extraout_ECX + 0x32c4) = 0;
  }
  iVar2 = FUN_00455c59(unaff_EBP + -0x1c);
  iVar2 = *(int *)(iVar2 + 4);
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    FUN_0045e7c2(0);
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  sVar1 = FUN_0045f084(iVar2 + 0x39,*(undefined4 *)(iVar2 + 0x3d));
  if (sVar1 != 0x84) goto LAB_0084d4c7;
  *(undefined4 *)(unaff_EBP + 8) = 0;
  iVar3 = FUN_00650dae(iVar2,0x142446,unaff_EBP + 8);
  if (iVar3 == 0) goto LAB_0084d4c7;
  if (*(int *)(extraout_ECX + 0x32c4) == 0) {
    uVar4 = FUN_0045f084(iVar2 + 0x61,*(undefined4 *)(iVar2 + 0x65));
    uVar5 = *(undefined4 *)(extraout_ECX + 0x2104);
    *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
    uVar5 = FUN_00413367(extraout_ECX + 0x20fc,uVar5);
    *(undefined4 *)(unaff_EBP + -0x10) = uVar5;
    iVar6 = FUN_006509a1(iVar3);
    iVar6 = FUN_00413367(iVar6 + 0x13c,*(undefined4 *)(iVar6 + 0x144));
    if ((iVar6 * *(int *)(unaff_EBP + -0x10)) / 100 < (int)*(short *)(unaff_EBP + -0x14)) {
      if (*(int *)(extraout_ECX + 0x32c4) == 0) goto LAB_0084d4c7;
      goto LAB_0084d441;
    }
    iVar2 = FUN_006509a1(iVar3);
    uVar5 = FUN_00413367(iVar2 + 0xd0,*(undefined4 *)(iVar2 + 0xd8));
    *(undefined4 *)(extraout_ECX + 0x32c4) = uVar5;
  }
  else {
LAB_0084d441:
    sVar1 = FUN_0045f084(iVar2 + 0x61,*(undefined4 *)(iVar2 + 0x65));
    uVar5 = FUN_00413367(extraout_ECX + 0x20fc,*(undefined4 *)(extraout_ECX + 0x2104));
    *(undefined4 *)(unaff_EBP + -0x14) = uVar5;
    iVar2 = FUN_006509a1(iVar3);
    iVar2 = FUN_00413367(iVar2 + 0x13c,*(undefined4 *)(iVar2 + 0x144));
    if ((int)sVar1 <= (iVar2 * *(int *)(unaff_EBP + -0x14)) / 100) goto LAB_0084d4c7;
    *(undefined4 *)(extraout_ECX + 0x32c4) = 0;
  }
  FUN_0060142b(99,0,0);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004751b2(unaff_EBP + -0x2c);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0045ebca();
LAB_0084d4c7:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


