/* FUN_006076eb - 0x006076eb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006076eb(void)

{
  int *piVar1;
  double dVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  int *piVar8;
  undefined4 *puVar9;
  int extraout_ECX;
  int unaff_EBP;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  int iStack_38;
  int iStack_34;
  
  FUN_00879bb8();
  iStack_34 = 0x60770c;
  iVar4 = FUN_00455c59();
  iVar4 = *(int *)(iVar4 + 4);
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    iStack_34 = 0x60771f;
    FUN_0045e7c2();
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
  }
  puStack_40 = *(undefined1 **)(iVar4 + 0xad);
  iStack_38 = 0x607734;
  iStack_34 = iVar4 + 0xa5;
  iVar5 = FUN_00413367();
  if (iVar5 < 0x1389) {
    iStack_34 = 0;
    iStack_38 = 0;
    puStack_3c = (undefined1 *)0x0;
    *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_40;
    FUN_00679d22(&puStack_40,0x116);
    FUN_007db3ad();
  }
  else {
    iStack_38 = 0x607772;
    iStack_34 = iVar4 + 0xa5;
    iVar5 = FUN_00413367();
    puVar6 = (undefined1 *)(iVar5 + -5000);
    *(undefined1 **)(unaff_EBP + -0x10) = puVar6;
    *(double *)(unaff_EBP + -0x1c) = (double)*(int *)(unaff_EBP + -0x10);
    if ((((_DAT_008ece58 <= (double)*(int *)(unaff_EBP + -0x10) * _DAT_008ece60) ||
         ((dVar2 = *(double *)(unaff_EBP + -0x1c) * _DAT_008ece50, dVar2 < _DAT_008ece58 &&
          (_DAT_008ece48 <= dVar2)))) ||
        ((dVar2 = *(double *)(unaff_EBP + -0x1c) * _DAT_008ece40, dVar2 < _DAT_008ece48 &&
         (_DAT_008ece38 <= dVar2)))) ||
       (((dVar2 = *(double *)(unaff_EBP + -0x1c) * _DAT_008ece30, dVar2 < _DAT_008ece38 &&
         (_DAT_008ece28 <= dVar2)) ||
        ((dVar2 = *(double *)(unaff_EBP + -0x1c) * _DAT_008ece20, dVar2 < _DAT_008ece28 &&
         (_DAT_008ece18 <= dVar2)))))) {
      puVar6 = (undefined1 *)__ftol();
    }
    if (99999999 < (int)puVar6) {
      puVar6 = &DAT_05f5e100;
    }
    iStack_34 = 0x607841;
    iVar5 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x18) = iVar5;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_007e62e9();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uVar7 = -(uint)(iVar5 != 0) & iVar5 + 8U;
    *(uint *)(unaff_EBP + -0x20) = -(uint)(uVar7 != 0) & uVar7 - 8;
    FUN_004c26c4();
    iStack_34 = 1;
    puStack_40 = (undefined1 *)&iStack_38;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    *(int **)(unaff_EBP + -0x18) = &iStack_38;
    puStack_3c = (undefined1 *)0x1aa;
    FUN_00679d22();
    puStack_3c = (undefined1 *)0x0;
    puStack_40 = (undefined1 *)0x2;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_004c2677();
    FUN_007eddac();
    iStack_34 = 10;
    iStack_38 = 0;
    puStack_40 = (undefined1 *)0x0;
    puStack_3c = puVar6;
    FUN_007edf4a(0);
    FUN_007e6e3c();
    iVar5 = FUN_004bc6a2();
    if (iVar5 == 1) {
      *(undefined4 *)(extraout_ECX + 0x14) = *(undefined4 *)(*(int *)(unaff_EBP + -0x20) + 0xbc);
      iStack_34 = iVar4 + 0x33;
      iStack_38 = 0x6078f2;
      bVar3 = FUN_0045f03e();
      if ((bVar3 < 0x10) && (1000000 < *(int *)(extraout_ECX + 0x14))) {
        iStack_34 = 0;
        iStack_38 = 0;
        puStack_3c = (undefined1 *)0x0;
        puStack_40 = (undefined1 *)0xf4240;
        *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_40;
        FUN_00679d22(&puStack_40,0xf43);
        FUN_007db3ad();
        *(undefined4 *)(extraout_ECX + 0x14) = 0;
      }
      else {
        iVar4 = *(int *)(extraout_ECX + 0x14);
        if (iVar4 < 100000) {
          iStack_34 = unaff_EBP + -0x10;
          iStack_38 = 0x607943;
          piVar8 = (int *)FUN_007d4a9a();
          piVar8 = (int *)*piVar8;
          piVar1 = *(int **)(extraout_ECX + 0x510);
          *(undefined1 *)(unaff_EBP + -4) = 3;
          if (piVar1 != piVar8) {
            *(int **)(extraout_ECX + 0x510) = piVar8;
            FUN_0045e787();
            if (piVar1 != (int *)0x0) {
              iStack_34 = 0x60796c;
              (**(code **)(*piVar1 + 8))();
            }
          }
          piVar8 = *(int **)(unaff_EBP + -0x10);
          *(undefined1 *)(unaff_EBP + -4) = 1;
        }
        else if (iVar4 < 1000000) {
          iStack_34 = unaff_EBP + -0x10;
          iStack_38 = 0x607987;
          piVar8 = (int *)FUN_007d4a9a();
          piVar8 = (int *)*piVar8;
          piVar1 = *(int **)(extraout_ECX + 0x510);
          *(undefined1 *)(unaff_EBP + -4) = 4;
          if (piVar1 != piVar8) {
            *(int **)(extraout_ECX + 0x510) = piVar8;
            FUN_0045e787();
            if (piVar1 != (int *)0x0) {
              iStack_34 = 0x6079b0;
              (**(code **)(*piVar1 + 8))();
            }
          }
          piVar8 = *(int **)(unaff_EBP + -0x10);
          *(undefined1 *)(unaff_EBP + -4) = 1;
        }
        else if (iVar4 < 10000000) {
          iStack_34 = unaff_EBP + -0x10;
          iStack_38 = 0x6079ce;
          piVar8 = (int *)FUN_007d4a9a();
          piVar8 = (int *)*piVar8;
          piVar1 = *(int **)(extraout_ECX + 0x510);
          *(undefined1 *)(unaff_EBP + -4) = 5;
          if (piVar1 != piVar8) {
            *(int **)(extraout_ECX + 0x510) = piVar8;
            FUN_0045e787();
            if (piVar1 != (int *)0x0) {
              iStack_34 = 0x6079f7;
              (**(code **)(*piVar1 + 8))();
            }
          }
          piVar8 = *(int **)(unaff_EBP + -0x10);
          *(undefined1 *)(unaff_EBP + -4) = 1;
        }
        else if (iVar4 < 100000000) {
          iStack_34 = unaff_EBP + -0x10;
          iStack_38 = 0x607a15;
          piVar8 = (int *)FUN_007d4a9a();
          piVar8 = (int *)*piVar8;
          piVar1 = *(int **)(extraout_ECX + 0x510);
          *(undefined1 *)(unaff_EBP + -4) = 6;
          if (piVar1 != piVar8) {
            *(int **)(extraout_ECX + 0x510) = piVar8;
            FUN_0045e787();
            if (piVar1 != (int *)0x0) {
              iStack_34 = 0x607a3e;
              (**(code **)(*piVar1 + 8))();
            }
          }
          piVar8 = *(int **)(unaff_EBP + -0x10);
          *(undefined1 *)(unaff_EBP + -4) = 1;
        }
        else if (iVar4 < 1000000000) {
          iStack_34 = unaff_EBP + -0x10;
          iStack_38 = 0x607a59;
          piVar8 = (int *)FUN_007d4a9a();
          piVar8 = (int *)*piVar8;
          piVar1 = *(int **)(extraout_ECX + 0x510);
          *(undefined1 *)(unaff_EBP + -4) = 7;
          if (piVar1 != piVar8) {
            *(int **)(extraout_ECX + 0x510) = piVar8;
            FUN_0045e787();
            if (piVar1 != (int *)0x0) {
              iStack_34 = 0x607a82;
              (**(code **)(*piVar1 + 8))();
            }
          }
          piVar8 = *(int **)(unaff_EBP + -0x10);
          *(undefined1 *)(unaff_EBP + -4) = 1;
        }
        else {
          iStack_34 = unaff_EBP + -0x10;
          iStack_38 = 0x607a96;
          puVar9 = (undefined4 *)FUN_007d4a9a();
          iStack_34 = 0x607aa5;
          _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                    ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x510),
                     (IBinding *)*puVar9);
          piVar8 = *(int **)(unaff_EBP + -0x10);
        }
        if (piVar8 != (int *)0x0) {
          iStack_34 = 0x607ab2;
          (**(code **)(*piVar8 + 8))();
        }
        iVar4 = *(int *)(extraout_ECX + 0x14);
        if (iVar4 == 0) {
          FUN_00414f29();
        }
        else {
          *(undefined4 *)(unaff_EBP + -0x10) = 0;
          iStack_38 = unaff_EBP + -0x10;
          *(undefined1 *)(unaff_EBP + -4) = 8;
          puStack_3c = (undefined1 *)0x607ada;
          iStack_34 = iVar4;
          FUN_007d3546();
          iStack_34 = unaff_EBP + -0x14;
          iStack_38 = 0x607af0;
          puVar9 = (undefined4 *)FUN_00679d22();
          iStack_34 = *puVar9;
          iStack_38 = extraout_ECX + 0x518;
          *(undefined1 *)(unaff_EBP + -4) = 9;
          puStack_3c = (undefined1 *)0x607b06;
          FUN_00434e21();
          *(undefined1 *)(unaff_EBP + -4) = 8;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 1;
          FUN_00414ebb();
        }
        iStack_34 = 0x607b2b;
        FUN_008161f1();
      }
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_004c26e1();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


