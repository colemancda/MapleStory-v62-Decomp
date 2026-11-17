/* FUN_0045c52f - 0x0045c52f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0045c52f(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  int iVar7;
  int *piVar8;
  int unaff_EBP;
  int iVar9;
  undefined1 auStack_80 [4];
  int iStack_7c;
  int iStack_78;
  undefined4 *puStack_74;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uVar4 = FUN_0042452b();
  *(uint *)(extraout_ECX + 0x40) = uVar4 & 0xff;
  if ((uVar4 & 0xff) != 0) {
    puStack_74 = (undefined4 *)0x45c575;
    FUN_0045cdbc();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    puStack_74 = (undefined4 *)0x45c589;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x30) != 0) {
      puStack_74 = (undefined4 *)0x45c59d;
      FUN_00434e38();
    }
    if (*(int *)(extraout_ECX + 0x494) == 0) {
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
    }
    else {
      *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(*(int *)(extraout_ECX + 0x494) + -4);
    }
    puStack_74 = (undefined4 *)0x0;
    iStack_78 = unaff_EBP + -0x30;
    iStack_7c = 0x45c5bf;
    FUN_0045e053();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    puStack_74 = (undefined4 *)0x45c5d1;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x30) != 0) {
      puStack_74 = (undefined4 *)0x45c5e5;
      FUN_00434e38();
    }
    if (2 < *(int *)(unaff_EBP + -0x20)) {
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
      puStack_74 = &DAT_009645b0;
      iStack_78 = 0x45c600;
      FUN_00414edd();
      puStack_74 = *(undefined4 **)(unaff_EBP + -0x24);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_78 = 0x45c61b;
      FUN_0045efbb();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (*(int *)(unaff_EBP + -0x24) != 0) {
        puStack_74 = (undefined4 *)0x45c62f;
        FUN_00434e38();
      }
    }
    if (3 < *(int *)(unaff_EBP + -0x20)) {
      puStack_74 = (undefined4 *)0x4;
      iStack_78 = unaff_EBP + -0x28;
      iStack_7c = 0x45c649;
      FUN_0045e053();
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
      puStack_74 = &DAT_009645b0;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_78 = 0x45c65e;
      FUN_00414edd();
      puStack_74 = (undefined4 *)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iStack_78 = 0x45c66f;
      puStack_74 = (undefined4 *)FUN_0045e02d();
      puStack_74 = (undefined4 *)*puStack_74;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iStack_78 = 0x45c689;
      FUN_0045efbb();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      if (*(int *)(unaff_EBP + -0x30) != 0) {
        puStack_74 = (undefined4 *)0x45c69d;
        FUN_00434e38();
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (*(int *)(unaff_EBP + -0x24) != 0) {
        puStack_74 = (undefined4 *)0x45c6b2;
        FUN_00434e38();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (*(int *)(unaff_EBP + -0x28) != 0) {
        puStack_74 = (undefined4 *)0x45c6c7;
        FUN_00434e38();
      }
    }
  }
  puStack_74 = (undefined4 *)0x45c6d6;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_74 = (undefined4 *)0x45c6e3;
  FUN_00403191();
  puStack_74 = (undefined4 *)0x0;
  iStack_78 = unaff_EBP + -0x5c;
  iStack_7c = unaff_EBP + -0x6c;
  *(undefined1 **)(unaff_EBP + -0x38) = auStack_80;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00679e4e(auStack_80,0x568);
  iVar6 = unaff_EBP + -0x4c;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00405a1d(iVar6);
  FUN_00402660();
  FUN_00404a02(iVar6);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_78 = 0x45c72f;
  uVar5 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x30) = uVar5;
  puStack_74 = (undefined4 *)0x45c73e;
  iVar6 = FUN_00404b30();
  if ((iVar6 < 0) && (iVar6 != -0x7fffbffe)) {
    puStack_74 = (undefined4 *)0x45c74f;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  puStack_74 = (undefined4 *)0x45c75c;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    puStack_74 = (undefined4 *)0x45c767;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_74 = (undefined4 *)0x45c774;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    puStack_74 = (undefined4 *)0x45c77f;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_74 = (undefined4 *)0x45c78c;
  puVar3 = (undefined4 *)(unaff_EBP + -0x5c);
  iVar6 = FUN_00402bc3();
  puStack_74 = puVar3;
  if (iVar6 < 0) {
    puStack_74 = (undefined4 *)0x45c797;
    FUN_00878dfb();
    puStack_74 = extraout_ECX_00;
  }
  iVar6 = *(int *)(unaff_EBP + -0x1c);
  piVar8 = (int *)(iVar6 + 0x44);
  iStack_78 = unaff_EBP + -0x2c;
  *(undefined4 ***)(unaff_EBP + -0x38) = &puStack_74;
  iStack_7c = 0x45c7ad;
  FUN_00424dbc();
  iStack_78 = 0x45c7b2;
  FUN_004695e1();
  puStack_74 = (undefined4 *)0x45c7c2;
  FUN_0084aa92();
  *(undefined4 *)(unaff_EBP + -0x28) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x24) = 0xffffffff;
  uVar4 = 0;
  piVar1 = (int *)(DAT_00978368 + 0x3278);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  while ((iVar7 = *piVar1, iVar7 != 0 && (uVar4 < *(uint *)(iVar7 + -4)))) {
    iVar6 = *(int *)(iVar7 + 4 + uVar4 * 8);
    iVar7 = *(int *)(iVar6 + 0xc);
    if ((9999999 < iVar7) && (iVar7 < 80000000)) {
      puStack_74 = (undefined4 *)((iVar7 / 10000000) % 10);
      iVar6 = (*(int *)(iVar6 + 0xc) / 100000) % 100;
      if ((puStack_74 == *(undefined4 **)(unaff_EBP + -0x28)) &&
         (iVar6 == *(int *)(unaff_EBP + -0x24))) {
        iStack_78 = 0x45c83f;
        iVar6 = FUN_0045c1ad();
        iVar6 = iVar6 * 0x1c;
        piVar2 = (int *)(iVar6 + 0x14 + *piVar8);
        *piVar2 = *piVar2 + 1;
        uVar4 = *(uint *)(unaff_EBP + -0x10);
        iVar7 = *piVar1;
      }
      else {
        *(undefined4 **)(unaff_EBP + -0x28) = puStack_74;
        *(int *)(unaff_EBP + -0x24) = iVar6;
        iStack_78 = 0x45c863;
        iVar6 = FUN_0045c1ad();
        if (iVar6 == -1) {
          *(undefined4 *)(unaff_EBP + -0x38) = 0x22000006;
          *(undefined4 *)(unaff_EBP + 8) = 0x22000006;
          puStack_74 = (undefined4 *)(unaff_EBP + 8);
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
                    /* WARNING: Subroutine does not return */
          iStack_78 = 0x45c8bd;
          __CxxThrowException_8();
        }
        iVar6 = iVar6 * 0x1c;
        uVar4 = *(uint *)(unaff_EBP + -0x10);
        *(uint *)(iVar6 + 0x10 + *piVar8) = uVar4;
        *(undefined4 *)(iVar6 + 0x14 + *piVar8) = 1;
        iVar7 = *piVar1;
      }
      if (*(int *)(*(int *)(iVar7 + 4 + uVar4 * 8) + 0x40) == 0) {
        piVar2 = (int *)(iVar6 + 0x18 + *piVar8);
        *piVar2 = *piVar2 + 1;
      }
    }
    iVar6 = *(int *)(unaff_EBP + -0x1c);
    uVar4 = uVar4 + 1;
    *(uint *)(unaff_EBP + -0x10) = uVar4;
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  while ((iVar7 = *piVar1, iVar7 != 0 && (*(uint *)(unaff_EBP + -0x10) < *(uint *)(iVar7 + -4)))) {
    iVar9 = *(uint *)(unaff_EBP + -0x10) * 8;
    iVar6 = *(int *)(iVar9 + 4 + iVar7);
    iVar7 = *(int *)(iVar6 + 0xc);
    if ((79999999 < iVar7) && ((iVar7 < 90000000 && (*(int *)(iVar6 + 0x40) != 0)))) {
      do {
        if ((*piVar8 == 0) ||
           (iVar6 = *(int *)(*piVar8 + -4), *(int *)(unaff_EBP + -0x30) = iVar6, iVar6 == 0)) {
          uVar5 = FUN_004133f0();
          *(undefined4 *)(unaff_EBP + -0x20) = uVar5;
        }
        else {
          uVar4 = FUN_004133f0();
          *(uint *)(unaff_EBP + -0x20) = uVar4 % *(uint *)(unaff_EBP + -0x30);
        }
        iVar6 = *(int *)(*(int *)(unaff_EBP + -0x20) * 0x1c + 0x14 + *piVar8);
        *(int *)(unaff_EBP + -0x30) = iVar6;
      } while (iVar6 == 0);
      iVar6 = *(int *)(*piVar1 + iVar9 + 4);
      *(int *)(unaff_EBP + -0x60) = iVar6;
      if (iVar6 != 0) {
        puStack_74 = (undefined4 *)0x45c961;
        InterlockedIncrement((LONG *)(iVar6 + 4));
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      puStack_74 = (undefined4 *)0x45c971;
      FUN_0045f31f();
      iVar6 = *(int *)(unaff_EBP + -0x20) * 0x1c;
      uVar4 = FUN_004133f0();
      puStack_74 = (undefined4 *)
                   (uVar4 % *(uint *)(unaff_EBP + -0x30) + *(int *)(iVar6 + 0x10 + *piVar8));
      iStack_78 = 0x45c998;
      FUN_0045f28f();
      puStack_74 = (undefined4 *)0x45c99f;
      FUN_0045e10e();
      piVar2 = (int *)(iVar6 + 0x14 + *piVar8);
      *piVar2 = *piVar2 + 1;
      uVar4 = *(int *)(unaff_EBP + -0x20) + 1;
      iVar6 = uVar4 * 0x1c;
      for (; (iVar7 = *piVar8, iVar7 != 0 && (uVar4 < *(uint *)(iVar7 + -4))); uVar4 = uVar4 + 1) {
        piVar2 = (int *)(iVar6 + 0x10 + iVar7);
        *piVar2 = *piVar2 + 1;
        iVar6 = iVar6 + 0x1c;
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_0045e46f();
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    iVar6 = *(int *)(unaff_EBP + -0x1c);
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  while ((iVar7 = *piVar8, iVar7 != 0 && (*(uint *)(unaff_EBP + -0x10) < *(uint *)(iVar7 + -4)))) {
    iVar7 = *(int *)(unaff_EBP + -0x28) + iVar7;
    iVar6 = *(int *)(iVar7 + 0x10);
    *(int *)(unaff_EBP + -0x30) = iVar6;
    if ((iVar6 != -1) &&
       (iVar7 = *(int *)(iVar7 + 0x14) + iVar6, *(int *)(unaff_EBP + -0x18) = iVar7,
       iVar6 < iVar7 + -1)) {
      iVar7 = iVar6 + 1;
      *(int *)(unaff_EBP + -0x20) = iVar6 << 3;
      *(int *)(unaff_EBP + -0x24) = iVar7;
      do {
        iVar6 = *(int *)(*(int *)(*(int *)(unaff_EBP + -0x20) + 4 + *piVar1) + 0xc);
        if (((iVar6 < 80000000) || (89999999 < iVar6)) &&
           (*(int *)(unaff_EBP + -0x14) = iVar7, iVar7 < *(int *)(unaff_EBP + -0x18))) {
          do {
            iVar6 = *(int *)(*(int *)(*(int *)(unaff_EBP + -0x14) * 8 + 4 + *piVar1) + 0xc);
            if ((iVar6 < 80000000) || (89999999 < iVar6)) {
              *(undefined4 *)(unaff_EBP + -0x34) =
                   *(undefined4 *)(*(int *)(unaff_EBP + -0x20) + 4 + *piVar1);
              uVar5 = FUN_0045e2eb();
              *(undefined4 *)(unaff_EBP + -0x38) = uVar5;
              iVar6 = FUN_0045e2eb();
              if (*(int *)(unaff_EBP + -0x38) < iVar6) {
                iVar6 = *(int *)(*(int *)(unaff_EBP + -0x20) + *piVar1 + 4);
                *(int *)(unaff_EBP + -0x40) = iVar6;
                if (iVar6 != 0) {
                  puStack_74 = (undefined4 *)0x45cac4;
                  InterlockedIncrement((LONG *)(iVar6 + 4));
                }
                *(undefined1 *)(unaff_EBP + -4) = 0xe;
                puStack_74 = (undefined4 *)0x45cad8;
                FUN_0045e10e();
                puStack_74 = (undefined4 *)0x45cae5;
                FUN_0045e10e();
                *(undefined1 *)(unaff_EBP + -4) = 1;
                if (*(int *)(unaff_EBP + -0x40) != 0) {
                  puStack_74 = (undefined4 *)0x45caf9;
                  FUN_0045e794();
                  *(undefined4 *)(unaff_EBP + -0x40) = 0;
                }
              }
            }
            *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
          } while (*(int *)(unaff_EBP + -0x14) < *(int *)(unaff_EBP + -0x18));
        }
        iVar6 = *(int *)(unaff_EBP + -0x24);
        *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 8;
        iVar7 = iVar6 + 1;
        iVar9 = *(int *)(unaff_EBP + -0x18) + -1;
        *(int *)(unaff_EBP + -0x24) = iVar7;
      } while (iVar6 < iVar9);
      iVar6 = *(int *)(unaff_EBP + -0x30);
      if (iVar6 < iVar9) {
        iVar7 = iVar6 + 1;
        *(int *)(unaff_EBP + -0x20) = iVar6 << 3;
        *(int *)(unaff_EBP + -0x24) = iVar7;
        do {
          *(int *)(unaff_EBP + -0x14) = iVar7;
          while (iVar7 < *(int *)(unaff_EBP + -0x18)) {
            iVar6 = *piVar1;
            if (*(int *)(*(int *)(*(int *)(unaff_EBP + -0x20) + 4 + iVar6) + 0x40) <
                *(int *)(*(int *)(*(int *)(unaff_EBP + -0x14) * 8 + 4 + iVar6) + 0x40)) {
              iVar6 = *(int *)(*(int *)(unaff_EBP + -0x20) + iVar6 + 4);
              *(int *)(unaff_EBP + -0x50) = iVar6;
              if (iVar6 != 0) {
                puStack_74 = (undefined4 *)0x45cb76;
                InterlockedIncrement((LONG *)(iVar6 + 4));
              }
              *(undefined1 *)(unaff_EBP + -4) = 0xf;
              puStack_74 = (undefined4 *)0x45cb8a;
              FUN_0045e10e();
              puStack_74 = (undefined4 *)0x45cb97;
              FUN_0045e10e();
              *(undefined1 *)(unaff_EBP + -4) = 1;
              if (*(int *)(unaff_EBP + -0x50) != 0) {
                puStack_74 = (undefined4 *)0x45cbab;
                FUN_0045e794();
                *(undefined4 *)(unaff_EBP + -0x50) = 0;
              }
            }
            *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
            iVar7 = *(int *)(unaff_EBP + -0x14);
          }
          iVar6 = *(int *)(unaff_EBP + -0x24);
          *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 8;
          iVar7 = iVar6 + 1;
          iVar9 = *(int *)(unaff_EBP + -0x18) + -1;
          *(int *)(unaff_EBP + -0x24) = iVar7;
        } while (iVar6 < iVar9);
        iVar6 = *(int *)(unaff_EBP + -0x30);
        if (iVar6 < iVar9) {
          *(int *)(unaff_EBP + -0x20) = iVar6 << 3;
          *(int *)(unaff_EBP + -0x24) = iVar6 + 1;
          do {
            iVar6 = *(int *)(*(int *)(unaff_EBP + -0x20) + 4 + *piVar1);
            if ((*(int *)(iVar6 + 0x40) != 0) &&
               ((iVar6 = *(int *)(iVar6 + 0xc), iVar6 < 80000000 || (89999999 < iVar6)))) {
              iVar6 = *(int *)(unaff_EBP + -0x24);
              while (*(int *)(unaff_EBP + -0x14) = iVar6, iVar6 < *(int *)(unaff_EBP + -0x18)) {
                iVar6 = *(int *)(iVar6 * 8 + 4 + *piVar1);
                if ((*(int *)(iVar6 + 0x40) != 0) &&
                   (((*(int *)(iVar6 + 0xc) < 80000000 || (89999999 < *(int *)(iVar6 + 0xc))) &&
                    (iVar7 = *piVar1 + *(int *)(unaff_EBP + -0x20),
                    *(int *)(*(int *)(iVar7 + 4) + 0x24) < *(int *)(iVar6 + 0x24))))) {
                  iVar6 = *(int *)(iVar7 + 4);
                  *(int *)(unaff_EBP + -0x60) = iVar6;
                  if (iVar6 != 0) {
                    puStack_74 = (undefined4 *)0x45cc67;
                    InterlockedIncrement((LONG *)(iVar6 + 4));
                  }
                  *(undefined1 *)(unaff_EBP + -4) = 0x10;
                  puStack_74 = (undefined4 *)0x45cc7b;
                  FUN_0045e10e();
                  puStack_74 = (undefined4 *)0x45cc88;
                  FUN_0045e10e();
                  *(undefined1 *)(unaff_EBP + -4) = 1;
                  if (*(int *)(unaff_EBP + -0x60) != 0) {
                    puStack_74 = (undefined4 *)0x45cc9c;
                    FUN_0045e794();
                    *(undefined4 *)(unaff_EBP + -0x60) = 0;
                  }
                }
                iVar6 = *(int *)(unaff_EBP + -0x14) + 1;
              }
            }
            *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 1;
            *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 8;
          } while (*(int *)(unaff_EBP + -0x24) + -1 < *(int *)(unaff_EBP + -0x18) + -1);
        }
      }
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + 0x1c;
    iVar6 = *(int *)(unaff_EBP + -0x1c);
  }
  puStack_74 = (undefined4 *)(iVar6 + 0x50);
  iStack_78 = 0x45cce2;
  FUN_004245d2();
  puStack_74 = (undefined4 *)0x45ccec;
  FUN_0045d48f();
  puStack_74 = (undefined4 *)0x45ccf6;
  FUN_0045d4d6();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  do {
    iVar7 = *piVar1;
    if ((iVar7 == 0) || (*(uint *)(iVar7 + -4) <= *(uint *)(unaff_EBP + -0x10))) {
      puStack_74 = (undefined4 *)0x45cd9a;
      FUN_0045f3be();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
        puStack_74 = (undefined4 *)0x45cdab;
        (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
      }
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
    *(undefined4 *)(*(int *)(iVar7 + 4 + *(uint *)(unaff_EBP + -0x10) * 8) + 0x48) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    while ((iVar7 = *(int *)(iVar6 + 0x4c), iVar7 != 0 &&
           (*(uint *)(unaff_EBP + -0x28) < *(uint *)(iVar7 + -4)))) {
      piVar8 = (int *)(*(int *)(unaff_EBP + -0x24) + iVar7);
      if ((piVar8 != (int *)0x0) && (iVar7 = FUN_0045e2eb(), iVar7 == *piVar8)) {
        *(undefined4 *)(unaff_EBP + 8) = 0;
        do {
          piVar8 = piVar8 + 1;
          if (*piVar8 == 0) break;
          iVar7 = *(int *)(*piVar1 + 4 + *(int *)(unaff_EBP + -0x10) * 8);
          if (*piVar8 == *(int *)(iVar7 + 0xc)) {
            *(undefined4 *)(iVar7 + 0x48) = 1;
          }
          *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
        } while (*(int *)(unaff_EBP + 8) < 10);
      }
      *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + 1;
      *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 0x68;
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
  } while( true );
}


