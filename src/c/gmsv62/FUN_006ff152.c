/* FUN_006ff152 - 0x006ff152 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006ff152(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 uVar6;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x24) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  FUN_00705d79();
  *(undefined4 *)(unaff_EBP + -0x38) = DAT_0097926c;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar2 = FUN_00455c59();
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(iVar2 + 4);
  FUN_0045e4a2();
  (**(code **)(*DAT_00978358 + 4))();
  uVar3 = FUN_004bf0d4();
  iVar2 = DAT_00978368;
  *(undefined4 *)(unaff_EBP + -0x20) = uVar3;
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(iVar2 + 0x3308);
  uVar3 = FUN_0083cbf6();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  **(undefined2 **)(unaff_EBP + -0x3c) = *(undefined2 *)(unaff_EBP + 0xc);
  *(undefined1 **)(unaff_EBP + -0x28) = &stack0xffffffa8;
  FUN_00679e4e(&stack0xffffffa8,0x6cd);
  iVar2 = unaff_EBP + -0x50;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0040263d(iVar2);
  FUN_004048a4(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uVar3 = FUN_00412550();
  iVar2 = FUN_00705b3e();
  *(undefined4 *)(iVar2 + 8) = uVar3;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  iVar2 = FUN_004b8f25();
  if (iVar2 == 0) {
    iVar2 = FUN_004b8f75();
    *(undefined4 *)(iVar2 + 0xc) = 1;
  }
  else {
    *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x3c) + 8;
    iVar2 = FUN_004b8f75();
    piVar4 = (int *)FUN_00705d33();
    *(int *)(iVar2 + 0xc) = *piVar4 + 1;
  }
  iVar2 = FUN_00701f1e();
  if (iVar2 != 0) goto LAB_006ff46c;
  *(undefined1 **)(unaff_EBP + -0x28) = &stack0xffffffac;
  FUN_00679e4e(&stack0xffffffac);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0040263d();
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00454081();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  iVar2 = FUN_0062d62d();
  if ((iVar2 == 0) || (uVar3 = 1, *(int *)(unaff_EBP + 8) != 1)) {
    uVar3 = 0;
  }
  *(undefined4 *)(*(int *)(unaff_EBP + -0x3c) + 0x24) = uVar3;
  FUN_0087a1b0();
  iVar1 = *(int *)(unaff_EBP + 8);
  uVar3 = FUN_00412335(iVar1);
  *(undefined1 **)(unaff_EBP + 8) = &stack0xffffffa8;
  FUN_004033a1(uVar3);
  iVar2 = unaff_EBP + -0x50;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0040263d(iVar2);
  FUN_004048a4(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_004343c5();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  FUN_00454081();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  if ((*(char **)(unaff_EBP + -0x10) != (char *)0x0) && (**(char **)(unaff_EBP + -0x10) != '\0')) {
    FUN_004655d4();
    FUN_00414f8b();
  }
  if (iVar1 == 0) {
    iVar2 = FUN_0062d669(*(undefined4 *)(unaff_EBP + 0xc),0,*(undefined4 *)(unaff_EBP + -0x14),
                         *(undefined4 *)(unaff_EBP + -0x20));
    if (iVar2 == 0) {
      *(undefined4 *)(*(int *)(unaff_EBP + -0x3c) + 4) = 0;
LAB_006ff50b:
      if (iVar1 == 2) goto LAB_006ff514;
    }
    else {
      *(undefined4 *)(*(int *)(unaff_EBP + -0x3c) + 4) = 1;
    }
LAB_006ff42e:
    FUN_006fe99b(*(undefined4 *)(unaff_EBP + 0xc));
  }
  else {
    if (iVar1 == 1) {
      iVar2 = FUN_0062d62d();
      if (iVar2 == 0) {
        FUN_006fcb31();
        iVar2 = FUN_0062dfd9(*(undefined4 *)(unaff_EBP + 0xc));
        if (iVar2 == 0) {
          *(undefined4 *)(*(int *)(unaff_EBP + -0x3c) + 4) = 3;
        }
        else {
          *(undefined4 *)(*(int *)(unaff_EBP + -0x3c) + 4) = 2;
        }
      }
      else {
        *(undefined4 *)(*(int *)(unaff_EBP + -0x3c) + 4) = 5;
      }
      goto LAB_006ff42e;
    }
    if (iVar1 != 2) goto LAB_006ff50b;
    uVar3 = *(undefined4 *)(unaff_EBP + -0x20);
    uVar6 = *(undefined4 *)(unaff_EBP + -0x14);
    iVar2 = FUN_006fc790(*(undefined4 *)(unaff_EBP + 0xc));
    iVar2 = FUN_0062d669(*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(iVar2 + 0x18),uVar6,uVar3)
    ;
    if (iVar2 == 0) {
      *(undefined4 *)(*(int *)(unaff_EBP + -0x3c) + 4) = 4;
    }
    else {
      *(undefined4 *)(*(int *)(unaff_EBP + -0x3c) + 4) = 0;
    }
LAB_006ff514:
    FileTimeToSystemTime((FILETIME *)(unaff_EBP + 0x14),(LPSYSTEMTIME)(unaff_EBP + -0x34));
    puVar5 = (undefined4 *)FUN_00679d22();
    uVar3 = *puVar5;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    FUN_00434e21(*(int *)(unaff_EBP + -0x3c) + 0x10,uVar3,*(undefined2 *)(unaff_EBP + -0x34),
                 *(undefined2 *)(unaff_EBP + -0x32));
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_00414ebb();
  }
  FUN_00706002();
  FUN_00705b42();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
LAB_006ff46c:
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x3c) != 0) {
    FUN_00705e5b();
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + 0x10) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


