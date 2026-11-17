/* FUN_0081d7f3 - 0x0081d7f3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0081d7f3(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  int iStack_8c;
  int iStack_88;
  int *piStack_84;
  
  FUN_00879bb8();
  *(undefined4 *)(extraout_ECX + 0x568) = *(undefined4 *)(unaff_EBP + 8);
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX;
  *(undefined4 *)(extraout_ECX + 0x58c) = *(undefined4 *)(unaff_EBP + 0xc);
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00403191();
  piStack_84 = (int *)(unaff_EBP + -0x58);
  iStack_88 = unaff_EBP + -0x48;
  *(int **)(unaff_EBP + 0xc) = &iStack_8c;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_8c = extraout_ECX_00;
  FUN_00679e4e(&iStack_8c,0x8ca);
  iVar1 = unaff_EBP + -0x68;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_84 = (int *)0x81d880;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x24) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar1 != 0) {
    iVar1 = FUN_00404b30();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb();
  }
  FUN_0040cf4d();
  piStack_84 = (int *)0x81d918;
  FUN_0041725e();
  *(undefined4 *)(unaff_EBP + 0xc) = 0;
  while( true ) {
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb();
    }
    uVar2 = FUN_0040cf4d();
    if (uVar2 <= *(uint *)(unaff_EBP + 0xc)) break;
    FUN_0087a1b0();
    iStack_88 = *(undefined4 *)(unaff_EBP + 0xc);
    iStack_8c = 0x81d950;
    piStack_84 = (int *)&stack0xffffff88;
    iStack_88 = FUN_00412335();
    *(int ***)(unaff_EBP + -0x28) = &piStack_84;
    iStack_8c = 0x81d95c;
    FUN_004033a1();
    iStack_88 = unaff_EBP + -0x78;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_8c = 0x81d96c;
    FUN_0040263d();
    iStack_8c = 0x81d973;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    piStack_84 = (int *)0x81d97e;
    uVar3 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x20) = uVar3;
    iVar1 = FUN_0041a581();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 1;
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  iVar1 = *(int *)(extraout_ECX + 0x58c);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (iVar1 == 0) {
    piStack_84 = (int *)0x81d9fa;
    puVar4 = (undefined4 *)FUN_0081c2f9();
    piStack_84 = (int *)0x81da04;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x14),
               (IBinding *)*puVar4);
    piVar5 = *(int **)(unaff_EBP + 0xc);
  }
  else {
    puVar4 = (undefined4 *)FUN_0081c681();
    piStack_84 = (int *)0x81d9e7;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x14),
               (IBinding *)*puVar4);
    piVar5 = *(int **)(unaff_EBP + 0xc);
  }
  if (piVar5 != (int *)0x0) {
    piStack_84 = (int *)0x81da11;
    (**(code **)(*piVar5 + 8))();
  }
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    piStack_84 = (int *)0x1;
    iStack_88 = 10;
    iStack_8c = 0x20c;
    _OOBECompleteWnfWaitCallback_28(0x43,0,0x29a);
    iVar1 = DAT_00978368;
    piStack_84 = (int *)0x81da46;
    puVar4 = (undefined4 *)FUN_00820d26();
    *puVar4 = *(undefined4 *)(unaff_EBP + 8);
    if (*(int *)(iVar1 + 0x2098) == 0) {
      piStack_84 = (int *)0x0;
    }
    else {
      piStack_84 = (int *)(*(int *)(iVar1 + 0x2098) + 4);
    }
    iStack_88 = 0x81da69;
    FUN_00414edd();
    puVar4[2] = 0;
    if (*(int *)(iVar1 + 0x2b40) != 0) {
      *(undefined4 *)(unaff_EBP + 0xc) = 0;
      *(int *)(unaff_EBP + -0x18) = iVar1 + 0x2b44;
      do {
        if ((**(int **)(unaff_EBP + -0x18) != 0) &&
           (**(int **)(unaff_EBP + -0x18) != *(int *)(iVar1 + 0x2088))) {
          *(undefined4 *)(unaff_EBP + 8) = 0;
          *(undefined4 *)(unaff_EBP + -0x20) = 0;
          piStack_84 = (int *)(unaff_EBP + -0x30);
          iStack_88 = unaff_EBP + -0x34;
          iStack_8c = unaff_EBP + -0x20;
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          FUN_0085c53b(*(undefined4 *)(unaff_EBP + 0xc),unaff_EBP + -0x38,unaff_EBP + 8,
                       unaff_EBP + -0x28);
          piStack_84 = (int *)0x81dad5;
          puVar4 = (undefined4 *)FUN_00820d26();
          *puVar4 = *(undefined4 *)(unaff_EBP + -0x28);
          piStack_84 = (int *)0x81dae8;
          FUN_00414f8b();
          puVar4[2] = 0;
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 10;
          FUN_00414ebb();
        }
        *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 1;
        *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 4;
      } while (*(int *)(unaff_EBP + 0xc) < 6);
    }
    iVar1 = *(int *)(iVar1 + 0x2c78);
    if (iVar1 != 0) {
      piStack_84 = (int *)0x81db2e;
      piVar5 = (int *)FUN_00820d26();
      piStack_84 = (int *)(unaff_EBP + 8);
      *piVar5 = iVar1;
      iStack_88 = 0x81db45;
      FUN_00679d22();
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      piStack_84 = (int *)0x81db52;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 10;
      FUN_00414ebb();
      piVar5[2] = 1;
    }
    piStack_84 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 **)(unaff_EBP + 0xc) = &stack0xffffff80;
    if (piStack_84 != (int *)0x0) {
      iStack_88 = 0x81db7d;
      (**(code **)(*piStack_84 + 4))();
    }
    piStack_84 = (int *)0x81db85;
    iVar1 = FUN_0081cdd9();
    piVar5 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (iVar1 != 0) {
      if (piVar5 != (int *)0x0) {
        piStack_84 = (int *)0x81dbb9;
        (**(code **)(*piVar5 + 8))();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
        piStack_84 = (int *)0x81dbca;
        (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
      }
      uVar3 = 1;
      goto LAB_0081dbcd;
    }
    if (piVar5 != (int *)0x0) {
      piStack_84 = (int *)0x81db9a;
      (**(code **)(*piVar5 + 8))();
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    piStack_84 = (int *)0x81dbab;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  uVar3 = 0;
LAB_0081dbcd:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}


