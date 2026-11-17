/* FUN_0040a66d - 0x0040a66d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0040a66d(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *puVar5;
  uint uVar6;
  int unaff_EBP;
  undefined1 *local_184;
  int iStack_180;
  
  FUN_00879bb8();
  uVar6 = *(uint *)(unaff_EBP + 0xc);
  iVar4 = *(int *)(unaff_EBP + 8);
  *(int *)(unaff_EBP + -0x60) = extraout_ECX;
  *(uint *)(unaff_EBP + -100) = iVar4 << 8 | uVar6;
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  iStack_180 = unaff_EBP + -100;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int *)(unaff_EBP + -0x88) = extraout_ECX + 0x10c;
  local_184 = (undefined1 *)0x40a6b4;
  iVar2 = FUN_00414ac2();
  if (iVar2 == 0) {
    iStack_180 = 0x40a6ec;
    iVar2 = FUN_004029b9();
    *(int *)(unaff_EBP + 8) = iVar2;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0040b225();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
    FUN_004129ea();
    *(int *)(*(int *)(unaff_EBP + -0x18) + 0xc) = iVar4;
    *(uint *)(*(int *)(unaff_EBP + -0x18) + 0x10) = uVar6;
    iStack_180 = unaff_EBP + -0x5c;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    local_184 = (undefined1 *)0x40a72d;
    FUN_0040a0a2();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (*(int *)(unaff_EBP + -0x58) != 0) {
      iStack_180 = 0;
      *(undefined1 ***)(unaff_EBP + 8) = &local_184;
      FUN_004059fd(&DAT_00978598 + uVar6 * 4);
      iVar4 = unaff_EBP + -0x128;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_004118a0(iVar4);
      FUN_0040263d();
      FUN_004048a4(iVar4);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      local_184 = (undefined1 *)0x40a77e;
      iVar4 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x8c) = iVar4;
      *(undefined4 *)(unaff_EBP + 0xc) = 0;
      if (iVar4 != 0) {
        iStack_180 = 0x40a79a;
        iVar4 = FUN_00404b30();
        if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
          iStack_180 = 0x40a7ab;
          FUN_00878dfb();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iStack_180 = 0x40a7bb;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        iStack_180 = 0x40a7c6;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + 0xc) != 0) {
        iStack_180 = 0x40a808;
        VariantInit((VARIANTARG *)(unaff_EBP + -0xb8));
        *(undefined1 *)(unaff_EBP + -4) = 8;
        if (*(int *)(unaff_EBP + 0xc) == 0) {
          iStack_180 = 0x40a81b;
          FUN_00878dfb();
        }
        iStack_180 = 0x40a827;
        FUN_00404960();
        *(undefined1 *)(unaff_EBP + -4) = 9;
        iStack_180 = 0x40a834;
        FUN_004035f5();
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        FUN_004027b3();
        *(undefined4 *)(unaff_EBP + -0x78) = 0;
        while( true ) {
          if (*(int *)(unaff_EBP + -0x50) == 0) {
            iStack_180 = 0x40a857;
            FUN_00878dfb();
          }
          iStack_180 = unaff_EBP + -0xb8;
          local_184 = (undefined1 *)0x1;
          iVar4 = (**(code **)(**(int **)(unaff_EBP + -0x50) + 0xc))(*(int **)(unaff_EBP + -0x50));
          if (iVar4 != 0) break;
          iStack_180 = unaff_EBP + -0x3c;
          local_184 = (undefined1 *)0x40a885;
          FUN_00405a23();
          iStack_180 = unaff_EBP + -0x3c;
          *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffe84;
          local_184 = (undefined1 *)0x40a896;
          FUN_0040810c();
          iStack_180 = unaff_EBP + -0xd8;
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          local_184 = (undefined1 *)0x40a8a9;
          FUN_0040263d();
          local_184 = (undefined1 *)0x40a8b0;
          FUN_004048a4();
          iStack_180 = unaff_EBP + -0x90;
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          local_184 = (undefined1 *)0x40a8c7;
          FUN_00412348();
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          iStack_180 = 0x40a8d6;
          FUN_004172b7();
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          FUN_004027b3();
          if (*(int *)(unaff_EBP + 8) == 0) {
            FUN_004125e6();
            *(undefined1 *)(unaff_EBP + -4) = 0xc;
            iStack_180 = 0x40a902;
            iVar4 = FUN_00402bc3();
            if (iVar4 < 0) {
              iStack_180 = 0x40a90d;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0xb;
            FUN_00402fa6();
          }
          else {
            iStack_180 = 0x40a92a;
            iVar4 = FUN_004029b9();
            *(int *)(unaff_EBP + -0x10) = iVar4;
            *(undefined1 *)(unaff_EBP + -4) = 0x12;
            if (iVar4 == 0) {
              iVar4 = 0;
            }
            else {
              iVar4 = FUN_0040b258();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x11;
            if (*(int *)(unaff_EBP + 8) == 0) {
              iStack_180 = 0x40a955;
              FUN_00878dfb();
            }
            iStack_180 = 0x40a961;
            FUN_00404e7f();
            *(undefined1 *)(unaff_EBP + -4) = 0x13;
            iStack_180 = 0x40a970;
            _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                      ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar4 + 0xc),
                       *(IBinding **)(unaff_EBP + 8));
            *(int **)(unaff_EBP + -0x10) = &iStack_180;
            local_184 = (undefined1 *)0x474;
            FUN_00679e4e(&iStack_180);
            local_184 = (undefined1 *)(unaff_EBP + -0x178);
            *(undefined1 *)(unaff_EBP + -4) = 0x13;
            FUN_0040263d();
            iStack_180 = FUN_004048a4();
            *(undefined1 *)(unaff_EBP + -4) = 0x15;
            local_184 = (undefined1 *)0x40a9a9;
            uVar3 = FUN_00412550();
            *(undefined4 *)(iVar4 + 0x4c) = uVar3;
            local_184 = (undefined1 *)(unaff_EBP + -0x178);
            *(undefined1 *)(unaff_EBP + -4) = 0x13;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              iStack_180 = 0x40a9c9;
              FUN_00878dfb();
            }
            *(int **)(unaff_EBP + -0x10) = &iStack_180;
            local_184 = (undefined1 *)0x3b6;
            FUN_00679e4e(&iStack_180);
            local_184 = (undefined1 *)(unaff_EBP + -0x98);
            *(undefined1 *)(unaff_EBP + -4) = 0x16;
            FUN_004115d9();
            FUN_00404e7f();
            local_184 = (undefined1 *)(unaff_EBP + -0x108);
            *(undefined1 *)(unaff_EBP + -4) = 0x18;
            FUN_0040263d();
            iStack_180 = FUN_004048a4();
            *(undefined1 *)(unaff_EBP + -4) = 0x19;
            local_184 = (undefined1 *)0x40aa1b;
            uVar3 = FUN_00412550();
            *(undefined4 *)(iVar4 + 0x50) = uVar3;
            local_184 = (undefined1 *)(unaff_EBP + -0x108);
            *(undefined1 *)(unaff_EBP + -4) = 0x18;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              iStack_180 = 0x40aa3b;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x13;
            FUN_004027eb();
            *(int **)(unaff_EBP + -0x10) = &iStack_180;
            local_184 = (undefined1 *)0x3b7;
            FUN_00679e4e(&iStack_180);
            local_184 = (undefined1 *)(unaff_EBP + -0x6c);
            *(undefined1 *)(unaff_EBP + -4) = 0x1a;
            FUN_004115d9();
            FUN_00404e7f();
            local_184 = (undefined1 *)(unaff_EBP + -0x148);
            *(undefined1 *)(unaff_EBP + -4) = 0x1c;
            FUN_0040263d();
            iStack_180 = FUN_004048a4();
            *(undefined1 *)(unaff_EBP + -4) = 0x1d;
            local_184 = (undefined1 *)0x40aa99;
            uVar3 = FUN_00412550();
            *(undefined4 *)(iVar4 + 0x54) = uVar3;
            local_184 = (undefined1 *)(unaff_EBP + -0x148);
            *(undefined1 *)(unaff_EBP + -4) = 0x1c;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              iStack_180 = 0x40aab9;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x13;
            FUN_004027eb();
            iStack_180 = 0;
            *(undefined1 ***)(unaff_EBP + -0x10) = &local_184;
            FUN_00679e4e(&local_184,0x3ba);
            iVar2 = unaff_EBP + -0xe8;
            *(undefined1 *)(unaff_EBP + -4) = 0x13;
            FUN_0040263d(iVar2);
            FUN_004048a4(iVar2);
            *(undefined1 *)(unaff_EBP + -4) = 0x1f;
            local_184 = (undefined1 *)0x40aaff;
            iVar2 = FUN_004032b4();
            *(int *)(unaff_EBP + -0xa0) = iVar2;
            *(undefined4 *)(unaff_EBP + -0x20) = 0;
            if (iVar2 != 0) {
              iStack_180 = 0x40ab1b;
              iVar2 = FUN_0041a4e5();
              if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
                iStack_180 = 0x40ab2c;
                FUN_00878dfb();
              }
            }
            puVar5 = (undefined1 *)(unaff_EBP + -0xe8);
            *(undefined1 *)(unaff_EBP + -4) = 0x21;
            iStack_180 = 0x40ab3c;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              iStack_180 = 0x40ab47;
              FUN_00878dfb();
              puVar5 = extraout_ECX_00;
            }
            iStack_180 = 0;
            *(undefined1 ***)(unaff_EBP + -0x10) = &local_184;
            local_184 = puVar5;
            FUN_00679e4e(&local_184,0x3bb);
            iVar2 = unaff_EBP + -0x168;
            *(undefined1 *)(unaff_EBP + -4) = 0x21;
            FUN_0040263d(iVar2);
            FUN_004048a4(iVar2);
            *(undefined1 *)(unaff_EBP + -4) = 0x23;
            local_184 = (undefined1 *)0x40ab81;
            iVar2 = FUN_004032b4();
            *(int *)(unaff_EBP + -0x74) = iVar2;
            *(undefined4 *)(unaff_EBP + -0x14) = 0;
            if (iVar2 != 0) {
              iStack_180 = 0x40ab97;
              iVar2 = FUN_0041a4e5();
              if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
                iStack_180 = 0x40aba8;
                FUN_00878dfb();
              }
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x25;
            iStack_180 = 0x40abb8;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              iStack_180 = 0x40abc3;
              FUN_00878dfb();
            }
            iStack_180 = 0x40abcc;
            cVar1 = FUN_004115ad();
            if (cVar1 == '\0') {
              iStack_180 = 0x40abdd;
              cVar1 = FUN_004115ad();
              if (cVar1 != '\0') goto LAB_0040ac54;
              if (*(int *)(unaff_EBP + -0x14) == 0) {
                iStack_180 = 0x40abf0;
                FUN_00878dfb();
                if (*(int *)(unaff_EBP + -0x14) == 0) {
                  iStack_180 = 0x40abff;
                  FUN_00878dfb();
                }
              }
              *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x14);
              if (*(int *)(unaff_EBP + -0x20) == 0) {
                iStack_180 = 0x40ac14;
                FUN_00878dfb();
              }
              *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x20);
              if (*(int *)(unaff_EBP + -0x20) == 0) {
                iStack_180 = 0x40ac28;
                FUN_00878dfb();
              }
              *(undefined4 *)(unaff_EBP + -0x54) = *(undefined4 *)(unaff_EBP + -0x20);
              FUN_00404abb();
              iStack_180 = 0x40ac3f;
              iStack_180 = FUN_00404a94();
              local_184 = (undefined1 *)0x40ac48;
              local_184 = (undefined1 *)FUN_00404abb();
              uVar3 = FUN_00404a94();
            }
            else {
LAB_0040ac54:
              iStack_180 = 0;
              local_184 = (undefined1 *)0x0;
              uVar3 = 0;
            }
            FUN_004114f3(iVar4 + 0x10,uVar3);
            iStack_180 = 0;
            *(undefined1 ***)(unaff_EBP + -0x10) = &local_184;
            FUN_00679e4e(&local_184,0xaea);
            iVar2 = unaff_EBP + -0xf8;
            *(undefined1 *)(unaff_EBP + -4) = 0x25;
            FUN_0040263d(iVar2);
            FUN_004048a4(iVar2);
            *(undefined1 *)(unaff_EBP + -4) = 0x27;
            local_184 = (undefined1 *)0x40ac9e;
            iVar2 = FUN_004032b4();
            *(int *)(unaff_EBP + -0x68) = iVar2;
            *(undefined4 *)(unaff_EBP + -0x38) = 0;
            if (iVar2 != 0) {
              iStack_180 = 0x40acb4;
              iVar2 = FUN_00404b30();
              if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
                iStack_180 = 0x40acc5;
                FUN_00878dfb();
              }
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x29;
            iStack_180 = 0x40acd5;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              iStack_180 = 0x40ace0;
              FUN_00878dfb();
            }
            iStack_180 = 0x40ace9;
            cVar1 = FUN_00411581();
            if (cVar1 == '\0') {
              *(undefined4 *)(unaff_EBP + -0x2c) = 0;
              while( true ) {
                FUN_0087a1b0();
                iStack_180 = 0;
                local_184 = &stack0xfffffe88;
                uVar3 = FUN_00412335(*(undefined4 *)(unaff_EBP + -0x2c));
                *(undefined1 ***)(unaff_EBP + -0x10) = &local_184;
                FUN_004033a1(uVar3);
                iVar2 = unaff_EBP + -0x118;
                *(undefined1 *)(unaff_EBP + -4) = 0x29;
                FUN_0040263d(iVar2);
                FUN_004048a4(iVar2);
                *(undefined1 *)(unaff_EBP + -4) = 0x2b;
                local_184 = (undefined1 *)0x40ad3a;
                iVar2 = FUN_004032b4();
                *(int *)(unaff_EBP + -0x9c) = iVar2;
                *(undefined4 *)(unaff_EBP + -0x24) = 0;
                if (iVar2 != 0) {
                  iStack_180 = 0x40ad56;
                  iVar2 = FUN_00404b30();
                  if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
                    iStack_180 = 0x40ad67;
                    FUN_00878dfb();
                  }
                }
                *(undefined1 *)(unaff_EBP + -4) = 0x2d;
                iStack_180 = 0x40ad77;
                iVar2 = FUN_00402bc3();
                if (iVar2 < 0) {
                  iStack_180 = 0x40ad82;
                  FUN_00878dfb();
                }
                if (*(int *)(unaff_EBP + -0x24) == 0) break;
                iStack_180 = 0x40ad95;
                uVar3 = FUN_00413602();
                iStack_180 = 0;
                *(undefined4 *)(unaff_EBP + -0x34) = uVar3;
                *(undefined1 ***)(unaff_EBP + -0x10) = &local_184;
                FUN_00679e4e(&local_184,0x3ba);
                iVar2 = unaff_EBP + -0x138;
                *(undefined1 *)(unaff_EBP + -4) = 0x2d;
                FUN_0040263d(iVar2);
                FUN_004048a4(iVar2);
                *(undefined1 *)(unaff_EBP + -4) = 0x2f;
                local_184 = (undefined1 *)0x40add2;
                iVar2 = FUN_004032b4();
                *(int *)(unaff_EBP + -0x84) = iVar2;
                *(undefined4 *)(unaff_EBP + -0x4c) = 0;
                if (iVar2 != 0) {
                  iStack_180 = 0x40adee;
                  iVar2 = FUN_0041a4e5();
                  if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
                    iStack_180 = 0x40adff;
                    FUN_00878dfb();
                  }
                }
                puVar5 = (undefined1 *)(unaff_EBP + -0x138);
                *(undefined1 *)(unaff_EBP + -4) = 0x31;
                iStack_180 = 0x40ae0f;
                iVar2 = FUN_00402bc3();
                if (iVar2 < 0) {
                  iStack_180 = 0x40ae1a;
                  FUN_00878dfb();
                  puVar5 = extraout_ECX_01;
                }
                iStack_180 = 0;
                *(undefined1 ***)(unaff_EBP + -0x10) = &local_184;
                local_184 = puVar5;
                FUN_00679e4e(&local_184,0x3bb);
                iVar2 = unaff_EBP + -0x158;
                *(undefined1 *)(unaff_EBP + -4) = 0x31;
                FUN_0040263d(iVar2);
                FUN_004048a4(iVar2);
                *(undefined1 *)(unaff_EBP + -4) = 0x33;
                local_184 = (undefined1 *)0x40ae54;
                iVar2 = FUN_004032b4();
                *(int *)(unaff_EBP + -0x94) = iVar2;
                *(undefined4 *)(unaff_EBP + -0x48) = 0;
                if (iVar2 != 0) {
                  iStack_180 = 0x40ae70;
                  iVar2 = FUN_0041a4e5();
                  if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
                    iStack_180 = 0x40ae81;
                    FUN_00878dfb();
                  }
                }
                *(undefined1 *)(unaff_EBP + -4) = 0x35;
                iStack_180 = 0x40ae91;
                iVar2 = FUN_00402bc3();
                if (iVar2 < 0) {
                  iStack_180 = 0x40ae9c;
                  FUN_00878dfb();
                }
                iVar2 = *(int *)(unaff_EBP + -0x4c);
                if ((iVar2 == 0) || (*(int *)(unaff_EBP + -0x48) == 0)) {
                  iStack_180 = 0;
                  local_184 = (undefined1 *)0x0;
                  uVar3 = 0;
                }
                else {
                  *(int *)(unaff_EBP + -0x54) = *(int *)(unaff_EBP + -0x48);
                  *(int *)(unaff_EBP + -0x70) = iVar2;
                  *(int *)(unaff_EBP + -0x10) = iVar2;
                  FUN_00404abb();
                  iStack_180 = 0x40aec1;
                  iStack_180 = FUN_00404a94();
                  local_184 = (undefined1 *)0x40aeca;
                  local_184 = (undefined1 *)FUN_00404abb();
                  uVar3 = FUN_00404a94();
                }
                FUN_004114f3(*(undefined4 *)(unaff_EBP + -0x34),uVar3);
                FUN_004125d9();
                *(undefined1 *)(unaff_EBP + -4) = 0x2d;
                if (*(int **)(unaff_EBP + -0x4c) != (int *)0x0) {
                  iStack_180 = 0x40aefe;
                  (**(code **)(**(int **)(unaff_EBP + -0x4c) + 8))();
                }
                *(undefined1 *)(unaff_EBP + -4) = 0x29;
                if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
                  iStack_180 = 0x40af0f;
                  (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
                }
                *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + 1;
              }
              *(undefined1 *)(unaff_EBP + -4) = 0x29;
              FUN_004027eb();
            }
            iStack_180 = 0;
            *(undefined1 ***)(unaff_EBP + -0x10) = &local_184;
            FUN_00679e4e(&local_184,0x47c);
            iVar2 = unaff_EBP + -200;
            *(undefined1 *)(unaff_EBP + -4) = 0x29;
            FUN_0040263d(iVar2);
            FUN_004048a4(iVar2);
            *(undefined1 *)(unaff_EBP + -4) = 0x37;
            local_184 = (undefined1 *)0x40af5d;
            iVar2 = FUN_004032b4();
            *(int *)(unaff_EBP + -0x80) = iVar2;
            *(undefined4 *)(unaff_EBP + -0x30) = 0;
            if (iVar2 != 0) {
              iStack_180 = 0x40af73;
              iVar2 = FUN_0041a4e5();
              if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
                iStack_180 = 0x40af84;
                FUN_00878dfb();
              }
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x39;
            iStack_180 = 0x40af94;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              iStack_180 = 0x40af9f;
              FUN_00878dfb();
            }
            if (*(int *)(unaff_EBP + -0x30) == 0) {
              *(undefined4 *)(iVar4 + 0x48) = 0;
              *(undefined4 *)(iVar4 + 0x44) = 0;
            }
            else {
              uVar3 = FUN_00404a94();
              *(undefined4 *)(iVar4 + 0x44) = uVar3;
              if (*(int *)(unaff_EBP + -0x30) == 0) {
                iStack_180 = 0x40afc5;
                FUN_00878dfb();
              }
              uVar3 = FUN_00404abb();
              *(undefined4 *)(iVar4 + 0x48) = uVar3;
            }
            *(int *)(unaff_EBP + -0xa4) = iVar4;
            if (iVar4 != 0) {
              iStack_180 = 0x40afe4;
              InterlockedIncrement((LONG *)(iVar4 + 4));
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x3a;
            FUN_0041385f();
            iStack_180 = 0x40affe;
            FUN_00412d5b();
            *(undefined1 *)(unaff_EBP + -4) = 0x39;
            FUN_00412d94();
            *(undefined1 *)(unaff_EBP + -4) = 0x29;
            if (*(int **)(unaff_EBP + -0x30) != (int *)0x0) {
              iStack_180 = 0x40b01e;
              (**(code **)(**(int **)(unaff_EBP + -0x30) + 8))();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x25;
            if (*(int **)(unaff_EBP + -0x38) != (int *)0x0) {
              iStack_180 = 0x40b02f;
              (**(code **)(**(int **)(unaff_EBP + -0x38) + 8))();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x21;
            if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
              iStack_180 = 0x40b040;
              (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x13;
            if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
              iStack_180 = 0x40b051;
              (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x11;
            if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
              iStack_180 = 0x40b062;
              (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0xe;
            if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
              iStack_180 = 0x40b073;
              (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0xc;
            iStack_180 = 0x40b083;
            iVar4 = FUN_00402bc3();
            if (iVar4 < 0) {
              iStack_180 = 0x40b08e;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0xb;
            if (*(int *)(unaff_EBP + -0x3c) != 0) {
              FUN_004030b1();
              *(undefined4 *)(unaff_EBP + -0x3c) = 0;
            }
          }
        }
        *(int **)(unaff_EBP + 8) = &iStack_180;
        local_184 = (undefined1 *)0x47d;
        FUN_00679e4e(&iStack_180);
        local_184 = (undefined1 *)(unaff_EBP + -200);
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        FUN_0040263d();
        iStack_180 = FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x3c;
        local_184 = (undefined1 *)0x40b0e2;
        iVar4 = FUN_00412550();
        local_184 = (undefined1 *)(unaff_EBP + -200);
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          iStack_180 = 0x40b107;
          FUN_00878dfb();
        }
        iVar2 = *(int *)(unaff_EBP + 0x10);
        if (iVar4 != 0) {
          uVar6 = *(uint *)(iVar2 + 0x10);
          while (uVar6 != 0) {
            if ((uVar6 != *(uint *)(iVar2 + 0xc)) && (uVar6 != *(uint *)(iVar2 + 0x10))) {
              iStack_180 = 0x40b127;
              FUN_0041164c();
            }
            iVar4 = *(int *)((-(uint)(uVar6 != 0) & uVar6 - 0x10) + 8);
            uVar6 = -(uint)(iVar4 != 0) & iVar4 + 0x10U;
          }
        }
        FUN_0041389d();
        iStack_180 = 0x40b159;
        FUN_00412673();
        iVar4 = *(int *)(unaff_EBP + -0x18);
        iStack_180 = 0x40b16e;
        uVar3 = FUN_004118ec();
        *(undefined4 *)(iVar4 + 0x30) = uVar3;
        iVar4 = *(int *)(unaff_EBP + -0x18);
        iStack_180 = unaff_EBP + -100;
        local_184 = (undefined1 *)0x40b187;
        uVar3 = FUN_00414b16();
        *(undefined4 *)(iVar4 + 0x2c) = uVar3;
        iVar4 = *(int *)(unaff_EBP + -0x18);
        uVar3 = (*DAT_0097b704)();
        *(undefined4 *)(iVar4 + 0x28) = uVar3;
        *(undefined1 *)(unaff_EBP + -4) = 8;
        if (*(int **)(unaff_EBP + -0x50) != (int *)0x0) {
          iStack_180 = 0x40b1a7;
          (**(code **)(**(int **)(unaff_EBP + -0x50) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 7;
        iStack_180 = 0x40b1b7;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          iStack_180 = 0x40b1c2;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 3;
        if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
          iStack_180 = 0x40b1d3;
          (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (*(int *)(unaff_EBP + -0x58) != 0) {
          iStack_180 = 0x40b1e5;
          FUN_00412fcf();
          *(undefined4 *)(unaff_EBP + -0x58) = 0;
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (*(int *)(unaff_EBP + -0x18) != 0) {
          iStack_180 = 0x40b1f9;
          FUN_00412ffd();
          *(undefined4 *)(unaff_EBP + -0x18) = 0;
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (*(int *)(unaff_EBP + -0x40) != 0) {
          iStack_180 = 0x40b20e;
          FUN_00412ffd();
        }
        goto LAB_0040b20e;
      }
      FUN_004027eb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_0041299b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_004129fc();
  }
  else {
    iVar4 = *(int *)(unaff_EBP + -0x40);
    uVar3 = (*DAT_0097b704)();
    *(undefined4 *)(iVar4 + 0x28) = uVar3;
    FUN_0041389d();
    iStack_180 = 0x40a6db;
    FUN_00412673();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004129fc();
LAB_0040b20e:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


