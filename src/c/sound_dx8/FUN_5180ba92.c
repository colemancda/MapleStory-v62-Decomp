/* FUN_5180ba92 - 0x5180ba92 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_5180ba92(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *extraout_ECX;
  uint *puVar7;
  int unaff_EBP;
  uint uStack_68;
  
  FUN_5180ea30();
  *(int *)(unaff_EBP + -0x14) = extraout_ECX[10];
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_51807070();
  if ((*(int *)(unaff_EBP + -0x34) == 0) || (*(int *)(unaff_EBP + -0x2c) == 0)) {
    FUN_51802a89(u_Sound_DX8__Sound_is_not_initiali_5181f538,0);
    FUN_51802c9b((void *)(unaff_EBP + -0x58),0x80004005,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException((void *)(unaff_EBP + -0x58),(ThrowInfo *)&DAT_5181a2e0);
  }
  iVar2 = extraout_ECX[5];
  uVar1 = (*DAT_5181fa0c)();
  *(undefined4 *)(iVar2 + 0x18) = uVar1;
  if (*(int *)(extraout_ECX[5] + 0x18) == 0) {
    FUN_51802c9b((void *)(unaff_EBP + -0x48),0x8007000e,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException((void *)(unaff_EBP + -0x48),(ThrowInfo *)&DAT_5181a2e0);
  }
  FUN_5180beef(*(void **)(unaff_EBP + -0x14),unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int *)(unaff_EBP + -0x24) == 0) {
    FUN_5180cd65((int)(extraout_ECX + 0x18));
    if (extraout_ECX[0x19] == 0) {
      FUN_51802c9b((void *)(unaff_EBP + -0x48),0x8007000e,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((void *)(unaff_EBP + -0x48),(ThrowInfo *)&DAT_5181a2e0);
    }
    iVar2 = FUN_5180bf2c();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_5180c938((void *)(unaff_EBP + -0x28),iVar2);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_51807c49(unaff_EBP + -0x40);
    if (*(int *)(unaff_EBP + -0x24) == extraout_ECX[0x19]) {
      FUN_5180ab32();
    }
  }
  FUN_5180ca3f(extraout_ECX + 0x18,*(int *)(unaff_EBP + -0x24));
  iVar2 = (*DAT_5181fadc)();
  while (*(int *)(extraout_ECX[0x19] + 0x1c) == 0) {
    iVar3 = (*DAT_5181fadc)();
    if (4999 < (uint)(iVar3 - iVar2)) break;
    (*DAT_5181fa24)();
  }
  if (*(int *)(extraout_ECX[0x19] + 0x1c) == 0) {
    FUN_51802c9b((void *)(unaff_EBP + -0x48),0x80004005,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException((void *)(unaff_EBP + -0x48),(ThrowInfo *)&DAT_5181a2e0);
  }
  if (extraout_ECX[0x1b] == 0) {
    FUN_51804b19();
    iVar2 = FUN_5180468e();
    if (iVar2 != 0) {
      FUN_51802a89(u_Sound_DX8__Unknown_format_5181f694,0);
      FUN_51802c9b((void *)(unaff_EBP + -0x48),0x80004005,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((void *)(unaff_EBP + -0x48),(ThrowInfo *)&DAT_5181a2e0);
    }
  }
  piVar4 = (int *)FUN_5180ad63();
  extraout_ECX[0x1e] = -1;
  extraout_ECX[0x1c] = (int)piVar4;
  extraout_ECX[0x1d] = 1;
  extraout_ECX[0x1f] = 0;
  extraout_ECX[0x20] = 0;
  extraout_ECX[0x21] = 0;
  extraout_ECX[0x22] = 0;
  if (*(int *)(extraout_ECX[0x19] + 0x18) == 0) {
    iVar2 = extraout_ECX[0x19] + 0x38;
    *(int *)(unaff_EBP + -0x10) = iVar2;
    *(int *)(unaff_EBP + -0x20) = iVar2;
    FUN_518017b5();
    iVar2 = extraout_ECX[0x19];
    iVar3 = *(int *)(iVar2 + 0x48);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (iVar3 == 0) {
      puVar5 = (undefined4 *)(**(code **)(*(int *)extraout_ECX[0x1c] + 0x18))();
      piVar4 = (int *)*puVar5;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      FUN_51804af0(extraout_ECX + 0x1a,piVar4);
      piVar4 = *(int **)(unaff_EBP + -0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 8))(piVar4);
      }
    }
    else {
      FUN_51804af0(extraout_ECX + 0x1a,(int *)**(undefined4 **)(iVar2 + 0x50));
      FUN_51807d63((void *)(extraout_ECX[0x19] + 0x40),*(int *)(extraout_ECX[0x19] + 0x50));
      piVar4 = (int *)extraout_ECX[0x1a];
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      iVar2 = (**(code **)(*piVar4 + 0x24))(piVar4);
      if ((-1 < iVar2) && ((*(byte *)(unaff_EBP + -0x18) & 2) == 0)) {
        extraout_ECX[0x1d] = 0;
      }
    }
    puVar5 = *(undefined4 **)(unaff_EBP + -0x10);
    piVar4 = puVar5 + 1;
    *piVar4 = *piVar4 + -1;
    iVar2 = *piVar4;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (iVar2 == 0) {
      *puVar5 = 0;
    }
    puVar5 = (undefined4 *)extraout_ECX[0x1a];
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    if (puVar5 != (undefined4 *)0x0) {
      (**(code **)*puVar5)(puVar5,&DAT_51819f00,unaff_EBP + -0x14);
    }
    piVar4 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (piVar4 == (int *)0x0) {
      FUN_51802c9b((void *)(unaff_EBP + -0x58),0x80004002,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((void *)(unaff_EBP + -0x58),(ThrowInfo *)&DAT_5181a2e0);
    }
    *(undefined4 *)(unaff_EBP + -0x40) = 0xffffffff;
    *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(extraout_ECX[5] + 0x18);
    iVar2 = (**(code **)(*piVar4 + 0xc))(piVar4,1,unaff_EBP + -0x40);
    if (iVar2 < 0) {
      FUN_51802c9b((void *)(unaff_EBP + -0x58),iVar2,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((void *)(unaff_EBP + -0x58),(ThrowInfo *)&DAT_5181a2e0);
    }
    piVar4 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 2;
  }
  else {
    puVar5 = (undefined4 *)(**(code **)(*piVar4 + 0x18))();
    piVar4 = (int *)*puVar5;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_51804af0(extraout_ECX + 0x1a,piVar4);
    piVar4 = *(int **)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))(piVar4);
    }
    puVar5 = (undefined4 *)extraout_ECX[0x1a];
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    if (puVar5 != (undefined4 *)0x0) {
      (**(code **)*puVar5)(puVar5,&DAT_51819f00,unaff_EBP + -0x10);
    }
    puVar7 = (uint *)&stack0xffffff94;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_51802c9b((void *)(unaff_EBP + -0x48),0x80004002,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((void *)(unaff_EBP + -0x48),(ThrowInfo *)&DAT_5181a2e0);
    }
    iVar2 = *(int *)(extraout_ECX[0x19] + 0x18);
    *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(extraout_ECX[0x19] + 0x14);
    FUN_5180ec70();
    *(undefined1 **)(unaff_EBP + -0x1c) = &stack0xffffff94;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    for (uVar6 = iVar2 - 1; uVar6 < *(uint *)(unaff_EBP + -0x18); uVar6 = uVar6 + iVar2) {
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
      *puVar7 = uVar6;
      puVar7[1] = *(uint *)(extraout_ECX[5] + 0x18);
      puVar7 = puVar7 + 2;
    }
    iVar2 = (**(code **)(**(int **)(unaff_EBP + -0x10) + 0xc))
                      (*(int **)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + -0x14),
                       *(undefined4 *)(unaff_EBP + -0x1c));
    if (iVar2 < 0) {
      FUN_51802c9b((void *)(unaff_EBP + -0x48),iVar2,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((void *)(unaff_EBP + -0x48),(ThrowInfo *)&DAT_5181a2e0);
    }
    piVar4 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 2;
  }
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  iVar2 = FUN_51804b19();
  (**(code **)(*extraout_ECX + 0x4c))(*(undefined4 *)(iVar2 + 0x14));
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    FUN_51803161(unaff_EBP + -0x28);
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x2c) != 0) {
    FUN_51813012(unaff_EBP + -0x30);
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x34) != 0) {
    FUN_51813012(unaff_EBP + -0x38);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


