/* FUN_0053b689 - 0x0053b689 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0053b689(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *extraout_ECX;
  int unaff_EBP;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  FUN_00879bb8();
  iVar5 = extraout_ECX[0x158];
  uVar1 = FUN_0053b81e(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc));
  if ((((int)uVar1 < 0) || (iVar3 = *(int *)(iVar5 + 0x48), iVar3 == 0)) ||
     (*(uint *)(iVar3 + -4) <= uVar1)) {
    FUN_0074d6fb();
  }
  else {
    uVar2 = FUN_0045e2eb();
    FUN_00554ef3(unaff_EBP + -0x14,uVar2);
    iVar5 = *(int *)(iVar5 + 0x48);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar5 = iVar5 + uVar1 * 8;
    FUN_00489d8c();
    iVar3 = *(int *)(iVar5 + 4);
    iVar4 = *(int *)(iVar3 + 0xfc);
    iVar3 = *(int *)(iVar3 + 0x24);
    *(undefined4 *)(unaff_EBP + -0x28) = DAT_008eb878;
    *(undefined4 *)(unaff_EBP + -0x24) = DAT_008eb87c;
    uVar7 = 1;
    *(int *)(unaff_EBP + -0x2c) = iVar4 + iVar3;
    *(undefined1 **)(unaff_EBP + -0x20) = &DAT_00978474;
    uVar2 = *(undefined4 *)(*(int *)(iVar5 + 4) + 0x18);
    uVar6 = 0;
    iVar5 = unaff_EBP + -0x40;
    iVar3 = *extraout_ECX;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar3 = (**(code **)(iVar3 + 0x30))(uVar2,iVar5,0,1);
    iVar3 = iVar3 + 0x14 + *(int *)(unaff_EBP + 0xc);
    iVar4 = (**(code **)(*extraout_ECX + 0x2c))(iVar3);
    FUN_00759767(iVar4 + 0x14 + *(int *)(unaff_EBP + 8),iVar3,uVar2,iVar5,uVar6,uVar7);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00489db7();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      FUN_00449913(0);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}


