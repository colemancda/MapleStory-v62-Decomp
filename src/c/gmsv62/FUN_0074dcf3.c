/* FUN_0074dcf3 - 0x0074dcf3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0074dcf3(void)

{
  char *pcVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int iVar8;
  int unaff_EBP;
  int *piVar9;
  int iStack_40;
  int *piStack_3c;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  piStack_3c = (int *)0x74dd1a;
  cVar2 = FUN_00433bfa();
  if (((cVar2 == '\0') && (*(int *)(extraout_ECX + 0x14) == *(int *)(unaff_EBP + 8))) &&
     (*(int *)(extraout_ECX + 0x18) == *(int *)(unaff_EBP + 0xc))) {
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + 0x10) != 0) {
      piStack_3c = (int *)0x74dd42;
      FUN_00434e38();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + 0x14) != 0) {
      piStack_3c = (int *)0x74dd56;
      FUN_00434e38();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + 0x18) != 0) {
      piStack_3c = (int *)0x74dd6f;
      FUN_00434e38();
    }
  }
  else {
    pcVar1 = *(char **)(unaff_EBP + 0x14);
    if (((*(char **)(unaff_EBP + 0x10) != (char *)0x0) && (**(char **)(unaff_EBP + 0x10) != '\0'))
       || ((pcVar1 != (char *)0x0 && (*pcVar1 != '\0')))) {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
        piStack_3c = (int *)(unaff_EBP + -0x18);
        iStack_40 = 0x74ddb6;
        puVar3 = (undefined4 *)FUN_00756efd();
        piStack_3c = (int *)0x74ddc0;
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                  ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
                   (IBinding *)*puVar3);
        if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
          piStack_3c = (int *)0x74ddcd;
          (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
        }
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          piStack_3c = (int *)0x74dddd;
          FUN_00878dfb();
        }
        uVar4 = FUN_004a2734();
        *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
        piStack_3c = (int *)0x74ddf5;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 5;
        piStack_3c = (int *)0x74de05;
        iStack_40 = FUN_00449713();
        *(int ***)(unaff_EBP + -0x20) = &piStack_3c;
        FUN_00448a17();
        *(undefined1 *)(unaff_EBP + -4) = 5;
        iStack_40 = 0x74de1d;
        FUN_0044974c();
        iStack_40 = 0x74de24;
        iVar5 = FUN_00448ebb();
        iVar5 = iVar5 + 0x14;
        *(undefined1 *)(unaff_EBP + -4) = 4;
        piStack_3c = (int *)0x74de34;
        iVar6 = FUN_00402bc3();
        if (iVar6 < 0) {
          piStack_3c = (int *)0x74de3f;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          piStack_3c = (int *)0x74de4a;
          FUN_00878dfb();
        }
        iVar6 = FUN_004a2734();
        piVar9 = (int *)(iVar6 + 0x14);
      }
      else {
        piStack_3c = (int *)(unaff_EBP + -0x18);
        iStack_40 = 0x74de69;
        puVar3 = (undefined4 *)FUN_00756efd();
        piStack_3c = (int *)0x74de73;
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                  ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
                   (IBinding *)*puVar3);
        if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
          piStack_3c = (int *)0x74de80;
          (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
        }
        piStack_3c = (int *)0x74de8a;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
        piStack_3c = (int *)(unaff_EBP + -0x34);
        iStack_40 = 0x74de98;
        iVar5 = FUN_00402e32();
        if (iVar5 < 0) {
          piStack_3c = (int *)0x74dea4;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 7;
        piStack_3c = (int *)0x74deb4;
        iStack_40 = FUN_00449713();
        *(int ***)(unaff_EBP + -0x20) = &piStack_3c;
        FUN_00448a17();
        *(undefined1 *)(unaff_EBP + -4) = 7;
        iStack_40 = 0x74decc;
        FUN_0044974c();
        iStack_40 = 0x74ded3;
        iVar5 = FUN_00448ebb();
        iVar5 = iVar5 + 0x14;
        *(undefined1 *)(unaff_EBP + -4) = 4;
        piStack_3c = (int *)0x74dee3;
        iVar6 = FUN_00402bc3();
        if (iVar6 < 0) {
          piStack_3c = (int *)0x74deee;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          piStack_3c = (int *)0x74defd;
          FUN_00878dfb();
        }
        iVar6 = FUN_004a2734();
        *(int *)(unaff_EBP + -0x18) = iVar6;
        if (iVar5 < 0xfb) {
          iVar5 = 0xfa;
        }
        piStack_3c = (int *)0x0;
        *(int **)(unaff_EBP + -0x20) = &iStack_40;
        FUN_00756efd(&iStack_40,7);
        *(undefined1 *)(unaff_EBP + -4) = 4;
        uVar4 = FUN_00449713();
        iVar7 = FUN_00757d85(10,iVar5 + -0x14,0,uVar4);
        *(int *)(unaff_EBP + -0x20) = iVar7;
        piVar9 = (int *)(iVar7 + 0x19 + iVar6);
      }
      if ((*(char **)(unaff_EBP + 0x18) != (char *)0x0) && (**(char **)(unaff_EBP + 0x18) != '\0'))
      {
        piStack_3c = (int *)(unaff_EBP + -0x1c);
        iStack_40 = 0x74df69;
        puVar3 = (undefined4 *)FUN_00679d22();
        piStack_3c = (int *)*puVar3;
        iStack_40 = unaff_EBP + 0x18;
        *(undefined1 *)(unaff_EBP + -4) = 10;
        FUN_00434e21();
        *(undefined1 *)(unaff_EBP + -4) = 4;
        FUN_00414ebb();
        piStack_3c = (int *)0x0;
        *(int **)(unaff_EBP + -0x1c) = &iStack_40;
        FUN_00756efd(&iStack_40,0xc);
        *(undefined1 *)(unaff_EBP + -4) = 4;
        uVar4 = FUN_00449713();
        iVar6 = FUN_00757d85(10,iVar5 + -0x14,0,uVar4);
        piVar9 = (int *)((int)piVar9 + iVar6 + 1);
      }
      iStack_40 = iVar5;
      piStack_3c = piVar9;
      FUN_0074d72a(3);
      piStack_3c = (int *)0x0;
      iStack_40 = 1;
      FUN_0075699b(unaff_EBP + 0xc,*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc));
      if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
        piStack_3c = (int *)0x74dfef;
        (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
      }
      piStack_3c = *(int **)(unaff_EBP + -0x10);
      *(undefined1 **)(unaff_EBP + 8) = &stack0xffffffc8;
      if (piStack_3c != (int *)0x0) {
        iStack_40 = 0x74e007;
        (**(code **)(*piStack_3c + 4))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      piStack_3c = (int *)0x74e013;
      piStack_3c = (int *)FUN_00449713();
      iStack_40 = 10;
      FUN_007585ac();
      iVar7 = *(int *)(unaff_EBP + -0x18);
      iVar6 = iVar7 + 0x12;
      iVar8 = extraout_ECX_00;
      if ((*(char **)(unaff_EBP + 0x14) != (char *)0x0) && (**(char **)(unaff_EBP + 0x14) != '\0'))
      {
        piStack_3c = (int *)0x1;
        *(int **)(unaff_EBP + 8) = &iStack_40;
        iStack_40 = extraout_ECX_00;
        FUN_00756efd(&iStack_40,7);
        *(undefined1 *)(unaff_EBP + -4) = 4;
        uVar4 = FUN_00449713();
        FUN_00757d85(9,iVar5 + -0x15,iVar6,uVar4);
        iVar6 = iVar7 + 0x13 + *(int *)(unaff_EBP + -0x20);
        iVar8 = extraout_ECX_01;
      }
      if ((*(char **)(unaff_EBP + 0x18) != (char *)0x0) && (**(char **)(unaff_EBP + 0x18) != '\0'))
      {
        piStack_3c = (int *)0x1;
        *(int **)(unaff_EBP + 8) = &iStack_40;
        iStack_40 = iVar8;
        FUN_00756efd(&iStack_40,0xc);
        *(undefined1 *)(unaff_EBP + -4) = 4;
        uVar4 = FUN_00449713();
        FUN_00757d85(9,iVar5 + -0x15,iVar6,uVar4);
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
        piStack_3c = (int *)0x74e0b2;
        (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


