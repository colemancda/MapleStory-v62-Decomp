/* FUN_0080bbf1 - 0x0080bbf1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0080bbf1(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int extraout_ECX;
  int unaff_EBP;
  ushort *puVar12;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x5e0) == 0) {
    FUN_0081622a(*(undefined4 *)(unaff_EBP + 8));
    puVar2 = (undefined4 *)(extraout_ECX + 0x5c4);
    *(undefined4 **)(unaff_EBP + -0x3c) = puVar2;
    FUN_00402aba();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    puVar5 = (undefined4 *)FUN_0080ce91();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *puVar5 = 1;
    piVar1 = (int *)(extraout_ECX + 0x5c8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *puVar2 = 0;
    }
    if (((*(int *)(extraout_ECX + 0x5e4) != 0) && (*(int *)(extraout_ECX + 0x5e0) == 0)) &&
       (*(int *)(extraout_ECX + 0x5e8) == 0)) {
      *(undefined4 **)(unaff_EBP + -0x3c) = puVar2;
      FUN_00402aba();
      *(undefined4 *)(unaff_EBP + -4) = 1;
      puVar5 = (undefined4 *)FUN_0080ce91();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *puVar5 = 2;
      piVar1 = (int *)(extraout_ECX + 0x5c8);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *puVar2 = 0;
      }
      FUN_00448dc6(unaff_EBP + 8);
      *(undefined4 *)(unaff_EBP + -4) = 2;
      if ((*(int *)(unaff_EBP + 8) == 0) && (FUN_00878dfb(0x80004003), *(int *)(unaff_EBP + 8) == 0)
         ) {
        FUN_00878dfb(0x80004003);
      }
      if (*(int *)(unaff_EBP + 8) == 0) {
        FUN_00878dfb(0x80004003);
      }
      *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + 8);
      iVar6 = FUN_0080ce43();
      iVar7 = FUN_0040e53d();
      uVar8 = FUN_0080ce43();
      *(uint *)(unaff_EBP + -0x34) = (uint)(iVar6 + -1 + iVar7) / uVar8;
      if ((*(int *)(unaff_EBP + 8) == 0) && (FUN_00878dfb(0x80004003), *(int *)(unaff_EBP + 8) == 0)
         ) {
        FUN_00878dfb(0x80004003);
      }
      if (*(int *)(unaff_EBP + 8) == 0) {
        FUN_00878dfb(0x80004003);
      }
      *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + 8);
      iVar6 = FUN_0080ce1c();
      iVar7 = FUN_0040e48b();
      uVar8 = FUN_0080ce1c();
      *(uint *)(unaff_EBP + -0x30) = (uint)(iVar6 + -1 + iVar7) / uVar8;
      if (*(int *)(unaff_EBP + 8) == 0) {
        FUN_00878dfb(0x80004003);
      }
      uVar9 = FUN_0040e48b();
      *(undefined4 *)(unaff_EBP + -0x3c) = uVar9;
      if (*(int *)(unaff_EBP + 8) == 0) {
        FUN_00878dfb(0x80004003);
      }
      uVar9 = FUN_0040e53d();
      *(undefined4 *)(unaff_EBP + -0x38) = uVar9;
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      if (0 < *(int *)(unaff_EBP + -0x34)) {
        do {
          *(undefined4 *)(unaff_EBP + -0x18) = 0;
          if (0 < *(int *)(unaff_EBP + -0x30)) {
            do {
              if ((*(int *)(unaff_EBP + 8) == 0) &&
                 (FUN_00878dfb(0x80004003), *(int *)(unaff_EBP + 8) == 0)) {
                FUN_00878dfb(0x80004003);
              }
              *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + 8);
              if (*(int *)(unaff_EBP + 8) == 0) {
                FUN_00878dfb(0x80004003);
              }
              iVar6 = FUN_0080ce43();
              iVar6 = iVar6 * *(int *)(unaff_EBP + -0x1c);
              iVar7 = FUN_0080ce1c(iVar6);
              FUN_007d7bb4(unaff_EBP + -0x10,iVar7 * *(int *)(unaff_EBP + -0x18),iVar6);
              *(undefined1 *)(unaff_EBP + -4) = 3;
              if (*(int *)(unaff_EBP + -0x10) != 0) {
                if (*(int *)(unaff_EBP + 8) == 0) {
                  FUN_00878dfb(0x80004003);
                }
                iVar6 = FUN_0040e48b();
                iVar6 = ((iVar6 - *(int *)(extraout_ECX + 0x5c0)) - *(int *)(extraout_ECX + 0x5bc))
                        * 2;
                *(int *)(unaff_EBP + -0x24) = iVar6;
                if (iVar6 % 4 != 0) {
                  iVar6 = iVar6 + (4 - iVar6 % 4);
                  *(int *)(unaff_EBP + -0x24) = iVar6;
                }
                *(undefined4 *)(unaff_EBP + -0x28) = 0;
                if (*(int *)(unaff_EBP + -0x10) == 0) {
                  FUN_00878dfb(0x80004003);
                }
                iVar7 = FUN_007d7a7d(unaff_EBP + -0x4c,unaff_EBP + -0x28);
                *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(iVar7 + 8);
                iVar7 = FUN_00402bc3(unaff_EBP + -0x4c);
                if (iVar7 < 0) {
                  FUN_00878dfb(iVar7);
                }
                if (*(int *)(unaff_EBP + -0x2c) != 0) {
                  *(undefined4 *)(unaff_EBP + -0x14) = 0;
                  FUN_0080cd94();
                  iVar7 = FUN_007d7a56();
                  if (iVar7 != 0) {
                    do {
                      FUN_004115d9();
                      iVar7 = FUN_0080ce43();
                      if (*(uint *)(extraout_ECX + 0x5b4) <=
                          (uint)(iVar7 * *(int *)(unaff_EBP + -0x1c) + *(int *)(unaff_EBP + -0x14)))
                      {
                        FUN_004115d9();
                        iVar7 = FUN_0080ce43();
                        if ((uint)(iVar7 * *(int *)(unaff_EBP + -0x1c) + *(int *)(unaff_EBP + -0x14)
                                  ) < (uint)(*(int *)(unaff_EBP + -0x38) -
                                            *(int *)(extraout_ECX + 0x5b8))) {
                          puVar12 = (ushort *)
                                    (*(int *)(unaff_EBP + -0x14) * *(int *)(unaff_EBP + -0x28) +
                                    *(int *)(unaff_EBP + -0x2c));
                          FUN_004115d9();
                          iVar7 = FUN_0080ce43();
                          *(int *)(unaff_EBP + -0x20) =
                               ((iVar7 * *(int *)(unaff_EBP + -0x1c) -
                                *(int *)(extraout_ECX + 0x5b4)) + *(int *)(unaff_EBP + -0x14)) *
                               iVar6;
                          FUN_004115d9();
                          iVar10 = FUN_0080ce1c();
                          iVar6 = *(int *)(unaff_EBP + -0x18);
                          iVar7 = *(int *)(extraout_ECX + 0x5bc);
                          iVar3 = *(int *)(unaff_EBP + -0x20);
                          *(undefined4 *)(unaff_EBP + -0x20) = 0;
                          iVar4 = *(int *)(extraout_ECX + 0x5a4);
                          FUN_0080cd94();
                          iVar11 = FUN_007d7f8b();
                          if (iVar11 != 0) {
                            iVar6 = (iVar3 + (iVar10 * iVar6 - iVar7) * 2 + iVar4) - (int)puVar12;
                            do {
                              FUN_004115d9();
                              iVar7 = FUN_0080ce1c();
                              if (*(uint *)(extraout_ECX + 0x5bc) <=
                                  (uint)(iVar7 * *(int *)(unaff_EBP + -0x18) +
                                        *(int *)(unaff_EBP + -0x20))) {
                                FUN_004115d9();
                                iVar7 = FUN_0080ce1c();
                                if ((uint)(iVar7 * *(int *)(unaff_EBP + -0x18) +
                                          *(int *)(unaff_EBP + -0x20)) <
                                    (uint)(*(int *)(unaff_EBP + -0x3c) -
                                          *(int *)(extraout_ECX + 0x5c0))) {
                                  *puVar12 = *(ushort *)(iVar6 + (int)puVar12) | 0xf000;
                                }
                              }
                              *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
                              puVar12 = puVar12 + 1;
                              FUN_0080cd94();
                              uVar8 = FUN_007d7f8b();
                            } while (*(uint *)(unaff_EBP + -0x20) < uVar8);
                          }
                          iVar6 = *(int *)(unaff_EBP + -0x24);
                        }
                      }
                      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
                      FUN_0080cd94();
                      uVar8 = FUN_007d7a56();
                    } while (*(uint *)(unaff_EBP + -0x14) < uVar8);
                  }
                  FUN_0080cd94();
                  uVar9 = FUN_007d7a56();
                  FUN_0080cd94(uVar9);
                  uVar9 = FUN_007d7f8b();
                  (*DAT_0097b504)(unaff_EBP + -0x5c,0,0,uVar9);
                  iVar6 = unaff_EBP + -0x5c;
                  FUN_0080cd94(iVar6);
                  FUN_0080cdf5(iVar6);
                }
              }
              *(undefined1 *)(unaff_EBP + -4) = 2;
              FUN_0080cde8();
              *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
            } while (*(int *)(unaff_EBP + -0x18) < *(int *)(unaff_EBP + -0x30));
          }
          *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
        } while (*(int *)(unaff_EBP + -0x1c) < *(int *)(unaff_EBP + -0x34));
      }
      FUN_004125e6();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


