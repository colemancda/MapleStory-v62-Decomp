/* FUN_5181441c - 0x5181441c in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_5181441c(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_51807070();
  if ((*(int *)(unaff_EBP + -0x2c) == 0) || (extraout_ECX[0x1f] == 0)) {
    FUN_51802a89(u_Sound_DX8__Sound_is_not_initiali_5181f538,0);
    FUN_51802c9b((void *)(unaff_EBP + -0x40),0x80004005,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException((void *)(unaff_EBP + -0x40),(ThrowInfo *)&DAT_5181a2e0);
  }
  piVar3 = extraout_ECX + 0x1d;
  piVar1 = extraout_ECX + 0x18;
  FUN_51804b19();
  iVar4 = FUN_51810164();
  if (iVar4 == 0) {
    FUN_51814f5b(piVar3);
    FUN_518120d9();
    puVar2 = (undefined4 *)*piVar3;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(puVar2,&DAT_51819d70,unaff_EBP + -0x20);
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    (*DAT_5181fc94)(&DAT_51819e20,0,1,&DAT_51819d10,piVar1);
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iVar4 = (*DAT_5181fc94)(&DAT_51819e10,0,1,&DAT_51819d60,unaff_EBP + -0x24);
    if ((((iVar4 < 0) ||
         (iVar4 = (**(code **)(*(int *)*piVar1 + 0xc))
                            ((int *)*piVar1,*(undefined4 *)(unaff_EBP + -0x24),
                             u_DirectSoundRenderer_5181f7a0), iVar4 < 0)) ||
        (iVar4 = (**(code **)(*(int *)*piVar1 + 0xc))
                           ((int *)*piVar1,*piVar3,u_WzStreamSource_5181f780), iVar4 < 0)) ||
       (iVar4 = (**(code **)(*(int *)*piVar1 + 0x30))
                          ((int *)*piVar1,*(undefined4 *)(unaff_EBP + -0x20)), iVar4 < 0)) {
      FUN_51802c9b((void *)(unaff_EBP + -0x40),iVar4,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((void *)(unaff_EBP + -0x40),(ThrowInfo *)&DAT_5181a2e0);
    }
    piVar3 = *(int **)(unaff_EBP + -0x24);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
    }
    piVar3 = *(int **)(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
    }
  }
  else {
    FUN_518120d9();
    puVar2 = (undefined4 *)*piVar3;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(puVar2,&DAT_51819d70,unaff_EBP + -0x24);
    }
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    piVar3 = (int *)*piVar1;
    iVar4 = *piVar3;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iVar4 = (**(code **)(iVar4 + 0x14))(piVar3,unaff_EBP + -0x20);
    if (-1 < iVar4) {
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      while (iVar4 = (**(code **)(**(int **)(unaff_EBP + -0x20) + 0xc))
                               (*(int **)(unaff_EBP + -0x20),1,unaff_EBP + -0x18,unaff_EBP + -0x14),
            iVar4 == 0) {
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
        iVar4 = **(int **)(unaff_EBP + -0x18);
        *(undefined1 *)(unaff_EBP + -4) = 4;
        iVar4 = (**(code **)(iVar4 + 0x28))(*(int **)(unaff_EBP + -0x18),unaff_EBP + -0x1c);
        if (-1 < iVar4) {
          *(undefined4 *)(unaff_EBP + -0x10) = 0;
          *(undefined1 *)(unaff_EBP + -4) = 5;
          *(undefined4 *)(unaff_EBP + -0x14) = 0;
          while (iVar4 = (**(code **)(**(int **)(unaff_EBP + -0x1c) + 0xc))
                                   (*(int **)(unaff_EBP + -0x1c),1,unaff_EBP + -0x10,
                                    unaff_EBP + -0x14), iVar4 == 0) {
            (**(code **)(*(int *)*piVar1 + 0x24))((int *)*piVar1,*(undefined4 *)(unaff_EBP + -0x10))
            ;
            FUN_5180ddb7((int *)(unaff_EBP + -0x10),(undefined4 *)0x0,&DAT_51819d70);
          }
          piVar3 = *(int **)(unaff_EBP + -0x10);
          *(undefined1 *)(unaff_EBP + -4) = 4;
          if (piVar3 != (int *)0x0) {
            (**(code **)(*piVar3 + 8))(piVar3);
          }
        }
        piVar3 = *(int **)(unaff_EBP + -0x1c);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))(piVar3);
        }
        FUN_5180ddb7((int *)(unaff_EBP + -0x18),(undefined4 *)0x0,&DAT_51819d60);
      }
      piVar3 = *(int **)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))(piVar3);
      }
    }
    iVar4 = (**(code **)(*(int *)*piVar1 + 0x30))((int *)*piVar1,*(undefined4 *)(unaff_EBP + -0x24))
    ;
    if (iVar4 < 0) {
      FUN_51802c9b((void *)(unaff_EBP + -0x40),iVar4,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((void *)(unaff_EBP + -0x40),(ThrowInfo *)&DAT_5181a2e0);
    }
    piVar3 = *(int **)(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
    }
    piVar3 = *(int **)(unaff_EBP + -0x24);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
    }
  }
  puVar2 = (undefined4 *)*piVar1;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(puVar2,&DAT_51819d80,unaff_EBP + -0x28);
  }
  piVar3 = *(int **)(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x34))(piVar3,0);
  }
  FUN_51814e57(extraout_ECX + 0x19,(undefined4 *)*piVar1);
  FUN_51814e84(extraout_ECX + 0x1a,(undefined4 *)*piVar1);
  FUN_51814eeb(extraout_ECX + 0x1c,(undefined4 *)*piVar1);
  FUN_51814eb1(extraout_ECX + 0x1b,(undefined4 *)*piVar1);
  iVar4 = FUN_51804b19();
  (**(code **)(*extraout_ECX + 0x4c))(*(undefined4 *)(iVar4 + 0x14));
  piVar3 = *(int **)(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x20] = 1;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x2c) != 0) {
    FUN_51813012(unaff_EBP + -0x30);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


