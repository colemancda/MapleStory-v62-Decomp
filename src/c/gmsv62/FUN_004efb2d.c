/* FUN_004efb2d - 0x004efb2d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004efb2d(void)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  int extraout_ECX;
  int unaff_EBP;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int iVar11;
  bool bVar12;
  int iStack_208;
  int iStack_204;
  int *piStack_200;
  int iStack_1c4;
  undefined4 uStack_1c0;
  int iStack_1bc;
  int *piStack_1b8;
  int iStack_1b4;
  int *piStack_1b0;
  
  FUN_00879bb8();
  iVar11 = *(int *)(extraout_ECX + 0x13c);
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  if ((iVar11 != 0) && (*(int *)(iVar11 + -4) != 0)) {
    if (*(int *)(unaff_EBP + 8) == 0) {
      iVar11 = **(int **)(unaff_EBP + 0x10);
      iVar4 = FUN_004f162d();
      if (iVar11 == iVar4) {
        iVar11 = *(int *)(extraout_ECX + 0x140);
        *(int *)(unaff_EBP + 8) = extraout_ECX + 0x140;
        if (iVar11 == 0) {
          piStack_1b0 = (int *)(unaff_EBP + -0xd8);
          iStack_1b4 = 0x4efeea;
          puVar5 = (undefined4 *)FUN_004f0d80();
          piVar9 = (int *)*puVar5;
          iVar11 = puVar5[1];
          piStack_1b0 = (int *)(unaff_EBP + 0x14);
          iStack_1b4 = iVar11 + -5;
          *(int **)(unaff_EBP + -0x38) = piVar9;
          *(undefined4 *)(unaff_EBP + 0x14) = 0;
          iStack_1bc = 0x4eff0e;
          piStack_1b8 = piVar9;
          iVar4 = FUN_00861327();
          *(int *)(unaff_EBP + 0xc) = iVar4;
          if (iVar4 == 0) {
            iStack_1b4 = 0x4eff22;
            piStack_1b0 = piVar9;
            uVar6 = FUN_00861416();
            *(undefined4 *)(unaff_EBP + 0xc) = uVar6;
            *(int *)(unaff_EBP + 0x14) = iVar11;
          }
          piStack_1b0 = (int *)0xff;
          iStack_1b4 = 0x4eff37;
          iVar11 = FUN_004f0b6f();
          iStack_1b4 = iVar11 * 30000 + -0x3fffb1df;
          *(int ***)(unaff_EBP + -0x28) = &piStack_1b8;
          iStack_1bc = 0;
          uStack_1c0 = 0x4eff4f;
          FUN_00424e0a();
          iStack_1bc = *(undefined4 *)(unaff_EBP + 0x14);
          *(undefined4 *)(unaff_EBP + -4) = 0xd;
          uStack_1c0 = *(undefined4 *)(unaff_EBP + -0x38);
          *(int **)(unaff_EBP + 0x10) = &iStack_1c4;
          FUN_00424dd7();
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          FUN_00679d86();
          *(undefined1 *)(unaff_EBP + -4) = 0x10;
          FUN_00411641();
          puVar5 = (undefined4 *)FUN_0042e3f0();
          piStack_1b0 = (int *)0x4effa4;
          _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                    (*(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + 8),
                     (IBinding *)*puVar5);
          FUN_00412600();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          if (*(int *)(unaff_EBP + -0x10) != 0) {
            piStack_1b0 = (int *)0x4effc0;
            FUN_00403384();
          }
          piStack_1b0 = (int *)0xff;
          iStack_1b4 = 0x4effcb;
          iVar11 = FUN_004f0b6f();
          iStack_1b4 = iVar11 * 30000 + -0x3fffb1e0;
          *(int ***)(unaff_EBP + -0x28) = &piStack_1b8;
          iStack_1bc = 0;
          uStack_1c0 = 0x4effe3;
          FUN_00424e0a();
          iStack_1bc = *(undefined4 *)(unaff_EBP + 0x14);
          *(undefined4 *)(unaff_EBP + -4) = 0x11;
          uStack_1c0 = *(undefined4 *)(unaff_EBP + -0x38);
          *(int **)(unaff_EBP + -0x44) = &iStack_1c4;
          FUN_00424dd7();
          *(undefined1 *)(unaff_EBP + -4) = 0x12;
          FUN_00679d86();
          *(undefined1 *)(unaff_EBP + -4) = 0x14;
          FUN_00411641();
          puVar5 = (undefined4 *)FUN_0042e3f0();
          iVar11 = *(int *)(unaff_EBP + -0x14);
          piStack_1b0 = (int *)0x4f0039;
          _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                    ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar11 + 0x144),
                     (IBinding *)*puVar5);
          FUN_00412600();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          FUN_00402676();
          piStack_1b0 = (int *)0x4f0059;
          _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                    ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar11 + 0x148),
                     (IBinding *)0x0);
          piStack_1b0 = (int *)0x4f0067;
          FUN_00403191();
          *(undefined4 *)(unaff_EBP + -4) = 0x15;
          piStack_1b0 = (int *)0x4f0077;
          FUN_00403191();
          iVar11 = **(int **)(unaff_EBP + 8);
          *(undefined1 *)(unaff_EBP + -4) = 0x16;
          if (iVar11 == 0) {
            piStack_1b0 = (int *)0x4f008c;
            FUN_00878dfb();
          }
          piStack_1b8 = *(int **)(unaff_EBP + -100);
          iStack_1b4 = *(int *)(unaff_EBP + -0x60);
          iVar11 = *(int *)**(undefined4 **)(unaff_EBP + 8);
          piStack_1b0 = *(int **)(unaff_EBP + -0x5c);
          iStack_1c4 = *(int *)(unaff_EBP + -0x50);
          uStack_1c0 = *(undefined4 *)(unaff_EBP + -0x4c);
          *(int **)(unaff_EBP + 0xc) = (int *)**(undefined4 **)(unaff_EBP + 8);
          iStack_1bc = *(undefined4 *)(unaff_EBP + -0x48);
          iVar11 = (**(code **)(iVar11 + 0x110))();
          if (iVar11 < 0) {
            piStack_1b0 = *(int **)(unaff_EBP + 0xc);
            piStack_1b8 = (int *)0x4f00c9;
            iStack_1b4 = iVar11;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x15;
          piStack_1b0 = (int *)0x4f00d6;
          iVar11 = FUN_00402bc3();
          if (iVar11 < 0) {
            piStack_1b0 = (int *)0x4f00e1;
            FUN_00878dfb();
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          piStack_1b0 = (int *)0x4f00ee;
          iVar11 = FUN_00402bc3();
          if (iVar11 < 0) {
            piStack_1b0 = (int *)0x4f00f9;
            FUN_00878dfb();
          }
        }
      }
      else {
        piStack_1b0 = (int *)0x4efb94;
        cVar3 = FUN_00433bfa();
        if (cVar3 == '\0') {
          iVar11 = extraout_ECX;
          if (*(int *)(unaff_EBP + 0x14) != 0) {
            *(int *)(unaff_EBP + 0xc) = extraout_ECX + 0x140;
            *(undefined4 *)(unaff_EBP + 0x10) = 3;
            do {
              *(undefined4 *)(unaff_EBP + 0x14) = **(undefined4 **)(unaff_EBP + 0xc);
              FUN_00424ed4();
              *(undefined4 *)(unaff_EBP + -4) = 0;
              if (*(int *)(unaff_EBP + 0x14) == 0) {
                *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                FUN_00412600();
              }
              else {
                piStack_1b0 = (int *)0x0;
                iStack_1b4 = 0x4efbf5;
                FUN_004031b7();
                *(undefined1 *)(unaff_EBP + -4) = 1;
                if (*(int *)(unaff_EBP + 0x14) == 0) {
                  piStack_1b0 = (int *)0x4efc08;
                  FUN_00878dfb();
                }
                piStack_1b0 = (int *)(unaff_EBP + 8);
                iStack_1b4 = 0x4efc1b;
                FUN_00425067();
                *(undefined1 *)(unaff_EBP + -4) = 3;
                piStack_1b0 = (int *)0x4efc2b;
                iVar11 = FUN_00402bc3();
                if (iVar11 < 0) {
                  piStack_1b0 = (int *)0x4efc36;
                  FUN_00878dfb();
                }
                piStack_1b0 = (int *)0xfffffffe;
                iStack_1b4 = 0x4efc44;
                FUN_004031b7();
                *(undefined1 *)(unaff_EBP + -4) = 4;
                if (*(int *)(unaff_EBP + 0x14) == 0) {
                  piStack_1b0 = (int *)0x4efc57;
                  FUN_00878dfb();
                }
                piStack_1b0 = (int *)(unaff_EBP + -0x18);
                iStack_1b4 = 0x4efc6a;
                FUN_0041141a();
                FUN_004125e6();
                *(undefined1 *)(unaff_EBP + -4) = 3;
                piStack_1b0 = (int *)0x4efc82;
                iVar11 = FUN_00402bc3();
                if (iVar11 < 0) {
                  piStack_1b0 = (int *)0x4efc8d;
                  FUN_00878dfb();
                }
                piStack_1b0 = (int *)0x4efc99;
                FUN_00403191();
                *(undefined1 *)(unaff_EBP + -4) = 5;
                piStack_1b0 = (int *)0x4efca9;
                FUN_00403191();
                piStack_1b0 = (int *)0x0;
                *(undefined1 *)(unaff_EBP + -4) = 6;
                iStack_1b4 = 0x4efcba;
                FUN_004031b7();
                piStack_1b0 = (int *)0xffffffff;
                *(undefined1 *)(unaff_EBP + -4) = 7;
                iStack_1b4 = 0x4efcc9;
                FUN_004031b7();
                piStack_1b0 = (int *)0x3e8;
                *(undefined1 *)(unaff_EBP + -4) = 8;
                iStack_1b4 = 0x4efcdb;
                FUN_004031b7();
                *(undefined1 *)(unaff_EBP + -4) = 9;
                if (*(int *)(unaff_EBP + 0x14) == 0) {
                  piStack_1b0 = (int *)0x4efcee;
                  FUN_00878dfb();
                }
                piStack_1b0 = (int *)(unaff_EBP + -0xb0);
                iStack_1b4 = unaff_EBP + -0xa0;
                piStack_1b8 = (int *)(unaff_EBP + -100);
                iStack_1bc = unaff_EBP + -0x54;
                uStack_1c0 = *(undefined4 *)(unaff_EBP + 8);
                iStack_1c4 = unaff_EBP + -0xe8;
                FUN_004250ac();
                piStack_1b0 = (int *)0x4efd29;
                iVar11 = FUN_00402bc3();
                if (iVar11 < 0) {
                  piStack_1b0 = (int *)0x4efd34;
                  FUN_00878dfb();
                }
                *(undefined1 *)(unaff_EBP + -4) = 8;
                piStack_1b0 = (int *)0x4efd41;
                iVar11 = FUN_00402bc3();
                if (iVar11 < 0) {
                  piStack_1b0 = (int *)0x4efd4c;
                  FUN_00878dfb();
                }
                *(undefined1 *)(unaff_EBP + -4) = 7;
                piStack_1b0 = (int *)0x4efd59;
                iVar11 = FUN_00402bc3();
                if (iVar11 < 0) {
                  piStack_1b0 = (int *)0x4efd64;
                  FUN_00878dfb();
                }
                *(undefined1 *)(unaff_EBP + -4) = 6;
                piStack_1b0 = (int *)0x4efd74;
                iVar11 = FUN_00402bc3();
                if (iVar11 < 0) {
                  piStack_1b0 = (int *)0x4efd7f;
                  FUN_00878dfb();
                }
                *(undefined1 *)(unaff_EBP + -4) = 5;
                piStack_1b0 = (int *)0x4efd8f;
                iVar11 = FUN_00402bc3();
                if (iVar11 < 0) {
                  piStack_1b0 = (int *)0x4efd9a;
                  FUN_00878dfb();
                }
                *(undefined1 *)(unaff_EBP + -4) = 3;
                piStack_1b0 = (int *)0x4efdaa;
                iVar11 = FUN_00402bc3();
                if (iVar11 < 0) {
                  piStack_1b0 = (int *)0x4efdb5;
                  FUN_00878dfb();
                }
                piStack_1b0 = (int *)0x4efdbe;
                FUN_00403191();
                *(undefined1 *)(unaff_EBP + -4) = 10;
                piStack_1b0 = (int *)0x4efdce;
                FUN_00403191();
                piVar9 = *(int **)(unaff_EBP + 0x14);
                *(undefined1 *)(unaff_EBP + -4) = 0xb;
                if (piVar9 == (int *)0x0) {
                  piStack_1b0 = (int *)0x4efde3;
                  FUN_00878dfb();
                  piVar9 = *(int **)(unaff_EBP + 0x14);
                }
                piStack_1b8 = *(int **)(unaff_EBP + -0x40);
                iStack_1b4 = *(int *)(unaff_EBP + -0x3c);
                iVar11 = *piVar9;
                piStack_1b0 = *(int **)(unaff_EBP + -0x38);
                iStack_1c4 = *(int *)(unaff_EBP + -0xf4);
                uStack_1c0 = *(undefined4 *)(unaff_EBP + -0xf0);
                *(int **)(unaff_EBP + -0x10) = piVar9;
                iStack_1bc = *(undefined4 *)(unaff_EBP + -0xec);
                iVar11 = (**(code **)(iVar11 + 0x110))();
                if (iVar11 < 0) {
                  piStack_1b0 = *(int **)(unaff_EBP + -0x10);
                  piStack_1b8 = (int *)0x4efe20;
                  iStack_1b4 = iVar11;
                  FUN_00878e09();
                }
                *(undefined1 *)(unaff_EBP + -4) = 10;
                piStack_1b0 = (int *)0x4efe30;
                iVar11 = FUN_00402bc3();
                if (iVar11 < 0) {
                  piStack_1b0 = (int *)0x4efe3b;
                  FUN_00878dfb();
                }
                *(undefined1 *)(unaff_EBP + -4) = 3;
                piStack_1b0 = (int *)0x4efe48;
                iVar11 = FUN_00402bc3();
                if (iVar11 < 0) {
                  piStack_1b0 = (int *)0x4efe53;
                  FUN_00878dfb();
                }
                *(undefined1 **)(unaff_EBP + -0x28) = &stack0xfffffe54;
                piStack_1b0 = (int *)0x4efe63;
                FUN_00424ed4();
                *(undefined1 *)(unaff_EBP + -4) = 3;
                piStack_1b0 = (int *)0x4efe6c;
                FUN_00424e82();
                piStack_1b0 = (int *)0x4efe73;
                FUN_00427af9();
                FUN_004125e6();
                *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                FUN_00412600();
                iVar11 = *(int *)(unaff_EBP + -0x14);
              }
              *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 4;
              piVar9 = (int *)(unaff_EBP + 0x10);
              *piVar9 = *piVar9 + -1;
            } while (*piVar9 != 0);
          }
          piStack_1b0 = (int *)0x4efea8;
          _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                    ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar11 + 0x140),
                     (IBinding *)0x0);
          piStack_1b0 = (int *)0x4efeb4;
          _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                    ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar11 + 0x144),
                     (IBinding *)0x0);
          piStack_1b0 = (int *)0x4efec0;
          _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                    ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar11 + 0x148),
                     (IBinding *)0x0);
        }
      }
      this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
             (*(int *)(unaff_EBP + -0x14) + 0x150);
      iVar11 = 5;
      do {
        piStack_1b0 = (int *)0x4f010e;
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this + -4,(IBinding *)0x0);
        piStack_1b0 = (int *)0x4f0116;
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)0x0);
        piStack_1b0 = (int *)0x4f011f;
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this + 4,(IBinding *)0x0);
        this = this + 0xc;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    else {
      iVar4 = 0;
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      iVar11 = extraout_ECX;
      while( true ) {
        iVar7 = *(int *)(unaff_EBP + 0xc);
        iVar1 = *(int *)(iVar7 + iVar4 * 4);
        *(undefined4 *)(unaff_EBP + 8) = 1;
        if ((iVar1 == 0) || (*(int *)(iVar7 + iVar4 * 4 + 0xb2) == 999999999)) {
          *(undefined4 *)(unaff_EBP + 8) = 0;
        }
        *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(iVar4 * 0x10 + 0xca + iVar7);
        iVar7 = FUN_004f162d();
        if (*(int *)(unaff_EBP + -0x10) != iVar7) {
          *(undefined4 *)(unaff_EBP + 8) = 0;
        }
        iVar11 = iVar11 + iVar4 * 0xc;
        *(int *)(unaff_EBP + -0x30) = iVar11;
        if (*(int *)(unaff_EBP + 8) == 0) {
          if (*(int *)(iVar11 + 0x140) != 0) {
            if (*(int *)(unaff_EBP + 0x14) != 0) {
              *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x30) + 0x140;
              *(undefined4 *)(unaff_EBP + -0x10) = 3;
              do {
                *(undefined4 *)(unaff_EBP + 8) = **(undefined4 **)(unaff_EBP + -0x20);
                FUN_00424ed4();
                piStack_1b0 = (int *)0x0;
                *(undefined4 *)(unaff_EBP + -4) = 0x17;
                iStack_1b4 = 0x4f01dc;
                FUN_004031b7();
                *(undefined1 *)(unaff_EBP + -4) = 0x18;
                if (*(int *)(unaff_EBP + 8) == 0) {
                  piStack_1b0 = (int *)0x4f01ef;
                  FUN_00878dfb();
                }
                piStack_1b0 = (int *)(unaff_EBP + -0x18);
                iStack_1b4 = 0x4f0202;
                FUN_00425067();
                *(undefined1 *)(unaff_EBP + -4) = 0x1a;
                piStack_1b0 = (int *)0x4f0212;
                iVar11 = FUN_00402bc3();
                if (iVar11 < 0) {
                  piStack_1b0 = (int *)0x4f021d;
                  FUN_00878dfb();
                }
                piStack_1b0 = (int *)0xfffffffe;
                iStack_1b4 = 0x4f022b;
                FUN_004031b7();
                *(undefined1 *)(unaff_EBP + -4) = 0x1b;
                if (*(int *)(unaff_EBP + 8) == 0) {
                  piStack_1b0 = (int *)0x4f023e;
                  FUN_00878dfb();
                }
                piStack_1b0 = (int *)(unaff_EBP + -0x74);
                iStack_1b4 = 0x4f0251;
                FUN_0041141a();
                FUN_004125e6();
                *(undefined1 *)(unaff_EBP + -4) = 0x1a;
                piStack_1b0 = (int *)0x4f0269;
                iVar11 = FUN_00402bc3();
                if (iVar11 < 0) {
                  piStack_1b0 = (int *)0x4f0274;
                  FUN_00878dfb();
                }
                piStack_1b0 = (int *)0x4f0285;
                FUN_00403191();
                *(undefined1 *)(unaff_EBP + -4) = 0x1c;
                piStack_1b0 = (int *)0x4f0295;
                FUN_00403191();
                piStack_1b0 = (int *)0x0;
                *(undefined1 *)(unaff_EBP + -4) = 0x1d;
                iStack_1b4 = 0x4f02a6;
                FUN_004031b7();
                piStack_1b0 = (int *)0xffffffff;
                *(undefined1 *)(unaff_EBP + -4) = 0x1e;
                iStack_1b4 = 0x4f02b8;
                FUN_004031b7();
                piStack_1b0 = (int *)0x3e8;
                *(undefined1 *)(unaff_EBP + -4) = 0x1f;
                iStack_1b4 = 0x4f02cd;
                FUN_004031b7();
                *(undefined1 *)(unaff_EBP + -4) = 0x20;
                if (*(int *)(unaff_EBP + 8) == 0) {
                  piStack_1b0 = (int *)0x4f02e0;
                  FUN_00878dfb();
                }
                piStack_1b0 = (int *)(unaff_EBP + -0x158);
                iStack_1b4 = unaff_EBP + -0x178;
                piStack_1b8 = (int *)(unaff_EBP + -0x138);
                iStack_1bc = unaff_EBP + -0x198;
                uStack_1c0 = *(undefined4 *)(unaff_EBP + -0x18);
                iStack_1c4 = unaff_EBP + -0x1a8;
                FUN_004250ac();
                piStack_1b0 = (int *)0x4f0321;
                iVar11 = FUN_00402bc3();
                if (iVar11 < 0) {
                  piStack_1b0 = (int *)0x4f032c;
                  FUN_00878dfb();
                }
                *(undefined1 *)(unaff_EBP + -4) = 0x1f;
                piStack_1b0 = (int *)0x4f033c;
                iVar11 = FUN_00402bc3();
                if (iVar11 < 0) {
                  piStack_1b0 = (int *)0x4f0347;
                  FUN_00878dfb();
                }
                *(undefined1 *)(unaff_EBP + -4) = 0x1e;
                piStack_1b0 = (int *)0x4f0357;
                iVar11 = FUN_00402bc3();
                if (iVar11 < 0) {
                  piStack_1b0 = (int *)0x4f0362;
                  FUN_00878dfb();
                }
                *(undefined1 *)(unaff_EBP + -4) = 0x1d;
                piStack_1b0 = (int *)0x4f0372;
                iVar11 = FUN_00402bc3();
                if (iVar11 < 0) {
                  piStack_1b0 = (int *)0x4f037d;
                  FUN_00878dfb();
                }
                *(undefined1 *)(unaff_EBP + -4) = 0x1c;
                piStack_1b0 = (int *)0x4f038d;
                iVar11 = FUN_00402bc3();
                if (iVar11 < 0) {
                  piStack_1b0 = (int *)0x4f0398;
                  FUN_00878dfb();
                }
                *(undefined1 *)(unaff_EBP + -4) = 0x1a;
                piStack_1b0 = (int *)0x4f03a8;
                iVar11 = FUN_00402bc3();
                if (iVar11 < 0) {
                  piStack_1b0 = (int *)0x4f03b3;
                  FUN_00878dfb();
                }
                piStack_1b0 = (int *)0x4f03bf;
                FUN_00403191();
                *(undefined1 *)(unaff_EBP + -4) = 0x21;
                piStack_1b0 = (int *)0x4f03cf;
                FUN_00403191();
                piVar9 = *(int **)(unaff_EBP + 8);
                *(undefined1 *)(unaff_EBP + -4) = 0x22;
                if (piVar9 == (int *)0x0) {
                  piStack_1b0 = (int *)0x4f03e4;
                  FUN_00878dfb();
                  piVar9 = *(int **)(unaff_EBP + 8);
                }
                piStack_1b8 = *(int **)(unaff_EBP + -0x148);
                iStack_1b4 = *(int *)(unaff_EBP + -0x144);
                iVar11 = *piVar9;
                piStack_1b0 = *(int **)(unaff_EBP + -0x140);
                iStack_1c4 = *(int *)(unaff_EBP + -0x124);
                uStack_1c0 = *(undefined4 *)(unaff_EBP + -0x120);
                *(int **)(unaff_EBP + -0x24) = piVar9;
                iStack_1bc = *(undefined4 *)(unaff_EBP + -0x11c);
                iVar11 = (**(code **)(iVar11 + 0x110))();
                if (iVar11 < 0) {
                  piStack_1b0 = *(int **)(unaff_EBP + -0x24);
                  piStack_1b8 = (int *)0x4f0424;
                  iStack_1b4 = iVar11;
                  FUN_00878e09();
                }
                *(undefined1 *)(unaff_EBP + -4) = 0x21;
                piStack_1b0 = (int *)0x4f0434;
                iVar11 = FUN_00402bc3();
                if (iVar11 < 0) {
                  piStack_1b0 = (int *)0x4f043f;
                  FUN_00878dfb();
                }
                *(undefined1 *)(unaff_EBP + -4) = 0x1a;
                piStack_1b0 = (int *)0x4f044f;
                iVar11 = FUN_00402bc3();
                if (iVar11 < 0) {
                  piStack_1b0 = (int *)0x4f045a;
                  FUN_00878dfb();
                }
                piStack_1b0 = *(int **)(unaff_EBP + 8);
                *(undefined1 **)(unaff_EBP + -0x24) = &stack0xfffffe54;
                if (piStack_1b0 != (int *)0x0) {
                  iStack_1b4 = 0x4f0472;
                  (**(code **)(*piStack_1b0 + 4))();
                }
                *(undefined1 *)(unaff_EBP + -4) = 0x1a;
                piStack_1b0 = (int *)0x4f047b;
                FUN_00424e82();
                piStack_1b0 = (int *)0x4f0482;
                FUN_00427af9();
                *(undefined1 *)(unaff_EBP + -4) = 0x17;
                if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
                  piStack_1b0 = (int *)0x4f0493;
                  (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
                }
                *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
                  piStack_1b0 = (int *)0x4f04a4;
                  (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
                }
                *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 4;
                piVar9 = (int *)(unaff_EBP + -0x10);
                *piVar9 = *piVar9 + -1;
              } while (*piVar9 != 0);
            }
            iVar11 = *(int *)(unaff_EBP + -0x30);
            piStack_1b0 = (int *)0x4f04c0;
            _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                      ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar11 + 0x140),
                       (IBinding *)0x0);
            piStack_1b0 = (int *)0x4f04d3;
            _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                      ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
                       (*(int *)(unaff_EBP + -0x14) + (*(int *)(unaff_EBP + -0x1c) * 3 + 0x51) * 4),
                       (IBinding *)0x0);
            piStack_1b0 = (int *)0x4f04df;
            _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                      ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar11 + 0x148),
                       (IBinding *)0x0);
          }
        }
        else {
          iVar4 = *(int *)(iVar11 + 0x140);
          *(int **)(unaff_EBP + -0x10) = (int *)(iVar11 + 0x140);
          if (iVar4 == 0) {
            piStack_1b0 = (int *)(unaff_EBP + -0xf0);
            iStack_1b4 = 0x4f0506;
            puVar5 = (undefined4 *)FUN_004f0d80();
            uVar6 = puVar5[1];
            *(undefined4 *)(unaff_EBP + -0x38) = *puVar5;
            *(undefined4 *)(unaff_EBP + -0x34) = uVar6;
            *(undefined4 *)(unaff_EBP + 0x10) = 0;
            piStack_1b0 = (int *)(unaff_EBP + -0x6c);
            *(undefined4 *)(unaff_EBP + -4) = 0x24;
            iStack_1b4 = 0x4f052e;
            puVar5 = (undefined4 *)FUN_00679d86();
            iStack_1b4 = *puVar5;
            piStack_1b0 = (int *)(unaff_EBP + 0x10);
            *(undefined1 *)(unaff_EBP + -4) = 0x25;
            piStack_1b8 = (int *)0x4f053f;
            FUN_0040381b();
            *(undefined1 *)(unaff_EBP + -4) = 0x24;
            FUN_00402676();
            piStack_1b0 = (int *)0x4f055f;
            FUN_00403191();
            piStack_1b0 = *(int **)(unaff_EBP + 0xc);
            iStack_1b4 = *(int *)(unaff_EBP + -0x1c) * 0xd + 0x18 + (int)piStack_1b0;
            *(int ***)(unaff_EBP + 8) = &piStack_1b0;
            *(undefined1 *)(unaff_EBP + -4) = 0x26;
            *(int *)(unaff_EBP + -0x24) = iStack_1b4;
            piStack_1b8 = (int *)0x4f0586;
            FUN_00448a17();
            piStack_1b8 = (int *)(unaff_EBP + -0x70);
            iStack_1b4 = 0;
            *(undefined1 *)(unaff_EBP + -4) = 0x27;
            iStack_1bc = 0x4f0594;
            FUN_007d4a9a();
            *(undefined1 *)(unaff_EBP + -4) = 0x29;
            iStack_1b4 = 0x4f05a1;
            FUN_0044974c();
            iStack_1b4 = 0x4f05a8;
            iVar11 = FUN_00448ebb();
            *(int *)(unaff_EBP + -0x20) = iVar11 + 10;
            *(undefined1 *)(unaff_EBP + -4) = 0x26;
            if (*(int **)(unaff_EBP + -0x70) != (int *)0x0) {
              piStack_1b0 = (int *)0x4f05bf;
              (**(code **)(**(int **)(unaff_EBP + -0x70) + 8))();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x24;
            piStack_1b0 = (int *)0x4f05cf;
            iVar11 = FUN_00402bc3();
            if (iVar11 < 0) {
              piStack_1b0 = (int *)0x4f05da;
              FUN_00878dfb();
            }
            piStack_1b0 = (int *)0x4f05e9;
            VariantInit((VARIANTARG *)(unaff_EBP + -0xb0));
            piStack_1b0 = (int *)(unaff_EBP + -0xb0);
            iStack_1b4 = 0x4f05f6;
            iVar11 = FUN_00402e32();
            if (iVar11 < 0) {
              piStack_1b0 = (int *)0x4f0602;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x2a;
            piStack_1b0 = (int *)0x4f060f;
            VariantInit((VARIANTARG *)(unaff_EBP + -0x90));
            piStack_1b0 = (int *)(unaff_EBP + -0x90);
            iStack_1b4 = 0x4f061c;
            iVar11 = FUN_00402e32();
            if (iVar11 < 0) {
              piStack_1b0 = (int *)0x4f0628;
              FUN_00878dfb();
            }
            piVar9 = *(int **)(unaff_EBP + 0x10);
            *(undefined1 *)(unaff_EBP + -4) = 0x2b;
            if (piVar9 == (int *)0x0) {
              piStack_1b0 = (int *)0x4f063d;
              FUN_00878dfb();
              piVar9 = *(int **)(unaff_EBP + 0x10);
            }
            piStack_1b8 = *(int **)(unaff_EBP + -0xb0);
            iStack_1b4 = *(int *)(unaff_EBP + -0xac);
            iVar11 = *piVar9;
            piStack_1b0 = *(int **)(unaff_EBP + -0xa8);
            iStack_1c4 = *(int *)(unaff_EBP + -0x8c);
            uStack_1c0 = *(undefined4 *)(unaff_EBP + -0x88);
            *(int **)(unaff_EBP + 8) = piVar9;
            iStack_1bc = *(undefined4 *)(unaff_EBP + -0x84);
            iVar11 = (**(code **)(iVar11 + 0x2c))();
            if (iVar11 < 0) {
              FUN_00878e09();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x2a;
            iVar11 = FUN_00402bc3();
            if (iVar11 < 0) {
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x24;
            iVar11 = FUN_00402bc3();
            if (iVar11 < 0) {
              FUN_00878dfb();
            }
            if (*(int *)(unaff_EBP + 0x10) == 0) {
              FUN_00878dfb();
            }
            iVar11 = (**(code **)(**(int **)(unaff_EBP + 0x10) + 0x8c))();
            if (iVar11 < 0) {
              FUN_00878e09();
            }
            VariantInit((VARIANTARG *)(unaff_EBP + -0xa0));
            iVar11 = FUN_00402e32();
            if (iVar11 < 0) {
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x2c;
            FUN_00403191();
            *(undefined1 *)(unaff_EBP + -4) = 0x2d;
            piStack_200 = (int *)0x4f0742;
            FUN_007d4a9a();
            *(undefined1 *)(unaff_EBP + -4) = 0x2e;
            FUN_00449749();
            *(undefined1 **)(unaff_EBP + 8) = &stack0xfffffe04;
            piStack_200 = *(int **)(unaff_EBP + -0x24);
            iStack_204 = 0x4f075e;
            FUN_00448a17();
            piStack_200 = (int *)0x4;
            iStack_204 = 5;
            *(undefined1 *)(unaff_EBP + -4) = 0x2e;
            iStack_208 = 0x4f076e;
            FUN_004115d9();
            iStack_208 = 0x4f0775;
            FUN_00448e3a();
            *(undefined1 *)(unaff_EBP + -4) = 0x2d;
            if (*(int **)(unaff_EBP + -0x78) != (int *)0x0) {
              (**(code **)(**(int **)(unaff_EBP + -0x78) + 8))();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x2c;
            iVar11 = FUN_00402bc3();
            if (iVar11 < 0) {
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x24;
            iVar11 = FUN_00402bc3();
            if (iVar11 < 0) {
              FUN_00878dfb();
            }
            uVar6 = *(undefined4 *)(unaff_EBP + -0x34);
            *(undefined4 *)(unaff_EBP + -0x2c) = 0;
            piStack_200 = (int *)0x4f07dd;
            iVar11 = FUN_00861327();
            *(int *)(unaff_EBP + 8) = iVar11;
            if (iVar11 == 0) {
              uVar8 = FUN_00861416();
              *(undefined4 *)(unaff_EBP + 8) = uVar8;
              *(undefined4 *)(unaff_EBP + -0x2c) = uVar6;
            }
            FUN_004f0b6f();
            *(undefined1 **)(unaff_EBP + -0x24) = &stack0xfffffe04;
            piStack_200 = (int *)0x0;
            iStack_204 = 0x4f0820;
            FUN_00424e0a();
            piStack_200 = *(int **)(unaff_EBP + -0x2c);
            *(undefined1 *)(unaff_EBP + -4) = 0x30;
            iStack_204 = *(undefined4 *)(unaff_EBP + -0x38);
            *(int **)(unaff_EBP + -0xd4) = &iStack_208;
            FUN_00424dd7(0);
            *(undefined1 *)(unaff_EBP + -4) = 0x31;
            FUN_00679d86(unaff_EBP + -0x68,0xa61);
            *(undefined1 *)(unaff_EBP + -4) = 0x33;
            uVar6 = FUN_00411641(0);
            puVar5 = (undefined4 *)FUN_0042e3f0(unaff_EBP + -0x7c,uVar6);
            _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                      (*(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x10),
                       (IBinding *)*puVar5);
            if (*(int **)(unaff_EBP + -0x7c) != (int *)0x0) {
              (**(code **)(**(int **)(unaff_EBP + -0x7c) + 8))();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x24;
            FUN_00402676();
            FUN_004f0b6f();
            *(undefined1 **)(unaff_EBP + 8) = &stack0xfffffe04;
            piStack_200 = (int *)0x0;
            iStack_204 = 0x4f08b0;
            FUN_00424e0a();
            piStack_200 = *(int **)(unaff_EBP + -0x2c);
            *(undefined1 *)(unaff_EBP + -4) = 0x34;
            iStack_204 = *(undefined4 *)(unaff_EBP + -0x38);
            *(int **)(unaff_EBP + -0xd4) = &iStack_208;
            FUN_00424dd7(0);
            *(undefined1 *)(unaff_EBP + -4) = 0x35;
            FUN_00679d86(unaff_EBP + -0x44,0xa62);
            *(undefined1 *)(unaff_EBP + -4) = 0x37;
            uVar6 = FUN_00411641(0);
            piVar9 = (int *)FUN_0042e3f0(unaff_EBP + -0x80,uVar6);
            piVar9 = (int *)*piVar9;
            iVar11 = *(int *)(unaff_EBP + -0x1c) * 3 + 0x51;
            piVar10 = *(int **)(*(int *)(unaff_EBP + -0x14) + iVar11 * 4);
            *(undefined1 *)(unaff_EBP + -4) = 0x38;
            if (piVar10 != piVar9) {
              *(int **)(*(int *)(unaff_EBP + -0x14) + iVar11 * 4) = piVar9;
              FUN_00424ed4();
              if (piVar10 != (int *)0x0) {
                (**(code **)(*piVar10 + 8))();
              }
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x37;
            if (*(int **)(unaff_EBP + -0x80) != (int *)0x0) {
              (**(code **)(**(int **)(unaff_EBP + -0x80) + 8))();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x24;
            FUN_00402676();
            VariantInit((VARIANTARG *)(unaff_EBP + -0x54));
            iVar11 = FUN_00402e32();
            if (iVar11 < 0) {
              FUN_00878dfb();
            }
            *(undefined2 *)(unaff_EBP + -100) = 0xd;
            *(int **)(unaff_EBP + -0x5c) = *(int **)(unaff_EBP + 0x10);
            iVar11 = **(int **)(unaff_EBP + 0x10);
            *(undefined1 *)(unaff_EBP + -4) = 0x39;
            (**(code **)(iVar11 + 4))();
            bVar12 = DAT_0097c1ac == 0;
            *(undefined1 *)(unaff_EBP + -4) = 0x3a;
            if (bVar12) {
              FUN_00878dfb();
            }
            iStack_204 = *(int *)(unaff_EBP + -0x20);
            piStack_200 = (int *)0x14;
            iStack_208 = *(int *)(unaff_EBP + -0x34) + -0x88;
            piVar10 = (int *)FUN_0042a39f(unaff_EBP + -0x28,
                                          *(int *)(unaff_EBP + -0x38) - iStack_204 / 2);
            piVar10 = (int *)*piVar10;
            piVar2 = *(int **)(*(int *)(unaff_EBP + -0x30) + 0x148);
            piVar9 = (int *)(*(int *)(unaff_EBP + -0x30) + 0x148);
            *(undefined1 *)(unaff_EBP + -4) = 0x3b;
            if (piVar2 != piVar10) {
              *piVar9 = (int)piVar10;
              FUN_00424ed4();
              if (piVar2 != (int *)0x0) {
                (**(code **)(*piVar2 + 8))();
              }
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x3a;
            if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
              (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x39;
            iVar11 = FUN_00402bc3();
            if (iVar11 < 0) {
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x24;
            iVar11 = FUN_00402bc3();
            if (iVar11 < 0) {
              FUN_00878dfb();
            }
            if (*piVar9 == 0) {
              FUN_00878dfb();
            }
            piVar9 = (int *)*piVar9;
            iVar11 = (**(code **)(*piVar9 + 0xe0))();
            if (iVar11 < 0) {
              iStack_208 = 0x4f0a5f;
              iStack_204 = iVar11;
              piStack_200 = piVar9;
              FUN_00878e09();
            }
            piStack_200 = (int *)0x4f0a6e;
            VariantInit((VARIANTARG *)(unaff_EBP + -0xc0));
            piStack_200 = (int *)(unaff_EBP + -0xc0);
            iStack_204 = 0x4f0a80;
            iVar11 = FUN_00402e32();
            if (iVar11 < 0) {
              piStack_200 = (int *)0x4f0a8c;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x3c;
            piStack_200 = (int *)0x4f0a99;
            VariantInit((VARIANTARG *)(unaff_EBP + -0xd0));
            piStack_200 = (int *)(unaff_EBP + -0xd0);
            iStack_204 = 0x4f0aa6;
            iVar11 = FUN_00402e32();
            if (iVar11 < 0) {
              piStack_200 = (int *)0x4f0ab2;
              FUN_00878dfb();
            }
            iVar11 = **(int **)(unaff_EBP + -0x10);
            *(undefined1 *)(unaff_EBP + -4) = 0x3d;
            if (iVar11 == 0) {
              piStack_200 = (int *)0x4f0ac7;
              FUN_00878dfb();
            }
            piVar9 = (int *)**(undefined4 **)(unaff_EBP + -0x10);
            iStack_208 = *(int *)(unaff_EBP + -0xc0);
            iStack_204 = *(undefined4 *)(unaff_EBP + -0xbc);
            iVar11 = *piVar9;
            piStack_200 = *(int **)(unaff_EBP + -0xb8);
            *(int **)(unaff_EBP + 8) = piVar9;
            iVar11 = (**(code **)(iVar11 + 0x110))
                               (piVar9,0x20,*(undefined4 *)(unaff_EBP + -0xd0),
                                *(undefined4 *)(unaff_EBP + -0xcc),*(undefined4 *)(unaff_EBP + -200)
                                ,*(undefined4 *)(unaff_EBP + -0xc4));
            if (iVar11 < 0) {
              piStack_1b0 = *(int **)(unaff_EBP + 8);
              piStack_1b8 = (int *)0x4f0b0a;
              iStack_1b4 = iVar11;
              FUN_00878e09();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x3c;
            piStack_1b0 = (int *)0x4f0b1a;
            iVar11 = FUN_00402bc3();
            if (iVar11 < 0) {
              piStack_1b0 = (int *)0x4f0b25;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x24;
            piStack_1b0 = (int *)0x4f0b35;
            iVar11 = FUN_00402bc3();
            if (iVar11 < 0) {
              piStack_1b0 = (int *)0x4f0b40;
              FUN_00878dfb();
            }
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            if (*(int **)(unaff_EBP + 0x10) != (int *)0x0) {
              piStack_1b0 = (int *)0x4f0b51;
              (**(code **)(**(int **)(unaff_EBP + 0x10) + 8))();
            }
          }
        }
        *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
        if (5 < *(int *)(unaff_EBP + -0x1c)) break;
        iVar11 = *(int *)(unaff_EBP + -0x14);
        iVar4 = *(int *)(unaff_EBP + -0x1c);
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


