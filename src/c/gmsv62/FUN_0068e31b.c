/* FUN_0068e31b - 0x0068e31b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0068e31b(void)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int *piVar3;
  int unaff_EBP;
  int iVar4;
  int iVar5;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  int iStack_34;
  undefined4 uStack_2c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x1c) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  do {
    iVar5 = (*(int *)(unaff_EBP + -0x10) % 3) * 0x27 + 0xab;
    iVar4 = (*(int *)(unaff_EBP + -0x10) / 3) * 0x25;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    piVar3 = (int *)(*(int *)(unaff_EBP + -0x1c) + 0x1b4);
    *(undefined4 *)(unaff_EBP + -0x20) = 2;
    do {
      uStack_2c = 0x68e38b;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x18),
                 *(IBinding **)(*(int *)(unaff_EBP + -0x14) + 8 + *piVar3));
      if (*(int *)(unaff_EBP + -0x18) != 0) {
        uStack_2c = 0x68e39f;
        iVar1 = FUN_0068eadd();
        iVar1 = *(int *)(iVar1 + 4);
        *(undefined4 **)(unaff_EBP + -0x24) = &uStack_2c;
        if (iVar1 != 0) {
          iStack_34 = 0x68e3ba;
          InterlockedIncrement((LONG *)(iVar1 + 4));
        }
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_0048b97b();
        uStack_2c = FUN_0055540f();
        iStack_34 = 0;
        iStack_38 = 0;
        uStack_3c = *(undefined4 *)(unaff_EBP + -0x10);
        iStack_40 = 0x68e3db;
        FUN_0068eadd();
        uStack_3c = 0x68e3e2;
        piVar2 = (int *)FUN_0053793e();
        uStack_3c = 0x68e3e9;
        uStack_3c = (**(code **)(*piVar2 + 4))();
        uStack_48 = *(undefined4 *)(unaff_EBP + -0x10);
        uStack_4c = 0x68e3f6;
        iStack_44 = iVar5;
        iStack_40 = iVar4 + 0xa1;
        FUN_0068eadd();
        uStack_48 = 0x68e3fd;
        FUN_0053793e();
        uStack_48 = 0x68e407;
        uStack_48 = thunk_FUN_0045e2eb();
        *(undefined4 **)(unaff_EBP + -0x24) = &uStack_4c;
        FUN_0046fc23(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_0048b97b();
        FUN_005558b0();
        iVar1 = FUN_0045e2eb();
        iVar1 = iVar1 / 1000000;
        if (((iVar1 == 2) || (iVar1 == 3)) || (iVar1 == 4)) {
          uStack_2c = 1000000;
          *(undefined4 **)(unaff_EBP + -0x24) = &uStack_2c;
          iStack_34 = 0x68e465;
          FUN_00424dbc();
          *(undefined1 *)(unaff_EBP + -4) = 4;
          iStack_34 = 0x68e473;
          FUN_0068eadd();
          iStack_34 = iVar4 + 0x95;
          iStack_40 = unaff_EBP + 8;
          *(undefined4 **)(unaff_EBP + -0x24) = &uStack_3c;
          iStack_44 = 0x68e48a;
          uStack_3c = extraout_ECX_00;
          iStack_38 = iVar5;
          FUN_0046fc23();
          *(undefined1 *)(unaff_EBP + -4) = 1;
          iStack_40 = 0x68e493;
          FUN_007d3201();
        }
      }
      iVar5 = iVar5 + -0xa2;
      piVar3 = piVar3 + 1;
      piVar2 = (int *)(unaff_EBP + -0x20);
      *piVar2 = *piVar2 + -1;
    } while (*piVar2 != 0);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
      uStack_2c = 0x68e4b9;
      (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
    }
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x10;
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
  } while (*(int *)(unaff_EBP + -0x14) < 0x90);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    uStack_2c = 0x68e4de;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


