/* FUN_006fd315 - 0x006fd315 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool FUN_006fd315(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_40;
  undefined1 auStack_3c [4];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  FUN_00879bb8();
  uStack_18 = *(undefined4 *)(unaff_EBP + 0xc);
  uStack_1c = *(undefined4 *)(unaff_EBP + 8);
  piStack_20 = extraout_ECX + 0x169;
  uStack_24 = 0x6fd339;
  iVar1 = (*DAT_0097b57c)();
  if (iVar1 == 0) {
    uStack_24 = 0x6fd3b3;
    FUN_0074d6fb();
  }
  else {
    uStack_24 = 0;
    uStack_28 = 1;
    uStack_2c = 0;
    uStack_30 = 0;
    uStack_34 = 0;
    uStack_38 = 0;
    *(undefined1 **)(unaff_EBP + -0x10) = auStack_3c;
    uStack_40 = 0xffffffff;
    FUN_00705b3e();
    uVar2 = FUN_00449713();
    FUN_0045f0f3(uVar2);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    *(undefined4 **)(unaff_EBP + -0x14) = &uStack_40;
    FUN_00483ba7();
    iVar3 = *extraout_ECX;
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar3 = (**(code **)(iVar3 + 0x30))();
    iVar3 = iVar3 + 0x14 + *(int *)(unaff_EBP + 0xc);
    iVar4 = (**(code **)(*extraout_ECX + 0x2c))(iVar3);
    FUN_0074da18(iVar4 + 0x14 + *(int *)(unaff_EBP + 8),iVar3);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar1 != 0;
}


