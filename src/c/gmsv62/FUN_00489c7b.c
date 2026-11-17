/* FUN_00489c7b - 0x00489c7b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00489c7b(void)

{
  uint uVar1;
  int iVar2;
  int *extraout_ECX;
  int unaff_EBP;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  FUN_00879bb8();
  piVar4 = (int *)(extraout_ECX[0x158] + 0x488);
  uVar1 = FUN_00489e57(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc));
  if ((((int)uVar1 < 0) || (iVar6 = *piVar4, iVar6 == 0)) || (*(uint *)(iVar6 + -4) <= uVar1)) {
    FUN_0074d6fb();
  }
  else {
    iVar3 = uVar1 * 0x37;
    FUN_00554ef3(unaff_EBP + -0x14,*(undefined4 *)(iVar3 + 0x10 + iVar6));
    iVar6 = *piVar4;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00879c20(*(int *)(unaff_EBP + -0x10) + 0x20,iVar6 + 0x27 + iVar3,8);
    iVar6 = *piVar4;
    *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x18) = *(undefined4 *)(iVar6 + iVar3);
    *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x1c) = *(undefined4 *)(iVar6 + 4 + iVar3);
    FUN_00489d8c();
    uVar8 = 0;
    *(int *)(unaff_EBP + -0x40) = *piVar4 + 0x1a + iVar3;
    uVar7 = 0;
    iVar6 = unaff_EBP + -0x40;
    uVar5 = *(undefined4 *)(unaff_EBP + -0x10);
    iVar3 = *extraout_ECX;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar3 = (**(code **)(iVar3 + 0x30))(uVar5,iVar6,0,0);
    iVar3 = iVar3 + 0x14 + *(int *)(unaff_EBP + 0xc);
    iVar2 = (**(code **)(*extraout_ECX + 0x2c))(iVar3);
    FUN_00759767(iVar2 + 0x14 + *(int *)(unaff_EBP + 8),iVar3,uVar5,iVar6,uVar7,uVar8);
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


