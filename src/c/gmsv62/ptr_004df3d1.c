/* ptr_004df3d1 - 0x004df3d1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_004df3d1(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int unaff_EBX;
  int unaff_EBP;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uStack_10;
  int iStack_c;
  int iStack_8;
  
  iStack_8 = unaff_EBP + -0x54;
  iStack_c = 0x4df3e6;
  puVar2 = (undefined4 *)FUN_00679d22();
  iStack_8 = *puVar2;
  iStack_c = unaff_EBP + -0x10;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_10 = 0x4df3fc;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x54) != 0) {
    iStack_8 = 0x4df413;
    FUN_00434e38();
  }
  iStack_8 = 0x4df420;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_8 = 0x4df430;
  FUN_00403191();
  iStack_8 = unaff_EBP + -0x238;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_c = 0x4df44d;
  iStack_c = FUN_00449749();
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_10;
  FUN_00679e4e(&uStack_10,0x2ea);
  uVar5 = 5;
  uVar4 = 0x19;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_004115d9(0x19,5);
  FUN_00448e3a(uVar4,uVar5);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_8 = 0x4df488;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_8 = 0x4df493;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_8 = 0x4df4a3;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_8 = 0x4df4ae;
    FUN_00878dfb();
  }
  iStack_8 = 0x4df4ba;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_8 = 0x4df4ca;
  FUN_00403191();
  iStack_8 = unaff_EBP + -0x268;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_c = 0x4df4e7;
  iStack_c = FUN_00449749();
  uStack_10 = 0x4df4f0;
  uVar4 = FUN_00449713();
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_10;
  FUN_00448a17(uVar4);
  uVar5 = 0x12;
  uVar4 = 0x19;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_004115d9(0x19,0x12);
  FUN_00448e3a(uVar4,uVar5);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_8 = 0x4df523;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_8 = 0x4df52e;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_8 = 0x4e0935;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_8 = 0x4e0940;
    FUN_00878dfb();
  }
  iStack_8 = 0x4e094d;
  VariantInit((VARIANTARG *)(unaff_EBP + -0xb8));
  iStack_8 = unaff_EBP + -0xb8;
  iStack_c = 0x4e095a;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_8 = 0x4e0966;
    FUN_00878dfb();
  }
  iVar3 = *(int *)(unaff_EBX + 0x104);
  *(undefined1 *)(unaff_EBP + -4) = 99;
  *(int *)(unaff_EBP + -0x28) = iVar3;
  if (iVar3 == 0) {
    iStack_8 = 0x4e0988;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + 8) == 0) {
    iStack_8 = 0x4e0996;
    FUN_00878dfb();
  }
  piVar1 = *(int **)(unaff_EBP + 8);
  iVar3 = FUN_0040e53d();
  uStack_10 = *(undefined4 *)(unaff_EBP + -0xb8);
  iStack_c = *(undefined4 *)(unaff_EBP + -0xb4);
  iStack_8 = *(undefined4 *)(unaff_EBP + -0xb0);
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


