/* FUN_0059314b - 0x0059314b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0059314b(void)

{
  char cVar1;
  char *pcVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int extraout_ECX;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  uint uVar10;
  int unaff_EBP;
  int *piVar11;
  int iStack_98;
  undefined *puStack_94;
  int *piStack_90;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x34) = extraout_ECX;
  piVar11 = (int *)0x0;
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xf4);
  iVar5 = *(int *)this;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x44) = this;
  if (iVar5 != 0) {
    piStack_90 = (int *)0x593176;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)0x0);
  }
  pcVar2 = *(char **)(unaff_EBP + 8);
  if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) {
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (pcVar2 != (char *)0x0) {
      piStack_90 = (int *)0x593197;
      FUN_00434e38();
    }
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    do {
      *(undefined4 *)(unaff_EBP + -0x30) = 1;
      piStack_90 = (int *)0x5931c0;
      FUN_00414f8b();
      FUN_00495ba8();
      piStack_90 = (int *)0x5931d2;
      piVar4 = (int *)FUN_005946a2();
      puStack_94 = &DAT_0096597c;
      iStack_98 = 0x5931e4;
      piStack_90 = piVar11;
      iVar5 = FUN_004538dc();
      *(int *)(unaff_EBP + -0x18) = iVar5;
      if (iVar5 < 0) {
        iVar5 = *(int *)(unaff_EBP + -0x14);
        if (iVar5 == 0) {
LAB_0059320b:
          *(undefined4 *)(unaff_EBP + -0x18) = 0xffffffff;
        }
        else {
          piStack_90 = (int *)(iVar5 + (int)piVar11);
          puStack_94 = (undefined *)0x5931fe;
          iVar6 = FUN_0087b4c0();
          if (iVar6 == 0) goto LAB_0059320b;
          *(int *)(unaff_EBP + -0x18) = iVar6 - iVar5;
        }
        *(undefined4 *)(unaff_EBP + -0x30) = 0;
        if (-1 < *(int *)(unaff_EBP + -0x18)) goto LAB_0059323d;
        puStack_94 = (undefined *)(unaff_EBP + -0x24);
        iStack_98 = 0x593228;
        piStack_90 = piVar11;
        FUN_0045e053();
        *(undefined1 *)(unaff_EBP + -4) = 3;
        piStack_90 = (int *)0x593234;
        FUN_00414f8b();
        iVar5 = *(int *)(unaff_EBP + -0x24);
        *(undefined1 *)(unaff_EBP + -4) = 2;
      }
      else {
LAB_0059323d:
        puStack_94 = (undefined *)(unaff_EBP + -0x38);
        iStack_98 = 0x59324d;
        piStack_90 = piVar11;
        FUN_0045e053();
        *(undefined1 *)(unaff_EBP + -4) = 4;
        piStack_90 = (int *)0x593259;
        FUN_00414f8b();
        iVar5 = *(int *)(unaff_EBP + -0x38);
        *(undefined1 *)(unaff_EBP + -4) = 2;
      }
      if (iVar5 != 0) {
        piStack_90 = (int *)0x59326d;
        FUN_00434e38();
      }
      piStack_90 = (int *)0x593277;
      FUN_00414f8b();
      FUN_00495ba8();
      piStack_90 = (int *)0x0;
      puStack_94 = &DAT_00965978;
      iStack_98 = 0x593290;
      iVar5 = FUN_004538dc();
      if (-1 < iVar5) {
        piStack_90 = (int *)0x0;
        puStack_94 = (undefined *)(unaff_EBP + -0x3c);
        iStack_98 = 0x5932a4;
        FUN_0045e053();
        *(undefined1 *)(unaff_EBP + -4) = 5;
        piStack_90 = (int *)0x5932b0;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (*(int *)(unaff_EBP + -0x3c) != 0) {
          piStack_90 = (int *)0x5932c4;
          FUN_00434e38();
        }
        *(int *)(unaff_EBP + -0x18) = iVar5 + (int)piVar11;
        if (iVar5 != 0) {
          piStack_90 = (int *)0x5932d9;
          FUN_005946a2();
        }
        piStack_90 = (int *)&DAT_00965974;
        puStack_94 = (undefined *)0x5932eb;
        FUN_00414edd();
        if (iVar5 != 0) {
          *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
        }
      }
      piStack_90 = (int *)0x5932ff;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      piStack_90 = (int *)0x59330e;
      puStack_94 = (undefined *)FUN_00449713();
      *(int ***)(unaff_EBP + -0x48) = &piStack_90;
      iStack_98 = 0x59331a;
      FUN_00448a17();
      iStack_98 = unaff_EBP + -0x40;
      puStack_94 = (undefined *)0x1;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      FUN_007d4a9a();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      puStack_94 = (undefined *)0x593336;
      FUN_0044974c();
      puStack_94 = (undefined *)0x59333d;
      iVar5 = FUN_00448ebb();
      *(undefined1 **)(unaff_EBP + -0x48) = &stack0xffffff74;
      puStack_94 = (undefined *)0x59334e;
      piStack_90 = piVar4;
      FUN_00414f8b();
      piStack_90 = (int *)&DAT_00965970;
      puStack_94 = (undefined *)0x59335b;
      iVar6 = FUN_0059377d();
      piVar4[1] = iVar5 + iVar6 * -0xe;
      FUN_004497b5();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      piStack_90 = (int *)0x593378;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        piStack_90 = (int *)0x593383;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x28) <= piVar4[1]) {
        *(int *)(unaff_EBP + -0x28) = piVar4[1];
      }
      *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
      if ((*(int *)(unaff_EBP + -0x18) < 0) ||
         (piVar11 = (int *)(*(int *)(unaff_EBP + -0x18) + (*(int *)(unaff_EBP + -0x30) != 0) + 1),
         (int)piVar11 < 0)) break;
      if (*(int *)(unaff_EBP + 8) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(unaff_EBP + 8) + -4);
      }
    } while ((int)piVar11 < iVar5);
    iVar5 = *(int *)(unaff_EBP + -0x28) + 0x2c;
    *(int *)(unaff_EBP + -0x24) = iVar5;
    if (iVar5 < 0xb9) {
      *(undefined4 *)(unaff_EBP + -0x24) = 0xb8;
    }
    piStack_90 = (int *)((*(int *)(unaff_EBP + -0x20) + 4) * 0x10);
    puStack_94 = (undefined *)(*(int *)(unaff_EBP + -0x24) + 7);
    iStack_98 = 0x5933f6;
    FUN_005937d7();
    piStack_90 = (int *)0x0;
    puStack_94 = (undefined *)0x593402;
    FUN_004031b7();
    iVar5 = **(int **)(unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    if (iVar5 == 0) {
      piStack_90 = (int *)0x593418;
      FUN_00878dfb();
    }
    piStack_90 = (int *)(unaff_EBP + -0x2c);
    puStack_94 = (undefined *)0x593427;
    FUN_00425067();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    piStack_90 = (int *)0x593434;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      piStack_90 = (int *)0x59343f;
      FUN_00878dfb();
    }
    piStack_90 = (int *)(unaff_EBP + -0x10);
    puStack_94 = (undefined *)0x59344a;
    FUN_007d4a9a();
    uVar10 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 0xf;
    while( true ) {
      if ((*(int *)(unaff_EBP + -0x1c) == 0) ||
         (*(uint *)(*(int *)(unaff_EBP + -0x1c) + -4) <= uVar10)) break;
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      piStack_90 = (int *)0x593485;
      FUN_00414f8b();
      iVar5 = *(int *)(uVar10 * 8 + 4 + *(int *)(unaff_EBP + -0x1c));
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      iVar6 = *(int *)(unaff_EBP + -0x18);
      iVar5 = (*(int *)(unaff_EBP + -0x24) - iVar5) / 2;
      piVar11 = (int *)0x0;
      do {
        if (iVar6 == 0) {
LAB_005934b9:
          piVar4 = (int *)0xffffffff;
        }
        else {
          piStack_90 = (int *)(iVar6 + (int)piVar11);
          puStack_94 = (undefined *)0x5934ad;
          iVar7 = FUN_0087b4c0();
          if (iVar7 == 0) goto LAB_005934b9;
          piVar4 = (int *)(iVar7 - iVar6);
        }
        puStack_94 = (undefined *)(unaff_EBP + -0x20);
        iStack_98 = 0x5934ca;
        piStack_90 = piVar11;
        FUN_0045e053();
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        piStack_90 = (int *)0x5934df;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        piStack_90 = (int *)0x5934ec;
        FUN_00403191();
        piStack_90 = (int *)(unaff_EBP + -0x78);
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        puStack_94 = (undefined *)0x593503;
        puStack_94 = (undefined *)FUN_00449749();
        iStack_98 = 0x59350c;
        uVar8 = FUN_00449713();
        *(int **)(unaff_EBP + -0x48) = &iStack_98;
        FUN_00448a17(uVar8);
        iVar7 = *(int *)(unaff_EBP + -0x28) + 0x17;
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        iVar6 = iVar5;
        FUN_004115d9(iVar5,iVar7);
        FUN_00448e3a(iVar6,iVar7);
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        piStack_90 = (int *)0x593540;
        iVar6 = FUN_00402bc3();
        if (iVar6 < 0) {
          piStack_90 = (int *)0x59354b;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        piStack_90 = (int *)0x59355b;
        iVar6 = FUN_00402bc3();
        if (iVar6 < 0) {
          piStack_90 = (int *)0x593566;
          FUN_00878dfb();
        }
        piStack_90 = (int *)0x593570;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x58));
        piStack_90 = (int *)(unaff_EBP + -0x58);
        puStack_94 = (undefined *)0x59357e;
        iVar6 = FUN_00402e32();
        if (iVar6 < 0) {
          piStack_90 = (int *)0x59358a;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        piStack_90 = (int *)0x59359a;
        puStack_94 = (undefined *)FUN_00449713();
        *(int ***)(unaff_EBP + -0x48) = &piStack_90;
        iStack_98 = 0x5935a6;
        FUN_00448a17();
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        puStack_94 = (undefined *)0x5935b2;
        FUN_0044974c();
        puStack_94 = (undefined *)0x5935b9;
        iVar6 = FUN_00448ebb();
        iVar5 = iVar5 + iVar6;
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        piStack_90 = (int *)0x5935c8;
        iVar6 = FUN_00402bc3();
        if (iVar6 < 0) {
          piStack_90 = (int *)0x5935d3;
          FUN_00878dfb();
        }
        if (-1 < (int)piVar4) {
          cVar1 = *(char *)((int)piVar4 + *(int *)(unaff_EBP + -0x18) + 1);
          if ((cVar1 == 'B') || (cVar1 == 'b')) {
            piStack_90 = (int *)(unaff_EBP + -0x3c);
            puStack_94 = (undefined *)0x5936e9;
            puVar9 = (undefined4 *)FUN_007d4a9a();
            piStack_90 = (int *)0x5936f5;
            _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                      ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
                       (IBinding *)*puVar9);
            piVar11 = *(int **)(unaff_EBP + -0x3c);
LAB_005936b6:
            if (piVar11 != (int *)0x0) {
              piStack_90 = (int *)0x5936c0;
              (**(code **)(*piVar11 + 8))();
            }
          }
          else {
            if ((cVar1 == 'R') || (cVar1 == 'r')) {
              piStack_90 = (int *)(unaff_EBP + -0x40);
              puStack_94 = (undefined *)0x5936cd;
              puVar9 = (undefined4 *)FUN_007d4a9a();
              piStack_90 = (int *)0x5936d9;
              _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                        ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
                         (IBinding *)*puVar9);
              piVar11 = *(int **)(unaff_EBP + -0x40);
              goto LAB_005936b6;
            }
            if ((cVar1 == 'K') || (cVar1 == 'k')) {
              piStack_90 = (int *)(unaff_EBP + -0x44);
              puStack_94 = (undefined *)0x59368b;
              piVar11 = (int *)FUN_007d4a9a();
              piVar11 = (int *)*piVar11;
              piVar3 = *(int **)(unaff_EBP + -0x10);
              *(undefined1 *)(unaff_EBP + -4) = 0x15;
              if (piVar3 != piVar11) {
                *(int **)(unaff_EBP + -0x10) = piVar11;
                FUN_0045e787();
                if (piVar3 != (int *)0x0) {
                  piStack_90 = (int *)0x5936af;
                  (**(code **)(*piVar3 + 8))();
                }
              }
              piVar11 = *(int **)(unaff_EBP + -0x44);
              *(undefined1 *)(unaff_EBP + -4) = 0xf;
              goto LAB_005936b6;
            }
            if ((cVar1 != 'L') && (cVar1 != 'l')) {
              piVar4 = (int *)((int)piVar4 + 1);
              goto LAB_00593659;
            }
            if (*(int *)(unaff_EBP + -0x2c) == 0) {
              piStack_90 = (int *)0x593627;
              FUN_00878dfb();
            }
            piVar11 = *(int **)(unaff_EBP + -0x2c);
            piStack_90 = (int *)0x1;
            puStack_94 = (undefined *)(*(int *)(unaff_EBP + -0x24) + -0xe);
            iStack_98 = *(int *)(unaff_EBP + -0x28);
            iVar6 = (**(code **)(*piVar11 + 0x8c))(piVar11,7);
            if (iVar6 < 0) {
              iStack_98 = 0x593656;
              puStack_94 = (undefined *)iVar6;
              piStack_90 = piVar11;
              FUN_00878e09();
            }
          }
          piVar4 = (int *)((int)piVar4 + 2);
        }
LAB_00593659:
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        FUN_00414ebb();
        if ((int)piVar4 < 0) break;
        iVar6 = *(int *)(unaff_EBP + -0x18);
        if (iVar6 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(iVar6 + -4);
        }
        piVar11 = piVar4;
      } while ((int)piVar4 < iVar7);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      FUN_00414ebb();
      *(int *)(unaff_EBP + -0x30) = *(int *)(unaff_EBP + -0x30) + 1;
      *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + 0x10;
      uVar10 = *(uint *)(unaff_EBP + -0x30);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
      piStack_90 = (int *)0x593737;
      (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
      piStack_90 = (int *)0x593748;
      (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00594668();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


