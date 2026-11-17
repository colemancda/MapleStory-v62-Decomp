/* FUN_0075e900 - 0x0075e900 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0075e900(void)

{
  int iVar1;
  int iVar2;
  int *extraout_ECX;
  int unaff_EBP;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  FUN_00879bb8();
  iVar1 = FUN_0075eb51(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc));
  if (extraout_ECX[0x1f] != iVar1) {
    extraout_ECX[0x1f] = iVar1;
    FUN_008161f1(0);
  }
  if (extraout_ECX[0x1f] < 0) {
    FUN_0074d6fb();
  }
  else {
    FUN_00554ef3(unaff_EBP + -0x14,*(undefined4 *)(extraout_ECX[0x1e] + extraout_ECX[0x1f] * 4));
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      uVar6 = 0;
      uVar5 = 0;
      uVar4 = 0;
      uVar3 = *(undefined4 *)(unaff_EBP + -0x10);
      iVar1 = (**(code **)(*extraout_ECX + 0x30))(uVar3,0,0,0);
      iVar1 = iVar1 + *(int *)(unaff_EBP + 0xc);
      iVar2 = (**(code **)(*extraout_ECX + 0x2c))(iVar1);
      FUN_00759767(iVar2 + 0x14 + *(int *)(unaff_EBP + 8),iVar1,uVar3,uVar4,uVar5,uVar6);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      FUN_00449913(0);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}


