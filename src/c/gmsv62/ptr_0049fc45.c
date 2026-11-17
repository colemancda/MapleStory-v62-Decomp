/* ptr_0049fc45 - 0x0049fc45 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall ptr_0049fc45(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *unaff_EBX;
  int unaff_EBP;
  
  iVar2 = *unaff_EBX;
  *(int **)(unaff_EBP + -0x10) = param_2;
  iVar2 = (**(code **)(*param_2 + 0x90))
                    (*(undefined4 *)(unaff_EBP + -0x10),iVar2 + *(int *)(unaff_EBP + 8));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
  }
  FUN_004125d9();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x34);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x44);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  VariantInit((VARIANTARG *)(unaff_EBP + -0x24));
  iVar2 = FUN_00402e32(unaff_EBP + -0x24,&DAT_00980690);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined4 *)(unaff_EBP + -4) = 3;
  FUN_00403191(&DAT_00980690);
  iVar2 = unaff_EBX[5];
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = (int *)FUN_0042bc90(unaff_EBP + 8);
  iVar2 = *piVar3;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = (int *)*piVar3;
  iVar2 = unaff_EBX[4];
  iVar1 = *piVar3;
  *(int **)(unaff_EBP + 0xc) = piVar3;
  iVar2 = (**(code **)(iVar1 + 0x90))
                    (piVar3,*(undefined4 *)(unaff_EBP + 0x10),iVar2,
                     *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                     *(undefined4 *)(unaff_EBP + -0x4c),*(undefined4 *)(unaff_EBP + -0x48),
                     *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                     *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x18));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + 0xc),&DAT_00963de8);
  }
  FUN_004125d9();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x54);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x24);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


