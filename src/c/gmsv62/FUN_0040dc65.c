/* FUN_0040dc65 - 0x0040dc65 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0040dc65(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int extraout_ECX;
  int extraout_ECX_00;
  uint uVar7;
  int unaff_EBP;
  int local_104;
  int iStack_100;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  uVar3 = *(undefined4 *)(unaff_EBP + 0xc);
  iVar5 = *(int *)(unaff_EBP + 0x10);
  iVar6 = *(int *)(unaff_EBP + 8);
  *(int *)(unaff_EBP + -0x38) = extraout_ECX;
  *(int *)(unaff_EBP + -0x78) = iVar6;
  *(undefined4 *)(unaff_EBP + -0x74) = uVar3;
  *(int *)(unaff_EBP + -0x70) = iVar5;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_100 = unaff_EBP + -0x78;
  *(int *)(unaff_EBP + -0x54) = extraout_ECX + 600;
  local_104 = 0x40dcab;
  iVar2 = FUN_004168ef();
  if (iVar2 == 0) {
    iStack_100 = 0x40dce3;
    iVar2 = FUN_004029b9();
    *(int *)(unaff_EBP + 8) = iVar2;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar2 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_0040e414();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
    FUN_00412c71();
    *(int *)(*(int *)(unaff_EBP + -0x14) + 0xc) = iVar6;
    *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x10) = uVar3;
    *(int *)(*(int *)(unaff_EBP + -0x14) + 0x14) = iVar5;
    local_104 = unaff_EBP + -0x20;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_100 = iVar6;
    FUN_0040e564();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (*(int *)(unaff_EBP + -0x20) != 0) {
      iStack_100 = 0;
      *(int **)(unaff_EBP + 8) = &local_104;
      FUN_004059fd(&DAT_0097836c + iVar5 * 4);
      iVar5 = unaff_EBP + -0xf8;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_0040263d(iVar5);
      FUN_004048a4(iVar5);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      local_104 = 0x40dd75;
      iVar5 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x58) = iVar5;
      *(undefined4 *)(unaff_EBP + 0xc) = 0;
      if (iVar5 != 0) {
        iStack_100 = 0x40dd8b;
        iVar5 = FUN_00404b30();
        if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
          iStack_100 = 0x40dd9c;
          FUN_00878dfb();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iStack_100 = 0x40ddac;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_100 = 0x40ddb7;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + 0xc) != 0) {
        iStack_100 = 0x40ddf6;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x88));
        *(undefined1 *)(unaff_EBP + -4) = 8;
        if (*(int *)(unaff_EBP + 0xc) == 0) {
          iStack_100 = 0x40de09;
          FUN_00878dfb();
        }
        iStack_100 = 0x40de15;
        FUN_00404960();
        *(undefined1 *)(unaff_EBP + -4) = 9;
        iStack_100 = 0x40de22;
        FUN_004035f5();
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        FUN_004027b3();
        *(undefined4 *)(unaff_EBP + -0x5c) = 0;
        while( true ) {
          if (*(int *)(unaff_EBP + -0x30) == 0) {
            iStack_100 = 0x40de45;
            FUN_00878dfb();
          }
          iStack_100 = unaff_EBP + -0x88;
          local_104 = 1;
          iVar5 = (**(code **)(**(int **)(unaff_EBP + -0x30) + 0xc))(*(int **)(unaff_EBP + -0x30));
          if (iVar5 != 0) break;
          iStack_100 = unaff_EBP + -0x34;
          local_104 = 0x40de73;
          FUN_00405a23();
          iStack_100 = unaff_EBP + -0x34;
          *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffff04;
          local_104 = 0x40de84;
          FUN_0040810c();
          iStack_100 = unaff_EBP + -0xa8;
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          local_104 = 0x40de97;
          FUN_0040263d();
          local_104 = 0x40de9e;
          FUN_004048a4();
          iStack_100 = unaff_EBP + -0x40;
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          local_104 = 0x40deb2;
          FUN_00412348();
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          iStack_100 = 0x40dec1;
          FUN_004172b7();
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          FUN_004027b3();
          if (*(int *)(unaff_EBP + 8) == 0) {
            FUN_004125e6();
          }
          else {
            iStack_100 = 0x40deeb;
            iVar5 = FUN_004029b9();
            *(int *)(unaff_EBP + -0x10) = iVar5;
            *(undefined1 *)(unaff_EBP + -4) = 0x12;
            if (iVar5 == 0) {
              iVar5 = 0;
            }
            else {
              iVar5 = FUN_0040e447();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x11;
            if (*(int *)(unaff_EBP + 8) == 0) {
              iStack_100 = 0x40df16;
              FUN_00878dfb();
            }
            iStack_100 = 0x40df22;
            FUN_00404e7f();
            *(undefined1 *)(unaff_EBP + -4) = 0x13;
            iStack_100 = 0x40df31;
            _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                      ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar5 + 0xc),
                       *(IBinding **)(unaff_EBP + 8));
            *(int **)(unaff_EBP + -0x10) = &iStack_100;
            local_104 = 0x474;
            FUN_00679e4e(&iStack_100);
            local_104 = unaff_EBP + -0xb8;
            *(undefined1 *)(unaff_EBP + -4) = 0x13;
            FUN_0040263d();
            iStack_100 = FUN_004048a4();
            *(undefined1 *)(unaff_EBP + -4) = 0x15;
            local_104 = 0x40df6a;
            uVar3 = FUN_00412550();
            *(undefined4 *)(iVar5 + 0x40) = uVar3;
            local_104 = unaff_EBP + -0xb8;
            *(undefined1 *)(unaff_EBP + -4) = 0x13;
            iVar6 = FUN_00402bc3();
            if (iVar6 < 0) {
              iStack_100 = 0x40df8a;
              FUN_00878dfb();
            }
            *(int **)(unaff_EBP + -0x10) = &iStack_100;
            local_104 = 0x3b6;
            FUN_00679e4e(&iStack_100);
            local_104 = unaff_EBP + -100;
            *(undefined1 *)(unaff_EBP + -4) = 0x16;
            FUN_004115d9();
            FUN_00404e7f();
            local_104 = unaff_EBP + -0xe8;
            *(undefined1 *)(unaff_EBP + -4) = 0x18;
            FUN_0040263d();
            iStack_100 = FUN_004048a4();
            *(undefined1 *)(unaff_EBP + -4) = 0x19;
            local_104 = 0x40dfd9;
            uVar3 = FUN_00412550();
            *(undefined4 *)(iVar5 + 0x44) = uVar3;
            local_104 = unaff_EBP + -0xe8;
            *(undefined1 *)(unaff_EBP + -4) = 0x18;
            iVar6 = FUN_00402bc3();
            if (iVar6 < 0) {
              iStack_100 = 0x40dff9;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x13;
            FUN_004027eb();
            *(int **)(unaff_EBP + -0x10) = &iStack_100;
            local_104 = 0x3b7;
            FUN_00679e4e(&iStack_100);
            local_104 = unaff_EBP + -0x4c;
            *(undefined1 *)(unaff_EBP + -4) = 0x1a;
            FUN_004115d9();
            FUN_00404e7f();
            local_104 = unaff_EBP + -200;
            *(undefined1 *)(unaff_EBP + -4) = 0x1c;
            FUN_0040263d();
            iStack_100 = FUN_004048a4();
            *(undefined1 *)(unaff_EBP + -4) = 0x1d;
            local_104 = 0x40e054;
            uVar3 = FUN_00412550();
            *(undefined4 *)(iVar5 + 0x48) = uVar3;
            local_104 = unaff_EBP + -200;
            *(undefined1 *)(unaff_EBP + -4) = 0x1c;
            iVar6 = FUN_00402bc3();
            if (iVar6 < 0) {
              iStack_100 = 0x40e074;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x13;
            FUN_004027eb();
            iStack_100 = 0;
            *(int **)(unaff_EBP + -0x10) = &local_104;
            FUN_00679e4e(&local_104,0x3ba);
            iVar6 = unaff_EBP + -0xd8;
            *(undefined1 *)(unaff_EBP + -4) = 0x13;
            FUN_0040263d(iVar6);
            FUN_004048a4(iVar6);
            *(undefined1 *)(unaff_EBP + -4) = 0x1f;
            local_104 = 0x40e0ba;
            iVar6 = FUN_004032b4();
            *(int *)(unaff_EBP + -0x6c) = iVar6;
            *(undefined4 *)(unaff_EBP + -0x1c) = 0;
            if (iVar6 != 0) {
              iStack_100 = 0x40e0d0;
              iVar6 = FUN_0041a4e5();
              if ((iVar6 < 0) && (iVar6 != -0x7fffbffe)) {
                iStack_100 = 0x40e0e1;
                FUN_00878dfb();
              }
            }
            iVar6 = unaff_EBP + -0xd8;
            *(undefined1 *)(unaff_EBP + -4) = 0x21;
            iStack_100 = 0x40e0f1;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              iStack_100 = 0x40e0fc;
              FUN_00878dfb();
              iVar6 = extraout_ECX_00;
            }
            iStack_100 = 0;
            *(int **)(unaff_EBP + -0x10) = &local_104;
            local_104 = iVar6;
            FUN_00679e4e(&local_104,0x3bb);
            iVar6 = unaff_EBP + -0x98;
            *(undefined1 *)(unaff_EBP + -4) = 0x21;
            FUN_0040263d(iVar6);
            FUN_004048a4(iVar6);
            *(undefined1 *)(unaff_EBP + -4) = 0x23;
            local_104 = 0x40e136;
            iVar6 = FUN_004032b4();
            *(int *)(unaff_EBP + -0x60) = iVar6;
            *(undefined4 *)(unaff_EBP + 0x10) = 0;
            if (iVar6 != 0) {
              iStack_100 = 0x40e14c;
              iVar6 = FUN_0041a4e5();
              if ((iVar6 < 0) && (iVar6 != -0x7fffbffe)) {
                iStack_100 = 0x40e15d;
                FUN_00878dfb();
              }
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x25;
            iStack_100 = 0x40e16d;
            iVar6 = FUN_00402bc3();
            if (iVar6 < 0) {
              iStack_100 = 0x40e178;
              FUN_00878dfb();
            }
            iStack_100 = 0x40e181;
            cVar1 = FUN_004115ad();
            if (cVar1 == '\0') {
              iStack_100 = 0x40e192;
              cVar1 = FUN_004115ad();
              if (cVar1 != '\0') goto LAB_0040e209;
              if (*(int *)(unaff_EBP + 0x10) == 0) {
                iStack_100 = 0x40e1a5;
                FUN_00878dfb();
                if (*(int *)(unaff_EBP + 0x10) == 0) {
                  iStack_100 = 0x40e1b4;
                  FUN_00878dfb();
                }
              }
              *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(unaff_EBP + 0x10);
              if (*(int *)(unaff_EBP + -0x1c) == 0) {
                iStack_100 = 0x40e1c9;
                FUN_00878dfb();
              }
              *(int *)(unaff_EBP + -0x68) = *(int *)(unaff_EBP + -0x1c);
              if (*(int *)(unaff_EBP + -0x1c) == 0) {
                iStack_100 = 0x40e1dd;
                FUN_00878dfb();
              }
              *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x1c);
              FUN_00404abb();
              iStack_100 = 0x40e1f4;
              iStack_100 = FUN_00404a94();
              local_104 = 0x40e1fd;
              local_104 = FUN_00404abb();
              uVar3 = FUN_00404a94();
            }
            else {
LAB_0040e209:
              iStack_100 = 0;
              local_104 = 0;
              uVar3 = 0;
            }
            FUN_004114f3(iVar5 + 0x10,uVar3);
            *(int *)(unaff_EBP + -0x44) = iVar5;
            FUN_00412eb6();
            *(undefined1 *)(unaff_EBP + -4) = 0x26;
            FUN_00413a3f();
            iStack_100 = 0x40e23b;
            FUN_00412e7d();
            *(undefined1 *)(unaff_EBP + -4) = 0x25;
            FUN_00412ec8();
            FUN_004125d9();
            FUN_004125d9();
            *(undefined1 *)(unaff_EBP + -4) = 0x11;
            if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
              iStack_100 = 0x40e268;
              (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0xe;
            if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
              iStack_100 = 0x40e279;
              (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
            }
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          iStack_100 = 0x40e289;
          iVar5 = FUN_00402bc3();
          if (iVar5 < 0) {
            iStack_100 = 0x40e294;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          FUN_00402fa6();
        }
        *(int **)(unaff_EBP + 8) = &iStack_100;
        local_104 = 0x47d;
        FUN_00679e4e(&iStack_100);
        local_104 = unaff_EBP + -0x98;
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        FUN_0040263d();
        iStack_100 = FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x28;
        local_104 = 0x40e2dd;
        iVar5 = FUN_00412550();
        local_104 = unaff_EBP + -0x98;
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        iVar6 = FUN_00402bc3();
        if (iVar6 < 0) {
          iStack_100 = 0x40e302;
          FUN_00878dfb();
        }
        iVar6 = *(int *)(unaff_EBP + 0x14);
        if (iVar5 != 0) {
          uVar7 = *(uint *)(iVar6 + 0x10);
          while (uVar7 != 0) {
            if ((uVar7 != *(uint *)(iVar6 + 0xc)) && (uVar7 != *(uint *)(iVar6 + 0x10))) {
              iStack_100 = 0x40e322;
              FUN_00411697();
            }
            iVar5 = *(int *)((-(uint)(uVar7 != 0) & uVar7 - 0x10) + 8);
            uVar7 = -(uint)(iVar5 != 0) & iVar5 + 0x10U;
          }
        }
        FUN_00413a7d();
        iStack_100 = 0x40e354;
        FUN_0041278b();
        iVar5 = *(int *)(unaff_EBP + -0x14);
        iStack_100 = 0x40e369;
        uVar3 = FUN_00411bfb();
        *(undefined4 *)(iVar5 + 0x38) = uVar3;
        iVar5 = *(int *)(unaff_EBP + -0x14);
        iStack_100 = unaff_EBP + -0x78;
        local_104 = 0x40e37f;
        uVar3 = FUN_00416963();
        *(undefined4 *)(iVar5 + 0x34) = uVar3;
        iVar5 = *(int *)(unaff_EBP + -0x14);
        uVar3 = (*DAT_0097b704)();
        *(undefined4 *)(iVar5 + 0x30) = uVar3;
        *(undefined1 *)(unaff_EBP + -4) = 8;
        if (*(int **)(unaff_EBP + -0x30) != (int *)0x0) {
          iStack_100 = 0x40e39f;
          (**(code **)(**(int **)(unaff_EBP + -0x30) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 7;
        iStack_100 = 0x40e3af;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          iStack_100 = 0x40e3ba;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 3;
        if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
          iStack_100 = 0x40e3cb;
          (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
          iStack_100 = 0x40e3dc;
          (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (*(int *)(unaff_EBP + -0x14) != 0) {
          iStack_100 = 0x40e3ee;
          FUN_0041316d();
          *(undefined4 *)(unaff_EBP + -0x14) = 0;
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (*(int *)(unaff_EBP + -0x28) != 0) {
          iStack_100 = 0x40e403;
          FUN_0041316d();
        }
        goto LAB_0040e403;
      }
      FUN_004027eb();
    }
    FUN_004027eb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00412c83();
  }
  else {
    iVar5 = *(int *)(unaff_EBP + -0x28);
    uVar3 = (*DAT_0097b704)();
    *(undefined4 *)(iVar5 + 0x30) = uVar3;
    FUN_00413a7d();
    iStack_100 = 0x40dcd2;
    FUN_0041278b();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00412c83();
LAB_0040e403:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


