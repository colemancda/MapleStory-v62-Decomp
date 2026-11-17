/* FUN_0079c9ce - 0x0079c9ce in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0079c9ce(void)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  FUN_0079d8de();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0079d56e();
  if (*(int *)(extraout_ECX + 0xd38) == 0) {
    FUN_00878dfb();
  }
  uVar4 = 0;
  uVar3 = *(undefined8 *)(unaff_EBP + 0xc);
  uVar1 = FUN_0043210d(*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + 0x10),0,0);
  FUN_0051d1b2(extraout_ECX,uVar1,uVar3,uVar4);
  FUN_007933aa();
  if (*(int **)(unaff_EBP + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + 0x10) + 8))();
  }
  iVar2 = __ftol();
  if ((*(byte *)(extraout_ECX + 0x52c) & 1) == 0) {
    *(int *)(unaff_EBP + 8) = iVar2;
  }
  else {
    *(int *)(unaff_EBP + 8) = -iVar2;
  }
  *(int *)(unaff_EBP + -0x10) = -iVar2;
  FUN_0067db5b((double)*(int *)(unaff_EBP + 8),(double)*(int *)(unaff_EBP + -0x10));
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0079d910();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


