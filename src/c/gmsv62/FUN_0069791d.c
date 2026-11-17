/* FUN_0069791d - 0x0069791d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0069791d(void)

{
  int iVar1;
  int *piVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 *puStack_3c;
  
  FUN_00879bb8();
  puStack_3c = (undefined4 *)0x0;
  iStack_40 = 0x697936;
  FUN_0081622a();
  puStack_3c = (undefined4 *)(unaff_EBP + -0x10);
  iStack_40 = 0x697941;
  FUN_00448dc6();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puStack_3c = &DAT_00980690;
  iStack_40 = 0x697953;
  FUN_00403191();
  puStack_3c = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_40 = 0x697960;
  FUN_00403191();
  puStack_3c = (undefined4 *)(unaff_EBP + -0x38);
  iStack_40 = unaff_EBP + -0x28;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_44 = 0x697977;
  FUN_006a7cd5();
  uStack_44 = 0x69797e;
  FUN_00697b31();
  uStack_44 = 0x697990;
  uStack_44 = FUN_00449749();
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_48;
  FUN_00679e4e(&uStack_48,0xab7);
  uVar4 = 0x75;
  uVar3 = 0x3c;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_004115d9(0x3c,0x75);
  FUN_00448e3a(uVar3,uVar4);
  puStack_3c = (undefined4 *)(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_40 = 0x6979cb;
  puStack_3c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_3c < 0) {
    iStack_40 = 0x6979d6;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  puStack_3c = (undefined4 *)(unaff_EBP + -0x38);
  iStack_40 = 0x6979e3;
  puStack_3c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_3c < 0) {
    iStack_40 = 0x6979ee;
    FUN_00878dfb();
  }
  puStack_3c = &DAT_00980690;
  iStack_40 = 0x6979f7;
  FUN_00403191();
  iVar1 = *(int *)(*(int *)(extraout_ECX + 0x90) + 0x48);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(extraout_ECX + 0x7c + (uint)(iVar1 != 0) * 4)
  ;
  piVar2 = *(int **)(unaff_EBP + -0x10);
  if (piVar2 == (int *)0x0) {
    puStack_3c = (undefined4 *)0x80004003;
    iStack_40 = 0x697a23;
    FUN_00878dfb();
    piVar2 = *(int **)(unaff_EBP + -0x10);
  }
  iVar1 = *piVar2;
  uStack_48 = *(undefined4 *)(unaff_EBP + -0x38);
  uStack_44 = *(undefined4 *)(unaff_EBP + -0x34);
  iStack_40 = *(undefined4 *)(unaff_EBP + -0x30);
  *(int **)(unaff_EBP + -0x18) = piVar2;
  puStack_3c = *(undefined4 **)(unaff_EBP + -0x2c);
  iVar1 = (**(code **)(iVar1 + 0x80))(piVar2,0x71,0x72,*(undefined4 *)(unaff_EBP + -0x14));
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  FUN_004031b7(0xff,3);
  iVar1 = *(int *)(*(int *)(extraout_ECX + 0x90) + 0x48);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(extraout_ECX + 0x74 + (uint)(iVar1 == 0) * 4)
  ;
  piVar2 = *(int **)(unaff_EBP + -0x10);
  if (piVar2 == (int *)0x0) {
    FUN_00878dfb(0x80004003);
    piVar2 = *(int **)(unaff_EBP + -0x10);
  }
  iVar1 = *piVar2;
  *(int **)(unaff_EBP + -0x14) = piVar2;
  iVar1 = (**(code **)(iVar1 + 0x80))
                    (piVar2,0xf,0x5e,*(undefined4 *)(unaff_EBP + -0x18),
                     *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c));
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  (**(code **)(*(int *)(*(int *)(extraout_ECX + 0xa0) + 4) + 0x1c))
            (*(undefined4 *)(*(int *)(extraout_ECX + 0x90) + 0x48));
  piVar2 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


