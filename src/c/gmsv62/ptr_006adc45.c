/* ptr_006adc45 - 0x006adc45 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_006adc45(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *unaff_EBX;
  int unaff_EBP;
  
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_0040263d();
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  piVar1 = (int *)FUN_004032b4();
  *(int **)(unaff_EBP + -0x1c) = piVar1;
  *(int **)(unaff_EBP + -0x18) = unaff_EBX;
  if (piVar1 != unaff_EBX) {
    param_4 = (undefined4 *)(unaff_EBP + -0x1c);
    param_3 = (int *)0x6adc84;
    param_4 = (undefined4 *)FUN_00404b30();
    if (((int)param_4 < (int)unaff_EBX) && (param_4 != (undefined4 *)0x80004002)) {
      param_3 = (int *)0x6adc95;
      FUN_00878dfb();
    }
  }
  param_4 = (undefined4 *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  param_3 = (int *)0x6adca2;
  param_4 = (undefined4 *)FUN_00402bc3();
  if ((int)param_4 < (int)unaff_EBX) {
    param_3 = (int *)0x6adcad;
    FUN_00878dfb();
  }
  *(int **)(unaff_EBP + 8) = unaff_EBX;
  do {
    param_4 = (undefined4 *)0x6adcbd;
    FUN_0087a1b0();
    param_3 = *(int **)(unaff_EBP + 8);
    param_4 = (undefined4 *)&stack0x00000014;
    param_3 = (int *)FUN_00412335();
    *(undefined1 **)(unaff_EBP + -0x24) = &stack0x00000010;
    FUN_00402e8e();
    param_3 = (int *)(unaff_EBP + -0x60);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    FUN_0040263d();
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    if (*(short *)(unaff_EBP + -0x60) == (short)unaff_EBX) {
LAB_006addc1:
      param_4 = (undefined4 *)(unaff_EBP + -0x60);
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      param_3 = (int *)0x6addce;
      param_4 = (undefined4 *)FUN_00402bc3();
      if ((int)param_4 < (int)unaff_EBX) {
        param_3 = (int *)0x6addd9;
        FUN_00878dfb();
      }
      param_4 = &DAT_00980690;
      param_3 = (int *)0x6addea;
      FUN_00403191();
      param_4 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      param_3 = (int *)0x6addfa;
      FUN_00403191();
      param_4 = (undefined4 *)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      param_3 = (int *)0x6ade0a;
      puVar3 = (undefined4 *)FUN_004489f5();
      piVar1 = (int *)*puVar3;
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      if (piVar1 == unaff_EBX) {
        param_4 = (undefined4 *)0x80004003;
        param_3 = (int *)0x6ade1e;
        FUN_00878dfb();
      }
      piVar1 = (int *)*puVar3;
      iVar2 = *piVar1;
      param_3 = *(int **)(unaff_EBP + -0x98);
      param_4 = *(undefined4 **)(unaff_EBP + -0x94);
      *(int **)(unaff_EBP + 0xc) = piVar1;
      iVar2 = (**(code **)(iVar2 + 0x110))
                        (piVar1,0x20,*(undefined4 *)(unaff_EBP + -0x90),
                         *(undefined4 *)(unaff_EBP + -0x8c),*(undefined4 *)(unaff_EBP + -0x88));
      if (iVar2 < (int)unaff_EBX) {
        FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + 0xc),&DAT_00963df8);
      }
      FUN_00412600();
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x90);
      if (iVar2 < (int)unaff_EBX) {
        FUN_00878dfb(iVar2);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      iVar2 = FUN_00402bc3(unaff_EBP + -0xa0);
      if (iVar2 < (int)unaff_EBX) {
        FUN_00878dfb(iVar2);
      }
      FUN_004027eb();
      FUN_004027eb();
      FUN_004125e6();
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
    param_4 = (undefined4 *)(unaff_EBP + -0x60);
    param_3 = (int *)(unaff_EBP + -100);
    param_4 = (undefined4 *)FUN_00412348();
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    param_3 = (int *)0x6add17;
    FUN_004172b7();
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    param_4 = (undefined4 *)0x6add23;
    FUN_004027b3();
    piVar1 = *(int **)(unaff_EBP + 0xc);
    if (piVar1 == unaff_EBX) {
      param_4 = (undefined4 *)0x6addc1;
      FUN_004125e6();
      goto LAB_006addc1;
    }
    param_3 = piVar1;
    iVar2 = (**(code **)(*piVar1 + 0x70))();
    if (iVar2 < (int)unaff_EBX) {
      FUN_00878e09();
    }
    if (*(int **)(unaff_EBP + 0xc) == unaff_EBX) {
      FUN_00878dfb();
    }
    piVar1 = *(int **)(unaff_EBP + 0xc);
    iVar2 = (**(code **)(*piVar1 + 0x78))();
    if (iVar2 < (int)unaff_EBX) {
      param_4 = (undefined4 *)&DAT_00963cc8;
      param_3 = piVar1;
      FUN_00878e09();
    }
    param_4 = *(undefined4 **)(unaff_EBP + 0xc);
    *(undefined1 **)(unaff_EBP + -0x24) = &stack0x00000010;
    param_3 = (int *)0x6add78;
    FUN_004125f3();
    *(int ***)(unaff_EBP + -0x24) = &param_3;
    FUN_0041160e();
    FUN_0042ea7d();
    param_4 = (undefined4 *)0x6add99;
    FUN_004125e6();
    param_4 = (undefined4 *)(unaff_EBP + -0x60);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    param_3 = (int *)0x6adda6;
    param_4 = (undefined4 *)FUN_00402bc3();
    if ((int)param_4 < (int)unaff_EBX) {
      param_3 = (int *)0x6addb1;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
  } while( true );
}


