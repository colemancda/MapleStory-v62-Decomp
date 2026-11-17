/* FUN_007d2c14 - 0x007d2c14 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007d2c14(void)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  int unaff_EBP;
  int iVar8;
  int iVar9;
  int iStack_a0;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + 0x14) == 0) {
    iStack_a0 = unaff_EBP + -0x24;
    puVar3 = (undefined4 *)FUN_007d4a9a();
    iStack_a0 = 0x7d2c4a;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + 0x14),
               (IBinding *)*puVar3);
    FUN_004497b5();
  }
  piVar7 = *(int **)(unaff_EBP + 8);
  FUN_0045f10c();
  iStack_a0 = 1;
  FUN_0047266d();
  puVar3 = (undefined4 *)(unaff_EBP + -0x98);
  for (iVar6 = 0x14; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar3 = 9999;
    puVar3 = puVar3 + 1;
  }
  *(int *)(unaff_EBP + -0x18) = unaff_EBP + -0x98;
  iVar6 = *(int *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  iVar9 = 0;
  do {
    if (iVar6 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(iVar6 + -4);
    }
    if (iVar8 <= iVar9) {
      FUN_0045f10c();
      iStack_a0 = 1;
      FUN_0047266d();
      iVar6 = *(int *)(unaff_EBP + -0x98);
      iVar9 = 0;
      if (iVar6 != 9999) {
        *(int *)(unaff_EBP + -0x14) = unaff_EBP + -0x98;
        do {
          for (; iVar9 < iVar6 + 1; iVar9 = iVar9 + 1) {
            if (*piVar7 == 0) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)(*piVar7 + -4);
            }
            pcVar5 = (char *)(iVar9 + *(int *)(unaff_EBP + 0xc));
            cVar2 = *pcVar5;
            if ((cVar2 == '\r') && (pcVar5[1] == '\n')) {
              iStack_a0 = 0;
              FUN_0046691d(iVar6 + 1);
              iVar9 = iVar9 + 1;
            }
            else {
              *(char *)(unaff_EBP + 0xb) = cVar2;
              iStack_a0 = unaff_EBP + 0xb;
              FUN_0045efbb();
              iStack_a0 = 0x7d2f16;
              VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
              iStack_a0 = unaff_EBP + -0x38;
              iVar8 = FUN_00402e32();
              if (iVar8 < 0) {
                iStack_a0 = 0x7d2f30;
                FUN_00878dfb();
              }
              *(undefined1 *)(unaff_EBP + -4) = 6;
              iStack_a0 = iVar6 + -1;
              FUN_007d8261();
              iStack_a0 = 0x7d2f47;
              uVar4 = FUN_00449713();
              *(int **)(unaff_EBP + 8) = &iStack_a0;
              FUN_00448a17(uVar4);
              *(undefined1 *)(unaff_EBP + -4) = 6;
              FUN_0044974c();
              FUN_00448ebb();
              *(undefined1 *)(unaff_EBP + -4) = 1;
              iStack_a0 = 0x7d2f73;
              iVar8 = FUN_00402bc3();
              if (iVar8 < 0) {
                iStack_a0 = 0x7d2f7e;
                FUN_00878dfb();
              }
              if ((iVar9 == **(int **)(unaff_EBP + -0x14)) &&
                 ((*(int **)(unaff_EBP + -0x14))[1] != 9999)) {
                iStack_a0 = 0;
                FUN_0046691d(iVar6 + 1);
              }
            }
            iVar6 = **(int **)(unaff_EBP + -0x14);
          }
          *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 4;
          iVar6 = **(int **)(unaff_EBP + -0x14);
        } while (iVar6 != 9999);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00414ebb();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int **)(unaff_EBP + 0x14) != (int *)0x0) {
        iStack_a0 = 0x7d2fdb;
        (**(code **)(**(int **)(unaff_EBP + 0x14) + 8))();
      }
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
    if (*piVar7 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(*piVar7 + -4);
    }
    *(undefined1 *)(unaff_EBP + -0xd) = *(undefined1 *)(iVar9 + iVar6);
    iStack_a0 = unaff_EBP + -0xd;
    FUN_0045efbb();
    iStack_a0 = 0x7d2cd2;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_a0 = iVar8 + -1;
    FUN_007d8261();
    iStack_a0 = 0x7d2cea;
    uVar4 = FUN_00449713();
    *(int **)(unaff_EBP + -0x1c) = &iStack_a0;
    FUN_00448a17(uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_0044974c();
    uVar4 = FUN_00448ebb();
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar4;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_a0 = 0x7d2d19;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      iStack_a0 = 0x7d2d24;
      FUN_00878dfb();
    }
    iVar6 = *(int *)(unaff_EBP + 0xc);
    if ((*(int *)(unaff_EBP + 0x10) < *(int *)(unaff_EBP + -0x14) + *(int *)(unaff_EBP + -0x1c)) &&
       (*(char *)(iVar9 + 1 + iVar6) != ' ')) {
      iVar1 = iVar9 + 1;
      pcVar5 = (char *)(iVar6 + iVar1);
      cVar2 = *pcVar5;
      *(int *)(unaff_EBP + -0x1c) = iVar1;
      while (cVar2 != ' ') {
        *(char *)(unaff_EBP + -0xd) = *pcVar5;
        iStack_a0 = unaff_EBP + -0xd;
        FUN_0045efbb();
        iStack_a0 = 0x7d2d75;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
        iStack_a0 = unaff_EBP + -0x38;
        iVar6 = FUN_00402e32();
        if (iVar6 < 0) {
          iStack_a0 = 0x7d2d8f;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 4;
        iStack_a0 = iVar8 + -1;
        FUN_007d8261();
        iStack_a0 = 0x7d2da7;
        uVar4 = FUN_00449713();
        *(int **)(unaff_EBP + -0x24) = &iStack_a0;
        FUN_00448a17(uVar4);
        *(undefined1 *)(unaff_EBP + -4) = 4;
        FUN_0044974c();
        uVar4 = FUN_00448ebb();
        *(undefined4 *)(unaff_EBP + -0x24) = uVar4;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        iStack_a0 = 0x7d2dd6;
        iVar6 = FUN_00402bc3();
        if (iVar6 < 0) {
          iStack_a0 = 0x7d2de1;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + 0x10) * 2 <
            *(int *)(unaff_EBP + -0x24) + *(int *)(unaff_EBP + -0x14) * 2) {
          piVar7 = *(int **)(unaff_EBP + -0x18);
          *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 4;
          *piVar7 = iVar9;
          goto LAB_007d2e67;
        }
        *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + -1;
        iVar1 = *(int *)(unaff_EBP + -0x1c);
        pcVar5 = (char *)(*(int *)(unaff_EBP + 0xc) + iVar1);
        cVar2 = *pcVar5;
      }
      piVar7 = *(int **)(unaff_EBP + -0x18);
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 4;
      *piVar7 = iVar1;
      iStack_a0 = 0;
      FUN_0046691d(iVar8 + 1);
      *(int *)(unaff_EBP + -0x14) =
           *(int *)(unaff_EBP + -0x14) + -1 +
           (*(int *)(unaff_EBP + -0x24) - *(int *)(unaff_EBP + 0x10));
LAB_007d2e7a:
      iVar6 = *(int *)(unaff_EBP + 0xc);
    }
    else if (((*(int *)(unaff_EBP + 0x10) < *(int *)(unaff_EBP + -0x1c)) &&
             (*(char *)(iVar9 + 1 + iVar6) == ' ')) ||
            ((*(char *)(iVar9 + iVar6) == '\r' && (*(char *)(iVar9 + 1 + iVar6) == '\n')))) {
      piVar7 = *(int **)(unaff_EBP + -0x18);
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 4;
      *piVar7 = iVar9;
LAB_007d2e67:
      iStack_a0 = 0;
      FUN_0046691d(iVar8 + 1);
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      goto LAB_007d2e7a;
    }
    piVar7 = *(int **)(unaff_EBP + 8);
    **(int **)(unaff_EBP + -0x18) = iVar9;
    iVar9 = iVar9 + 1;
  } while( true );
}


