/* FUN_00411207 - 0x00411207 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00411207(void)

{
  int *piVar1;
  int iVar2;
  undefined4 extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int **ppiVar3;
  int unaff_EBP;
  int *piStack_6c;
  int *piStack_68;
  int *piStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 *puStack_3c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = extraout_ECX;
  puStack_3c = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  uStack_40 = 0x41122f;
  FUN_00403191();
  puStack_3c = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_40 = 0x41123c;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (*(int *)(unaff_EBP + 0x10) == 0) {
    puStack_3c = (undefined4 *)0x80004003;
    uStack_40 = 0x411250;
    FUN_00878dfb();
  }
  puStack_3c = (undefined4 *)(unaff_EBP + -0x10);
  uStack_40 = 0x41125c;
  piVar1 = (int *)FUN_004113e5();
  iVar2 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar2 == 0) {
    puStack_3c = (undefined4 *)0x80004003;
    uStack_40 = 0x411271;
    FUN_00878dfb();
  }
  piVar1 = (int *)*piVar1;
  uStack_48 = *(undefined4 *)(unaff_EBP + -0x38);
  uStack_44 = *(undefined4 *)(unaff_EBP + -0x34);
  uStack_40 = *(undefined4 *)(unaff_EBP + -0x30);
  puStack_3c = *(undefined4 **)(unaff_EBP + -0x2c);
  uStack_58 = *(undefined4 *)(unaff_EBP + -0x28);
  uStack_54 = *(undefined4 *)(unaff_EBP + -0x24);
  uStack_5c = 0;
  uStack_50 = *(undefined4 *)(unaff_EBP + -0x20);
  uStack_60 = 0xff;
  uStack_4c = *(undefined4 *)(unaff_EBP + -0x1c);
  piStack_68 = (int *)0x41129b;
  piStack_64 = piVar1;
  iVar2 = (**(code **)(*piVar1 + 0x90))();
  if (iVar2 < 0) {
    piStack_68 = (int *)&DAT_00963de8;
    piStack_6c = piVar1;
    FUN_00878e09(iVar2);
  }
  piStack_68 = (int *)0x4112b3;
  FUN_004125d9();
  piStack_68 = (int *)(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  piStack_6c = (int *)0x4112c0;
  piStack_68 = (int *)FUN_00402bc3();
  if ((int)piStack_68 < 0) {
    piStack_6c = (int *)0x4112cb;
    FUN_00878dfb();
  }
  piStack_68 = (int *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_6c = (int *)0x4112d8;
  piStack_68 = (int *)FUN_00402bc3();
  if ((int)piStack_68 < 0) {
    piStack_6c = (int *)0x4112e3;
    FUN_00878dfb();
  }
  piStack_68 = (int *)0x3;
  piStack_6c = (int *)0xfffffffe;
  FUN_004031b7();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (*(int *)(unaff_EBP + 0x10) == 0) {
    piStack_68 = (int *)0x80004003;
    piStack_6c = (int *)0x411303;
    FUN_00878dfb();
  }
  piStack_68 = (int *)(unaff_EBP + -0x38);
  piStack_6c = (int *)(unaff_EBP + -0x10);
  FUN_0041141a();
  piStack_68 = (int *)0x41131b;
  FUN_004125e6();
  piStack_68 = (int *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_6c = (int *)0x411328;
  piVar1 = (int *)FUN_00402bc3();
  if ((int)piVar1 < 0) {
    piStack_6c = (int *)0x411333;
    piStack_68 = piVar1;
    FUN_00878dfb();
    piStack_68 = extraout_ECX_00;
  }
  piStack_6c = (int *)(unaff_EBP + 8);
  *(int ***)(unaff_EBP + -0x18) = &piStack_68;
  FUN_0040810c();
  piStack_6c = (int *)0x41134a;
  iVar2 = FUN_00408b5a();
  if (iVar2 == 0) {
    piStack_68 = (int *)0x411356;
    FUN_00402fa6();
    piStack_68 = (int *)0x41135e;
    FUN_00412600();
  }
  else {
    iVar2 = *(int *)(*(int *)(iVar2 + 0xc) + *(int *)(unaff_EBP + 0xc) * 4);
    if (((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + -4), iVar2 != 0)) &&
       (piVar1 = (int *)0x0, 0 < iVar2)) {
      do {
        piStack_6c = (int *)0x411384;
        piStack_68 = piVar1;
        piStack_6c = (int *)FUN_004172ab();
        piStack_6c = (int *)*piStack_6c;
        ppiVar3 = &piStack_68;
        *(int ***)(unaff_EBP + 0xc) = &piStack_68;
        piStack_68 = piStack_6c;
        if (piStack_6c != (int *)0x0) {
          (**(code **)(*piStack_6c + 4))();
          ppiVar3 = (int **)extraout_ECX_01;
        }
        *(int ***)(unaff_EBP + 0xc) = &piStack_6c;
        piStack_6c = (int *)ppiVar3;
        FUN_0041160e(unaff_EBP + 0x10);
        FUN_0042ea7d();
        piVar1 = (int *)((int)piVar1 + 1);
      } while ((int)piVar1 < iVar2);
    }
    if (*(int *)(unaff_EBP + 8) != 0) {
      piStack_68 = (int *)0x4113bf;
      FUN_004030b1();
      *(undefined4 *)(unaff_EBP + 8) = 0;
    }
    piStack_68 = *(int **)(unaff_EBP + 0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piStack_68 != (int *)0x0) {
      piStack_6c = (int *)0x4113d4;
      (**(code **)(*piStack_68 + 8))();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


