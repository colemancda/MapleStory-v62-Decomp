/* FUN_006c12f3 - 0x006c12f3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_006c12f3(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *extraout_ECX;
  int unaff_EBP;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  FUN_00879bb8();
  iVar1 = FUN_006c15c2(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc));
  *(int *)(unaff_EBP + -0x10) = iVar1;
  if (iVar1 != 0) {
    FUN_00526a75(5);
    FUN_00455c59(unaff_EBP + -0x18);
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      FUN_0045e7c2(0);
    }
    iVar1 = FUN_00458c4f(unaff_EBP + -0x18,extraout_ECX[0x166],*(undefined4 *)(unaff_EBP + -0x10));
    iVar1 = *(int *)(iVar1 + 4);
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      FUN_00449913(0);
    }
    if (iVar1 == 0) {
      FUN_0074d6fb();
    }
    else {
      FUN_00489d8c();
      uVar6 = 0;
      uVar5 = 0;
      iVar4 = unaff_EBP + -0x44;
      iVar2 = *extraout_ECX;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      *(undefined4 *)(unaff_EBP + -0x34) = 1;
      iVar2 = (**(code **)(iVar2 + 0x30))(iVar1,iVar4,0,0);
      iVar2 = iVar2 + 0x14 + *(int *)(unaff_EBP + 0xc);
      iVar3 = (**(code **)(*extraout_ECX + 0x2c))(iVar2);
      FUN_00759767(iVar3 + *(int *)(unaff_EBP + 8),iVar2,iVar1,iVar4,uVar5,uVar6);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00489db7();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}


