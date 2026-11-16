/* FUN_5180f09b - 0x5180f09b in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int FUN_5180f09b(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int unaff_EBP;
  int iVar6;
  undefined8 uVar7;
  
  FUN_5180ea30();
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  **(undefined4 **)(unaff_EBP + 0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  iVar3 = FUN_5180f537();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_51810353(iVar3);
  FUN_5180fccb(unaff_EBP + -0x30);
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(iVar3 + 4);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_5180fccb(unaff_EBP + -0x48);
  if (*(int *)(unaff_EBP + -0x2c) == 0) {
    iVar3 = FUN_5180f6ec();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_51810353(iVar3);
    FUN_5180fccb(unaff_EBP + -0x30);
    *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(iVar3 + 4);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_5180fccb(unaff_EBP + -0x48);
  }
  iVar3 = *(int *)(unaff_EBP + -0x2c);
  if (iVar3 == 0) {
    *(undefined4 *)(unaff_EBP + 0x10) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iVar3 = (*DAT_5181fc94)(&DAT_51819e20,0,1,&DAT_51819d10,unaff_EBP + 0x10);
    if (iVar3 < 0) {
      FUN_51802c9b((void *)(unaff_EBP + -0x50),iVar3,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((void *)(unaff_EBP + -0x50),(ThrowInfo *)&DAT_5181a2e0);
    }
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iVar3 = (*DAT_5181fc94)(&DAT_51819e00,0,1,&DAT_51819d60,unaff_EBP + -0x14);
    if (iVar3 < 0) {
      FUN_51802c9b((void *)(unaff_EBP + -0x50),iVar3,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((void *)(unaff_EBP + -0x50),(ThrowInfo *)&DAT_5181a2e0);
    }
    puVar1 = *(undefined4 **)(unaff_EBP + -0x14);
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,&DAT_51819d20,unaff_EBP + -0x24);
    }
    piVar5 = *(int **)(unaff_EBP + -0x24);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (piVar5 == (int *)0x0) {
      FUN_51802c9b((void *)(unaff_EBP + -0x50),0x8000ffff,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((void *)(unaff_EBP + -0x50),(ThrowInfo *)&DAT_5181a2e0);
    }
    if ((undefined4 *)**(int **)(unaff_EBP + 0xc) == (undefined4 *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)**(int **)(unaff_EBP + 0xc);
    }
    iVar3 = (**(code **)(*piVar5 + 0xc))(piVar5,uVar4,0);
    if (iVar3 < 0) {
      FUN_51802c9b((void *)(unaff_EBP + -0x50),iVar3,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((void *)(unaff_EBP + -0x50),(ThrowInfo *)&DAT_5181a2e0);
    }
    iVar3 = (**(code **)(**(int **)(unaff_EBP + 0x10) + 0xc))
                      (*(int **)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + -0x14),
                       u_CLSID_AsyncReader_5181f580);
    if (iVar3 < 0) {
      FUN_51802c9b((void *)(unaff_EBP + -0x50),iVar3,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((void *)(unaff_EBP + -0x50),(ThrowInfo *)&DAT_5181a2e0);
    }
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    iVar3 = **(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iVar3 = (**(code **)(iVar3 + 0x28))(*(int **)(unaff_EBP + -0x14),unaff_EBP + -0x20);
    if (-1 < iVar3) {
      piVar5 = FUN_5180f496();
      piVar5 = (int *)*piVar5;
      *(undefined1 *)(unaff_EBP + -4) = 9;
      FUN_51804af0((int *)(unaff_EBP + -0x10),piVar5);
      piVar5 = *(int **)(unaff_EBP + 0x14);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 8))(piVar5);
      }
    }
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_51802c9b((void *)(unaff_EBP + -0x50),0x8000ffff,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((void *)(unaff_EBP + -0x50),(ThrowInfo *)&DAT_5181a2e0);
    }
    iVar3 = (**(code **)(**(int **)(unaff_EBP + 0x10) + 0x30))
                      (*(int **)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + -0x10));
    if (iVar3 < 0) {
      FUN_51802c9b((void *)(unaff_EBP + -0x50),iVar3,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((void *)(unaff_EBP + -0x50),(ThrowInfo *)&DAT_5181a2e0);
    }
    puVar1 = *(undefined4 **)(unaff_EBP + 0x10);
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,&DAT_51819d80,unaff_EBP + -0x1c);
    }
    piVar5 = *(int **)(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0x34))(piVar5,0);
    }
    FUN_51807cf2(unaff_EBP + -0x30);
    iVar3 = (**(code **)(**(int **)(unaff_EBP + -0x10) + 0x1c))
                      (*(int **)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + -0x2c));
    if (iVar3 < 0) {
      FUN_51802c9b((void *)(unaff_EBP + -0x50),iVar3,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((void *)(unaff_EBP + -0x50),(ThrowInfo *)&DAT_5181a2e0);
    }
    FUN_5180946e(*(int *)(unaff_EBP + -0x2c));
    puVar1 = *(undefined4 **)(unaff_EBP + 0x10);
    puVar2 = *(undefined4 **)(unaff_EBP + 0x18);
    *puVar2 = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,&DAT_51819d30,unaff_EBP + -0x18);
    }
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
    iVar3 = **(int **)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iVar3 = (**(code **)(iVar3 + 0x28))(*(int **)(unaff_EBP + -0x18),unaff_EBP + -0x38);
    if (-1 < iVar3) {
      iVar3 = (**(code **)(**(int **)(unaff_EBP + -0x18) + 0x34))
                        (*(int **)(unaff_EBP + -0x18),unaff_EBP + -0x40,&DAT_51819dc0,
                         *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),0);
      if (-1 < iVar3) {
        uVar7 = __alldiv(*(uint *)(unaff_EBP + -0x40),*(uint *)(unaff_EBP + -0x3c),10000,0);
        *puVar2 = (int)uVar7;
      }
    }
    iVar6 = *(int *)(unaff_EBP + 8);
    **(undefined4 **)(unaff_EBP + 0x1c) = 1;
    *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(unaff_EBP + -0x2c);
    FUN_51810353(iVar6);
    piVar5 = *(int **)(unaff_EBP + -0x18);
    *(undefined4 *)(unaff_EBP + -0x28) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))(piVar5);
    }
    piVar5 = *(int **)(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))(piVar5);
    }
    piVar5 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))(piVar5);
    }
    piVar5 = *(int **)(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))(piVar5);
    }
    piVar5 = *(int **)(unaff_EBP + -0x24);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))(piVar5);
    }
    piVar5 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))(piVar5);
    }
    piVar5 = *(int **)(unaff_EBP + 0x10);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))(piVar5);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x2c) != 0) {
      FUN_51813012(unaff_EBP + -0x30);
    }
  }
  else {
    iVar6 = *(int *)(unaff_EBP + 8);
    **(undefined4 **)(unaff_EBP + 0x1c) = 2;
    *(int *)(iVar6 + 4) = iVar3;
    FUN_51810353(iVar6);
    *(undefined4 *)(unaff_EBP + -0x28) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_5180fccb(unaff_EBP + -0x30);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar6;
}


