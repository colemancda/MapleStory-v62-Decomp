/* ptr_0084686b - 0x0084686b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0084686b(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int unaff_EBP;
  int unaff_ESI;
  undefined4 unaff_EDI;
  undefined *in_stack_00000014;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int iStack_8;
  
code_r0x0084686b:
  iVar5 = *(int *)(unaff_EBP + -0x18);
  iStack_8 = *(undefined4 *)(unaff_EBP + -0x10);
  uStack_c = 0x84687f;
  FUN_00684733();
LAB_0084687f:
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x2c) != 0) {
    in_stack_00000014 = (undefined *)0x0;
    FUN_006717b2();
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  }
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    in_stack_00000014 = &DAT_0097f7a8;
    FUN_006f5b1a();
    in_stack_00000014 = (undefined *)0x8468b9;
    cVar1 = FUN_006f5bb6();
    if (cVar1 != '\0') {
      in_stack_00000014 = (undefined *)0x8468c8;
      piVar3 = (int *)FUN_004c2648();
      if (*piVar3 / 10000 == 0xc1) {
        in_stack_00000014 = (undefined *)0x8468e4;
        iVar4 = FUN_004865cc();
        if (iVar4 != 0) {
          FUN_007bd2b0();
          goto LAB_00846910;
        }
      }
      in_stack_00000014 = (undefined *)0x846907;
      puVar6 = (undefined4 *)FUN_004c2648();
      in_stack_00000014 = (undefined *)*puVar6;
      FUN_00793488();
    }
LAB_00846910:
    in_stack_00000014 = (undefined *)0x846915;
    piVar3 = (int *)FUN_005a9f5e();
    iVar4 = *piVar3;
    in_stack_00000014 = (undefined *)0x0;
    *(int **)(unaff_EBP + -0x18) = piVar3;
    *(BADSPACEBASE **)(unaff_EBP + -0x28) = register0x00000010;
    iStack_8 = unaff_EBP + -0x50;
    uStack_c = 0x846931;
    FUN_006f5512();
    (**(code **)(iVar4 + 0x18))();
    *(undefined4 **)(unaff_EBP + -0x28) = &uStack_10;
    FUN_006f5512(unaff_EBP + -0x50,unaff_EDI);
    iVar4 = FUN_00662850();
    if (iVar4 != 0) {
      FUN_0042452b();
      iStack_8 = 0x84696b;
      FUN_007b029d();
    }
    iStack_8 = unaff_EBP + -0x40;
    uStack_c = 0x84697c;
    FUN_006f5b1a();
    cVar1 = FUN_006f5bb6();
    if (cVar1 != '\0') {
      FUN_004456be();
    }
    iStack_8 = unaff_EBP + -0x40;
    uStack_c = 0x8469a5;
    FUN_006f5b1a();
    cVar1 = FUN_006f5bb6();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(**(int **)(iVar5 + 0x2a80) + 4))();
      if ((cVar1 != '\0') && (*(int *)(iVar5 + 0x2a80) != 0)) {
        FUN_005c4af4();
        iStack_8 = 0x8469dc;
        iVar5 = FUN_004308f4();
        if (iVar5 != 0) {
          iStack_8 = 0x8469ef;
          puVar6 = (undefined4 *)FUN_005d0ba9();
          iStack_8 = *puVar6;
          uStack_c = 0x8469f8;
          FUN_005d09e9();
        }
      }
    }
    iStack_8 = unaff_EBP + -0x40;
    uStack_c = 0x846a09;
    FUN_006f5b1a();
    cVar1 = FUN_006f5bb6();
    if ((cVar1 != '\0') && (DAT_0097beec != 0)) {
      FUN_00815de9();
      FUN_0077fcef();
    }
    FUN_00833dbd();
    *(undefined4 **)(unaff_EBP + 8) = &uStack_10;
    FUN_006f5512(unaff_EBP + -0x50,unaff_EDI);
    iVar5 = FUN_00670464();
    if (iVar5 != 0) {
      iStack_8 = 0;
      uStack_c = 99;
      uStack_10 = 0x846a60;
      FUN_0060142b();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_8 = 0x846a73;
      FUN_004751b2();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_0045ebca();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined ***)(unaff_EBP + -0x68) = &PTR_FUN_008f3518;
    FUN_0084f3f8();
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return;
  }
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  in_stack_00000014 = (undefined *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piVar3 = (int *)FUN_0084f449();
  in_stack_00000014 = (undefined *)*piVar3;
  *(undefined **)(unaff_EBP + -0x14) = in_stack_00000014;
  if (-1 < (int)in_stack_00000014) goto LAB_00846762;
  *(undefined4 *)(unaff_EBP + -0x10) = 1;
  goto LAB_00846786;
LAB_00846762:
  iVar4 = FUN_0064d61f();
  if (iVar4 != 0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 2;
  }
  if (*(int *)(unaff_EBP + -0x10) < 1) goto LAB_0084687f;
  in_stack_00000014 = *(undefined **)(unaff_EBP + -0x14);
LAB_00846786:
  if (in_stack_00000014 == (undefined *)unaff_ESI) {
    in_stack_00000014 = (undefined *)(unaff_EBP + -0x38);
    FUN_00455c59();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (*(int *)(unaff_EBP + -0x34) != 0) {
      in_stack_00000014 = (undefined *)0x0;
      FUN_00650dae();
      in_stack_00000014 = *(undefined **)(*(int *)(unaff_EBP + -0x34) + 0x35);
      FUN_0045f03e();
      param_1 = unaff_ESI;
      uVar2 = FUN_0065435f();
      *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
      in_stack_00000014 = (undefined *)0x0;
      *(undefined ***)(unaff_EBP + -0x24) = &stack0x00000014;
      *(undefined1 **)(unaff_EBP + -0x28) = &stack0x00000004;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00670b9e();
      iStack_8 = 0x8467fe;
      FUN_006f5512();
      iVar5 = *(int *)(unaff_EBP + -0x18);
      iStack_8 = 2;
      uStack_c = 0x846812;
      FUN_00684733();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x34) != 0) {
      in_stack_00000014 = (undefined *)0x0;
      FUN_0045e7c2();
      *(undefined4 *)(unaff_EBP + -0x34) = 0;
    }
    goto LAB_0084687f;
  }
  if (*(int *)(unaff_EBP + -0x10) == 1) {
    in_stack_00000014 = (undefined *)-(int)in_stack_00000014;
  }
  *(undefined **)(unaff_EBP + -0x14) = in_stack_00000014;
  in_stack_00000014 = (undefined *)0x0;
  *(undefined ***)(unaff_EBP + -0x28) = &stack0x00000014;
  *(undefined1 **)(unaff_EBP + -0x24) = &stack0x00000004;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00670b9e();
  iStack_8 = 0x846860;
  FUN_006f5512();
  FUN_00670b9e();
  goto code_r0x0084686b;
}


