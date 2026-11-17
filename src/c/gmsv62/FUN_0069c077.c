/* FUN_0069c077 - 0x0069c077 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0069c077(void)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 *puStack_38;
  
  FUN_00879bb8();
  puStack_38 = *(undefined4 **)(unaff_EBP + 8);
  uStack_3c = 0x69c091;
  FUN_0081622a();
  puStack_38 = (undefined4 *)(unaff_EBP + 8);
  uStack_3c = 0x69c09c;
  FUN_00448dc6();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(extraout_ECX + 0xa4) != 0) {
    puStack_38 = &DAT_00980690;
    uStack_3c = 0x69c0bb;
    FUN_00403191();
    puStack_38 = (undefined4 *)0x3;
    uStack_3c = 0xff;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    uStack_40 = 0x69c0ce;
    FUN_004031b7();
    uStack_44 = *(undefined4 *)(extraout_ECX + 0x9c);
    puStack_38 = (undefined4 *)0x0;
    uStack_3c = 0;
    uStack_40 = 0xffffffff;
    uStack_48 = 0;
    uStack_4c = 0;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    (*DAT_0097b4c8)();
    FUN_0087a1b0();
    *(undefined4 **)(unaff_EBP + -0x10) = &uStack_4c;
    FUN_007d4a9a(unaff_EBP + -0x14,1,unaff_EBP + -0x24,unaff_EBP + -0x34);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    uStack_40 = 0x69c11d;
    uStack_40 = FUN_00449749();
    uStack_44 = 0xffffffff;
    uStack_48 = *(undefined4 *)(unaff_EBP + -0x10);
    uStack_4c = 0x69c12a;
    uStack_4c = FUN_00449713();
    uStack_48 = FUN_00456ad5();
    *(undefined4 **)(unaff_EBP + -0x10) = &uStack_44;
    uStack_4c = 0x69c13d;
    FUN_004033a1();
    uStack_48 = 0x19;
    uStack_4c = 0x54;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_004115d9();
    FUN_00448e3a();
    puStack_38 = (undefined4 *)0x69c15c;
    FUN_004497b5();
    puStack_38 = (undefined4 *)(unaff_EBP + -0x24);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    uStack_3c = 0x69c169;
    puStack_38 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_38 < 0) {
      uStack_3c = 0x69c174;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puStack_38 = (undefined4 *)(unaff_EBP + -0x34);
    uStack_3c = 0x69c181;
    puStack_38 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_38 < 0) {
      uStack_3c = 0x69c18c;
      FUN_00878dfb();
    }
  }
  if ((*(int *)(extraout_ECX + 0x5c) != *(int *)(extraout_ECX + 0x90)) &&
     (*(int *)(extraout_ECX + 0x5c) != *(int *)(extraout_ECX + 0x98))) {
    puStack_38 = (undefined4 *)(unaff_EBP + -0x14);
    uStack_3c = 0x69c1b2;
    puVar2 = (undefined4 *)FUN_0045b90e();
    if (((char *)*puVar2 == (char *)0x0) || (*(char *)*puVar2 == '\0')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      puStack_38 = (undefined4 *)(*(int *)(unaff_EBP + -0x14) + -0xc);
      uStack_3c = 0x69c1d9;
      FUN_00434e38();
    }
    if (bVar1) {
      puStack_38 = (undefined4 *)(unaff_EBP + -0x14);
      uStack_3c = 0x69c1f1;
      puVar2 = (undefined4 *)FUN_0045b90e();
      if (((char *)*puVar2 == (char *)0x0) || (*(char *)*puVar2 == '\0')) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (*(int *)(unaff_EBP + -0x14) != 0) {
        puStack_38 = (undefined4 *)(*(int *)(unaff_EBP + -0x14) + -0xc);
        uStack_3c = 0x69c217;
        FUN_00434e38();
      }
      if (bVar1) {
        puStack_38 = &DAT_00980690;
        uStack_3c = 0x69c229;
        FUN_00403191();
        puStack_38 = &DAT_00980690;
        *(undefined1 *)(unaff_EBP + -4) = 8;
        uStack_3c = 0x69c236;
        FUN_00403191();
        iVar4 = *(int *)(extraout_ECX + 0xa8);
        *(undefined1 *)(unaff_EBP + -4) = 9;
        if (iVar4 == 0) {
          puStack_38 = (undefined4 *)0x80004003;
          uStack_3c = 0x69c250;
          FUN_00878dfb();
        }
        puStack_38 = (undefined4 *)(unaff_EBP + -0x14);
        uStack_3c = 0x69c25d;
        piVar3 = (int *)FUN_004113e5();
        iVar4 = *piVar3;
        *(undefined1 *)(unaff_EBP + -4) = 10;
        if (iVar4 == 0) {
          puStack_38 = (undefined4 *)0x80004003;
          uStack_3c = 0x69c26e;
          FUN_00878dfb();
        }
        piVar3 = (int *)*piVar3;
        uStack_44 = *(undefined4 *)(unaff_EBP + -0x24);
        uStack_40 = *(undefined4 *)(unaff_EBP + -0x20);
        uStack_3c = *(undefined4 *)(unaff_EBP + -0x1c);
        puStack_38 = *(undefined4 **)(unaff_EBP + -0x18);
        uStack_4c = *(undefined4 *)(unaff_EBP + -0x2c);
        uStack_48 = *(undefined4 *)(unaff_EBP + -0x28);
        iVar4 = (**(code **)(*piVar3 + 0x90))
                          (piVar3,0xff,0xff,*(undefined4 *)(unaff_EBP + -0x34),
                           *(undefined4 *)(unaff_EBP + -0x30));
        if (iVar4 < 0) {
          FUN_00878e09(iVar4,piVar3,&DAT_00963de8);
        }
        FUN_004125d9();
        *(undefined1 *)(unaff_EBP + -4) = 8;
        iVar4 = FUN_00402bc3(unaff_EBP + -0x34);
        if (iVar4 < 0) {
          FUN_00878dfb(iVar4);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        goto LAB_0069c380;
      }
    }
  }
  puStack_38 = &DAT_00980690;
  uStack_3c = 0x69c2dd;
  FUN_00403191();
  puStack_38 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_3c = 0x69c2ea;
  FUN_00403191();
  iVar4 = *(int *)(extraout_ECX + 0xa8);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar4 == 0) {
    puStack_38 = (undefined4 *)0x80004003;
    uStack_3c = 0x69c304;
    FUN_00878dfb();
  }
  puStack_38 = (undefined4 *)(unaff_EBP + -0x14);
  uStack_3c = 0x69c311;
  piVar3 = (int *)FUN_004113e5();
  iVar4 = *piVar3;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (iVar4 == 0) {
    puStack_38 = (undefined4 *)0x80004003;
    uStack_3c = 0x69c322;
    FUN_00878dfb();
  }
  piVar3 = (int *)*piVar3;
  uStack_44 = *(undefined4 *)(unaff_EBP + -0x24);
  uStack_40 = *(undefined4 *)(unaff_EBP + -0x20);
  uStack_3c = *(undefined4 *)(unaff_EBP + -0x1c);
  puStack_38 = *(undefined4 **)(unaff_EBP + -0x18);
  uStack_4c = *(undefined4 *)(unaff_EBP + -0x2c);
  uStack_48 = *(undefined4 *)(unaff_EBP + -0x28);
  iVar4 = (**(code **)(*piVar3 + 0x90))
                    (piVar3,0,0,*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,piVar3,&DAT_00963de8);
  }
  FUN_004125d9();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x34);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
LAB_0069c380:
  iVar4 = FUN_00402bc3(unaff_EBP + -0x24);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  piVar3 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


