/* FUN_51804112 - 0x51804112 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int __fastcall FUN_51804112(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 in_EAX;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBX;
  int unaff_EBP;
  undefined4 *puVar7;
  bool in_ZF;
  wchar_t *pwVar8;
  
  *(int *)(unaff_EBP + -0x10) = unaff_EBX;
  if (in_ZF) {
    in_EAX = (*DAT_5181fc6c)();
  }
  *(undefined4 *)(param_1 + 0x10) = in_EAX;
  *(int **)(unaff_EBP + -0x14) = (int *)(param_1 + 0x4c);
  FUN_518017b5();
  iVar5 = *(int *)(param_1 + 0x54);
  *(int *)(unaff_EBP + -4) = unaff_EBX;
  if (iVar5 == unaff_EBX) {
    uVar4 = FUN_51804588((void *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x54) = uVar4;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piVar1 = (int *)(param_1 + 0x50);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(int *)(param_1 + 0x4c) = unaff_EBX;
  }
  puVar7 = (undefined4 *)(param_1 + 4);
  *(undefined4 **)(unaff_EBP + -0x14) = puVar7;
  *(undefined4 **)(unaff_EBP + -0x18) = puVar7;
  FUN_518017b5();
  iVar5 = *(int *)(param_1 + 0xc);
  puVar2 = (undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar5 == 0) {
    iVar5 = (*DAT_5181fc94)(&DAT_51819f30,0,1,&DAT_51819f20,puVar2);
    *(int *)(unaff_EBP + -0x10) = iVar5;
    if (iVar5 < 0) {
      pwVar8 = u_Sound_DX8__DirectX_8_1_not_found_5181e330;
    }
    else {
      iVar5 = (**(code **)(*(int *)*puVar2 + 0x28))((int *)*puVar2,0);
      *(int *)(unaff_EBP + -0x10) = iVar5;
      if (-1 < iVar5) {
        iVar5 = (**(code **)(*(int *)*puVar2 + 0x18))
                          ((int *)*puVar2,*(undefined4 *)(param_1 + 0x10),2);
        *(int *)(unaff_EBP + -0x10) = iVar5;
        if (-1 < iVar5) {
          *(undefined4 *)(unaff_EBP + 8) = 0;
          piVar1 = (int *)*puVar2;
          *(undefined4 *)(unaff_EBP + -0x4c) = 0x24;
          puVar7 = (undefined4 *)(unaff_EBP + -0x48);
          for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar7 = 0;
            puVar7 = puVar7 + 1;
          }
          *(undefined4 *)(unaff_EBP + -0x48) = 1;
          iVar5 = *piVar1;
          *(undefined1 *)(unaff_EBP + -4) = 2;
          iVar5 = (**(code **)(iVar5 + 0xc))(piVar1,unaff_EBP + -0x4c,unaff_EBP + 8,0);
          if (iVar5 < 0) {
            FUN_51802c9b((void *)(unaff_EBP + -0x28),iVar5,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
            _CxxThrowException((void *)(unaff_EBP + -0x28),(ThrowInfo *)&DAT_5181a2e0);
          }
          uVar6 = *(uint *)(unaff_EBP + 0xc);
          uVar3 = *(uint *)(unaff_EBP + 0x14);
          *(short *)(param_1 + 0x2a) = (short)uVar3;
          *(short *)(param_1 + 0x1e) = (short)uVar6;
          uVar6 = (int)((uVar3 & 0xffff) * (uVar6 & 0xffff)) / 8;
          iVar5 = *(int *)(unaff_EBP + 0x10);
          *(int *)(param_1 + 0x20) = iVar5;
          *(short *)(param_1 + 0x28) = (short)uVar6;
          *(uint *)(param_1 + 0x24) = (uVar6 & 0xffff) * iVar5;
          iVar5 = (**(code **)(**(int **)(unaff_EBP + 8) + 0x38))
                            (*(int **)(unaff_EBP + 8),param_1 + 0x1c);
          piVar1 = *(int **)(unaff_EBP + 8);
          *(undefined1 *)(unaff_EBP + -4) = 1;
          if (iVar5 < 0) {
            if (piVar1 != (int *)0x0) {
              (**(code **)(*piVar1 + 8))(piVar1);
            }
            puVar7 = *(undefined4 **)(unaff_EBP + -0x14);
            piVar1 = puVar7 + 1;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              *puVar7 = 0;
            }
            goto LAB_518042a7;
          }
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 8))(piVar1);
          }
          puVar7 = *(undefined4 **)(unaff_EBP + -0x14);
          goto LAB_5180429d;
        }
      }
      pwVar8 = u_Sound_DX8__DirectX_8_1_initializ_5181e2d4;
    }
    FUN_51802a89(pwVar8,0);
    piVar1 = (int *)(param_1 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *puVar7 = 0;
    }
    iVar5 = *(int *)(unaff_EBP + -0x10);
  }
  else {
    iVar5 = *(int *)(unaff_EBP + -0x10);
LAB_5180429d:
    piVar1 = puVar7 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *puVar7 = 0;
    }
  }
LAB_518042a7:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar5;
}


