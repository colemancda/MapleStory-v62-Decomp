/* ptr_0068e465 - 0x0068e465 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0068e465(IBinding *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  int *unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  int iStack_14;
  undefined4 uStack_10;
  int iStack_c;
  code *pcStack_8;
  
  do {
    *(undefined1 *)(unaff_EBP + -4) = 4;
    pcStack_8 = (code *)0x68e473;
    FUN_0068eadd();
    pcStack_8 = (code *)(unaff_ESI + -0xc);
    iStack_14 = unaff_EBP + 8;
    *(undefined4 **)(unaff_EBP + -0x24) = &uStack_10;
    iStack_18 = 0x68e48a;
    uStack_10 = extraout_ECX;
    iStack_c = unaff_EDI;
    FUN_0046fc23();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_14 = 0x68e493;
    FUN_007d3201();
    do {
      do {
        unaff_EDI = unaff_EDI + -0xa2;
        unaff_EBX = unaff_EBX + 1;
        piVar2 = (int *)(unaff_EBP + -0x20);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          param_1 = *(IBinding **)(unaff_EBP + -0x18);
          *(undefined1 *)(unaff_EBP + -4) = 0;
          if (param_1 != (IBinding *)0x0) {
            (**(code **)(*(int *)param_1 + 8))();
          }
          *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x10;
          *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
          if (0x8f < *(int *)(unaff_EBP + -0x14)) {
            param_1 = *(IBinding **)(unaff_EBP + 8);
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            if (param_1 != (IBinding *)0x0) {
              (**(code **)(*(int *)param_1 + 8))();
            }
            ExceptionList = *(void **)(unaff_EBP + -0xc);
            return;
          }
          unaff_EDI = (*(int *)(unaff_EBP + -0x10) % 3) * 0x27 + 0xab;
          unaff_ESI = (*(int *)(unaff_EBP + -0x10) / 3) * 0x25 + 0xa1;
          *(undefined4 *)(unaff_EBP + -0x18) = 0;
          *(undefined1 *)(unaff_EBP + -4) = 1;
          unaff_EBX = (int *)(*(int *)(unaff_EBP + -0x1c) + 0x1b4);
          *(undefined4 *)(unaff_EBP + -0x20) = 2;
        }
        param_1 = *(IBinding **)(*(int *)(unaff_EBP + -0x14) + 8 + *unaff_EBX);
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                  ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x18),param_1);
      } while (*(int *)(unaff_EBP + -0x18) == 0);
      param_1 = *(IBinding **)(unaff_EBP + -0x10);
      iVar1 = FUN_0068eadd();
      param_1 = *(IBinding **)(iVar1 + 4);
      *(BADSPACEBASE **)(unaff_EBP + -0x24) = register0x00000010;
      if (param_1 != (IBinding *)0x0) {
        pcStack_8 = (code *)0x68e3ba;
        InterlockedIncrement((LONG *)((int)param_1 + 4));
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_0048b97b();
      FUN_0055540f();
      param_1 = (IBinding *)0x0;
      pcStack_8 = (code *)0x0;
      iStack_c = 0;
      uStack_10 = *(undefined4 *)(unaff_EBP + -0x10);
      iStack_14 = 0x68e3db;
      FUN_0068eadd();
      uStack_10 = 0x68e3e2;
      piVar2 = (int *)FUN_0053793e();
      uStack_10 = 0x68e3e9;
      uStack_10 = (**(code **)(*piVar2 + 4))();
      uStack_1c = *(undefined4 *)(unaff_EBP + -0x10);
      uStack_20 = 0x68e3f6;
      iStack_18 = unaff_EDI;
      iStack_14 = unaff_ESI;
      FUN_0068eadd();
      uStack_1c = 0x68e3fd;
      FUN_0053793e();
      uStack_1c = 0x68e407;
      uStack_1c = thunk_FUN_0045e2eb();
      *(undefined4 **)(unaff_EBP + -0x24) = &uStack_20;
      FUN_0046fc23(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_0048b97b();
      FUN_005558b0();
      param_1 = (IBinding *)0x68e438;
      iVar1 = FUN_0045e2eb();
      iVar1 = iVar1 / 1000000;
    } while (((iVar1 != 2) && (iVar1 != 3)) && (iVar1 != 4));
    param_1 = (IBinding *)0x0;
    *(BADSPACEBASE **)(unaff_EBP + -0x24) = register0x00000010;
    pcStack_8 = ptr_0068e465;
    FUN_00424dbc();
  } while( true );
}


