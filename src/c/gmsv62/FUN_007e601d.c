/* FUN_007e601d - 0x007e601d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_007e601d(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int unaff_EBP;
  undefined4 uStack_94;
  int iStack_90;
  int iStack_8c;
  undefined4 uStack_88;
  undefined4 *puStack_84;
  int *piStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  undefined4 *puStack_58;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  puStack_58 = (undefined4 *)0x3af;
  iStack_5c = unaff_EBP + -0x14;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_60 = 0x7e604f;
  puVar1 = (undefined4 *)FUN_00679d86();
  uStack_60 = *puVar1;
  puStack_58 = (undefined4 *)0x0;
  iStack_5c = unaff_EBP + -0x10;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_64 = 0x7e6060;
  FUN_0040381b();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    puStack_58 = (undefined4 *)(*(int *)(unaff_EBP + -0x14) + -0xc);
    iStack_5c = 0x7e6077;
    FUN_00403384();
  }
  puStack_58 = &DAT_00980690;
  iStack_5c = 0x7e6086;
  FUN_00403191();
  puStack_58 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_5c = 0x7e6093;
  FUN_00403191();
  piStack_80 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (piStack_80 == (int *)0x0) {
    puStack_58 = (undefined4 *)0x80004003;
    iStack_5c = 0x7e60a8;
    FUN_00878dfb();
    piStack_80 = *(int **)(unaff_EBP + -0x10);
  }
  uStack_64 = *(undefined4 *)(unaff_EBP + -0x34);
  uStack_60 = *(undefined4 *)(unaff_EBP + -0x30);
  iVar2 = *piStack_80;
  iStack_5c = *(undefined4 *)(unaff_EBP + -0x2c);
  puStack_58 = *(undefined4 **)(unaff_EBP + -0x28);
  uStack_74 = *(undefined4 *)(unaff_EBP + -0x24);
  uStack_70 = *(undefined4 *)(unaff_EBP + -0x20);
  uStack_78 = 0x20;
  uStack_6c = *(undefined4 *)(unaff_EBP + -0x1c);
  uStack_7c = 0x20;
  *(int **)(unaff_EBP + -0x14) = piStack_80;
  uStack_68 = *(undefined4 *)(unaff_EBP + -0x18);
  puStack_84 = (undefined4 *)0x7e60d0;
  iVar2 = (**(code **)(iVar2 + 0x2c))();
  if (iVar2 < 0) {
    puStack_84 = (undefined4 *)&DAT_00963cc8;
    uStack_88 = *(undefined4 *)(unaff_EBP + -0x14);
    iStack_90 = 0x7e60e2;
    iStack_8c = iVar2;
    FUN_00878e09();
  }
  puStack_84 = (undefined4 *)(unaff_EBP + -0x24);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uStack_88 = 0x7e60ef;
  puStack_84 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_84 < 0) {
    uStack_88 = 0x7e60fa;
    FUN_00878dfb();
  }
  puStack_84 = (undefined4 *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_88 = 0x7e6107;
  puStack_84 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_84 < 0) {
    uStack_88 = 0x7e6112;
    FUN_00878dfb();
  }
  puStack_84 = (undefined4 *)0x3;
  uStack_88 = 0xff;
  iStack_8c = 0x7e6121;
  FUN_004031b7();
  puStack_84 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_88 = 0x7e612e;
  FUN_00403191();
  puStack_84 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  uStack_88 = 0x7e613b;
  FUN_00403191();
  puStack_84 = (undefined4 *)0x0;
  uStack_88 = 0;
  iStack_8c = unaff_EBP + -0x24;
  iStack_90 = unaff_EBP + -0x34;
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_94;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00679e4e(&uStack_94,0xb12);
  iVar2 = unaff_EBP + -0x54;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_8c = 0x7e6187;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar3;
  puStack_84 = (undefined4 *)0x7e6192;
  piVar4 = (int *)FUN_004115d9();
  uStack_94 = *(undefined4 *)(unaff_EBP + -0x14);
  iStack_90 = *(undefined4 *)(unaff_EBP + -0x44);
  iStack_8c = *(undefined4 *)(unaff_EBP + -0x40);
  uStack_88 = *(undefined4 *)(unaff_EBP + -0x3c);
  puStack_84 = *(undefined4 **)(unaff_EBP + -0x38);
  iVar2 = (**(code **)(*piVar4 + 0x80))(piVar4,0,0);
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar4,&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x54);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x34);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x24);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x44);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  FUN_004031b7(0xff,3);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    FUN_00878dfb(0x80004003);
  }
  iVar2 = FUN_0040e53d();
  iVar2 = (0x20 - iVar2) / 2;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    FUN_00878dfb(0x80004003);
  }
  iVar5 = FUN_0040e48b();
  iVar6 = (0x20 - iVar5) / 2;
  iVar5 = 0;
  if (-1 < iVar6) {
    iVar5 = iVar6;
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_00470739(iVar5,iVar2,*(undefined4 *)(unaff_EBP + 0xc),unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x44);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  *puVar1 = *(undefined4 *)(unaff_EBP + -0x10);
  FUN_004125f3();
  FUN_004125e6();
  FUN_004125e6();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar1;
}


