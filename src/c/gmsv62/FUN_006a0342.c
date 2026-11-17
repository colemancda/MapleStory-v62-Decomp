/* FUN_006a0342 - 0x006a0342 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006a0342(void)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_0049f842();
  *(undefined4 *)(unaff_EBP + -0x38) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x58) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x54) = 0;
  *(undefined4 *)(unaff_EBP + -0x40) = 0xff000000;
  uVar1 = FUN_00679e4e(unaff_EBP + -0x14,10);
  *(undefined4 *)(unaff_EBP + -0x10) = uVar1;
  FUN_00408b49();
  FUN_00402fa6();
  *(undefined4 *)(unaff_EBP + -0x48) = **(undefined4 **)(unaff_EBP + -0x10);
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_004030b1();
  }
  *(undefined4 *)(unaff_EBP + -0x2c) = 0x32;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  iVar2 = FUN_004029b9(0xb8);
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_004a0726();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0045e196(uVar1);
  (**(code **)(**(int **)(extraout_ECX + 0x7c) + 8))
            (extraout_ECX,1000,0x6d,0x9d,0x96,0xd,unaff_EBP + -0x5c);
  FUN_008164fd(*(undefined4 *)(extraout_ECX + 0x7c));
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  uVar1 = FUN_00679d86(unaff_EBP + -0x14,0x4ed);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00419192(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00402676();
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00450382(uVar1);
  (**(code **)(**(int **)(extraout_ECX + 0x84) + 0x20))(extraout_ECX,1,0xf1,199,0,unaff_EBP + -0x24)
  ;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0045c14e();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


