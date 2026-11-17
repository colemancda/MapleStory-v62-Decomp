/* FUN_0040b905 - 0x0040b905 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0040b905(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_ECX;
  uint uVar4;
  int unaff_EBP;
  int local_b4;
  int iStack_b0;
  
  FUN_00879bb8();
  uVar4 = *(uint *)(unaff_EBP + 0xc);
  iVar3 = **(int **)(unaff_EBP + 8);
  *(int *)(unaff_EBP + -0x3c) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(uint *)(unaff_EBP + -0x38) = iVar3 << 8 | uVar4;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  iStack_b0 = unaff_EBP + -0x38;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int *)(unaff_EBP + -0x4c) = extraout_ECX + 0x17c;
  local_b4 = 0x40b94e;
  iVar1 = FUN_00415698();
  if (iVar1 == 0) {
    iStack_b0 = 0x40b986;
    iVar1 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x34) = iVar1;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_0040bece();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
    FUN_00412ad4();
    *(int *)(*(int *)(unaff_EBP + -0x14) + 0xc) = iVar3;
    *(uint *)(*(int *)(unaff_EBP + -0x14) + 0x10) = uVar4;
    iStack_b0 = unaff_EBP + -0x28;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    local_b4 = 0x40b9c7;
    FUN_0040b33a();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (*(int *)(unaff_EBP + -0x24) != 0) {
      iStack_b0 = 0;
      if ((int)uVar4 < 2) {
        *(int **)(unaff_EBP + 8) = &local_b4;
        FUN_004059fd(&DAT_00978408 + uVar4 * 4);
        iVar3 = unaff_EBP + -0xa8;
        *(undefined1 *)(unaff_EBP + -4) = 3;
        FUN_0041198c(iVar3);
        FUN_0040263d();
        FUN_004048a4(iVar3);
        *(undefined4 *)(unaff_EBP + -0x10) = 1;
        *(undefined1 *)(unaff_EBP + -4) = 5;
      }
      else {
        local_b4 = uVar4 - 2;
        uVar2 = FUN_004172e3();
        *(int **)(unaff_EBP + 8) = &local_b4;
        FUN_004059fd(uVar2);
        iVar3 = unaff_EBP + -0x98;
        *(undefined4 *)(unaff_EBP + -4) = 5;
        FUN_0041198c(iVar3);
        FUN_0040263d();
        FUN_004048a4(iVar3);
        *(undefined4 *)(unaff_EBP + -0x10) = 2;
        *(undefined4 *)(unaff_EBP + -4) = 7;
      }
      local_b4 = 0x40ba74;
      iVar3 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x30) = iVar3;
      *(undefined4 *)(unaff_EBP + 0xc) = 0;
      if (iVar3 != 0) {
        iStack_b0 = 0x40ba8a;
        iVar3 = FUN_00404b30();
        if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
          iStack_b0 = 0x40ba9b;
          FUN_00878dfb();
        }
      }
      *(undefined4 *)(unaff_EBP + -4) = 10;
      if ((*(byte *)(unaff_EBP + -0x10) & 2) != 0) {
        *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
        iStack_b0 = 0x40bab8;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          iStack_b0 = 0x40bac3;
          FUN_00878dfb();
        }
      }
      *(undefined4 *)(unaff_EBP + -4) = 9;
      if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
        iStack_b0 = 0x40badc;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          iStack_b0 = 0x40bae7;
          FUN_00878dfb();
        }
      }
      if (*(int *)(unaff_EBP + 0xc) != 0) {
        iStack_b0 = 0x40bb29;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x88));
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        if (*(int *)(unaff_EBP + 0xc) == 0) {
          iStack_b0 = 0x40bb3c;
          FUN_00878dfb();
        }
        iStack_b0 = 0x40bb48;
        FUN_00404960();
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        iStack_b0 = 0x40bb55;
        FUN_004035f5();
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        FUN_004027b3();
        *(undefined4 *)(unaff_EBP + -0x54) = 0;
        while( true ) {
          if (*(int *)(unaff_EBP + -0x2c) == 0) {
            iStack_b0 = 0x40bb78;
            FUN_00878dfb();
          }
          iStack_b0 = unaff_EBP + -0x88;
          local_b4 = 1;
          iVar3 = (**(code **)(**(int **)(unaff_EBP + -0x2c) + 0xc))(*(int **)(unaff_EBP + -0x2c));
          if (iVar3 != 0) break;
          iStack_b0 = unaff_EBP + -0x10;
          local_b4 = 0x40bba6;
          FUN_00405a23();
          iStack_b0 = unaff_EBP + -0x10;
          *(undefined1 **)(unaff_EBP + -0x40) = &stack0xffffff54;
          local_b4 = 0x40bbb7;
          FUN_0040810c();
          iStack_b0 = unaff_EBP + -0x68;
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          local_b4 = 0x40bbc7;
          FUN_0040263d();
          local_b4 = 0x40bbce;
          FUN_004048a4();
          iStack_b0 = unaff_EBP + -0x50;
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          local_b4 = 0x40bbdf;
          FUN_00412348();
          *(undefined1 *)(unaff_EBP + -4) = 0x12;
          iStack_b0 = 0x40bbee;
          FUN_004172b7();
          *(undefined1 *)(unaff_EBP + -4) = 0x14;
          FUN_004027b3();
          if (*(int *)(unaff_EBP + 8) == 0) {
            FUN_004125e6();
            *(undefined1 *)(unaff_EBP + -4) = 0xf;
            iStack_b0 = 0x40bc14;
            iVar3 = FUN_00402bc3();
            if (iVar3 < 0) {
              iStack_b0 = 0x40bc1f;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0xe;
            FUN_00402fa6();
          }
          else {
            iStack_b0 = 0x40bc3c;
            iVar3 = FUN_004029b9();
            *(int *)(unaff_EBP + -0x40) = iVar3;
            *(undefined1 *)(unaff_EBP + -4) = 0x15;
            if (iVar3 == 0) {
              iVar3 = 0;
            }
            else {
              iVar3 = FUN_0040bf01();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x14;
            iStack_b0 = 0x40bc63;
            _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                      ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar3 + 0xc),
                       *(IBinding **)(unaff_EBP + 8));
            *(int **)(unaff_EBP + -0x40) = &iStack_b0;
            local_b4 = 0x474;
            FUN_00679e4e(&iStack_b0);
            local_b4 = unaff_EBP + -0x34;
            *(undefined1 *)(unaff_EBP + -4) = 0x16;
            FUN_004115d9();
            FUN_00404e7f();
            local_b4 = unaff_EBP + -0x78;
            *(undefined1 *)(unaff_EBP + -4) = 0x18;
            FUN_0040263d();
            iStack_b0 = FUN_004048a4();
            *(undefined1 *)(unaff_EBP + -4) = 0x19;
            local_b4 = 0x40bcb2;
            uVar2 = FUN_00412550();
            *(undefined4 *)(iVar3 + 0x10) = uVar2;
            local_b4 = unaff_EBP + -0x78;
            *(undefined1 *)(unaff_EBP + -4) = 0x18;
            iVar1 = FUN_00402bc3();
            if (iVar1 < 0) {
              iStack_b0 = 0x40bccf;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x14;
            if (*(int **)(unaff_EBP + -0x34) != (int *)0x0) {
              iStack_b0 = 0x40bce0;
              (**(code **)(**(int **)(unaff_EBP + -0x34) + 8))();
            }
            *(int *)(unaff_EBP + -0x44) = iVar3;
            if (iVar3 != 0) {
              iStack_b0 = 0x40bcf1;
              InterlockedIncrement((LONG *)(iVar3 + 4));
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x1a;
            FUN_004138d7();
            iStack_b0 = 0x40bd08;
            FUN_00412daa();
            *(undefined1 *)(unaff_EBP + -4) = 0x14;
            if (*(int *)(unaff_EBP + -0x44) != 0) {
              iStack_b0 = 0x40bd1a;
              FUN_00413225();
              *(undefined4 *)(unaff_EBP + -0x44) = 0;
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x11;
            if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
              iStack_b0 = 0x40bd2e;
              (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0xf;
            iStack_b0 = 0x40bd3b;
            iVar3 = FUN_00402bc3();
            if (iVar3 < 0) {
              iStack_b0 = 0x40bd46;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0xe;
            if (*(int *)(unaff_EBP + -0x10) != 0) {
              FUN_004030b1();
              *(undefined4 *)(unaff_EBP + -0x10) = 0;
            }
          }
        }
        *(int **)(unaff_EBP + 8) = &iStack_b0;
        local_b4 = 0x47d;
        FUN_00679e4e(&iStack_b0);
        local_b4 = unaff_EBP + -0x78;
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        FUN_0040263d();
        iStack_b0 = FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x1c;
        local_b4 = 0x40bd97;
        iVar3 = FUN_00412550();
        local_b4 = unaff_EBP + -0x78;
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        iVar1 = FUN_00402bc3();
        if (iVar1 < 0) {
          iStack_b0 = 0x40bdb9;
          FUN_00878dfb();
        }
        iVar1 = *(int *)(unaff_EBP + 0x10);
        if (iVar3 != 0) {
          uVar4 = *(uint *)(iVar1 + 0x10);
          while (uVar4 != 0) {
            if ((uVar4 != *(uint *)(iVar1 + 0xc)) && (uVar4 != *(uint *)(iVar1 + 0x10))) {
              iStack_b0 = 0x40bdd9;
              FUN_00411665();
            }
            iVar3 = *(int *)((-(uint)(uVar4 != 0) & uVar4 - 0x10) + 8);
            uVar4 = -(uint)(iVar3 != 0) & iVar3 + 0x10U;
          }
        }
        FUN_00413915();
        iStack_b0 = 0x40be0b;
        FUN_004126b9();
        iVar3 = *(int *)(unaff_EBP + -0x14);
        iStack_b0 = 0x40be20;
        uVar2 = FUN_004119d8();
        *(undefined4 *)(iVar3 + 0x30) = uVar2;
        iVar3 = *(int *)(unaff_EBP + -0x14);
        iStack_b0 = unaff_EBP + -0x38;
        local_b4 = 0x40be36;
        uVar2 = FUN_004156ec();
        *(undefined4 *)(iVar3 + 0x2c) = uVar2;
        iVar3 = *(int *)(unaff_EBP + -0x14);
        uVar2 = (*DAT_0097b704)();
        *(undefined4 *)(iVar3 + 0x28) = uVar2;
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
          iStack_b0 = 0x40be56;
          (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 9;
        iStack_b0 = 0x40be66;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          iStack_b0 = 0x40be71;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 3;
        if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
          iStack_b0 = 0x40be82;
          (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (*(int *)(unaff_EBP + -0x24) != 0) {
          iStack_b0 = 0x40be94;
          FUN_00413059();
          *(undefined4 *)(unaff_EBP + -0x24) = 0;
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (*(int *)(unaff_EBP + -0x14) != 0) {
          iStack_b0 = 0x40bea8;
          FUN_00413087();
          *(undefined4 *)(unaff_EBP + -0x14) = 0;
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (*(int *)(unaff_EBP + -0x1c) != 0) {
          iStack_b0 = 0x40bebd;
          FUN_00413087();
        }
        goto LAB_0040bebd;
      }
      FUN_004027eb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00412a85();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00412ae6();
  }
  else {
    iVar3 = *(int *)(unaff_EBP + -0x1c);
    uVar2 = (*DAT_0097b704)();
    *(undefined4 *)(iVar3 + 0x28) = uVar2;
    FUN_00413915();
    iStack_b0 = 0x40b975;
    FUN_004126b9();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00412ae6();
LAB_0040bebd:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


