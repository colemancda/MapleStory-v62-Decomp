/* FUN_00431293 - 0x00431293 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00431293(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int unaff_EBP;
  int iVar5;
  int iStack_84;
  int iStack_80;
  int iStack_70;
  int iStack_6c;
  int *piStack_68;
  
  FUN_00879bb8();
  iVar3 = *(int *)(unaff_EBP + 8);
  iVar5 = *(int *)(extraout_ECX + 0x24);
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  if (iVar3 == iVar5 || iVar3 - iVar5 < 0) {
    iStack_70 = *(int *)(extraout_ECX + 0x20);
    if (-1 < iVar3 - iStack_70) {
      iVar3 = *(int *)(extraout_ECX + 0x1c);
      *(int *)(extraout_ECX + 0x20) = *(int *)(extraout_ECX + 0x18) + iStack_70;
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      iVar5 = extraout_ECX;
      if (0 < iVar3) {
        do {
          *(undefined4 *)(unaff_EBP + 8) = 0;
          iVar3 = *(int *)(unaff_EBP + -0x10);
          *(undefined4 *)(unaff_EBP + -4) = 0;
          if (iVar3 == 0) {
            piStack_68 = (int *)0xff;
            iStack_6c = 0xc00614a4;
            *(int **)(unaff_EBP + -0x30) = &iStack_70;
            FUN_00424e0a();
            *(undefined1 **)(unaff_EBP + -0x24) = &stack0xffffff84;
            iStack_80 = 0;
            *(undefined1 *)(unaff_EBP + -4) = 1;
            iStack_84 = 0x4313f6;
            FUN_00424dd7();
            iStack_80 = 0;
            *(int **)(unaff_EBP + -0x30) = &iStack_84;
            iStack_84 = extraout_ECX_02;
            FUN_00424dbc(iVar5 + 0x30);
            *(undefined1 *)(unaff_EBP + -4) = 0;
            puVar1 = (undefined4 *)FUN_0042e5bf(unaff_EBP + -0x20);
            piStack_68 = (int *)0x43141f;
            _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                      ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + 8),
                       (IBinding *)*puVar1);
            piVar2 = *(int **)(unaff_EBP + -0x20);
          }
          else if (iVar3 == 1) {
            piStack_68 = (int *)0xff;
            iStack_6c = 0xc00614a4;
            *(int **)(unaff_EBP + -0x30) = &iStack_70;
            FUN_00424e0a();
            *(undefined1 **)(unaff_EBP + -0x24) = &stack0xffffff84;
            iStack_80 = 0;
            *(undefined1 *)(unaff_EBP + -4) = 2;
            iStack_84 = 0x43139a;
            FUN_00424dd7();
            iStack_80 = 0;
            *(int **)(unaff_EBP + -0x30) = &iStack_84;
            iStack_84 = extraout_ECX_01;
            FUN_00424dbc(iVar5 + 0x30);
            *(undefined1 *)(unaff_EBP + -4) = 0;
            puVar1 = (undefined4 *)FUN_0042e5bf(unaff_EBP + -0x1c);
            piStack_68 = (int *)0x4313c3;
            _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                      ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + 8),
                       (IBinding *)*puVar1);
            piVar2 = *(int **)(unaff_EBP + -0x1c);
          }
          else {
            if (iVar3 != 2) goto LAB_00431625;
            piStack_68 = (int *)0xff;
            iStack_6c = 0xc00614a4;
            *(int **)(unaff_EBP + -0x24) = &iStack_70;
            FUN_00424e0a();
            *(undefined1 **)(unaff_EBP + -0x30) = &stack0xffffff84;
            iStack_80 = 0;
            *(undefined1 *)(unaff_EBP + -4) = 3;
            iStack_84 = 0x43133f;
            FUN_00424dd7();
            iStack_80 = 0;
            *(int **)(unaff_EBP + -0x30) = &iStack_84;
            iStack_84 = extraout_ECX_00;
            FUN_00424dbc(iVar5 + 0x30);
            *(undefined1 *)(unaff_EBP + -4) = 0;
            puVar1 = (undefined4 *)FUN_0042e5bf(unaff_EBP + -0x18);
            piStack_68 = (int *)0x431368;
            _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                      ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + 8),
                       (IBinding *)*puVar1);
            piVar2 = *(int **)(unaff_EBP + -0x18);
          }
          if (piVar2 != (int *)0x0) {
            piStack_68 = (int *)0x43142c;
            (**(code **)(*piVar2 + 8))();
          }
          if (*(int *)(unaff_EBP + 8) == 0) goto LAB_00431625;
          if (DAT_0097c1ac == 0) {
            piStack_68 = (int *)0x431448;
            FUN_00878dfb();
          }
          piStack_68 = (int *)0x431457;
          puVar1 = (undefined4 *)FUN_00429328();
          piVar2 = (int *)*puVar1;
          *(undefined2 *)(unaff_EBP + -0x40) = 0xd;
          *(int **)(unaff_EBP + -0x38) = piVar2;
          iVar3 = *piVar2;
          *(undefined1 *)(unaff_EBP + -4) = 4;
          piStack_68 = (int *)0x43146c;
          (**(code **)(iVar3 + 4))();
          *(undefined1 *)(unaff_EBP + -4) = 5;
          if (*(int *)(unaff_EBP + 8) == 0) {
            piStack_68 = (int *)0x80004003;
            iStack_6c = 0x43147b;
            FUN_00878dfb();
          }
          piStack_68 = (int *)(unaff_EBP + -0x28);
          iStack_6c = 0x431487;
          piVar2 = (int *)FUN_0042fb5e();
          iVar3 = *piVar2;
          *(undefined1 *)(unaff_EBP + -4) = 6;
          if (iVar3 == 0) {
            piStack_68 = (int *)0x80004003;
            iStack_6c = 0x431497;
            FUN_00878dfb();
          }
          iVar3 = *(int *)*piVar2;
          iStack_70 = *(int *)(unaff_EBP + -0x3c);
          iStack_6c = *(int *)(unaff_EBP + -0x38);
          *(int **)(unaff_EBP + -0x24) = (int *)*piVar2;
          piStack_68 = *(int **)(unaff_EBP + -0x34);
          iVar3 = (**(code **)(iVar3 + 100))();
          if (iVar3 < 0) {
            iStack_80 = *(undefined4 *)(unaff_EBP + -0x24);
            iStack_84 = iVar3;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 5;
          if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
            iStack_80 = 0x4314d1;
            (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
          }
          *(undefined1 *)(unaff_EBP + -4) = 4;
          iStack_80 = 0x4314de;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            iStack_80 = 0x4314e9;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
            iStack_80 = 0x4314f9;
            (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
          }
          iStack_80 = 0x431505;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x60));
          iStack_80 = unaff_EBP + -0x60;
          iStack_84 = 0x431514;
          iVar3 = FUN_00402e32();
          if (iVar3 < 0) {
            iStack_80 = 0x431520;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 7;
          iStack_80 = 0x43152a;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
          iStack_80 = unaff_EBP + -0x50;
          iStack_84 = 0x431534;
          iVar3 = FUN_00402e32();
          if (iVar3 < 0) {
            iStack_80 = 0x431540;
            FUN_00878dfb();
          }
          piVar2 = *(int **)(unaff_EBP + 8);
          *(undefined1 *)(unaff_EBP + -4) = 8;
          if (piVar2 == (int *)0x0) {
            iStack_80 = 0x431555;
            FUN_00878dfb();
            piVar2 = *(int **)(unaff_EBP + 8);
          }
          iStack_84 = *(int *)(unaff_EBP + -0x5c);
          iVar3 = *piVar2;
          iStack_80 = *(undefined4 *)(unaff_EBP + -0x58);
          *(int **)(unaff_EBP + -0x24) = piVar2;
          iVar3 = (**(code **)(iVar3 + 0x110))
                            (piVar2,0,*(undefined4 *)(unaff_EBP + -0x50),
                             *(undefined4 *)(unaff_EBP + -0x4c),*(undefined4 *)(unaff_EBP + -0x48),
                             *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x60));
          if (iVar3 < 0) {
            piStack_68 = *(int **)(unaff_EBP + -0x24);
            iStack_70 = 0x43158f;
            iStack_6c = iVar3;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 7;
          piStack_68 = (int *)0x43159c;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            piStack_68 = (int *)0x4315a7;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          piStack_68 = (int *)0x4315b3;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            piStack_68 = (int *)0x4315be;
            FUN_00878dfb();
          }
          piStack_68 = *(int **)(unaff_EBP + 8);
          *(undefined1 **)(unaff_EBP + -0x30) = &stack0xffffff9c;
          if (piStack_68 != (int *)0x0) {
            iStack_6c = 0x4315d6;
            (**(code **)(*piStack_68 + 4))();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          piStack_68 = (int *)0x4315de;
          FUN_00424e82();
          piStack_68 = (int *)0x4315e5;
          FUN_00427af9();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
            piStack_68 = (int *)0x4315f6;
            (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
          }
          *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
          iVar5 = *(int *)(unaff_EBP + -0x14);
          iStack_70 = *(int *)(unaff_EBP + -0x10);
        } while (iStack_70 < *(int *)(iVar5 + 0x1c));
      }
      if (*(int *)(iVar5 + 0x2c) == 0) {
        iStack_6c = *(undefined4 *)(iVar5 + 0x28);
        piStack_68 = (int *)0x64;
        iStack_70 = 0x431622;
        uVar4 = FUN_00433c19();
        *(undefined4 *)(iVar5 + 0x2c) = uVar4;
      }
    }
LAB_00431625:
    uVar4 = 0;
  }
  else {
    piStack_68 = *(int **)(extraout_ECX + 0x2c);
    if (piStack_68 != (int *)0x0) {
      iStack_6c = 0x4312ca;
      FUN_0043405b();
      *(undefined4 *)(extraout_ECX + 0x2c) = 0;
    }
    uVar4 = 1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}


