/* ptr_004df8f0 - 0x004df8f0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_004df8f0(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_EBX;
  int unaff_EBP;
  undefined4 uVar4;
  undefined4 uStack_c;
  undefined4 uStack_8;
  int iStack_4;
  
  iStack_4 = 0x4df8f5;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iStack_4 = 0x4df905;
  FUN_00403191();
  iStack_4 = unaff_EBP + -0x298;
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  uStack_8 = 0x4df922;
  uStack_8 = FUN_00449749();
  uStack_c = 0x4df92b;
  uVar2 = FUN_00449713();
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_c;
  FUN_00448a17(uVar2);
  uVar4 = 0x14;
  uVar2 = 0x1b;
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  FUN_004115d9(0x1b,0x14);
  FUN_00448e3a(uVar2,uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iStack_4 = 0x4df95e;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_4 = 0x4df969;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_4 = 0x4e0935;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_4 = 0x4e0940;
    FUN_00878dfb();
  }
  iStack_4 = 0x4e094d;
  VariantInit((VARIANTARG *)(unaff_EBP + -0xb8));
  iStack_4 = unaff_EBP + -0xb8;
  uStack_8 = 0x4e095a;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_4 = 0x4e0966;
    FUN_00878dfb();
  }
  iVar3 = *(int *)(unaff_EBX + 0x104);
  *(undefined1 *)(unaff_EBP + -4) = 99;
  *(int *)(unaff_EBP + -0x28) = iVar3;
  if (iVar3 == 0) {
    iStack_4 = 0x4e0988;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + 8) == 0) {
    iStack_4 = 0x4e0996;
    FUN_00878dfb();
  }
  piVar1 = *(int **)(unaff_EBP + 8);
  iVar3 = FUN_0040e53d();
  uStack_c = *(undefined4 *)(unaff_EBP + -0xb8);
  uStack_8 = *(undefined4 *)(unaff_EBP + -0xb4);
  iStack_4 = *(undefined4 *)(unaff_EBP + -0xb0);
  iVar3 = (**(code **)(*piVar1 + 0x80))
                    (piVar1,6,0x25U - iVar3 >> 1,*(undefined4 *)(unaff_EBP + -0x28));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,piVar1,&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar3 = FUN_00402bc3(unaff_EBP + -0xb8);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  piVar1 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


