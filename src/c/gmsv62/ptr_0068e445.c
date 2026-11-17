/* ptr_0068e445 - 0x0068e445 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall ptr_0068e445(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int in_EAX;
  undefined4 extraout_ECX;
  int *unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  undefined4 uStack_8;
  
  do {
    if ((in_EAX != 3) && (in_EAX != 4)) goto LAB_0068e496;
    do {
      *(undefined4 **)(unaff_EBP + -0x24) = &uStack_8;
      iStack_10 = 0x68e465;
      uStack_8 = param_1;
      FUN_00424dbc();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_10 = 0x68e473;
      FUN_0068eadd();
      iStack_10 = unaff_ESI + -0xc;
      iStack_1c = unaff_EBP + 8;
      *(undefined4 **)(unaff_EBP + -0x24) = &uStack_18;
      iStack_20 = 0x68e48a;
      uStack_18 = extraout_ECX;
      iStack_14 = unaff_EDI;
      FUN_0046fc23();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_1c = 0x68e493;
      FUN_007d3201();
LAB_0068e496:
      do {
        unaff_EDI = unaff_EDI + -0xa2;
        unaff_EBX = unaff_EBX + 1;
        piVar2 = (int *)(unaff_EBP + -0x20);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          *(undefined1 *)(unaff_EBP + -4) = 0;
          if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
            uStack_8 = 0x68e4b9;
            (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
          }
          *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x10;
          *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
          if (0x8f < *(int *)(unaff_EBP + -0x14)) {
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
              uStack_8 = 0x68e4de;
              (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
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
        uStack_8 = 0x68e38b;
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                  ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x18),
                   *(IBinding **)(*(int *)(unaff_EBP + -0x14) + 8 + *unaff_EBX));
      } while (*(int *)(unaff_EBP + -0x18) == 0);
      uStack_8 = 0x68e39f;
      iVar1 = FUN_0068eadd();
      iVar1 = *(int *)(iVar1 + 4);
      *(undefined4 **)(unaff_EBP + -0x24) = &uStack_8;
      if (iVar1 != 0) {
        iStack_10 = 0x68e3ba;
        InterlockedIncrement((LONG *)(iVar1 + 4));
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_0048b97b();
      uStack_8 = FUN_0055540f();
      iStack_10 = 0;
      iStack_14 = 0;
      uStack_18 = *(undefined4 *)(unaff_EBP + -0x10);
      iStack_1c = 0x68e3db;
      FUN_0068eadd();
      uStack_18 = 0x68e3e2;
      piVar2 = (int *)FUN_0053793e();
      uStack_18 = 0x68e3e9;
      uStack_18 = (**(code **)(*piVar2 + 4))();
      uStack_24 = *(undefined4 *)(unaff_EBP + -0x10);
      uStack_28 = 0x68e3f6;
      iStack_20 = unaff_EDI;
      iStack_1c = unaff_ESI;
      FUN_0068eadd();
      uStack_24 = 0x68e3fd;
      FUN_0053793e();
      uStack_24 = 0x68e407;
      uStack_24 = thunk_FUN_0045e2eb();
      *(undefined4 **)(unaff_EBP + -0x24) = &uStack_28;
      FUN_0046fc23(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_0048b97b();
      FUN_005558b0();
      iVar1 = FUN_0045e2eb();
      param_1 = 1000000;
      in_EAX = iVar1 / 1000000;
    } while (in_EAX == 2);
  } while( true );
}


