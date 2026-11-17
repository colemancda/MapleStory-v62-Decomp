/* FUN_0055540f - 0x0055540f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0055540f(void)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar3 = **(int **)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar3 = (**(code **)(iVar3 + 0x10))();
  if (iVar3 == 1) {
    uVar4 = FUN_0045e2eb();
    iVar3 = FUN_005540b6(uVar4);
    if ((iVar3 != 0) || (iVar3 = FUN_0045e2eb(), iVar3 / 100000 == 0x13)) goto LAB_0055549b;
    *(undefined4 *)(unaff_EBP + -0x78) = *(undefined4 *)(unaff_EBP + 0xc);
    FUN_0055979c();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    uVar4 = FUN_0045e2eb();
    iVar3 = FUN_0054e7b3(uVar4);
    if (iVar3 == 0) {
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_005597ae();
      goto LAB_0055549b;
    }
    sVar1 = FUN_0045f084(*(int *)(unaff_EBP + -0x78) + 0x34,
                         *(undefined4 *)(*(int *)(unaff_EBP + -0x78) + 0x38));
    sVar2 = FUN_0045f084(iVar3 + 0xa0,*(undefined4 *)(iVar3 + 0xa4));
    uVar5 = FUN_0045f084(*(int *)(unaff_EBP + -0x78) + 0x3c,
                         *(undefined4 *)(*(int *)(unaff_EBP + -0x78) + 0x40));
    uVar4 = *(undefined4 *)(iVar3 + 0xac);
    *(undefined4 *)(unaff_EBP + -0x74) = uVar5;
    uVar4 = FUN_0045f084(iVar3 + 0xa8,uVar4);
    *(undefined4 *)(unaff_EBP + -0x48) = uVar4;
    uVar5 = FUN_0045f084(*(int *)(unaff_EBP + -0x78) + 0x44,
                         *(undefined4 *)(*(int *)(unaff_EBP + -0x78) + 0x48));
    uVar4 = *(undefined4 *)(iVar3 + 0xb4);
    *(undefined4 *)(unaff_EBP + -0x70) = uVar5;
    uVar4 = FUN_0045f084(iVar3 + 0xb0,uVar4);
    *(undefined4 *)(unaff_EBP + -0x44) = uVar4;
    uVar5 = FUN_0045f084(*(int *)(unaff_EBP + -0x78) + 0x4c,
                         *(undefined4 *)(*(int *)(unaff_EBP + -0x78) + 0x50));
    uVar4 = *(undefined4 *)(iVar3 + 0xbc);
    *(undefined4 *)(unaff_EBP + -0x6c) = uVar5;
    uVar4 = FUN_0045f084(iVar3 + 0xb8,uVar4);
    *(undefined4 *)(unaff_EBP + -0x40) = uVar4;
    uVar5 = FUN_0045f084(*(int *)(unaff_EBP + -0x78) + 0x54,
                         *(undefined4 *)(*(int *)(unaff_EBP + -0x78) + 0x58));
    uVar4 = *(undefined4 *)(iVar3 + 0xc4);
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar5;
    uVar4 = FUN_0045f084(iVar3 + 0xc0,uVar4);
    *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
    uVar5 = FUN_0045f084(*(int *)(unaff_EBP + -0x78) + 0x5c,
                         *(undefined4 *)(*(int *)(unaff_EBP + -0x78) + 0x60));
    uVar4 = *(undefined4 *)(iVar3 + 0xcc);
    *(undefined4 *)(unaff_EBP + -0x14) = uVar5;
    uVar4 = FUN_0045f084(iVar3 + 200,uVar4);
    *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
    uVar5 = FUN_0045f084(*(int *)(unaff_EBP + -0x78) + 100,
                         *(undefined4 *)(*(int *)(unaff_EBP + -0x78) + 0x68));
    uVar4 = *(undefined4 *)(iVar3 + 0xd4);
    *(undefined4 *)(unaff_EBP + -0x68) = uVar5;
    uVar4 = FUN_0045f084(iVar3 + 0xd0,uVar4);
    *(undefined4 *)(unaff_EBP + -0x3c) = uVar4;
    uVar5 = FUN_0045f084(*(int *)(unaff_EBP + -0x78) + 0x6c,
                         *(undefined4 *)(*(int *)(unaff_EBP + -0x78) + 0x70));
    uVar4 = *(undefined4 *)(iVar3 + 0xdc);
    *(undefined4 *)(unaff_EBP + -100) = uVar5;
    uVar4 = FUN_0045f084(iVar3 + 0xd8,uVar4);
    *(undefined4 *)(unaff_EBP + -0x38) = uVar4;
    uVar5 = FUN_0045f084(*(int *)(unaff_EBP + -0x78) + 0x74,
                         *(undefined4 *)(*(int *)(unaff_EBP + -0x78) + 0x78));
    uVar4 = *(undefined4 *)(iVar3 + 0xe4);
    *(undefined4 *)(unaff_EBP + -0x60) = uVar5;
    uVar4 = FUN_0045f084(iVar3 + 0xe0,uVar4);
    *(undefined4 *)(unaff_EBP + -0x34) = uVar4;
    uVar5 = FUN_0045f084(*(int *)(unaff_EBP + -0x78) + 0x7c,
                         *(undefined4 *)(*(int *)(unaff_EBP + -0x78) + 0x80));
    uVar4 = *(undefined4 *)(iVar3 + 0xec);
    *(undefined4 *)(unaff_EBP + -0x5c) = uVar5;
    uVar4 = FUN_0045f084(iVar3 + 0xe8,uVar4);
    *(undefined4 *)(unaff_EBP + -0x30) = uVar4;
    uVar5 = FUN_0045f084(*(int *)(unaff_EBP + -0x78) + 0x84,
                         *(undefined4 *)(*(int *)(unaff_EBP + -0x78) + 0x88));
    uVar4 = *(undefined4 *)(iVar3 + 0xf4);
    *(undefined4 *)(unaff_EBP + -0x58) = uVar5;
    uVar4 = FUN_0045f084(iVar3 + 0xf0,uVar4);
    *(undefined4 *)(unaff_EBP + -0x2c) = uVar4;
    uVar5 = FUN_0045f084(*(int *)(unaff_EBP + -0x78) + 0x8c,
                         *(undefined4 *)(*(int *)(unaff_EBP + -0x78) + 0x90));
    uVar4 = *(undefined4 *)(iVar3 + 0xfc);
    *(undefined4 *)(unaff_EBP + -0x54) = uVar5;
    uVar4 = FUN_0045f084(iVar3 + 0xf8,uVar4);
    *(undefined4 *)(unaff_EBP + -0x28) = uVar4;
    uVar5 = FUN_0045f084(*(int *)(unaff_EBP + -0x78) + 0x9c,
                         *(undefined4 *)(*(int *)(unaff_EBP + -0x78) + 0xa0));
    uVar4 = *(undefined4 *)(iVar3 + 0x10c);
    *(undefined4 *)(unaff_EBP + -0x50) = uVar5;
    uVar4 = FUN_0045f084(iVar3 + 0x108,uVar4);
    *(undefined4 *)(unaff_EBP + -0x24) = uVar4;
    uVar5 = FUN_0045f084(*(int *)(unaff_EBP + -0x78) + 0xa4,
                         *(undefined4 *)(*(int *)(unaff_EBP + -0x78) + 0xa8));
    uVar4 = *(undefined4 *)(iVar3 + 0x114);
    *(undefined4 *)(unaff_EBP + -0x4c) = uVar5;
    uVar4 = FUN_0045f084(iVar3 + 0x110,uVar4);
    *(undefined4 *)(unaff_EBP + -0x20) = uVar4;
    iVar3 = (((((((((((((((int)*(short *)(unaff_EBP + -0x14) - (int)*(short *)(unaff_EBP + -0x10)) /
                         10 + ((int)*(short *)(unaff_EBP + -0x1c) -
                              (int)*(short *)(unaff_EBP + -0x18)) / 10) -
                       (int)*(short *)(unaff_EBP + -0x20)) - (int)*(short *)(unaff_EBP + -0x24)) -
                     (int)*(short *)(unaff_EBP + -0x28)) - (int)*(short *)(unaff_EBP + -0x2c)) -
                   (int)*(short *)(unaff_EBP + -0x30)) - (int)*(short *)(unaff_EBP + -0x34)) -
                 (int)*(short *)(unaff_EBP + -0x38)) - (int)*(short *)(unaff_EBP + -0x3c)) -
               (int)*(short *)(unaff_EBP + -0x40)) - (int)*(short *)(unaff_EBP + -0x44)) -
             (int)*(short *)(unaff_EBP + -0x48)) - (int)sVar2) + (int)*(short *)(unaff_EBP + -0x4c)
            + (int)*(short *)(unaff_EBP + -0x50) + (int)*(short *)(unaff_EBP + -0x54) +
            (int)*(short *)(unaff_EBP + -0x58) + (int)*(short *)(unaff_EBP + -0x5c) +
            (int)*(short *)(unaff_EBP + -0x60) + (int)*(short *)(unaff_EBP + -100) +
            (int)*(short *)(unaff_EBP + -0x68) + (int)*(short *)(unaff_EBP + -0x6c) +
            (int)*(short *)(unaff_EBP + -0x70) + (int)*(short *)(unaff_EBP + -0x74) + (int)sVar1;
    if (iVar3 < 0) {
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int *)(unaff_EBP + -0x78) != 0) {
        FUN_005598a2(0);
        *(undefined4 *)(unaff_EBP + -0x78) = 0;
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + 0xc) != 0) {
        FUN_00449913(0);
      }
      uVar4 = 0xffffffff;
      goto LAB_005554a9;
    }
    if (5 < iVar3) {
      if (iVar3 < 0x17) {
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (*(int *)(unaff_EBP + -0x78) != 0) {
          FUN_005598a2(0);
          *(undefined4 *)(unaff_EBP + -0x78) = 0;
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (*(int *)(unaff_EBP + 0xc) != 0) {
          FUN_00449913(0);
        }
        uVar4 = 1;
      }
      else if (iVar3 < 0x28) {
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (*(int *)(unaff_EBP + -0x78) != 0) {
          FUN_005598a2(0);
          *(undefined4 *)(unaff_EBP + -0x78) = 0;
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (*(int *)(unaff_EBP + 0xc) != 0) {
          FUN_00449913(0);
        }
        uVar4 = 2;
      }
      else {
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (*(int *)(unaff_EBP + -0x78) != 0) {
          FUN_005598a2(0);
          *(undefined4 *)(unaff_EBP + -0x78) = 0;
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (*(int *)(unaff_EBP + 0xc) != 0) {
          FUN_00449913(0);
        }
        uVar4 = 3;
      }
      goto LAB_005554a9;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x78) != 0) {
      FUN_005598a2(0);
      *(undefined4 *)(unaff_EBP + -0x78) = 0;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + 0xc) != 0) {
      FUN_00449913(0);
    }
  }
  else {
LAB_0055549b:
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0046575e();
  }
  uVar4 = 0;
LAB_005554a9:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}


