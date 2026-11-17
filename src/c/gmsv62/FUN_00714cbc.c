/* FUN_00714cbc - 0x00714cbc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00714cbc(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *extraout_ECX;
  int unaff_EBP;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  FUN_00879bb8();
  *(int **)(unaff_EBP + -0x10) = extraout_ECX + -1;
  iVar1 = FUN_00714d89(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc));
  if (iVar1 < 0) {
    FUN_0074d6fb();
  }
  else {
    puVar2 = (undefined4 *)FUN_005d1241(iVar1);
    FUN_00554ef3(unaff_EBP + -0x18,*puVar2);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      uVar8 = 0;
      uVar7 = 0;
      uVar6 = 0;
      uVar5 = *(undefined4 *)(unaff_EBP + -0x14);
      iVar3 = (**(code **)(*extraout_ECX + 0x30))(uVar5,0,0,0);
      iVar3 = iVar3 + 0x14 + *(int *)(unaff_EBP + 0xc);
      iVar4 = (**(code **)(*extraout_ECX + 0x2c))(iVar3);
      FUN_00759767(iVar4 + 0x14 + *(int *)(unaff_EBP + 8),iVar3,uVar5,uVar6,uVar7,uVar8);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      FUN_00449913(0);
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
    }
  }
  if (extraout_ECX[0x22] != iVar1) {
    extraout_ECX[0x22] = iVar1;
    FUN_008161f1(0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}


