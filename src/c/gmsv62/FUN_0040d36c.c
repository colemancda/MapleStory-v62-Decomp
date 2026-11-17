/* FUN_0040d36c - 0x0040d36c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0040d36c(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_ECX;
  int unaff_EBP;
  int local_a4;
  int iStack_a0;
  
  FUN_00879bb8();
  uVar1 = *(uint *)(unaff_EBP + 0xc);
  iVar4 = **(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -0x1c) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(uint *)(unaff_EBP + -0x30) = iVar4 << 8 | uVar1;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  iStack_a0 = unaff_EBP + -0x30;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  local_a4 = 0x40d3b2;
  iVar2 = FUN_00416544();
  if (iVar2 == 0) {
    iStack_a0 = 0x40d3ea;
    iVar2 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x34) = iVar2;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar2 != 0) {
      FUN_0040d866();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iStack_a0 = 0x40d40c;
    FUN_00411bb3();
    *(int *)(*(int *)(unaff_EBP + -0x14) + 0xc) = iVar4;
    *(uint *)(*(int *)(unaff_EBP + -0x14) + 0x10) = uVar1;
    iStack_a0 = unaff_EBP + -0x24;
    local_a4 = 0x40d427;
    FUN_0040d968();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (*(int *)(unaff_EBP + -0x20) != 0) {
      iStack_a0 = 0;
      if ((int)uVar1 < 1) {
        *(int **)(unaff_EBP + 8) = &local_a4;
        FUN_004059fd(&DAT_009783a4 + uVar1 * 4);
        iVar4 = unaff_EBP + -0x88;
        *(undefined1 *)(unaff_EBP + -4) = 2;
        FUN_00411b2d(iVar4);
        FUN_0040263d();
        FUN_004048a4(iVar4);
        *(undefined4 *)(unaff_EBP + -0x10) = 1;
        *(undefined1 *)(unaff_EBP + -4) = 4;
      }
      else {
        local_a4 = uVar1 - 1;
        uVar3 = FUN_004172ef();
        *(int **)(unaff_EBP + 8) = &local_a4;
        FUN_004059fd(uVar3);
        iVar4 = unaff_EBP + -0x78;
        *(undefined4 *)(unaff_EBP + -4) = 4;
        FUN_00411b2d(iVar4);
        FUN_0040263d();
        FUN_004048a4(iVar4);
        *(undefined4 *)(unaff_EBP + -0x10) = 2;
        *(undefined4 *)(unaff_EBP + -4) = 6;
      }
      local_a4 = 0x40d4d1;
      iVar4 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x1c) = iVar4;
      *(undefined4 *)(unaff_EBP + 0xc) = 0;
      if (iVar4 != 0) {
        iStack_a0 = 0x40d4e7;
        iVar4 = FUN_00404b30();
        if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
          iStack_a0 = 0x40d4f8;
          FUN_00878dfb();
        }
      }
      *(undefined4 *)(unaff_EBP + -4) = 9;
      if ((*(byte *)(unaff_EBP + -0x10) & 2) != 0) {
        *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
        iStack_a0 = 0x40d512;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          iStack_a0 = 0x40d51d;
          FUN_00878dfb();
        }
      }
      *(undefined4 *)(unaff_EBP + -4) = 8;
      if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
        iStack_a0 = 0x40d536;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          iStack_a0 = 0x40d541;
          FUN_00878dfb();
        }
      }
      if (*(int *)(unaff_EBP + 0xc) != 0) {
        iStack_a0 = 0x40d574;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x68));
        *(undefined1 *)(unaff_EBP + -4) = 10;
        if (*(int *)(unaff_EBP + 0xc) == 0) {
          iStack_a0 = 0x40d587;
          FUN_00878dfb();
        }
        iStack_a0 = 0x40d593;
        FUN_00404960();
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        iStack_a0 = 0x40d5a0;
        FUN_004035f5();
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        FUN_004027b3();
        *(undefined4 *)(unaff_EBP + -0x40) = 0;
        while( true ) {
          if (*(int *)(unaff_EBP + -0x28) == 0) {
            iStack_a0 = 0x40d5be;
            FUN_00878dfb();
          }
          iStack_a0 = unaff_EBP + -0x68;
          local_a4 = 1;
          iVar4 = (**(code **)(**(int **)(unaff_EBP + -0x28) + 0xc))(*(int **)(unaff_EBP + -0x28));
          if (iVar4 != 0) break;
          iStack_a0 = unaff_EBP + -0x10;
          local_a4 = 0x40d5e6;
          FUN_00405a23();
          iStack_a0 = unaff_EBP + -0x10;
          *(undefined1 **)(unaff_EBP + -0x2c) = &stack0xffffff64;
          local_a4 = 0x40d5f7;
          FUN_0040810c();
          iStack_a0 = unaff_EBP + -0x58;
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          local_a4 = 0x40d607;
          FUN_0040263d();
          local_a4 = 0x40d60e;
          FUN_004048a4();
          iStack_a0 = unaff_EBP + -0x48;
          *(undefined1 *)(unaff_EBP + -4) = 0x10;
          local_a4 = 0x40d61f;
          FUN_00412348();
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          iStack_a0 = 0x40d62e;
          FUN_004172b7();
          *(undefined1 *)(unaff_EBP + -4) = 0x13;
          FUN_004027b3();
          if (*(int *)(unaff_EBP + 8) == 0) {
            FUN_004125e6();
            *(undefined1 *)(unaff_EBP + -4) = 0xe;
            iStack_a0 = 0x40d654;
            iVar4 = FUN_00402bc3();
            if (iVar4 < 0) {
              iStack_a0 = 0x40d65f;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0xd;
            FUN_00402fa6();
          }
          else {
            iStack_a0 = 0x40d67c;
            iVar4 = FUN_004029b9();
            *(int *)(unaff_EBP + -0x2c) = iVar4;
            *(undefined1 *)(unaff_EBP + -4) = 0x14;
            if (iVar4 == 0) {
              iVar4 = 0;
            }
            else {
              iVar4 = FUN_0040d899();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x13;
            iStack_a0 = 0x40d6a3;
            _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                      ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar4 + 0xc),
                       *(IBinding **)(unaff_EBP + 8));
            *(int **)(unaff_EBP + -0x2c) = &iStack_a0;
            local_a4 = 0x474;
            FUN_00679e4e(&iStack_a0);
            local_a4 = unaff_EBP + -0x34;
            *(undefined1 *)(unaff_EBP + -4) = 0x15;
            FUN_004115d9();
            FUN_00404e7f();
            local_a4 = unaff_EBP + -0x98;
            *(undefined1 *)(unaff_EBP + -4) = 0x17;
            FUN_0040263d();
            iStack_a0 = FUN_004048a4();
            *(undefined1 *)(unaff_EBP + -4) = 0x18;
            local_a4 = 0x40d6f8;
            uVar3 = FUN_00412550();
            *(undefined4 *)(iVar4 + 0x40) = uVar3;
            local_a4 = unaff_EBP + -0x98;
            *(undefined1 *)(unaff_EBP + -4) = 0x17;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              iStack_a0 = 0x40d718;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x13;
            if (*(int **)(unaff_EBP + -0x34) != (int *)0x0) {
              iStack_a0 = 0x40d729;
              (**(code **)(**(int **)(unaff_EBP + -0x34) + 8))();
            }
            *(int *)(unaff_EBP + -0x38) = iVar4;
            if (iVar4 != 0) {
              iStack_a0 = 0x40d73a;
              InterlockedIncrement((LONG *)(iVar4 + 4));
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x19;
            iStack_a0 = 0x40d74a;
            FUN_0041167e();
            *(undefined1 *)(unaff_EBP + -4) = 0x13;
            if (*(int *)(unaff_EBP + -0x38) != 0) {
              iStack_a0 = 0x40d75c;
              FUN_00413281();
              *(undefined4 *)(unaff_EBP + -0x38) = 0;
            }
            FUN_00413a05();
            iStack_a0 = 0x40d776;
            FUN_00412745();
            iVar4 = *(int *)(unaff_EBP + -0x14);
            iStack_a0 = 0x40d788;
            uVar3 = FUN_00411b79();
            *(undefined4 *)(iVar4 + 0x34) = uVar3;
            iVar4 = *(int *)(unaff_EBP + -0x14);
            iStack_a0 = unaff_EBP + -0x30;
            local_a4 = 0x40d7a1;
            uVar3 = FUN_00416598();
            *(undefined4 *)(iVar4 + 0x30) = uVar3;
            iVar4 = *(int *)(unaff_EBP + -0x14);
            uVar3 = (*DAT_0097b704)();
            *(undefined4 *)(iVar4 + 0x2c) = uVar3;
            *(undefined1 *)(unaff_EBP + -4) = 0x10;
            if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
              iStack_a0 = 0x40d7c1;
              (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0xe;
            iStack_a0 = 0x40d7ce;
            iVar4 = FUN_00402bc3();
            if (iVar4 < 0) {
              iStack_a0 = 0x40d7d9;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0xd;
            if (*(int *)(unaff_EBP + -0x10) != 0) {
              FUN_004030b1();
              *(undefined4 *)(unaff_EBP + -0x10) = 0;
            }
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 10;
        if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
          iStack_a0 = 0x40d806;
          (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 8;
        iStack_a0 = 0x40d813;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          iStack_a0 = 0x40d81e;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
          iStack_a0 = 0x40d82f;
          (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (*(int *)(unaff_EBP + -0x20) != 0) {
          iStack_a0 = 0x40d840;
          FUN_00413111();
          *(undefined4 *)(unaff_EBP + -0x20) = 0;
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (*(int *)(unaff_EBP + -0x14) != 0) {
          iStack_a0 = 0x40d855;
          FUN_0041313f();
        }
        goto LAB_0040d855;
      }
      FUN_004027eb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00412bd3();
  }
  else {
    iVar4 = *(int *)(unaff_EBP + -0x14);
    uVar3 = (*DAT_0097b704)();
    *(undefined4 *)(iVar4 + 0x2c) = uVar3;
    FUN_00413a05();
    iStack_a0 = 0x40d3d9;
    FUN_00412745();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00412c22();
LAB_0040d855:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


