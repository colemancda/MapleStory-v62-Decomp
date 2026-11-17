/* FUN_005488e8 - 0x005488e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_005488e8(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_004bc4fa();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x1e] = 0;
  extraout_ECX[0x20] = 0;
  extraout_ECX[0x22] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0074b9b2();
  extraout_ECX[0x15f] = 0;
  extraout_ECX[0x164] = 0;
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  uVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  *extraout_ECX = &PTR_FUN_008eb980;
  extraout_ECX[1] = &PTR_FUN_008eb934;
  extraout_ECX[2] = &PTR_FUN_008eb930;
  extraout_ECX[0x161] = uVar1;
  FUN_0052fe27(uVar2);
  iVar3 = FUN_0045e2eb();
  iVar4 = iVar3 / 1000000;
  iVar5 = 1;
  extraout_ECX[0x162] = iVar3;
  if (iVar4 == 1) goto LAB_005489b0;
  if (1 < iVar4) {
    if (iVar4 < 5) {
      iVar5 = 2;
      goto LAB_005489b0;
    }
    if (iVar4 == 5) {
      iVar5 = 3 - (uint)(iVar3 / 10000 != 500);
      goto LAB_005489b0;
    }
  }
  iVar5 = 0;
LAB_005489b0:
  extraout_ECX[0x160] = 0xffffffff;
  extraout_ECX[0x15e] = iVar5;
  FUN_004bc5b8(0,0,1,0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


