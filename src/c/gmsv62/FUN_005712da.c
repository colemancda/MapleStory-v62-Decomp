/* FUN_005712da - 0x005712da in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_005712da(void)

{
  int iVar1;
  int *piVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = *(int *)(extraout_ECX + 0xf0);
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  if (1 < (iVar1 + -1) / 3 + 1) {
    *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + 0xc);
    iVar1 = FUN_00570fb5(&DAT_00965790,unaff_EBP + -0x18);
    if (iVar1 == 0) {
      iVar1 = FUN_00570fb5(&DAT_009657a0,unaff_EBP + -0x18);
      if (iVar1 == 0) {
        *(undefined4 *)(unaff_EBP + -0x38) = DAT_00980690;
        *(undefined4 *)(unaff_EBP + -0x34) = DAT_00980694;
        iVar1 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0xb8);
        *(undefined4 *)(unaff_EBP + -0x30) = DAT_00980698;
        *(undefined4 *)(unaff_EBP + -0x2c) = DAT_0098069c;
        *(undefined4 *)(unaff_EBP + -0x28) = DAT_00980690;
        *(undefined4 *)(unaff_EBP + -0x24) = DAT_00980694;
        *(undefined4 *)(unaff_EBP + -0x20) = DAT_00980698;
        *(undefined4 *)(unaff_EBP + -0x1c) = DAT_0098069c;
        if (iVar1 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar2 = (int *)FUN_004113e5(unaff_EBP + 8);
        iVar1 = *piVar2;
        *(undefined4 *)(unaff_EBP + -4) = 8;
        if (iVar1 == 0) {
          FUN_00878dfb(0x80004003);
        }
        (**(code **)(*(int *)*piVar2 + 0x90))
                  ((int *)*piVar2,0xff,0,*(undefined4 *)(unaff_EBP + -0x28),
                   *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                   *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x38),
                   *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                   *(undefined4 *)(unaff_EBP + -0x2c));
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_004125d9();
        *(undefined4 *)(unaff_EBP + -0x38) = DAT_00980690;
        *(undefined4 *)(unaff_EBP + -0x34) = DAT_00980694;
        iVar1 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0xbc);
        *(undefined4 *)(unaff_EBP + -0x30) = DAT_00980698;
        *(undefined4 *)(unaff_EBP + -0x2c) = DAT_0098069c;
        *(undefined4 *)(unaff_EBP + -0x28) = DAT_00980690;
        *(undefined4 *)(unaff_EBP + -0x24) = DAT_00980694;
        *(undefined4 *)(unaff_EBP + -0x20) = DAT_00980698;
        *(undefined4 *)(unaff_EBP + -0x1c) = DAT_0098069c;
        if (iVar1 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar2 = (int *)FUN_004113e5(unaff_EBP + 8);
        iVar1 = *piVar2;
        *(undefined4 *)(unaff_EBP + -4) = 9;
        if (iVar1 == 0) {
          FUN_00878dfb(0x80004003);
        }
        (**(code **)(*(int *)*piVar2 + 0x90))
                  ((int *)*piVar2,0xff,0,*(undefined4 *)(unaff_EBP + -0x28),
                   *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                   *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x38),
                   *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                   *(undefined4 *)(unaff_EBP + -0x2c));
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_004125d9();
        *(undefined4 *)(unaff_EBP + -0x38) = DAT_00980690;
        *(undefined4 *)(unaff_EBP + -0x34) = DAT_00980694;
        *(undefined4 *)(unaff_EBP + -0x30) = DAT_00980698;
        *(undefined4 *)(unaff_EBP + -0x2c) = DAT_0098069c;
        *(undefined4 *)(unaff_EBP + -0x28) = DAT_00980690;
        *(undefined4 *)(unaff_EBP + -0x24) = DAT_00980694;
        iVar1 = unaff_EBP + 8;
        *(undefined4 *)(unaff_EBP + -0x20) = DAT_00980698;
        *(undefined4 *)(unaff_EBP + -0x1c) = DAT_0098069c;
        FUN_00424e27(iVar1);
        FUN_004113e5(iVar1);
        *(undefined4 *)(unaff_EBP + -4) = 10;
        piVar2 = (int *)FUN_00424df4();
        (**(code **)(*piVar2 + 0x90))
                  (piVar2,0,0,*(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                   *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                   *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                   *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c));
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_004125d9();
        *(undefined4 *)(unaff_EBP + -0x38) = DAT_00980690;
        *(undefined4 *)(unaff_EBP + -0x34) = DAT_00980694;
        *(undefined4 *)(unaff_EBP + -0x30) = DAT_00980698;
        *(undefined4 *)(unaff_EBP + -0x2c) = DAT_0098069c;
        *(undefined4 *)(unaff_EBP + -0x28) = DAT_00980690;
        *(undefined4 *)(unaff_EBP + -0x24) = DAT_00980694;
        *(undefined4 *)(unaff_EBP + -0x20) = DAT_00980698;
        *(undefined4 *)(unaff_EBP + -0x1c) = DAT_0098069c;
        iVar1 = unaff_EBP + 0xc;
        FUN_00424e27(iVar1);
        FUN_004113e5(iVar1);
        *(undefined4 *)(unaff_EBP + -4) = 0xb;
        piVar2 = (int *)FUN_00424df4();
        (**(code **)(*piVar2 + 0x90))
                  (piVar2,0,0,*(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                   *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                   *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                   *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c));
      }
      else {
        *(undefined4 *)(unaff_EBP + -0x38) = DAT_00980690;
        *(undefined4 *)(unaff_EBP + -0x34) = DAT_00980694;
        iVar1 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0xb8);
        *(undefined4 *)(unaff_EBP + -0x30) = DAT_00980698;
        *(undefined4 *)(unaff_EBP + -0x2c) = DAT_0098069c;
        *(undefined4 *)(unaff_EBP + -0x28) = DAT_00980690;
        *(undefined4 *)(unaff_EBP + -0x24) = DAT_00980694;
        *(undefined4 *)(unaff_EBP + -0x20) = DAT_00980698;
        *(undefined4 *)(unaff_EBP + -0x1c) = DAT_0098069c;
        if (iVar1 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar2 = (int *)FUN_004113e5(unaff_EBP + 8);
        iVar1 = *piVar2;
        *(undefined4 *)(unaff_EBP + -4) = 4;
        if (iVar1 == 0) {
          FUN_00878dfb(0x80004003);
        }
        (**(code **)(*(int *)*piVar2 + 0x90))
                  ((int *)*piVar2,0xff,0,*(undefined4 *)(unaff_EBP + -0x28),
                   *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                   *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x38),
                   *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                   *(undefined4 *)(unaff_EBP + -0x2c));
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_004125d9();
        *(undefined4 *)(unaff_EBP + -0x38) = DAT_00980690;
        *(undefined4 *)(unaff_EBP + -0x34) = DAT_00980694;
        iVar1 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0xbc);
        *(undefined4 *)(unaff_EBP + -0x30) = DAT_00980698;
        *(undefined4 *)(unaff_EBP + -0x2c) = DAT_0098069c;
        *(undefined4 *)(unaff_EBP + -0x28) = DAT_00980690;
        *(undefined4 *)(unaff_EBP + -0x24) = DAT_00980694;
        *(undefined4 *)(unaff_EBP + -0x20) = DAT_00980698;
        *(undefined4 *)(unaff_EBP + -0x1c) = DAT_0098069c;
        if (iVar1 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar2 = (int *)FUN_004113e5(unaff_EBP + 8);
        iVar1 = *piVar2;
        *(undefined4 *)(unaff_EBP + -4) = 5;
        if (iVar1 == 0) {
          FUN_00878dfb(0x80004003);
        }
        (**(code **)(*(int *)*piVar2 + 0x90))
                  ((int *)*piVar2,0,0,*(undefined4 *)(unaff_EBP + -0x28),
                   *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                   *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x38),
                   *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                   *(undefined4 *)(unaff_EBP + -0x2c));
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_004125d9();
        *(undefined4 *)(unaff_EBP + -0x38) = DAT_00980690;
        *(undefined4 *)(unaff_EBP + -0x34) = DAT_00980694;
        iVar1 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0xc0);
        *(undefined4 *)(unaff_EBP + -0x30) = DAT_00980698;
        *(undefined4 *)(unaff_EBP + -0x2c) = DAT_0098069c;
        *(undefined4 *)(unaff_EBP + -0x28) = DAT_00980690;
        *(undefined4 *)(unaff_EBP + -0x24) = DAT_00980694;
        *(undefined4 *)(unaff_EBP + -0x20) = DAT_00980698;
        *(undefined4 *)(unaff_EBP + -0x1c) = DAT_0098069c;
        if (iVar1 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar2 = (int *)FUN_004113e5(unaff_EBP + 8);
        iVar1 = *piVar2;
        *(undefined4 *)(unaff_EBP + -4) = 6;
        if (iVar1 == 0) {
          FUN_00878dfb(0x80004003);
        }
        (**(code **)(*(int *)*piVar2 + 0x90))
                  ((int *)*piVar2,0,0,*(undefined4 *)(unaff_EBP + -0x28),
                   *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                   *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x38),
                   *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                   *(undefined4 *)(unaff_EBP + -0x2c));
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_004125d9();
        *(undefined4 *)(unaff_EBP + -0x38) = DAT_00980690;
        *(undefined4 *)(unaff_EBP + -0x34) = DAT_00980694;
        *(undefined4 *)(unaff_EBP + -0x30) = DAT_00980698;
        *(undefined4 *)(unaff_EBP + -0x2c) = DAT_0098069c;
        *(undefined4 *)(unaff_EBP + -0x28) = DAT_00980690;
        *(undefined4 *)(unaff_EBP + -0x24) = DAT_00980694;
        *(undefined4 *)(unaff_EBP + -0x20) = DAT_00980698;
        *(undefined4 *)(unaff_EBP + -0x1c) = DAT_0098069c;
        if (*(int *)(*(int *)(unaff_EBP + -0x10) + 0xc4) == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar2 = (int *)FUN_004113e5(unaff_EBP + 8);
        iVar1 = *piVar2;
        *(undefined4 *)(unaff_EBP + -4) = 7;
        if (iVar1 == 0) {
          FUN_00878dfb(0x80004003);
        }
        (**(code **)(*(int *)*piVar2 + 0x90))
                  ((int *)*piVar2,0xff,0,*(undefined4 *)(unaff_EBP + -0x28),
                   *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                   *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x38),
                   *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                   *(undefined4 *)(unaff_EBP + -0x2c));
      }
    }
    else {
      *(undefined4 *)(unaff_EBP + -0x28) = DAT_00980690;
      *(undefined4 *)(unaff_EBP + -0x24) = DAT_00980694;
      *(undefined4 *)(unaff_EBP + -0x20) = DAT_00980698;
      *(undefined4 *)(unaff_EBP + -0x1c) = DAT_0098069c;
      *(undefined4 *)(unaff_EBP + -0x38) = DAT_00980690;
      *(undefined4 *)(unaff_EBP + -0x34) = DAT_00980694;
      *(undefined4 *)(unaff_EBP + -0x30) = DAT_00980698;
      *(undefined4 *)(unaff_EBP + -0x2c) = DAT_0098069c;
      if (*(int *)(*(int *)(unaff_EBP + -0x10) + 0xb8) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar2 = (int *)FUN_004113e5(unaff_EBP + 8);
      iVar1 = *piVar2;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (iVar1 == 0) {
        FUN_00878dfb(0x80004003);
      }
      (**(code **)(*(int *)*piVar2 + 0x90))
                ((int *)*piVar2,0,0,*(undefined4 *)(unaff_EBP + -0x38),
                 *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                 *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                 *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                 *(undefined4 *)(unaff_EBP + -0x1c));
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_004125d9();
      *(undefined4 *)(unaff_EBP + -0x38) = DAT_00980690;
      *(undefined4 *)(unaff_EBP + -0x34) = DAT_00980694;
      iVar1 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0xbc);
      *(undefined4 *)(unaff_EBP + -0x30) = DAT_00980698;
      *(undefined4 *)(unaff_EBP + -0x2c) = DAT_0098069c;
      *(undefined4 *)(unaff_EBP + -0x28) = DAT_00980690;
      *(undefined4 *)(unaff_EBP + -0x24) = DAT_00980694;
      *(undefined4 *)(unaff_EBP + -0x20) = DAT_00980698;
      *(undefined4 *)(unaff_EBP + -0x1c) = DAT_0098069c;
      if (iVar1 == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar2 = (int *)FUN_004113e5(unaff_EBP + 8);
      iVar1 = *piVar2;
      *(undefined4 *)(unaff_EBP + -4) = 1;
      if (iVar1 == 0) {
        FUN_00878dfb(0x80004003);
      }
      (**(code **)(*(int *)*piVar2 + 0x90))
                ((int *)*piVar2,0xff,0,*(undefined4 *)(unaff_EBP + -0x28),
                 *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                 *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x38),
                 *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                 *(undefined4 *)(unaff_EBP + -0x2c));
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_004125d9();
      *(undefined4 *)(unaff_EBP + -0x38) = DAT_00980690;
      *(undefined4 *)(unaff_EBP + -0x34) = DAT_00980694;
      iVar1 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0xc0);
      *(undefined4 *)(unaff_EBP + -0x30) = DAT_00980698;
      *(undefined4 *)(unaff_EBP + -0x2c) = DAT_0098069c;
      *(undefined4 *)(unaff_EBP + -0x28) = DAT_00980690;
      *(undefined4 *)(unaff_EBP + -0x24) = DAT_00980694;
      *(undefined4 *)(unaff_EBP + -0x20) = DAT_00980698;
      *(undefined4 *)(unaff_EBP + -0x1c) = DAT_0098069c;
      if (iVar1 == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar2 = (int *)FUN_004113e5(unaff_EBP + 8);
      iVar1 = *piVar2;
      *(undefined4 *)(unaff_EBP + -4) = 2;
      if (iVar1 == 0) {
        FUN_00878dfb(0x80004003);
      }
      (**(code **)(*(int *)*piVar2 + 0x90))
                ((int *)*piVar2,0xff,0,*(undefined4 *)(unaff_EBP + -0x28),
                 *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                 *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x38),
                 *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                 *(undefined4 *)(unaff_EBP + -0x2c));
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_004125d9();
      *(undefined4 *)(unaff_EBP + -0x38) = DAT_00980690;
      *(undefined4 *)(unaff_EBP + -0x34) = DAT_00980694;
      *(undefined4 *)(unaff_EBP + -0x30) = DAT_00980698;
      *(undefined4 *)(unaff_EBP + -0x2c) = DAT_0098069c;
      *(undefined4 *)(unaff_EBP + -0x28) = DAT_00980690;
      *(undefined4 *)(unaff_EBP + -0x24) = DAT_00980694;
      *(undefined4 *)(unaff_EBP + -0x20) = DAT_00980698;
      *(undefined4 *)(unaff_EBP + -0x1c) = DAT_0098069c;
      if (*(int *)(*(int *)(unaff_EBP + -0x10) + 0xc4) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar2 = (int *)FUN_004113e5(unaff_EBP + 8);
      iVar1 = *piVar2;
      *(undefined4 *)(unaff_EBP + -4) = 3;
      if (iVar1 == 0) {
        FUN_00878dfb(0x80004003);
      }
      (**(code **)(*(int *)*piVar2 + 0x90))
                ((int *)*piVar2,0,0,*(undefined4 *)(unaff_EBP + -0x28),
                 *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                 *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x38),
                 *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                 *(undefined4 *)(unaff_EBP + -0x2c));
    }
    FUN_004125d9();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}


