/* FUN_006f8a7d - 0x006f8a7d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006f8a7d(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_0081622a();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + 8) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puVar3 = (undefined4 *)FUN_00448dc6();
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
             (IBinding *)*puVar3);
  FUN_004125e6();
  puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x14);
  uVar1 = *puVar3;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0040381b(uVar1,unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_00403384();
  }
  if (*(int *)(extraout_ECX + 0x668) == 0) {
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00403191();
    piVar4 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (piVar4 == (int *)0x0) {
      FUN_00878dfb();
      piVar4 = *(int **)(unaff_EBP + 8);
    }
    uVar1 = *(undefined4 *)(extraout_ECX + 0x20);
    iVar5 = *piVar4;
    uVar2 = *(undefined4 *)(extraout_ECX + 0x1c);
    *(int **)(unaff_EBP + -0x14) = piVar4;
    iVar5 = (**(code **)(iVar5 + 0x2c))
                      (piVar4,uVar2,uVar1,*(undefined4 *)(unaff_EBP + -0x44),
                       *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                       *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x54),
                       *(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + -0x4c));
    if (iVar5 < 0) {
      FUN_00878e09(iVar5,*(undefined4 *)(unaff_EBP + -0x14));
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffffa8;
    FUN_004125f3();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_006f9ec2();
    FUN_006f6d2e();
  }
  else if (*(int *)(extraout_ECX + 0x668) == 1) {
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_00403191();
    piVar4 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    if (piVar4 == (int *)0x0) {
      FUN_00878dfb();
      piVar4 = *(int **)(unaff_EBP + 8);
    }
    uVar1 = *(undefined4 *)(extraout_ECX + 0x20);
    iVar5 = *piVar4;
    uVar2 = *(undefined4 *)(extraout_ECX + 0x1c);
    *(int **)(unaff_EBP + -0x14) = piVar4;
    iVar5 = (**(code **)(iVar5 + 0x2c))
                      (piVar4,uVar2,uVar1,*(undefined4 *)(unaff_EBP + -0x24),
                       *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                       *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x34),
                       *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c));
    if (iVar5 < 0) {
      FUN_00878e09(iVar5,*(undefined4 *)(unaff_EBP + -0x14));
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffffa8;
    FUN_004125f3();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_006f9f19();
    FUN_006f6f60();
  }
  FUN_004031b7(0xff);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb();
  }
  piVar4 = *(int **)(unaff_EBP + -0x10);
  iVar5 = (**(code **)(*piVar4 + 0x80))
                    (piVar4,6,0x35,*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + -0x54)
                     ,*(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + -0x4c));
  if (iVar5 < 0) {
    FUN_00878e09(iVar5,piVar4,&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar5 = FUN_00402bc3(unaff_EBP + -0x54);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  FUN_004125e6();
  FUN_004125e6();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


