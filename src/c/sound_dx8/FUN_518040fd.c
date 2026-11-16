/* FUN_518040fd - 0x518040fd in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int FUN_518040fd(void)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 *puVar7;
  wchar_t *pwVar8;
  
  FUN_5180ea30();
  iVar4 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar4 == 0) {
    iVar4 = (*DAT_5181fc6c)();
  }
  *(int *)(extraout_ECX + 0x10) = iVar4;
  *(undefined4 **)(unaff_EBP + -0x14) = (undefined4 *)(extraout_ECX + 0x4c);
  FUN_518017b5();
  iVar4 = *(int *)(extraout_ECX + 0x54);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar4 == 0) {
    uVar5 = FUN_51804588((void *)(extraout_ECX + 0x58));
    *(undefined4 *)(extraout_ECX + 0x54) = uVar5;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piVar1 = (int *)(extraout_ECX + 0x50);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(extraout_ECX + 0x4c) = 0;
  }
  puVar7 = (undefined4 *)(extraout_ECX + 4);
  *(undefined4 **)(unaff_EBP + -0x14) = puVar7;
  *(undefined4 **)(unaff_EBP + -0x18) = puVar7;
  FUN_518017b5();
  iVar4 = *(int *)(extraout_ECX + 0xc);
  puVar2 = (undefined4 *)(extraout_ECX + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar4 == 0) {
    iVar4 = (*DAT_5181fc94)(&DAT_51819f30,0,1,&DAT_51819f20,puVar2);
    *(int *)(unaff_EBP + -0x10) = iVar4;
    if (iVar4 < 0) {
      pwVar8 = u_Sound_DX8__DirectX_8_1_not_found_5181e330;
    }
    else {
      iVar4 = (**(code **)(*(int *)*puVar2 + 0x28))((int *)*puVar2,0);
      *(int *)(unaff_EBP + -0x10) = iVar4;
      if (-1 < iVar4) {
        iVar4 = (**(code **)(*(int *)*puVar2 + 0x18))
                          ((int *)*puVar2,*(undefined4 *)(extraout_ECX + 0x10),2);
        *(int *)(unaff_EBP + -0x10) = iVar4;
        if (-1 < iVar4) {
          *(undefined4 *)(unaff_EBP + 8) = 0;
          piVar1 = (int *)*puVar2;
          *(undefined4 *)(unaff_EBP + -0x4c) = 0x24;
          puVar7 = (undefined4 *)(unaff_EBP + -0x48);
          for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar7 = 0;
            puVar7 = puVar7 + 1;
          }
          *(undefined4 *)(unaff_EBP + -0x48) = 1;
          iVar4 = *piVar1;
          *(undefined1 *)(unaff_EBP + -4) = 2;
          iVar4 = (**(code **)(iVar4 + 0xc))(piVar1,unaff_EBP + -0x4c,unaff_EBP + 8,0);
          if (iVar4 < 0) {
            FUN_51802c9b((void *)(unaff_EBP + -0x28),iVar4,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
            _CxxThrowException((void *)(unaff_EBP + -0x28),(ThrowInfo *)&DAT_5181a2e0);
          }
          uVar6 = *(uint *)(unaff_EBP + 0xc);
          uVar3 = *(uint *)(unaff_EBP + 0x14);
          *(short *)(extraout_ECX + 0x2a) = (short)uVar3;
          *(short *)(extraout_ECX + 0x1e) = (short)uVar6;
          uVar6 = (int)((uVar3 & 0xffff) * (uVar6 & 0xffff)) / 8;
          iVar4 = *(int *)(unaff_EBP + 0x10);
          *(int *)(extraout_ECX + 0x20) = iVar4;
          *(short *)(extraout_ECX + 0x28) = (short)uVar6;
          *(uint *)(extraout_ECX + 0x24) = (uVar6 & 0xffff) * iVar4;
          iVar4 = (**(code **)(**(int **)(unaff_EBP + 8) + 0x38))
                            (*(int **)(unaff_EBP + 8),extraout_ECX + 0x1c);
          piVar1 = *(int **)(unaff_EBP + 8);
          *(undefined1 *)(unaff_EBP + -4) = 1;
          if (iVar4 < 0) {
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
    piVar1 = (int *)(extraout_ECX + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *puVar7 = 0;
    }
    iVar4 = *(int *)(unaff_EBP + -0x10);
  }
  else {
    iVar4 = *(int *)(unaff_EBP + -0x10);
LAB_5180429d:
    piVar1 = puVar7 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *puVar7 = 0;
    }
  }
LAB_518042a7:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar4;
}


