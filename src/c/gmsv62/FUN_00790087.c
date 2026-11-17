/* FUN_00790087 - 0x00790087 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00790087(void)

{
  short sVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int *piStack_cc;
  
  FUN_00879bb8();
  iVar4 = *(int *)(extraout_ECX + 0x524);
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX;
  if ((iVar4 != 0) || (piVar7 = *(int **)(extraout_ECX + 0x1e10), piVar7 == (int *)0x0)) {
LAB_0079073b:
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return;
  }
  do {
    iVar4 = *(int *)((-(uint)(piVar7 != (int *)0x0) & (uint)(piVar7 + -4)) + 4);
    iVar6 = piVar7[1];
    *(int **)(unaff_EBP + -0x20) = piVar7;
    *(uint *)(unaff_EBP + -0x24) = -(uint)(iVar4 != 0) & iVar4 + 0x10U;
    if ((iVar6 != 0) &&
       ((iVar6 == *(int *)(unaff_EBP + 8) || iVar6 - *(int *)(unaff_EBP + 8) < 0 && (iVar6 != 0))))
    {
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      iVar4 = *piVar7;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (iVar4 / 1000000 == 0) {
        sVar1 = (short)*piVar7;
        piStack_cc = (int *)0x790146;
        FUN_00651eaf();
        piStack_cc = (int *)0x79015b;
        piVar2 = (int *)FUN_0079074c();
        if ((int *)*piVar2 == (int *)0x0) {
          *(undefined4 *)(unaff_EBP + -0x10) = 0;
        }
        else {
          iVar4 = *(int *)*piVar2;
          if (iVar4 == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(uint *)(iVar4 + -4) >> 1;
          }
          *(uint *)(unaff_EBP + -0x10) = uVar3;
        }
        FUN_00402fa6();
        if (*(int *)(unaff_EBP + -0x10) != 0) {
          piStack_cc = (int *)0x790192;
          FUN_0079074c();
          piStack_cc = (int *)0x79019b;
          FUN_00402f41();
          FUN_00402fa6();
        }
        iVar4 = (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
        if ((iVar4 != 0) && (piVar7[6] == 0)) {
          piStack_cc = (int *)&DAT_00978474;
          *(undefined4 *)(unaff_EBP + -0x10) = 0;
          iStack_d0 = 0x7901d0;
          FUN_00414edd();
          *(undefined1 *)(unaff_EBP + -4) = 2;
          if (sVar1 == 0x78) {
            piStack_cc = (int *)(unaff_EBP + -0x40);
            iStack_d0 = 0x790315;
            FUN_00679d22();
            *(undefined1 *)(unaff_EBP + -4) = 3;
            piStack_cc = (int *)0x790322;
            FUN_00414f8b();
            *(undefined1 *)(unaff_EBP + -4) = 2;
LAB_00790329:
            FUN_00414ebb();
          }
          else {
            if (sVar1 == 0x79) {
              piStack_cc = (int *)(unaff_EBP + -0x48);
              iStack_d0 = 0x7902ec;
              FUN_00679d22();
              *(undefined1 *)(unaff_EBP + -4) = 7;
              piStack_cc = (int *)0x7902f9;
              FUN_00414f8b();
              *(undefined1 *)(unaff_EBP + -4) = 2;
              goto LAB_00790329;
            }
            if (sVar1 == 0x7a) {
              piStack_cc = (int *)(unaff_EBP + -0x28);
              iStack_d0 = 0x7902c3;
              FUN_00679d22();
              *(undefined1 *)(unaff_EBP + -4) = 4;
              piStack_cc = (int *)0x7902d0;
              FUN_00414f8b();
              *(undefined1 *)(unaff_EBP + -4) = 2;
              goto LAB_00790329;
            }
            if (sVar1 == 0x7b) {
              piStack_cc = (int *)(unaff_EBP + -0x54);
              iStack_d0 = 0x79029a;
              FUN_00679d22();
              *(undefined1 *)(unaff_EBP + -4) = 5;
              piStack_cc = (int *)0x7902a7;
              FUN_00414f8b();
              *(undefined1 *)(unaff_EBP + -4) = 2;
              goto LAB_00790329;
            }
            if (sVar1 == 0x7c) {
              piStack_cc = (int *)(unaff_EBP + -0x3c);
              iStack_d0 = 0x79026e;
              FUN_00679d22();
              *(undefined1 *)(unaff_EBP + -4) = 6;
              piStack_cc = (int *)0x79027b;
              FUN_00414f8b();
              *(undefined1 *)(unaff_EBP + -4) = 2;
              goto LAB_00790329;
            }
            if (sVar1 == 0x7d) {
              piStack_cc = (int *)(unaff_EBP + -0x4c);
              iStack_d0 = 0x790242;
              FUN_00679d22();
              *(undefined1 *)(unaff_EBP + -4) = 8;
              piStack_cc = (int *)0x79024f;
              FUN_00414f8b();
              *(undefined1 *)(unaff_EBP + -4) = 2;
              goto LAB_00790329;
            }
            if (sVar1 == 0x80) {
              piStack_cc = (int *)(unaff_EBP + -0x34);
              iStack_d0 = 0x790216;
              FUN_00679d22();
              *(undefined1 *)(unaff_EBP + -4) = 9;
              piStack_cc = (int *)0x790223;
              FUN_00414f8b();
              *(undefined1 *)(unaff_EBP + -4) = 2;
              goto LAB_00790329;
            }
          }
          if ((*(char **)(unaff_EBP + -0x10) != (char *)0x0) &&
             (**(char **)(unaff_EBP + -0x10) != '\0')) {
            piStack_cc = (int *)(unaff_EBP + -0x10);
            iStack_d0 = 0x790345;
            FUN_00471102();
          }
          *(undefined1 *)(unaff_EBP + -4) = 1;
          FUN_00414ebb();
        }
        if ((*(int **)(unaff_EBP + -0x14) == (int *)0x0) ||
           (iVar4 = **(int **)(unaff_EBP + -0x14), iVar4 == 0)) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(uint *)(iVar4 + -4) >> 1;
        }
        if (uVar3 != 0) {
          piStack_cc = (int *)0x790386;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 10;
          piStack_cc = (int *)0x790396;
          FUN_00403191();
          piStack_cc = (int *)0x0;
          iStack_d0 = unaff_EBP + -0xb4;
          iStack_d4 = unaff_EBP + -0xa4;
          *(int **)(unaff_EBP + -0x10) = &iStack_d8;
          FUN_004059fd(unaff_EBP + -0x14);
          iVar4 = unaff_EBP + -0xc4;
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          FUN_00405a1d(iVar4);
          FUN_00402660();
          FUN_00404a02(iVar4);
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          iStack_d0 = 0x7903de;
          uVar5 = FUN_004032b4();
          *(undefined4 *)(unaff_EBP + -0x2c) = uVar5;
          piStack_cc = (int *)0x7903ed;
          iVar4 = FUN_00404b30();
          if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
            piStack_cc = (int *)0x7903fe;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          piStack_cc = (int *)0x79040e;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            piStack_cc = (int *)0x790419;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 10;
          piStack_cc = (int *)0x790429;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            piStack_cc = (int *)0x790434;
            FUN_00878dfb();
          }
          iVar4 = unaff_EBP + -0xb4;
          *(undefined1 *)(unaff_EBP + -4) = 1;
          piStack_cc = (int *)0x790444;
          iVar6 = FUN_00402bc3();
          if (iVar6 < 0) {
            piStack_cc = (int *)0x79044f;
            FUN_00878dfb();
            iVar4 = extraout_ECX_00;
          }
          if (*(int *)(unaff_EBP + -0x18) == 0) {
            if (*(int *)(unaff_EBP + -0x14) != 0) {
              FUN_004030b1();
              *(undefined4 *)(unaff_EBP + -0x14) = 0;
            }
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
              piStack_cc = (int *)0x79073b;
              (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
            }
            goto LAB_0079073b;
          }
          piStack_cc = piVar7 + 3;
          iStack_d0 = 0;
          iStack_d8 = unaff_EBP + -0x14;
          *(int **)(unaff_EBP + -0x10) = &iStack_d4;
          piVar7[2] = 0;
          iStack_d4 = iVar4;
          FUN_004059fd();
          iVar4 = *(int *)(unaff_EBP + -0x1c);
          iStack_d8 = 0x79047a;
          iVar6 = FUN_0079be1e();
          if (iVar6 != 0) {
            iVar6 = (uint)(piVar7[4] != 1) * 0x14;
            if (*(int *)(iVar6 + 8 + *(int *)(iVar4 + 0x1e18)) != 0) {
              piStack_cc = (int *)0x7904b2;
              VariantInit((VARIANTARG *)(unaff_EBP + -0x94));
              piStack_cc = (int *)(unaff_EBP + -0x94);
              iStack_d0 = 0x7904c4;
              iVar4 = FUN_00402e32();
              if (iVar4 < 0) {
                piStack_cc = (int *)0x7904d0;
                FUN_00878dfb();
              }
              *(undefined1 *)(unaff_EBP + -4) = 0xe;
              piStack_cc = (int *)0x7904da;
              VariantInit((VARIANTARG *)(unaff_EBP + -100));
              piStack_cc = (int *)(unaff_EBP + -100);
              iStack_d0 = 0x7904e4;
              iVar4 = FUN_00402e32();
              if (iVar4 < 0) {
                piStack_cc = (int *)0x7904f0;
                FUN_00878dfb();
              }
              iVar4 = **(int **)(iVar6 + 0x10 + *(int *)(*(int *)(unaff_EBP + -0x1c) + 0x1e18));
              *(undefined1 *)(unaff_EBP + -4) = 0xf;
              if (iVar4 == 0) {
                piStack_cc = (int *)0x790510;
                FUN_00878dfb();
              }
              piStack_cc = (int *)0x79051d;
              piVar7 = (int *)FUN_004113e5();
              iVar4 = *piVar7;
              *(undefined1 *)(unaff_EBP + -4) = 0x10;
              if (iVar4 == 0) {
                piStack_cc = (int *)0x790532;
                FUN_00878dfb();
              }
              piVar7 = (int *)*piVar7;
              iStack_d4 = *(int *)(unaff_EBP + -0x94);
              iStack_d0 = *(int *)(unaff_EBP + -0x90);
              iVar4 = *piVar7;
              piStack_cc = *(int **)(unaff_EBP + -0x8c);
              *(int **)(unaff_EBP + -0x10) = piVar7;
              iStack_d8 = *(int *)(unaff_EBP + -0x58);
              iVar4 = (**(code **)(iVar4 + 0x90))
                                (piVar7,0,0,*(undefined4 *)(unaff_EBP + -100),
                                 *(undefined4 *)(unaff_EBP + -0x60),
                                 *(undefined4 *)(unaff_EBP + -0x5c));
              if (iVar4 < 0) {
                FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
              }
              piVar7 = *(int **)(unaff_EBP + -0x30);
              *(undefined1 *)(unaff_EBP + -4) = 0xf;
              if (piVar7 != (int *)0x0) {
                (**(code **)(*piVar7 + 8))(piVar7);
              }
              *(undefined1 *)(unaff_EBP + -4) = 0xe;
              iVar4 = FUN_00402bc3(unaff_EBP + -100);
              if (iVar4 < 0) {
                FUN_00878dfb(iVar4);
              }
              *(undefined1 *)(unaff_EBP + -4) = 1;
              iVar4 = FUN_00402bc3(unaff_EBP + -0x94);
              if (iVar4 < 0) {
                FUN_00878dfb(iVar4);
              }
              VariantInit((VARIANTARG *)(unaff_EBP + -0x74));
              iVar4 = FUN_00402e32(unaff_EBP + -0x74,&DAT_00980690);
              if (iVar4 < 0) {
                FUN_00878dfb(iVar4);
              }
              *(undefined1 *)(unaff_EBP + -4) = 0x11;
              VariantInit((VARIANTARG *)(unaff_EBP + -0x84));
              iVar4 = FUN_00402e32(unaff_EBP + -0x84,&DAT_00980690);
              if (iVar4 < 0) {
                FUN_00878dfb(iVar4);
              }
              iVar4 = *(int *)(*(int *)(unaff_EBP + -0x20) + 0x14);
              *(undefined1 *)(unaff_EBP + -4) = 0x12;
              if (iVar4 == 0) {
                FUN_00878dfb(0x80004003);
              }
              piVar7 = (int *)FUN_004113e5(unaff_EBP + -0x38);
              iVar4 = *piVar7;
              *(undefined1 *)(unaff_EBP + -4) = 0x13;
              if (iVar4 == 0) {
                FUN_00878dfb(0x80004003);
              }
              piVar7 = (int *)*piVar7;
              iVar4 = *piVar7;
              *(int **)(unaff_EBP + -0x10) = piVar7;
              iVar4 = (**(code **)(iVar4 + 0x90))
                                (piVar7,0,0,*(undefined4 *)(unaff_EBP + -0x84),
                                 *(undefined4 *)(unaff_EBP + -0x80),
                                 *(undefined4 *)(unaff_EBP + -0x7c),
                                 *(undefined4 *)(unaff_EBP + -0x78),
                                 *(undefined4 *)(unaff_EBP + -0x74),
                                 *(undefined4 *)(unaff_EBP + -0x70),
                                 *(undefined4 *)(unaff_EBP + -0x6c),
                                 *(undefined4 *)(unaff_EBP + -0x68));
              if (iVar4 < 0) {
                piStack_cc = *(int **)(unaff_EBP + -0x10);
                iStack_d4 = 0x790679;
                iStack_d0 = iVar4;
                FUN_00878e09();
              }
              *(undefined1 *)(unaff_EBP + -4) = 0x12;
              if (*(int **)(unaff_EBP + -0x38) != (int *)0x0) {
                piStack_cc = (int *)0x79068a;
                (**(code **)(**(int **)(unaff_EBP + -0x38) + 8))();
              }
              *(undefined1 *)(unaff_EBP + -4) = 0x11;
              piStack_cc = (int *)0x79069a;
              iVar4 = FUN_00402bc3();
              if (iVar4 < 0) {
                piStack_cc = (int *)0x7906a5;
                FUN_00878dfb();
              }
              *(undefined1 *)(unaff_EBP + -4) = 1;
              piStack_cc = (int *)0x7906b2;
              iVar4 = FUN_00402bc3();
              if (iVar4 < 0) {
                piStack_cc = (int *)0x7906bd;
                FUN_00878dfb();
              }
            }
            this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)FUN_0048bb7f();
            piVar7 = *(int **)(unaff_EBP + -0x20);
            piStack_cc = (int *)0x7906dc;
            _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)piVar7[5]);
            piVar7[2] = (int)this;
            piStack_cc = (int *)0x7906e8;
            FUN_0079c347();
          }
        }
        iVar4 = *(int *)(unaff_EBP + -0x14);
        piVar7[1] = 0;
        if (iVar4 != 0) {
          FUN_004030b1();
          *(undefined4 *)(unaff_EBP + -0x14) = 0;
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
          piStack_cc = (int *)0x79070f;
          (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
        }
      }
      else {
        FUN_00402fa6();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_004027eb();
      }
    }
    if (*(int *)(unaff_EBP + -0x24) == 0) goto LAB_0079073b;
    piVar7 = *(int **)(unaff_EBP + -0x24);
  } while( true );
}


